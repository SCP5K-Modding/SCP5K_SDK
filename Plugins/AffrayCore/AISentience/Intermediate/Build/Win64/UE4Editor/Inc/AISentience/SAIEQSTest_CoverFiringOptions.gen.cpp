// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIEQSTest_CoverFiringOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIEQSTest_CoverFiringOptions() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEQSTest_CoverFiringOptions();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void USAIEQSTest_CoverFiringOptions::StaticRegisterNativesUSAIEQSTest_CoverFiringOptions()
	{
	}
	UClass* Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_NoRegister()
	{
		return USAIEQSTest_CoverFiringOptions::StaticClass();
	}
	struct Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIEQSTest_CoverFiringOptions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIEQSTest_CoverFiringOptions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIEQSTest_CoverFiringOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_Statics::ClassParams = {
		&USAIEQSTest_CoverFiringOptions::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIEQSTest_CoverFiringOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIEQSTest_CoverFiringOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIEQSTest_CoverFiringOptions, 3820555816);
	template<> AISENTIENCE_API UClass* StaticClass<USAIEQSTest_CoverFiringOptions>()
	{
		return USAIEQSTest_CoverFiringOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIEQSTest_CoverFiringOptions(Z_Construct_UClass_USAIEQSTest_CoverFiringOptions, &USAIEQSTest_CoverFiringOptions::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIEQSTest_CoverFiringOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIEQSTest_CoverFiringOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
