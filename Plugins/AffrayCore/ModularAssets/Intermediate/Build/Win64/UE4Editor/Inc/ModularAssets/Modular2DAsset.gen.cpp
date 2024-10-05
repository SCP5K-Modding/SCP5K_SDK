// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/Modular2DAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModular2DAsset() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_AModular2DAsset_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_AModular2DAsset();
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularAsset();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AModular2DAsset::StaticRegisterNativesAModular2DAsset()
	{
	}
	UClass* Z_Construct_UClass_AModular2DAsset_NoRegister()
	{
		return AModular2DAsset::StaticClass();
	}
	struct Z_Construct_UClass_AModular2DAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModular2DAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AModularAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModular2DAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Modular2DAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modular2DAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModular2DAsset_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Modular2DAsset" },
		{ "ModuleRelativePath", "Public/Modular2DAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModular2DAsset_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModular2DAsset, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AModular2DAsset_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModular2DAsset_Statics::NewProp_SecondaryAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModular2DAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModular2DAsset_Statics::NewProp_SecondaryAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModular2DAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModular2DAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModular2DAsset_Statics::ClassParams = {
		&AModular2DAsset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AModular2DAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AModular2DAsset_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModular2DAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModular2DAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModular2DAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModular2DAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModular2DAsset, 2606479922);
	template<> MODULARASSETS_API UClass* StaticClass<AModular2DAsset>()
	{
		return AModular2DAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModular2DAsset(Z_Construct_UClass_AModular2DAsset, &AModular2DAsset::StaticClass, TEXT("/Script/ModularAssets"), TEXT("AModular2DAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModular2DAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
