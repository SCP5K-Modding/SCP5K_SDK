// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherPointSegmentDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherPointSegmentDefinition() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTetherPointSegmentDefinition_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherPointSegmentDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions();
// End Cross Module References
	void UTetherPointSegmentDefinition::StaticRegisterNativesUTetherPointSegmentDefinition()
	{
	}
	UClass* Z_Construct_UClass_UTetherPointSegmentDefinition_NoRegister()
	{
		return UTetherPointSegmentDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UTetherPointSegmentDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Slack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimulationOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TetherPointSegmentDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TetherPointSegmentDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherPointSegmentDefinition" },
		{ "ModuleRelativePath", "Public/TetherPointSegmentDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherPointSegmentDefinition, Slack), METADATA_PARAMS(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TetherPointSegmentDefinition" },
		{ "ModuleRelativePath", "Public/TetherPointSegmentDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions = { "SimulationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherPointSegmentDefinition, SimulationOptions), Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions, METADATA_PARAMS(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherPointSegmentDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::ClassParams = {
		&UTetherPointSegmentDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherPointSegmentDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTetherPointSegmentDefinition, 2391872776);
	template<> TETHER_API UClass* StaticClass<UTetherPointSegmentDefinition>()
	{
		return UTetherPointSegmentDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTetherPointSegmentDefinition(Z_Construct_UClass_UTetherPointSegmentDefinition, &UTetherPointSegmentDefinition::StaticClass, TEXT("/Script/Tether"), TEXT("UTetherPointSegmentDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherPointSegmentDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
