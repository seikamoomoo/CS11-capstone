# This script takes two arguments: a file path and a face count
# Face count: HighFaceCount, MediumFaceCount, or LowFaceCount

import sys
import os
import Metashape


def print_progress(p):
    print('Task progress: {:.2f}%'.format(p))


def build_mesh():

    # activate the license with:
    # export agisoft_LICENSE=7250@linlic.engr.oregonstate.edu

    os.environ["agisoft_LICENSE"] = "7250@linlic.engr.oregonstate.edu"

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

        # save_texture=True, save_uv=True,
        # save_normals=True, save_colors=True,
        # save_cameras=True, save_markers=True,
        # export model as FBX
        chunk.exportModel(
            path=output,
            binary=True,
            precision=6,
            texture_format=Metashape.ImageFormatJPEG,
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
