// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef RUNTIMEFBXIMPORT_FBXColorPicker_generated_h
#error "FBXColorPicker.generated.h already included, missing '#pragma once' in FBXColorPicker.h"
#endif
#define RUNTIMEFBXIMPORT_FBXColorPicker_generated_h

#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_43_DELEGATE \
struct FBXColorPicker_eventOnLinearColorChanged_Parms \
{ \
	FLinearColor NewColor; \
}; \
static inline void FOnLinearColorChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLinearColorChanged, FLinearColor const& NewColor) \
{ \
	FBXColorPicker_eventOnLinearColorChanged_Parms Parms; \
	Parms.NewColor=NewColor; \
	OnLinearColorChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_SPARSE_DATA
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetColorPicker) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InitialColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorPicker(Z_Param_InitialColor); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColorPicker) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InitialColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorPicker(Z_Param_InitialColor); \
		P_NATIVE_END; \
	}


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFBXColorPicker(); \
	friend struct Z_Construct_UClass_UFBXColorPicker_Statics; \
public: \
	DECLARE_CLASS(UFBXColorPicker, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(UFBXColorPicker)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFBXColorPicker(); \
	friend struct Z_Construct_UClass_UFBXColorPicker_Statics; \
public: \
	DECLARE_CLASS(UFBXColorPicker, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeFBXImport"), NO_API) \
	DECLARE_SERIALIZER(UFBXColorPicker)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFBXColorPicker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFBXColorPicker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBXColorPicker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBXColorPicker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBXColorPicker(UFBXColorPicker&&); \
	NO_API UFBXColorPicker(const UFBXColorPicker&); \
public:


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFBXColorPicker(UFBXColorPicker&&); \
	NO_API UFBXColorPicker(const UFBXColorPicker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFBXColorPicker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFBXColorPicker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFBXColorPicker)


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_17_PROLOG
#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_RPC_WRAPPERS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_INCLASS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_SPARSE_DATA \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_INCLASS_NO_PURE_DECLS \
	Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<class UFBXColorPicker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Promotion_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_RuntimeFBXImport_Source_RuntimeFBXImport_Public_Widgets_FBXColorPicker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
