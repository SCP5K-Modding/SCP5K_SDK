// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/ModularFlatAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularFlatAsset() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularFlatAsset_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularFlatAsset();
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularAsset();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AModularFlatAsset::StaticRegisterNativesAModularFlatAsset()
	{
	}
	UClass* Z_Construct_UClass_AModularFlatAsset_NoRegister()
	{
		return AModularFlatAsset::StaticClass();
	}
	struct Z_Construct_UClass_AModularFlatAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScaleRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScaleRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDimensionRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDimensionRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularFlatAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularFlatAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModularFlatAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularFlatAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularFlatAsset" },
		{ "ModuleRelativePath", "Public/ModularFlatAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularFlatAsset, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_SecondaryAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxScaleRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularFlatAsset" },
		{ "ModuleRelativePath", "Public/ModularFlatAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxScaleRatio = { "MaxScaleRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularFlatAsset, MaxScaleRatio), METADATA_PARAMS(Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxScaleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxScaleRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxDimensionRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularFlatAsset" },
		{ "ModuleRelativePath", "Public/ModularFlatAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxDimensionRatio = { "MaxDimensionRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularFlatAsset, MaxDimensionRatio), METADATA_PARAMS(Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxDimensionRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxDimensionRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularFlatAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_SecondaryAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxScaleRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularFlatAsset_Statics::NewProp_MaxDimensionRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularFlatAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularFlatAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModularFlatAsset_Statics::ClassParams = {
		&AModularFlatAsset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AModularFlatAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AModularFlatAsset_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularFlatAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularFlatAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularFlatAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularFlatAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularFlatAsset, 192106165);
	template<> MODULARASSETS_API UClass* StaticClass<AModularFlatAsset>()
	{
		return AModularFlatAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularFlatAsset(Z_Construct_UClass_AModularFlatAsset, &AModularFlatAsset::StaticClass, TEXT("/Script/ModularAssets"), TEXT("AModularFlatAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularFlatAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
