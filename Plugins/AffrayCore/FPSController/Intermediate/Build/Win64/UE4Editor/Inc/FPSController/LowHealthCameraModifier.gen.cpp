// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/LowHealthCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowHealthCameraModifier() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_ULowHealthCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_ULowHealthCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	void ULowHealthCameraModifier::StaticRegisterNativesULowHealthCameraModifier()
	{
	}
	UClass* Z_Construct_UClass_ULowHealthCameraModifier_NoRegister()
	{
		return ULowHealthCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_ULowHealthCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowHealthCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowHealthCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LowHealthCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LowHealthCameraModifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowHealthCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowHealthCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowHealthCameraModifier_Statics::ClassParams = {
		&ULowHealthCameraModifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULowHealthCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowHealthCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowHealthCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowHealthCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowHealthCameraModifier, 1088610585);
	template<> FPSCONTROLLER_API UClass* StaticClass<ULowHealthCameraModifier>()
	{
		return ULowHealthCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowHealthCameraModifier(Z_Construct_UClass_ULowHealthCameraModifier, &ULowHealthCameraModifier::StaticClass, TEXT("/Script/FPSController"), TEXT("ULowHealthCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowHealthCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
