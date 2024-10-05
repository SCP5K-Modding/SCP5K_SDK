// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/BTTask_StopInvestigating.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_StopInvestigating() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_StopInvestigating_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_StopInvestigating();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void UBTTask_StopInvestigating::StaticRegisterNativesUBTTask_StopInvestigating()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_StopInvestigating_NoRegister()
	{
		return UBTTask_StopInvestigating::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_StopInvestigating_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_StopInvestigating_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_StopInvestigating_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTTask_StopInvestigating.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTTask_StopInvestigating.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_StopInvestigating_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_StopInvestigating>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_StopInvestigating_Statics::ClassParams = {
		&UBTTask_StopInvestigating::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_StopInvestigating_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StopInvestigating_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_StopInvestigating()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_StopInvestigating_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_StopInvestigating, 3060633099);
	template<> AISENTIENCE_API UClass* StaticClass<UBTTask_StopInvestigating>()
	{
		return UBTTask_StopInvestigating::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_StopInvestigating(Z_Construct_UClass_UBTTask_StopInvestigating, &UBTTask_StopInvestigating::StaticClass, TEXT("/Script/AISentience"), TEXT("UBTTask_StopInvestigating"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_StopInvestigating);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
