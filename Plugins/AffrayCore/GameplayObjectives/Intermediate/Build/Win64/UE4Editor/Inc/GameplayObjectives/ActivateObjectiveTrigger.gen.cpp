// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ActivateObjectiveTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateObjectiveTrigger() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AActivateObjectiveTrigger_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AActivateObjectiveTrigger();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveTrigger();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
// End Cross Module References
	void AActivateObjectiveTrigger::StaticRegisterNativesAActivateObjectiveTrigger()
	{
	}
	UClass* Z_Construct_UClass_AActivateObjectiveTrigger_NoRegister()
	{
		return AActivateObjectiveTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AActivateObjectiveTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetOnActivation_MetaData[];
#endif
		static void NewProp_bResetOnActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetOnActivation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActivateObjectiveTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectiveTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActivateObjectiveTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActivateObjectiveTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActivateObjectiveTrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActivateObjectiveTrigger_Statics::NewProp_bResetOnActivation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ActivateObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ActivateObjectiveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AActivateObjectiveTrigger_Statics::NewProp_bResetOnActivation_SetBit(void* Obj)
	{
		((AActivateObjectiveTrigger*)Obj)->bResetOnActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActivateObjectiveTrigger_Statics::NewProp_bResetOnActivation = { "bResetOnActivation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AActivateObjectiveTrigger), &Z_Construct_UClass_AActivateObjectiveTrigger_Statics::NewProp_bResetOnActivation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActivateObjectiveTrigger_Statics::NewProp_bResetOnActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActivateObjectiveTrigger_Statics::NewProp_bResetOnActivation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActivateObjectiveTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActivateObjectiveTrigger_Statics::NewProp_bResetOnActivation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActivateObjectiveTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActivateObjectiveTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActivateObjectiveTrigger_Statics::ClassParams = {
		&AActivateObjectiveTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActivateObjectiveTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActivateObjectiveTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActivateObjectiveTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActivateObjectiveTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActivateObjectiveTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActivateObjectiveTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActivateObjectiveTrigger, 3958778074);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<AActivateObjectiveTrigger>()
	{
		return AActivateObjectiveTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActivateObjectiveTrigger(Z_Construct_UClass_AActivateObjectiveTrigger, &AActivateObjectiveTrigger::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("AActivateObjectiveTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActivateObjectiveTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
