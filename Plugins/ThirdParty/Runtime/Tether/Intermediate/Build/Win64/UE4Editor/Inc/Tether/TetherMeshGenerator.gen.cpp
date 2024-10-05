// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherMeshGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherMeshGenerator() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
	void UTetherMeshGenerator::StaticRegisterNativesUTetherMeshGenerator()
	{
	}
	UClass* Z_Construct_UClass_UTetherMeshGenerator_NoRegister()
	{
		return UTetherMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UTetherMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TetherMeshGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetherMeshGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherMeshGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTetherMeshGenerator_Statics::ClassParams = {
		&UTetherMeshGenerator::StaticClass,
		"TetherModeSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherMeshGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherMeshGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherMeshGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTetherMeshGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTetherMeshGenerator, 4271621855);
	template<> TETHER_API UClass* StaticClass<UTetherMeshGenerator>()
	{
		return UTetherMeshGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTetherMeshGenerator(Z_Construct_UClass_UTetherMeshGenerator, &UTetherMeshGenerator::StaticClass, TEXT("/Script/Tether"), TEXT("UTetherMeshGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherMeshGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
