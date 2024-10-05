// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/BTTask_CoverQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_CoverQuery() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_CoverQuery_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_CoverQuery();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_RunEQSQuery();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void UBTTask_CoverQuery::StaticRegisterNativesUBTTask_CoverQuery()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_CoverQuery_NoRegister()
	{
		return UBTTask_CoverQuery::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_CoverQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_CoverQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_RunEQSQuery,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_CoverQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTTask_CoverQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTTask_CoverQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_CoverQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_CoverQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_CoverQuery_Statics::ClassParams = {
		&UBTTask_CoverQuery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_CoverQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CoverQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_CoverQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_CoverQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_CoverQuery, 4006085262);
	template<> AISENTIENCE_API UClass* StaticClass<UBTTask_CoverQuery>()
	{
		return UBTTask_CoverQuery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_CoverQuery(Z_Construct_UClass_UBTTask_CoverQuery, &UBTTask_CoverQuery::StaticClass, TEXT("/Script/AISentience"), TEXT("UBTTask_CoverQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_CoverQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
