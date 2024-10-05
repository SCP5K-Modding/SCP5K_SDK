// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ResetObjectiveTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetObjectiveTrigger() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AResetObjectiveTrigger_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AResetObjectiveTrigger();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveTrigger();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
// End Cross Module References
	void AResetObjectiveTrigger::StaticRegisterNativesAResetObjectiveTrigger()
	{
	}
	UClass* Z_Construct_UClass_AResetObjectiveTrigger_NoRegister()
	{
		return AResetObjectiveTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AResetObjectiveTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResetObjectiveTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectiveTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResetObjectiveTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ResetObjectiveTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ResetObjectiveTrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResetObjectiveTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResetObjectiveTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AResetObjectiveTrigger_Statics::ClassParams = {
		&AResetObjectiveTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AResetObjectiveTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AResetObjectiveTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AResetObjectiveTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AResetObjectiveTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AResetObjectiveTrigger, 1420187921);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<AResetObjectiveTrigger>()
	{
		return AResetObjectiveTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AResetObjectiveTrigger(Z_Construct_UClass_AResetObjectiveTrigger, &AResetObjectiveTrigger::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("AResetObjectiveTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResetObjectiveTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
