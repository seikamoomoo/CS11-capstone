# This script takes 3 arguments: a project name, a file path, and a face count

# run on MAC: /Applications/MetashapePro.app/Contents/MacOS/MetashapePro -r\
# metashape_script.py <project name> <point cloud> 1000

import sys
import os
import Metashape


def print_progress(p):
    if (p % 5 == 0):
        print('Task progress: {:.2f}%'.format(p))


def build_mesh(project_name, point_cloud, face_count):

    # activate the license with:
    # export agisoft_LICENSE=7250@linlic.engr.oregonstate.edu
    os.environ["agisoft_LICENSE"] = "7250@linlic.engr.oregonstate.edu"

    # Metashape.License().activate("TXC3V-LUVCT-E1BLK-U83UR-GP25H")os.environ.get('API_PASSWORD')
    # Metashape.License().activate(os.environ.get('agisoft_LICENSE'))

    project = "./" + project_name + ".psx"
    input = point_cloud
    faces = face_count
    output = "./" + project_name + "model.fbx"

    doc = Metashape.Document()
    doc.save(path=project)
    chunk = doc.addChunk()

    try:
        chunk.importPoints(
            path=input,
            format=Metashape.PointsFormatNone,
            calculate_normals=True,
            progress=print_progress
            # crs="geographic"
        )
    except RuntimeError:
        print("Can't import points")

    # reset the region around the point cloud
    chunk.resetRegion()

    try:
        # build model using point cloud
        chunk.buildModel(
            surface_type=Metashape.Arbitrary,
            interpolation=Metashape.Extrapolated,
            face_count_custom=faces,
            source_data=Metashape.DenseCloudData,
            keep_depth=True,
            vertex_colors=True,
            vertex_confidence=True,
            progress=print_progress
        )
    except RuntimeError:
        print("Can't build model")

    try:
        chunk.buildUV(progress=print_progress)
        chunk.buildTexture(
            source_model=chunk.model.key,
            transfer_texture=True,
            progress=print_progress
            )
        # build texture using vertex colors
        # chunk.buildTexture(
        #     blending_mode=Metashape.MosaicBlending,
        #     texture_size=4096,
        #     fill_holes=True,
        #     ghosting_filter=True,
        #     texture_type=Metashape.Model.DiffuseMap,
        #     progress=print_progress
        # )
        # chunk.buildTexture(
        #     texture_size=4096,
        #     blending_mode=Metashape.MosaicBlending,
        #     source_model=chunk.model.key,
        #     progress=print_progress
        # )
    except RuntimeError:
        print("Can't build texture")

    # Metashape.Model.addTexture(type=Metashape.Model.DiffuseMap)

    try:
        # export model as FBX
        chunk.exportModel(
            path=output,
            binary=True,
            precision=6,
            texture_format=Metashape.ImageFormatJPEG,
            save_texture=True, save_uv=True,
            save_normals=True, save_colors=True,
            save_cameras=True, save_markers=True,
            save_udim=False, save_alpha=False,
            strip_extensions=False,
            raster_transform=Metashape.RasterTransformNone,
            colors_rgb_8bit=True,
            format=Metashape.ModelFormatFBX,
            progress=print_progress
        )
    except RuntimeError:
        print("Can't export model")


if __name__ == "__main__":
    build_mesh(sys.argv[1], sys.argv[2], sys.argv[3])
