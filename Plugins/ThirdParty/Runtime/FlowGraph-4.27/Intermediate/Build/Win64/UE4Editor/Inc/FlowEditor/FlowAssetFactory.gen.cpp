// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Asset/FlowAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAssetFactory() {}
// Cross Module References
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowAssetFactory_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FLOW_API UClass* Z_Construct_UClass_UFlowAsset_NoRegister();
// End Cross Module References
	void UFlowAssetFactory::StaticRegisterNativesUFlowAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UFlowAssetFactory_NoRegister()
	{
		return UFlowAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFlowAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Asset/FlowAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Asset/FlowAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowAssetFactory_Statics::NewProp_AssetClass_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Public/Asset/FlowAssetFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFlowAssetFactory_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowAssetFactory, AssetClass), Z_Construct_UClass_UFlowAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFlowAssetFactory_Statics::NewProp_AssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAssetFactory_Statics::NewProp_AssetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowAssetFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAssetFactory_Statics::NewProp_AssetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowAssetFactory_Statics::ClassParams = {
		&UFlowAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAssetFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowAssetFactory, 3034972115);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowAssetFactory>()
	{
		return UFlowAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowAssetFactory(Z_Construct_UClass_UFlowAssetFactory, &UFlowAssetFactory::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
