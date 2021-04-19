// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFBXSaveGame;
class AFBXMeshActor;
struct FFBXSectionStructure;
struct FLinearColor;
class UTexture2D;
class UMaterialInterface;
class UTexture;
class UPrimitiveComponent;
struct FVector;
enum class EFBXCollisionType : uint8;
 struct FProceduralMeshSection;
struct FFBXLightData;
#ifdef RUNTIMEFBXIMPORT_FBXImportManager_generated_h
#error "FBXImportManager.generated.h already included, missing '#pragma once' in FBXImportManager.h"
#endif
#define RUNTIMEFBXIMPORT_FBXImportManager_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadFBXFromSaveGameObject) \
	{ \
		P_GET_OBJECT(UFBXSaveGame,Z_Param_SaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadFBXFromSaveGameObject(Z_Param_SaveGameObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFBXSection) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_STRUCT_REF(FFBXSectionStructure,Z_Param_Out_FBXSection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFBXSection(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_FBXSection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHideAll) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnHideAll(Z_Param_MeshActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideSelection) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideSelection(Z_Param_MeshActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsolateSelection) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsolateSelection(Z_Param_MeshActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateVectorParam) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateVectorParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateScalarParam) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateScalarParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTextureParam) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture2D,Z_Param_NewTexture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTextureParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NewTexture,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSectionMaterial) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSectionMaterial(Z_Param_MeshActor,Z_Param_NewMaterial,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorParamValue) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVectorParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScalarParamValue) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_ScalarValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetScalarParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_ScalarValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureParamValue) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTextureParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNodeSection) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_UBOOL(Z_Param_DeSelectRest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNodeSection(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_SectionID,Z_Param_DeSelectRest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNode) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_UBOOL(Z_Param_DeSelectRest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFBXSectionStructure>*)Z_Param__Result=P_THIS->SelectNode(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_DeSelectRest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeSelectAllComponents) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_UBOOL(Z_Param_ResetSelection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeSelectAllComponents(Z_Param_MeshActor,Z_Param_ResetSelection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectMeshComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToSelect); \
		P_GET_UBOOL(Z_Param_SelectActor); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSection); \
		P_GET_STRUCT_REF(FFBXSectionStructure,Z_Param_Out_Section); \
		P_GET_OBJECT_REF(AFBXMeshActor,Z_Param_Out_SelectedMeshActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectMeshComponent(Z_Param_ComponentToSelect,Z_Param_SelectActor,Z_Param_Out_IsSection,Z_Param_Out_Section,Z_Param_Out_SelectedMeshActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportFBXFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_BaseMaterial); \
		P_GET_ENUM(EFBXCollisionType,Z_Param_CollisionType); \
		P_GET_UBOOL(Z_Param_SpawnFBXActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ImportFBXFile(Z_Param_FileName,Z_Param_Location,Z_Param_BaseMaterial,EFBXCollisionType(Z_Param_CollisionType),Z_Param_SpawnFBXActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishImport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishImport(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadFBXFromSaveGameObject) \
	{ \
		P_GET_OBJECT(UFBXSaveGame,Z_Param_SaveGameObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadFBXFromSaveGameObject(Z_Param_SaveGameObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFBXSection) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_STRUCT_REF(FFBXSectionStructure,Z_Param_Out_FBXSection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFBXSection(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_FBXSection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnHideAll) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnHideAll(Z_Param_MeshActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideSelection) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideSelection(Z_Param_MeshActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsolateSelection) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsolateSelection(Z_Param_MeshActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateVectorParam) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateVectorParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateScalarParam) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateScalarParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTextureParam) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture2D,Z_Param_NewTexture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTextureParam(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NewTexture,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSectionMaterial) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSectionMaterial(Z_Param_MeshActor,Z_Param_NewMaterial,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorParamValue) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVectorParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScalarParamValue) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_ScalarValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetScalarParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_ScalarValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureParamValue) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTextureParamValue(Z_Param_MeshActor,Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNodeSection) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_UBOOL(Z_Param_DeSelectRest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNodeSection(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_SectionID,Z_Param_DeSelectRest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNode) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_UBOOL(Z_Param_DeSelectRest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFBXSectionStructure>*)Z_Param__Result=P_THIS->SelectNode(Z_Param_MeshActor,Z_Param_NodeID,Z_Param_DeSelectRest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeSelectAllComponents) \
	{ \
		P_GET_OBJECT(AFBXMeshActor,Z_Param_MeshActor); \
		P_GET_UBOOL(Z_Param_ResetSelection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeSelectAllComponents(Z_Param_MeshActor,Z_Param_ResetSelection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectMeshComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToSelect); \
		P_GET_UBOOL(Z_Param_SelectActor); \
		P_GET_UBOOL_REF(Z_Param_Out_IsSection); \
		P_GET_STRUCT_REF(FFBXSectionStructure,Z_Param_Out_Section); \
		P_GET_OBJECT_REF(AFBXMeshActor,Z_Param_Out_SelectedMeshActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectMeshComponent(Z_Param_ComponentToSelect,Z_Param_SelectActor,Z_Param_Out_IsSection,Z_Param_Out_Section,Z_Param_Out_SelectedMeshActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImportFBXFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_BaseMaterial); \
		P_GET_ENUM(EFBXCollisionType,Z_Param_CollisionType); \
		P_GET_UBOOL(Z_Param_SpawnFBXActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ImportFBXFile(Z_Param_FileName,Z_Param_Location,Z_Param_BaseMaterial,EFBXCollisionType(Z_Param_CollisionType),Z_Param_SpawnFBXActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishImport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FinishImport(); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_EVENT_PARMS \
	struct FBXImportManager_eventOnFBXActorSelected_Parms \
	{ \
		AFBXMeshActor* SelectedMeshActor; \
	}; \
	struct FBXImportManager_eventOnFBXNodeProgressChanged_Parms \
	{ \
		int32 NodeIndex; \
		FString NodeName; \
		int32 NodeCount; \
	}; \
	struct FBXImportManager_eventOnFBXSectionImported_Parms \
	{ \
		TMap<int32,FProceduralMeshSection> ProcMeshSectionMap; \
	}; \
	struct FBXImportManager_eventOnFBXSectionProgressChanged_Parms \
	{ \
		int32 SectionIndex; \
		FString SectionName; \
		int32 SectionCount; \
	}; \
	struct FBXImportManager_eventOnImportCompleted_Parms \
	{ \
		AFBXMeshActor* CurrentFBXMeshActor; \
	}; \
	struct FBXImportManager_eventOnImportLights_Parms \
	{ \
		TArray<FFBXLightData> LightData; \
	}; \
	struct FBXImportManager_eventOnNewFBXImportStarted_Parms \
	{ \
		FString FileName; \
	};


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_CALLBACK_WRAPPERS
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFBXImportManager(); \
	friend struct Z_Construct_UClass_AFBXImportManager_Statics; \
public: \
	DECLARE_CLASS(AFBXImportManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXImportManager)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFBXImportManager(); \
	friend struct Z_Construct_UClass_AFBXImportManager_Statics; \
public: \
	DECLARE_CLASS(AFBXImportManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXImportManager)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFBXImportManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFBXImportManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXImportManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXImportManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXImportManager(AFBXImportManager&&); \
	NO_API AFBXImportManager(const AFBXImportManager&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXImportManager(AFBXImportManager&&); \
	NO_API AFBXImportManager(const AFBXImportManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXImportManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXImportManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFBXImportManager)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_19_PROLOG \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_EVENT_PARMS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_CALLBACK_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class AFBXImportManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXImportManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
