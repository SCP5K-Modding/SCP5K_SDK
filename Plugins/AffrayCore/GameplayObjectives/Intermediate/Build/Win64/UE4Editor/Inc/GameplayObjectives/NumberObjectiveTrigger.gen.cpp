// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/NumberObjectiveTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberObjectiveTrigger() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_ANumberObjectiveTrigger_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_ANumberObjectiveTrigger();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveTrigger();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
// End Cross Module References
	void ANumberObjectiveTrigger::StaticRegisterNativesANumberObjectiveTrigger()
	{
	}
	UClass* Z_Construct_UClass_ANumberObjectiveTrigger_NoRegister()
	{
		return ANumberObjectiveTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ANumberObjectiveTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANumberObjectiveTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectiveTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANumberObjectiveTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NumberObjectiveTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NumberObjectiveTrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANumberObjectiveTrigger_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NumberObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/NumberObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANumberObjectiveTrigger_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANumberObjectiveTrigger, Amount), METADATA_PARAMS(Z_Construct_UClass_ANumberObjectiveTrigger_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANumberObjectiveTrigger_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumberObjectiveTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumberObjectiveTrigger_Statics::NewProp_Amount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANumberObjectiveTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumberObjectiveTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANumberObjectiveTrigger_Statics::ClassParams = {
		&ANumberObjectiveTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANumberObjectiveTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANumberObjectiveTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANumberObjectiveTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANumberObjectiveTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANumberObjectiveTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANumberObjectiveTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANumberObjectiveTrigger, 867407544);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<ANumberObjectiveTrigger>()
	{
		return ANumberObjectiveTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANumberObjectiveTrigger(Z_Construct_UClass_ANumberObjectiveTrigger, &ANumberObjectiveTrigger::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("ANumberObjectiveTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANumberObjectiveTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
