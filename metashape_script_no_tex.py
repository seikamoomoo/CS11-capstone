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
