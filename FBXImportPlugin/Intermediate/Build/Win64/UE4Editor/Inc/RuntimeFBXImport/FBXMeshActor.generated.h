// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UProceduralMeshComponent;
struct FLinearColor;
class UTexture2D;
class UMaterialInterface;
class UTexture;
struct FFBXSectionStructure;
#ifdef RUNTIMEFBXIMPORT_FBXMeshActor_generated_h
#error "FBXMeshActor.generated.h already included, missing '#pragma once' in FBXMeshActor.h"
#endif
#define RUNTIMEFBXIMPORT_FBXMeshActor_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFBXComponentsFromNodeID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UProceduralMeshComponent*>*)Z_Param__Result=P_THIS->GetFBXComponentsFromNodeID(Z_Param_NodeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFBXComponentsFromNodeName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UProceduralMeshComponent*>*)Z_Param__Result=P_THIS->GetFBXComponentsFromNodeName(Z_Param_NodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleIsolation) \
	{ \
		P_GET_UBOOL(Z_Param_Isolate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleIsolation(Z_Param_Isolate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateVectorParam) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateVectorParam(Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateScalarParam) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateScalarParam(Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTextureParam) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture2D,Z_Param_NewTexture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTextureParam(Z_Param_ParameterName,Z_Param_NewTexture,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSectionMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSectionMaterial(Z_Param_NewMaterial,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorParamValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVectorParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScalarParamValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_ScalarValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetScalarParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_ScalarValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureParamValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTextureParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNodeSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_UBOOL(Z_Param_DeSelectRest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNodeSection(Z_Param_NodeID,Z_Param_SectionID,Z_Param_DeSelectRest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_UBOOL(Z_Param_DeSelectRest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFBXSectionStructure>*)Z_Param__Result=P_THIS->SelectNode(Z_Param_NodeID,Z_Param_DeSelectRest); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFBXComponentsFromNodeID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UProceduralMeshComponent*>*)Z_Param__Result=P_THIS->GetFBXComponentsFromNodeID(Z_Param_NodeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFBXComponentsFromNodeName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UProceduralMeshComponent*>*)Z_Param__Result=P_THIS->GetFBXComponentsFromNodeName(Z_Param_NodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideSelection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HideSelection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleIsolation) \
	{ \
		P_GET_UBOOL(Z_Param_Isolate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleIsolation(Z_Param_Isolate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateVectorParam) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateVectorParam(Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateScalarParam) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateScalarParam(Z_Param_ParameterName,Z_Param_Value,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTextureParam) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture2D,Z_Param_NewTexture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTextureParam(Z_Param_ParameterName,Z_Param_NewTexture,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSectionMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSectionMaterial(Z_Param_NewMaterial,Z_Param_NodeID,Z_Param_SectionID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVectorParamValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetVectorParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScalarParamValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_ScalarValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetScalarParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_ScalarValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureParamValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTextureParamValue(Z_Param_ParameterName,Z_Param_NodeID,Z_Param_SectionID,Z_Param_Out_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNodeSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionID); \
		P_GET_UBOOL(Z_Param_DeSelectRest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNodeSection(Z_Param_NodeID,Z_Param_SectionID,Z_Param_DeSelectRest); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodeID); \
		P_GET_UBOOL(Z_Param_DeSelectRest); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFBXSectionStructure>*)Z_Param__Result=P_THIS->SelectNode(Z_Param_NodeID,Z_Param_DeSelectRest); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFBXMeshActor(); \
	friend struct Z_Construct_UClass_AFBXMeshActor_Statics; \
public: \
	DECLARE_CLASS(AFBXMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXMeshActor)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAFBXMeshActor(); \
	friend struct Z_Construct_UClass_AFBXMeshActor_Statics; \
public: \
	DECLARE_CLASS(AFBXMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(AFBXMeshActor)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFBXMeshActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFBXMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXMeshActor(AFBXMeshActor&&); \
	NO_API AFBXMeshActor(const AFBXMeshActor&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFBXMeshActor(AFBXMeshActor&&); \
	NO_API AFBXMeshActor(const AFBXMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFBXMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFBXMeshActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFBXMeshActor)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_22_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class AFBXMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_FBXMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
