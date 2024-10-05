// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/SettingsCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsCameraModifier() {}
// Cross Module References
	GAMEUTILITIES_API UClass* Z_Construct_UClass_USettingsCameraModifier_NoRegister();
	GAMEUTILITIES_API UClass* Z_Construct_UClass_USettingsCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
// End Cross Module References
	void USettingsCameraModifier::StaticRegisterNativesUSettingsCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_USettingsCameraModifier_NoRegister()
	{
		return USettingsCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_USettingsCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_GameUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SettingsCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SettingsCameraModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingsCameraModifier_Statics::ClassParams = {
		&USettingsCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingsCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingsCameraModifier, 1044134726);
	template<> GAMEUTILITIES_API UClass* StaticClass<USettingsCameraModifier>()
	{
		return USettingsCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingsCameraModifier(Z_Construct_UClass_USettingsCameraModifier, &USettingsCameraModifier::StaticClass, TEXT("/Script/GameUtilities"), TEXT("USettingsCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
