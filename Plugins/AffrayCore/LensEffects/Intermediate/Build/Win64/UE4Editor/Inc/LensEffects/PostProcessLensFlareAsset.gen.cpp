// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensEffects/Public/PostProcessLensFlareAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessLensFlareAsset() {}
// Cross Module References
	LENSEFFECTS_API UClass* Z_Construct_UClass_UPostProcessLensFlareAsset_NoRegister();
	LENSEFFECTS_API UClass* Z_Construct_UClass_UPostProcessLensFlareAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_LensEffects();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LENSEFFECTS_API UScriptStruct* Z_Construct_UScriptStruct_FLensFlareGhostSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UPostProcessLensFlareAsset::StaticRegisterNativesUPostProcessLensFlareAsset()
	{
	}
	UClass* Z_Construct_UClass_UPostProcessLensFlareAsset_NoRegister()
	{
		return UPostProcessLensFlareAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPostProcessLensFlareAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlareIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlareIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlareTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FlareTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlareGradient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlareGradient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GhostIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostChromaShift_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GhostChromaShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ghost1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ghost1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ghost2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ghost2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ghost3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ghost3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ghost4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ghost4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ghost5_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ghost5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ghost6_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ghost6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ghost7_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ghost7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ghost8_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ghost8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaloIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HaloIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaloWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HaloWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaloMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HaloMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaloCompression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HaloCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HaloChromaShift_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HaloChromaShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlareIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlareIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlareDivider_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlareDivider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlareScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlareScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlareTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlareTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlareLineMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlareLineMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LensEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PostProcessLensFlareAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareIntensity = { "FlareIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, FlareIntensity), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareTint = { "FlareTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, FlareTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareGradient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareGradient = { "FlareGradient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, FlareGradient), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareGradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareGradient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostIntensity = { "GhostIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, GhostIntensity), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostChromaShift_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostChromaShift = { "GhostChromaShift", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, GhostChromaShift), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostChromaShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostChromaShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost1 = { "Ghost1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, Ghost1), Z_Construct_UScriptStruct_FLensFlareGhostSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost2 = { "Ghost2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, Ghost2), Z_Construct_UScriptStruct_FLensFlareGhostSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost3 = { "Ghost3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, Ghost3), Z_Construct_UScriptStruct_FLensFlareGhostSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost4 = { "Ghost4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, Ghost4), Z_Construct_UScriptStruct_FLensFlareGhostSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost5_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost5 = { "Ghost5", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, Ghost5), Z_Construct_UScriptStruct_FLensFlareGhostSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost6_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost6 = { "Ghost6", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, Ghost6), Z_Construct_UScriptStruct_FLensFlareGhostSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost7_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost7 = { "Ghost7", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, Ghost7), Z_Construct_UScriptStruct_FLensFlareGhostSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost8_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost8 = { "Ghost8", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, Ghost8), Z_Construct_UScriptStruct_FLensFlareGhostSettings, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloIntensity = { "HaloIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, HaloIntensity), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloWidth = { "HaloWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, HaloWidth), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloMask = { "HaloMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, HaloMask), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloCompression_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloCompression = { "HaloCompression", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, HaloCompression), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloChromaShift_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloChromaShift = { "HaloChromaShift", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, HaloChromaShift), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloChromaShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloChromaShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareIntensity = { "GlareIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, GlareIntensity), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareDivider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareDivider = { "GlareDivider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, GlareDivider), METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareDivider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareDivider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareScale = { "GlareScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, GlareScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareTint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareTint = { "GlareTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, GlareTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareLineMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostProcessLensFlareAsset" },
		{ "ModuleRelativePath", "Public/PostProcessLensFlareAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareLineMask = { "GlareLineMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPostProcessLensFlareAsset, GlareLineMask), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareLineMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareLineMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_FlareGradient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GhostChromaShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_Ghost8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_HaloChromaShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareDivider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::NewProp_GlareLineMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostProcessLensFlareAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::ClassParams = {
		&UPostProcessLensFlareAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostProcessLensFlareAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPostProcessLensFlareAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPostProcessLensFlareAsset, 3119508027);
	template<> LENSEFFECTS_API UClass* StaticClass<UPostProcessLensFlareAsset>()
	{
		return UPostProcessLensFlareAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPostProcessLensFlareAsset(Z_Construct_UClass_UPostProcessLensFlareAsset, &UPostProcessLensFlareAsset::StaticClass, TEXT("/Script/LensEffects"), TEXT("UPostProcessLensFlareAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostProcessLensFlareAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
