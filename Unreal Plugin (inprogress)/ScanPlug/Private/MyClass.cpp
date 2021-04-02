// Fill out your copyright notice in the Description page of Project Settings.


/** Class to import an FBX file into SDK objects.
* Normally this class is used as is. But for very special needs
* a user can override Initialize() for special purpose.
*
* An importer will select the appropriate reader to a particular file.
* Ex: When an importer must import an FBX 7 file,
* the importer will ask for all registered readers if an FBX 7 file reader is available,
* then if a reader is found, the importer will create
* the specialized FBX 7 reader and read the file.
* This way, an importer can "read" many different type of files like FBX 5/6/7, 3DS, Obj, Dxf, Collada, etc.
* \see FbxReader
*
* Typical workflow for using the FbxImporter class:
* -# create a SDKManager
* -# create an IOSettings object
* -# create an empty scene
* -# create an importer
* -# initialize the importer with a file name and IOSettings
* -# set numerous states, take information, defining how the importer will behave
* -# call FbxImporter::Import() with an empty scene
* \code
* ex:
* // create a SdkManager
* FbxManager *lSdkManager = FbxManager::Create();
*
* // create an IOSettings object
* FbxIOSettings * ios = FbxIOSettings::Create(lSdkManager, IOSROOT );
*
* // set some IOSettings options
* ios->SetBoolProp(IMP_FBX_MATERIAL, true);
* ios->SetBoolProp(IMP_FBX_TEXTURE,  true);
*
* // create an empty scene
* FbxScene* lScene = FbxScene::Create(lSdkManager,"");
*
* // Create an importer.
* FbxImporter* lImporter = FbxImporter::Create(lSdkManager, "");
*
* // Initialize the importer by providing a filename and the IOSettings to use
* lImporter->Initialize("C:\\myfile.fbx", -1, ios);
*
* // Import the scene.
* lImporter->Import(lScene);
*
* // Destroy the importer.
* lImporter->Destroy();
* \endcode
*
* \remarks According to the file suffix, a specialized reader will be created internally.
*          Ex: for .fbx files a FBX Reader, for .3ds files, a 3ds reader, etc.
*          Supported files formats: FBX 5/6/7 Binary & ASCII, Collada, DXF, OBJ, 3DS
* \nosubgrouping
*/

#include "MyClass.h"

class FbxIO;
class FbxIOFileHeaderInfo;
class FbxDocumentInfo;
class FbxTakeInfo;
class FbxReader;
class FbxThread;
class FbxEmbeddedFileCallback;

struct FbxImportThreadArg;

MyClass::MyClass(){
	
	FbxManager* lSdkManager = FbxManager::Create();
	FbxIOSettings * ios = FbxIOSettings::Create(lSdkManager, IOSROOT );
	ios->SetBoolProp(IMP_FBX_MATERIAL, true);
	FbxScene* lScene = FbxScene::Create(lSdkManager,"");
	FbxScene* lScene = FbxScene::Create(lSdkManager,"");
	FbxImporter* lImporter = FbxImporter::Create(lSdkManager, "");

}

MyClass::~MyClass(){
	FbxManager* lSdkManager = FbxManager::Create();
}
