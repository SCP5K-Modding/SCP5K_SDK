// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/AISenseConfig_Suppression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Suppression() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UAISenseConfig_Suppression_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UAISenseConfig_Suppression();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
// End Cross Module References
	void UAISenseConfig_Suppression::StaticRegisterNativesUAISenseConfig_Suppression()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Suppression_NoRegister()
	{
		return UAISenseConfig_Suppression::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Suppression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Suppression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Suppression_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AISenseConfig_Suppression.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AISenseConfig_Suppression.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Suppression_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISenseConfig_Suppression" },
		{ "ModuleRelativePath", "Public/AISenseConfig_Suppression.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Suppression_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Suppression, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Suppression_Statics::NewProp_DetectionByAffiliation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Suppression_Statics::NewProp_DetectionByAffiliation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Suppression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Suppression_Statics::NewProp_DetectionByAffiliation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Suppression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Suppression>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Suppression_Statics::ClassParams = {
		&UAISenseConfig_Suppression::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Suppression_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Suppression_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Suppression_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Suppression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Suppression()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseConfig_Suppression_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Suppression, 3971281720);
	template<> FPSCONTROLLER_API UClass* StaticClass<UAISenseConfig_Suppression>()
	{
		return UAISenseConfig_Suppression::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Suppression(Z_Construct_UClass_UAISenseConfig_Suppression, &UAISenseConfig_Suppression::StaticClass, TEXT("/Script/FPSController"), TEXT("UAISenseConfig_Suppression"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Suppression);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
