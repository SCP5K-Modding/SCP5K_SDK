// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIPerception.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIPerception() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPerception_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPerception();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void USAIPerception::StaticRegisterNativesUSAIPerception()
	{
	}
	UClass* Z_Construct_UClass_USAIPerception_NoRegister()
	{
		return USAIPerception::StaticClass();
	}
	struct Z_Construct_UClass_USAIPerception_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIPerception_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIPerception_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIPerception.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIPerception.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIPerception_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIPerception>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIPerception_Statics::ClassParams = {
		&USAIPerception::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USAIPerception_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIPerception_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIPerception()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIPerception_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIPerception, 1562934157);
	template<> AISENTIENCE_API UClass* StaticClass<USAIPerception>()
	{
		return USAIPerception::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIPerception(Z_Construct_UClass_USAIPerception, &USAIPerception::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIPerception"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIPerception);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
