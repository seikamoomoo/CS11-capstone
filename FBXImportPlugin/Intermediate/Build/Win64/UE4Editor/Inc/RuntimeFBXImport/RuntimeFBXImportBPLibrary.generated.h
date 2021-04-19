// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFBXSaveGame;
class UObject;
class AFBXMeshActor;
struct FHitResult;
class UCameraComponent;
class UTexture2D;
#ifdef RUNTIMEFBXIMPORT_RuntimeFBXImportBPLibrary_generated_h
#error "RuntimeFBXImportBPLibrary.generated.h already included, missing '#pragma once' in RuntimeFBXImportBPLibrary.h"
#endif
#define RUNTIMEFBXIMPORT_RuntimeFBXImportBPLibrary_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBXNodeStructure_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FFBXNodeStructure>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBXSectionStructure_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FFBXSectionStructure>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBXCameraData_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FFBXCameraData>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFBXLightData_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FFBXLightData>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProceduralMeshSection_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FProceduralMeshSection>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialDynamicStructure_Statics; \
	RUNTIMEFBXIMPORT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEFBXIMPORT_API UScriptStruct* StaticStruct<struct FMaterialDynamicStructure>();

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullPathOfBaseDir); \
		P_GET_UBOOL(Z_Param_Recursive); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilterByExtension); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilenamesOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetFiles(Z_Param_FullPathOfBaseDir,Z_Param_Recursive,Z_Param_FilterByExtension,Z_Param_Out_FilenamesOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetALLFBXSavedFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BaseDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Extension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFBXSaveGame*>*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetALLFBXSavedFiles(Z_Param_BaseDirectory,Z_Param_Extension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveFBXGame) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveSlotName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_FBXActorToSave); \
		P_GET_UBOOL(Z_Param_bOverwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::SaveFBXGame(Z_Param_SaveFileName,Z_Param_SaveSlotName,Z_Param_WorldContextObject,Z_Param_FBXActorToSave,Z_Param_bOverwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckHitAtMouseCursor) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_objecthit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::CheckHitAtMouseCursor(Z_Param_Out_objecthit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckHitAtCameraLocation) \
	{ \
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraComponent); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_objecthit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::CheckHitAtCameraLocation(Z_Param_CameraComponent,Z_Param_Out_objecthit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexturefromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::LoadTexturefromPath(Z_Param_FilePath,Z_Param_Out_Texture,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOpenFileDialogue) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FileNames); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogueTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileTypes); \
		P_GET_UBOOL(Z_Param_multiselect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetOpenFileDialogue(Z_Param_Out_FileNames,Z_Param_DialogueTitle,Z_Param_FileTypes,Z_Param_multiselect); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FullPathOfBaseDir); \
		P_GET_UBOOL(Z_Param_Recursive); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilterByExtension); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilenamesOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetFiles(Z_Param_FullPathOfBaseDir,Z_Param_Recursive,Z_Param_FilterByExtension,Z_Param_Out_FilenamesOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetALLFBXSavedFiles) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BaseDirectory); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Extension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFBXSaveGame*>*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetALLFBXSavedFiles(Z_Param_BaseDirectory,Z_Param_Extension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveFBXGame) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveFileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveSlotName); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_FBXActorToSave); \
		P_GET_UBOOL(Z_Param_bOverwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::SaveFBXGame(Z_Param_SaveFileName,Z_Param_SaveSlotName,Z_Param_WorldContextObject,Z_Param_FBXActorToSave,Z_Param_bOverwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckHitAtMouseCursor) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_objecthit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::CheckHitAtMouseCursor(Z_Param_Out_objecthit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckHitAtCameraLocation) \
	{ \
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraComponent); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_objecthit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::CheckHitAtCameraLocation(Z_Param_CameraComponent,Z_Param_Out_objecthit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexturefromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::LoadTexturefromPath(Z_Param_FilePath,Z_Param_Out_Texture,Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOpenFileDialogue) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FileNames); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DialogueTitle); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileTypes); \
		P_GET_UBOOL(Z_Param_multiselect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=URuntimeFBXImportBPLibrary::GetOpenFileDialogue(Z_Param_Out_FileNames,Z_Param_DialogueTitle,Z_Param_FileTypes,Z_Param_multiselect); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeFBXImportBPLibrary(); \
	friend struct Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeFBXImportBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(URuntimeFBXImportBPLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeFBXImportBPLibrary(); \
	friend struct Z_Construct_UClass_URuntimeFBXImportBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeFBXImportBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(URuntimeFBXImportBPLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeFBXImportBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeFBXImportBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeFBXImportBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeFBXImportBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeFBXImportBPLibrary(URuntimeFBXImportBPLibrary&&); \
	NO_API URuntimeFBXImportBPLibrary(const URuntimeFBXImportBPLibrary&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeFBXImportBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeFBXImportBPLibrary(URuntimeFBXImportBPLibrary&&); \
	NO_API URuntimeFBXImportBPLibrary(const URuntimeFBXImportBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeFBXImportBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeFBXImportBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeFBXImportBPLibrary)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_255_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h_258_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class URuntimeFBXImportBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_RuntimeFBXImportBPLibrary_h


#define FOREACH_ENUM_EFBXLIGHTTYPE(op) \
	op(EFBXLightType::Point) \
	op(EFBXLightType::Directional) \
	op(EFBXLightType::Spot) \
	op(EFBXLightType::Area) \
	op(EFBXLightType::Volume) 

enum class EFBXLightType : uint8;
template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EFBXLightType>();

#define FOREACH_ENUM_EFBXCOLLISIONTYPE(op) \
	op(EFBXCollisionType::NoCollision) \
	op(EFBXCollisionType::MeshCollision) \
	op(EFBXCollisionType::MeshCollisionFromSource) \
	op(EFBXCollisionType::CustomCollisionFromSource) 

enum class EFBXCollisionType : uint8;
template<> RUNTIMEFBXIMPORT_API UEnum* StaticEnum<EFBXCollisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
