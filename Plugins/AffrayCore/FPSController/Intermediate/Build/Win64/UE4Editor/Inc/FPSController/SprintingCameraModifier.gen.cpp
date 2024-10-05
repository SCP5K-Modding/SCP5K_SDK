// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/SprintingCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSprintingCameraModifier() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USprintingCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USprintingCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	void USprintingCameraModifier::StaticRegisterNativesUSprintingCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_USprintingCameraModifier_NoRegister()
	{
		return USprintingCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_USprintingCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USprintingCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USprintingCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SprintingCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SprintingCameraModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USprintingCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USprintingCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USprintingCameraModifier_Statics::ClassParams = {
		&USprintingCameraModifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USprintingCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USprintingCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USprintingCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USprintingCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USprintingCameraModifier, 3630202562);
	template<> FPSCONTROLLER_API UClass* StaticClass<USprintingCameraModifier>()
	{
		return USprintingCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USprintingCameraModifier(Z_Construct_UClass_USprintingCameraModifier, &USprintingCameraModifier::StaticClass, TEXT("/Script/FPSController"), TEXT("USprintingCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USprintingCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
