// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIEQSGen_CoverPoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIEQSGen_CoverPoints() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEQSGen_CoverPoints_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEQSGen_CoverPoints();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	void USAIEQSGen_CoverPoints::StaticRegisterNativesUSAIEQSGen_CoverPoints()
	{
	}
	UClass* Z_Construct_UClass_USAIEQSGen_CoverPoints_NoRegister()
	{
		return USAIEQSGen_CoverPoints::StaticClass();
	}
	struct Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequireFiringOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequireFiringOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QueryContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIEQSGen_CoverPoints.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_CoverPoints.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSGen_CoverPoints" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_CoverPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryRadius = { "QueryRadius", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSGen_CoverPoints, QueryRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSGen_CoverPoints" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_CoverPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryHeight = { "QueryHeight", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSGen_CoverPoints, QueryHeight), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_RequireFiringOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSGen_CoverPoints" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_CoverPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_RequireFiringOptions = { "RequireFiringOptions", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSGen_CoverPoints, RequireFiringOptions), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_RequireFiringOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_RequireFiringOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSGen_CoverPoints" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_CoverPoints.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryContext = { "QueryContext", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSGen_CoverPoints, QueryContext), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_RequireFiringOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::NewProp_QueryContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIEQSGen_CoverPoints>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::ClassParams = {
		&USAIEQSGen_CoverPoints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIEQSGen_CoverPoints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIEQSGen_CoverPoints_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIEQSGen_CoverPoints, 2965687148);
	template<> AISENTIENCE_API UClass* StaticClass<USAIEQSGen_CoverPoints>()
	{
		return USAIEQSGen_CoverPoints::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIEQSGen_CoverPoints(Z_Construct_UClass_USAIEQSGen_CoverPoints, &USAIEQSGen_CoverPoints::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIEQSGen_CoverPoints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIEQSGen_CoverPoints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
