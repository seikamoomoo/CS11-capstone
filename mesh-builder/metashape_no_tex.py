# This script takes three arguments: a project nanme, a file path, and a face count

# run on MAC: /Applications/MetashapePro.app/Contents/MacOS/MetashapePro -r\
# metashape_script.py <project name> <point cloud> 1000

import sys
import os
import Metashape

from os import path


def print_progress(p):
    print('Task progress: {:.2f}%'.format(p))


def build_mesh(project_name, point_cloud, face_count):

    # activate the license with:
    # export agisoft_LICENSE=7250@linlic.engr.oregonstate.edu

    os.environ["agisoft_LICENSE"] = "7250@linlic.engr.oregonstate.edu"

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
    build_mesh(sys.argv[1], sys.argv[2], sys.argv[3])
