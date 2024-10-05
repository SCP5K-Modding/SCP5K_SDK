// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensEffects/Public/LensEffectsSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensEffectsSubsystem() {}
// Cross Module References
	LENSEFFECTS_API UClass* Z_Construct_UClass_ULensEffectsSubsystem_NoRegister();
	LENSEFFECTS_API UClass* Z_Construct_UClass_ULensEffectsSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_LensEffects();
	LENSEFFECTS_API UClass* Z_Construct_UClass_UPostProcessLensFlareAsset_NoRegister();
// End Cross Module References
	void ULensEffectsSubsystem::StaticRegisterNativesULensEffectsSubsystem()
	{
	}
	UClass* Z_Construct_UClass_ULensEffectsSubsystem_NoRegister()
	{
		return ULensEffectsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULensEffectsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensEffectsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LensEffects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensEffectsSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LensEffectsSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LensEffectsSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensEffectsSubsystem_Statics::NewProp_PostProcessAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LensEffectsSubsystem" },
		{ "ModuleRelativePath", "Public/LensEffectsSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULensEffectsSubsystem_Statics::NewProp_PostProcessAsset = { "PostProcessAsset", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULensEffectsSubsystem, PostProcessAsset), Z_Construct_UClass_UPostProcessLensFlareAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensEffectsSubsystem_Statics::NewProp_PostProcessAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensEffectsSubsystem_Statics::NewProp_PostProcessAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULensEffectsSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensEffectsSubsystem_Statics::NewProp_PostProcessAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensEffectsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensEffectsSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULensEffectsSubsystem_Statics::ClassParams = {
		&ULensEffectsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULensEffectsSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULensEffectsSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULensEffectsSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensEffectsSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensEffectsSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULensEffectsSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULensEffectsSubsystem, 2978077563);
	template<> LENSEFFECTS_API UClass* StaticClass<ULensEffectsSubsystem>()
	{
		return ULensEffectsSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULensEffectsSubsystem(Z_Construct_UClass_ULensEffectsSubsystem, &ULensEffectsSubsystem::StaticClass, TEXT("/Script/LensEffects"), TEXT("ULensEffectsSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensEffectsSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
