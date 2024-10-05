// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AISenseConfig_VisualEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_VisualEvent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UAISenseConfig_VisualEvent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UAISenseConfig_VisualEvent();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
// End Cross Module References
	void UAISenseConfig_VisualEvent::StaticRegisterNativesUAISenseConfig_VisualEvent()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_VisualEvent_NoRegister()
	{
		return UAISenseConfig_VisualEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDetectionByAffiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDetectionByAffiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionFOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AISenseConfig_VisualEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AISenseConfig_VisualEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISenseConfig_VisualEvent" },
		{ "ModuleRelativePath", "Public/AISenseConfig_VisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_VisualEvent, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionByAffiliation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionByAffiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_TargetDetectionByAffiliation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISenseConfig_VisualEvent" },
		{ "ModuleRelativePath", "Public/AISenseConfig_VisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_TargetDetectionByAffiliation = { "TargetDetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_VisualEvent, TargetDetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_TargetDetectionByAffiliation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_TargetDetectionByAffiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISenseConfig_VisualEvent" },
		{ "ModuleRelativePath", "Public/AISenseConfig_VisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_VisualEvent, DetectionRange), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionFOV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISenseConfig_VisualEvent" },
		{ "ModuleRelativePath", "Public/AISenseConfig_VisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionFOV = { "DetectionFOV", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_VisualEvent, DetectionFOV), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionFOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionByAffiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_TargetDetectionByAffiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::NewProp_DetectionFOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_VisualEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::ClassParams = {
		&UAISenseConfig_VisualEvent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_VisualEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseConfig_VisualEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_VisualEvent, 3233337097);
	template<> AISENTIENCE_API UClass* StaticClass<UAISenseConfig_VisualEvent>()
	{
		return UAISenseConfig_VisualEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_VisualEvent(Z_Construct_UClass_UAISenseConfig_VisualEvent, &UAISenseConfig_VisualEvent::StaticClass, TEXT("/Script/AISentience"), TEXT("UAISenseConfig_VisualEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_VisualEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
