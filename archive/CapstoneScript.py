import Metashape


# doc = Metashape.app.document
# doc.open("test.psz")
# tk = doc.Tasks
#tks = Metashape.Tasks()
def build_mesh():  # parameters that will go into the functions below will go here


    chunk = Metashape.app.document.chunk


    # importPoints(path[, format][, projection ][, shift][, progress])
    # Import point cloud from file.
    # Parameters
    # • path (string) – Path to point cloud.
    # • format (PointsFormat) – Point cloud format.
    # • projection (CoordinateSystem) – Point cloud coordinate system.
    # • shift (3-element vector) – Optional shift to be applied to point coordinates.
    # • progress (Callable[[float], None]) – Progress callback.

    chunk.importPoints("C:/Users/Capstone/AppData/Local/Agisoft/Metashape Pro/scripts/Bedroom2.las", Metashape.PointsFormatLAS, "geographic")



    #resetRegion()
    #redefines the meshing range by covering the entire point cloud
    chunk.resetRegion()

    # buildModel(surface=Arbitrary, interpolation=EnabledInterpolation,
    # face_count=MediumFaceCount[, source ][, classes], vertex_colors=True, quality=MediumQuality,
    # volumetric_masks=False, keep_depth=False, reuse_depth=False[,
    # progress])
    # Parameters
    # • surface (SurfaceType) – Type of object to be reconstructed.
    # • interpolation (Interpolation) – Interpolation mode.
    # • face_count (FaceCount or int) – Target face count.
    # • source (DataSource) – Selects between dense point cloud, sparse point cloud and
    # depth maps. If not specified, uses dense cloud if available.
    # • classes (list of PointClass) – List of dense point classes to be used for surface
    # extraction.
    # • vertex_colors (bool) – Enables/disables vertex colors calculation.
    # • quality (Quality) – Depth map quality. Ignored if source is not DepthMapsData.
    # • volumetric_masks (bool) – Enables/disables strict volumetric masking.
    # • keep_depth (bool) – Enables keep depth maps option.
    # • reuse_depth (bool) – Enables reuse depth maps option.
    # • progress (Callable[[float], None]) – Progress callback.

    ###########chunk.buildModel(Metashape.Arbitrary, Metashape.EnabledInterpolation)

    # buildTexture(blending=MosaicBlending, size=2048, fill_holes=True, ghosting_filter=True[, cameras][, progress])
    # Parameters
    # • blending (BlendingMode) – Texture blending mode.
    # • size (int) – Texture size.
    # • fill_holes (bool) – Enables hole filling.
    # • ghosting_filter (bool) – Enables ghosting filter.
    # • cameras (list of Camera) – A list of cameras to be used for texturing.
    # • progress (Callable[[float], None]) – Progress callback.

    #############chunk.buildTexture()


    # exportModel(path, binary=True, precision=6, texture_format=ImageFormatJPEG,
    # texture=True, normals=True, colors=True, cameras=True, markers=True, udim=False,
    #  alpha=False, strip_extensions=False, raster_transform=RasterTransformNone,
    #  colors_rgb_8bit=True[, comment][, format][, projection ][, shift][, progress])
    # Parameters
    # • blending (BlendingMode) – Texture blending mode.
    # • size (int) – Texture size.
    # • fill_holes (bool) – Enables hole filling.
    # • ghosting_filter (bool) – Enables ghosting filter.
    # • cameras (list of Camera) – A list of cameras to be used for texturing.
    # • progress (Callable[[float], None]) – Progress callback

    ##########chunk.exportModel()

print("HHSHEHEHEHEH")

if __name__ == "__main__":
    build_mesh()
