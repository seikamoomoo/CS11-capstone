// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeFBXImport/Public/Widgets/FBXColorBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBXColorBlock() {}
// Cross Module References
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXColorBlock_NoRegister();
	RUNTIMEFBXIMPORT_API UClass* Z_Construct_UClass_UFBXColorBlock();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_RuntimeFBXImport();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UFBXColorBlock::StaticRegisterNativesUFBXColorBlock()
	{
	}
	UClass* Z_Construct_UClass_UFBXColorBlock_NoRegister()
	{
		return UFBXColorBlock::StaticClass();
	}
	struct Z_Construct_UClass_UFBXColorBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFBXColorBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeFBXImport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXColorBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMG Widget control which adds a Color Block in Viewport\n */" },
		{ "IncludePath", "Widgets/FBXColorBlock.h" },
		{ "ModuleRelativePath", "Public/Widgets/FBXColorBlock.h" },
		{ "ToolTip", "UMG Widget control which adds a Color Block in Viewport" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFBXColorBlock_Statics::NewProp_CurrentColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Current color of the color block. */" },
		{ "ModuleRelativePath", "Public/Widgets/FBXColorBlock.h" },
		{ "ToolTip", "Current color of the color block." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFBXColorBlock_Statics::NewProp_CurrentColor = { "CurrentColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFBXColorBlock, CurrentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFBXColorBlock_Statics::NewProp_CurrentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXColorBlock_Statics::NewProp_CurrentColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFBXColorBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFBXColorBlock_Statics::NewProp_CurrentColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFBXColorBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFBXColorBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFBXColorBlock_Statics::ClassParams = {
		&UFBXColorBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFBXColorBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFBXColorBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFBXColorBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFBXColorBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFBXColorBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFBXColorBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFBXColorBlock, 3163918381);
	template<> RUNTIMEFBXIMPORT_API UClass* StaticClass<UFBXColorBlock>()
	{
		return UFBXColorBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFBXColorBlock(Z_Construct_UClass_UFBXColorBlock, &UFBXColorBlock::StaticClass, TEXT("/Script/RuntimeFBXImport"), TEXT("UFBXColorBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFBXColorBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
