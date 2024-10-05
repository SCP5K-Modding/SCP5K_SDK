// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSFlashlight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSFlashlight() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSFlashlight_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSFlashlight();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	void AFPSFlashlight::StaticRegisterNativesAFPSFlashlight()
	{
	}
	UClass* Z_Construct_UClass_AFPSFlashlight_NoRegister()
	{
		return AFPSFlashlight::StaticClass();
	}
	struct Z_Construct_UClass_AFPSFlashlight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSFlashlight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSFlashlight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSFlashlight.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSFlashlight.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSFlashlight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSFlashlight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSFlashlight_Statics::ClassParams = {
		&AFPSFlashlight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSFlashlight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSFlashlight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSFlashlight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSFlashlight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSFlashlight, 2355829449);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSFlashlight>()
	{
		return AFPSFlashlight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSFlashlight(Z_Construct_UClass_AFPSFlashlight, &AFPSFlashlight::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSFlashlight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSFlashlight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
