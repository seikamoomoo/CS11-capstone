import os.path
from unreal_engine.classes import PyFbxFactory

def fbximport() :

    # instantiate a new factory
    fbx_factory = PyFbxFactory()

    fbxFileDirec  = sys.argv[1]
    fbxFile       = sys.argv[2]
    meshFile      = sys.argv[3]

# Looking to have this be ran by :
#  fbximport.py [fbx-file directory] [fbx-file] [mesh-file path]

    # build the path for the fbx file
    fbx_asset_directory = os.path.join(os.path.expanduser('~/Desktop'), 'scans')
    print(fbx_asset_directory)
    #slicer_fbx = os.path.join(fbx_asset_directory, fbxFile)


    # configure the factory
    fbx_factory.ImportUI.bCreatePhysicsAsset = False
    fbx_factory.ImportUI.bImportMaterials = False
    fbx_factory.ImportUI.bImportTextures = False
    fbx_factory.ImportUI.bImportAnimations = False
    # scale the mesh (the Kaiju is 30 meters high !)
    fbx_factory.ImportUI.SkeletalMeshImportData.ImportUniformScale = 0.1;

    # import the mesh
    # slicer_mesh = fbx_factory.factory_import_object(slicer_fbx, meshFile)

    # https://github.com/20tab/UnrealEnginePython/blob/master/tutorials/YourFirstAutomatedPipeline.md

if __name__ == "__main__":
    build_mesh()
