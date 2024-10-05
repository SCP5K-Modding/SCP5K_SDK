// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSLaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSLaser() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSLaser_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSLaser();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	void AFPSLaser::StaticRegisterNativesAFPSLaser()
	{
	}
	UClass* Z_Construct_UClass_AFPSLaser_NoRegister()
	{
		return AFPSLaser::StaticClass();
	}
	struct Z_Construct_UClass_AFPSLaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSLaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSLaser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSLaser.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSLaser.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSLaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSLaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSLaser_Statics::ClassParams = {
		&AFPSLaser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFPSLaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSLaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSLaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSLaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSLaser, 1369138146);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSLaser>()
	{
		return AFPSLaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSLaser(Z_Construct_UClass_AFPSLaser, &AFPSLaser::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSLaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSLaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
