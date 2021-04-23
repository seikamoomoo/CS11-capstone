# This script takes two arguments: a file path and a face count
# Face count: HighFaceCount, MediumFaceCount, or LowFaceCount

import sys
import Metashape


def print_progress(p):
    print('Task progress: {:.2f}%'.format(p))


def build_mesh():

    Metashape.License().activate("TXC3V-LUVCT-E1BLK-U83UR-GP25H")

    project = "./" + sys.argv[1] + ".psx"
    input = sys.argv[2]
    faces = sys.argv[3]
    output = "./" + sys.argv[1] + "model.fbx"

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
            interpolation=Metashape.EnabledInterpolation,
            face_count_custom=faces,
            source_data=Metashape.DenseCloudData,
            vertex_colors=True,
            vertex_confidence=True,
            progress=print_progress
        )
    except RuntimeError:
        print("Can't build model")

    try:
        # chunk.buildUV(mapping_mode=Metashape.GenericMapping)
        chunk.buildUV(mapping_mode=Metashape.KeepUV)
    except RuntimeError:
        print("Can't map UV")

    try:
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
        #     blending=Metashape.MosaicBlending,
        #     size=4096,
        #     progress=print_progress
        #     )
        chunk.buildTexture(
            texture_size=4096,
            blending_mode=Metashape.MosaicBlending,
            source_model=chunk.model.key,
            progress=print_progress
        )
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
    build_mesh()
