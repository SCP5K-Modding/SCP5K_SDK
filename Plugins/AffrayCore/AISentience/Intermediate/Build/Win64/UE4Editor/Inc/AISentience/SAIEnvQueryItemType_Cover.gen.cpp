// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIEnvQueryItemType_Cover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIEnvQueryItemType_Cover() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEnvQueryItemType_Cover_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEnvQueryItemType_Cover();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_VectorBase();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void USAIEnvQueryItemType_Cover::StaticRegisterNativesUSAIEnvQueryItemType_Cover()
	{
	}
	UClass* Z_Construct_UClass_USAIEnvQueryItemType_Cover_NoRegister()
	{
		return USAIEnvQueryItemType_Cover::StaticClass();
	}
	struct Z_Construct_UClass_USAIEnvQueryItemType_Cover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIEnvQueryItemType_Cover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryItemType_VectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEnvQueryItemType_Cover_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIEnvQueryItemType_Cover.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIEnvQueryItemType_Cover.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIEnvQueryItemType_Cover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIEnvQueryItemType_Cover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIEnvQueryItemType_Cover_Statics::ClassParams = {
		&USAIEnvQueryItemType_Cover::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USAIEnvQueryItemType_Cover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEnvQueryItemType_Cover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIEnvQueryItemType_Cover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIEnvQueryItemType_Cover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIEnvQueryItemType_Cover, 3725880623);
	template<> AISENTIENCE_API UClass* StaticClass<USAIEnvQueryItemType_Cover>()
	{
		return USAIEnvQueryItemType_Cover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIEnvQueryItemType_Cover(Z_Construct_UClass_USAIEnvQueryItemType_Cover, &USAIEnvQueryItemType_Cover::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIEnvQueryItemType_Cover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIEnvQueryItemType_Cover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
