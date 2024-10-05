// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIEQSTest_LimitDistanceOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIEQSTest_LimitDistanceOffset() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	void USAIEQSTest_LimitDistanceOffset::StaticRegisterNativesUSAIEQSTest_LimitDistanceOffset()
	{
	}
	UClass* Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_NoRegister()
	{
		return USAIEQSTest_LimitDistanceOffset::StaticClass();
	}
	struct Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceFromContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceFromContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContextHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIEQSTest_LimitDistanceOffset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIEQSTest_LimitDistanceOffset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSTest_LimitDistanceOffset" },
		{ "ModuleRelativePath", "Public/SAIEQSTest_LimitDistanceOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSTest_LimitDistanceOffset, TraceData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceFromContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSTest_LimitDistanceOffset" },
		{ "ModuleRelativePath", "Public/SAIEQSTest_LimitDistanceOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceFromContext = { "TraceFromContext", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSTest_LimitDistanceOffset, TraceFromContext), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceFromContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceFromContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ItemHeightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSTest_LimitDistanceOffset" },
		{ "ModuleRelativePath", "Public/SAIEQSTest_LimitDistanceOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ItemHeightOffset = { "ItemHeightOffset", nullptr, (EPropertyFlags)0x0010048000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSTest_LimitDistanceOffset, ItemHeightOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ItemHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ItemHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ContextHeightOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSTest_LimitDistanceOffset" },
		{ "ModuleRelativePath", "Public/SAIEQSTest_LimitDistanceOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ContextHeightOffset = { "ContextHeightOffset", nullptr, (EPropertyFlags)0x0010048000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSTest_LimitDistanceOffset, ContextHeightOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ContextHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ContextHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_Context_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSTest_LimitDistanceOffset" },
		{ "ModuleRelativePath", "Public/SAIEQSTest_LimitDistanceOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSTest_LimitDistanceOffset, Context), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSTest_LimitDistanceOffset" },
		{ "ModuleRelativePath", "Public/SAIEQSTest_LimitDistanceOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSTest_LimitDistanceOffset, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_MaxDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_TraceFromContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ItemHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_ContextHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::NewProp_MaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIEQSTest_LimitDistanceOffset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::ClassParams = {
		&USAIEQSTest_LimitDistanceOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIEQSTest_LimitDistanceOffset, 2686999854);
	template<> AISENTIENCE_API UClass* StaticClass<USAIEQSTest_LimitDistanceOffset>()
	{
		return USAIEQSTest_LimitDistanceOffset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIEQSTest_LimitDistanceOffset(Z_Construct_UClass_USAIEQSTest_LimitDistanceOffset, &USAIEQSTest_LimitDistanceOffset::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIEQSTest_LimitDistanceOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIEQSTest_LimitDistanceOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
