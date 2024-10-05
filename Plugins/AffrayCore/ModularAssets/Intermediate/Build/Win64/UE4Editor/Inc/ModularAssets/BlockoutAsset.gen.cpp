// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/BlockoutAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockoutAsset() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_ABlockoutAsset_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_ABlockoutAsset();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void ABlockoutAsset::StaticRegisterNativesABlockoutAsset()
	{
	}
	UClass* Z_Construct_UClass_ABlockoutAsset_NoRegister()
	{
		return ABlockoutAsset::StaticClass();
	}
	struct Z_Construct_UClass_ABlockoutAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockoutAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlockoutAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlockoutAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutAsset_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlockoutAsset" },
		{ "ModuleRelativePath", "Public/BlockoutAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockoutAsset_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutAsset, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ABlockoutAsset_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutAsset_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockoutAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutAsset_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockoutAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockoutAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockoutAsset_Statics::ClassParams = {
		&ABlockoutAsset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockoutAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutAsset_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockoutAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockoutAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockoutAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockoutAsset, 1932970815);
	template<> MODULARASSETS_API UClass* StaticClass<ABlockoutAsset>()
	{
		return ABlockoutAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockoutAsset(Z_Construct_UClass_ABlockoutAsset, &ABlockoutAsset::StaticClass, TEXT("/Script/ModularAssets"), TEXT("ABlockoutAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockoutAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
