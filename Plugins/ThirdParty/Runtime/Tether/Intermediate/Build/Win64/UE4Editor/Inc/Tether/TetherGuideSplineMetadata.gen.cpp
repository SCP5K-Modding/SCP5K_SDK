// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherGuideSplineMetadata.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherGuideSplineMetadata() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineMetadata_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineMetadata();
	ENGINE_API UClass* Z_Construct_UClass_USplineMetadata();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UClass* Z_Construct_UClass_UTetherPointSegmentDefinition_NoRegister();
// End Cross Module References
	void UTetherGuideSplineMetadata::StaticRegisterNativesUTetherGuideSplineMetadata()
	{
	}
	UClass* Z_Construct_UClass_UTetherGuideSplineMetadata_NoRegister()
	{
		return UTetherGuideSplineMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UTetherGuideSplineMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointSegmentDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointSegmentDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointSegmentDefinitions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMetadata,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TetherGuideSplineMetadata.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetherGuideSplineMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_Inner = { "PointSegmentDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTetherPointSegmentDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherGuideSplineMetadata" },
		{ "ModuleRelativePath", "Public/TetherGuideSplineMetadata.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions = { "PointSegmentDefinitions", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherGuideSplineMetadata, PointSegmentDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherGuideSplineMetadata>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::ClassParams = {
		&UTetherGuideSplineMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherGuideSplineMetadata()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTetherGuideSplineMetadata, 2658130678);
	template<> TETHER_API UClass* StaticClass<UTetherGuideSplineMetadata>()
	{
		return UTetherGuideSplineMetadata::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTetherGuideSplineMetadata(Z_Construct_UClass_UTetherGuideSplineMetadata, &UTetherGuideSplineMetadata::StaticClass, TEXT("/Script/Tether"), TEXT("UTetherGuideSplineMetadata"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherGuideSplineMetadata);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
