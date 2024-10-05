// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/PlayerObjectiveTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerObjectiveTrigger() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_APlayerObjectiveTrigger_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_APlayerObjectiveTrigger();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveTrigger();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerObjectiveTrigger::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerObjectiveTrigger::execOnObjectiveReset)
	{
		P_GET_OBJECT(UObjective,Z_Param_InObjective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnObjectiveReset(Z_Param_InObjective);
		P_NATIVE_END;
	}
	void APlayerObjectiveTrigger::StaticRegisterNativesAPlayerObjectiveTrigger()
	{
		UClass* Class = APlayerObjectiveTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndOverlap", &APlayerObjectiveTrigger::execOnEndOverlap },
			{ "OnObjectiveReset", &APlayerObjectiveTrigger::execOnObjectiveReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics
	{
		struct PlayerObjectiveTrigger_eventOnEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjectiveTrigger_eventOnEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjectiveTrigger_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerObjectiveTrigger, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(PlayerObjectiveTrigger_eventOnEndOverlap_Parms), Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics
	{
		struct PlayerObjectiveTrigger_eventOnObjectiveReset_Parms
		{
			UObjective* InObjective;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObjective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::NewProp_InObjective = { "InObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerObjectiveTrigger_eventOnObjectiveReset_Parms, InObjective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::NewProp_InObjective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerObjectiveTrigger, nullptr, "OnObjectiveReset", nullptr, nullptr, sizeof(PlayerObjectiveTrigger_eventOnObjectiveReset_Parms), Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerObjectiveTrigger_NoRegister()
	{
		return APlayerObjectiveTrigger::StaticClass();
	}
	struct Z_Construct_UClass_APlayerObjectiveTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerObjectiveTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectiveTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerObjectiveTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerObjectiveTrigger_OnEndOverlap, "OnEndOverlap" }, // 358206676
		{ &Z_Construct_UFunction_APlayerObjectiveTrigger_OnObjectiveReset, "OnObjectiveReset" }, // 882990337
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerObjectiveTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerObjectiveTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerObjectiveTrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerObjectiveTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerObjectiveTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerObjectiveTrigger_Statics::ClassParams = {
		&APlayerObjectiveTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerObjectiveTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerObjectiveTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerObjectiveTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerObjectiveTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerObjectiveTrigger, 3606020599);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<APlayerObjectiveTrigger>()
	{
		return APlayerObjectiveTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerObjectiveTrigger(Z_Construct_UClass_APlayerObjectiveTrigger, &APlayerObjectiveTrigger::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("APlayerObjectiveTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerObjectiveTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
