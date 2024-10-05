// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/EnvQueryContext_ClaimedCover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_ClaimedCover() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UEnvQueryContext_ClaimedCover_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UEnvQueryContext_ClaimedCover();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void UEnvQueryContext_ClaimedCover::StaticRegisterNativesUEnvQueryContext_ClaimedCover()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryContext_ClaimedCover_NoRegister()
	{
		return UEnvQueryContext_ClaimedCover::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryContext_ClaimedCover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryContext_ClaimedCover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryContext_ClaimedCover_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvQueryContext_ClaimedCover.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EnvQueryContext_ClaimedCover.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryContext_ClaimedCover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_ClaimedCover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_ClaimedCover_Statics::ClassParams = {
		&UEnvQueryContext_ClaimedCover::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryContext_ClaimedCover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_ClaimedCover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryContext_ClaimedCover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryContext_ClaimedCover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryContext_ClaimedCover, 259234491);
	template<> AISENTIENCE_API UClass* StaticClass<UEnvQueryContext_ClaimedCover>()
	{
		return UEnvQueryContext_ClaimedCover::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryContext_ClaimedCover(Z_Construct_UClass_UEnvQueryContext_ClaimedCover, &UEnvQueryContext_ClaimedCover::StaticClass, TEXT("/Script/AISentience"), TEXT("UEnvQueryContext_ClaimedCover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_ClaimedCover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
