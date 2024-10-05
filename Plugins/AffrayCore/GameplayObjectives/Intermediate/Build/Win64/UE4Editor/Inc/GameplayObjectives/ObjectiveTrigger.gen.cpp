// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ObjectiveTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveTrigger() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveTrigger_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYOBJECTIVES_API UEnum* Z_Construct_UEnum_GameplayObjectives_EObjectiveTriggerAction();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AObjectiveTrigger::execAffectObjective)
	{
		P_GET_OBJECT(UObjective,Z_Param_InObjective);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AffectObjective(Z_Param_InObjective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveTrigger::execDisable)
	{
		P_GET_OBJECT(UObjective,Z_Param_InObjective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disable(Z_Param_InObjective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveTrigger::execInit)
	{
		P_GET_OBJECT(AObjectiveManager,Z_Param_InObjectiveManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InObjectiveManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveTrigger::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AObjectiveTrigger::StaticRegisterNativesAObjectiveTrigger()
	{
		UClass* Class = AObjectiveTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AffectObjective", &AObjectiveTrigger::execAffectObjective },
			{ "Disable", &AObjectiveTrigger::execDisable },
			{ "Init", &AObjectiveTrigger::execInit },
			{ "OnBeginOverlap", &AObjectiveTrigger::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics
	{
		struct ObjectiveTrigger_eventAffectObjective_Parms
		{
			UObjective* InObjective;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObjective;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::NewProp_InObjective = { "InObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveTrigger_eventAffectObjective_Parms, InObjective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectiveTrigger_eventAffectObjective_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveTrigger_eventAffectObjective_Parms), &Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::NewProp_InObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveTrigger, nullptr, "AffectObjective", nullptr, nullptr, sizeof(ObjectiveTrigger_eventAffectObjective_Parms), Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveTrigger_AffectObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveTrigger_AffectObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics
	{
		struct ObjectiveTrigger_eventDisable_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::NewProp_InObjective = { "InObjective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveTrigger_eventDisable_Parms, InObjective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::NewProp_InObjective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveTrigger, nullptr, "Disable", nullptr, nullptr, sizeof(ObjectiveTrigger_eventDisable_Parms), Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveTrigger_Disable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveTrigger_Disable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveTrigger_Init_Statics
	{
		struct ObjectiveTrigger_eventInit_Parms
		{
			AObjectiveManager* InObjectiveManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObjectiveManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::NewProp_InObjectiveManager = { "InObjectiveManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveTrigger_eventInit_Parms, InObjectiveManager), Z_Construct_UClass_AObjectiveManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::NewProp_InObjectiveManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveTrigger, nullptr, "Init", nullptr, nullptr, sizeof(ObjectiveTrigger_eventInit_Parms), Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveTrigger_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveTrigger_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics
	{
		struct ObjectiveTrigger_eventOnBeginOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveTrigger_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveTrigger_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveTrigger, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(ObjectiveTrigger_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObjectiveTrigger_NoRegister()
	{
		return AObjectiveTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AObjectiveTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnEnter_MetaData[];
#endif
		static void NewProp_bDestroyOnEnter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnObjectiveActivate_MetaData[];
#endif
		static void NewProp_bDestroyOnObjectiveActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnObjectiveActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnObjectiveDeactivate_MetaData[];
#endif
		static void NewProp_bDestroyOnObjectiveDeactivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnObjectiveDeactivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSucceed_MetaData[];
#endif
		static void NewProp_bSucceed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSucceed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStart_MetaData[];
#endif
		static void NewProp_bStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayOnUI_MetaData[];
#endif
		static void NewProp_bDisplayOnUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayOnUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReset_MetaData[];
#endif
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectiveTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObjectiveTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObjectiveTrigger_AffectObjective, "AffectObjective" }, // 255643727
		{ &Z_Construct_UFunction_AObjectiveTrigger_Disable, "Disable" }, // 769120201
		{ &Z_Construct_UFunction_AObjectiveTrigger_Init, "Init" }, // 2319098213
		{ &Z_Construct_UFunction_AObjectiveTrigger_OnBeginOverlap, "OnBeginOverlap" }, // 4055532420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ObjectiveTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectiveTrigger, Action), Z_Construct_UEnum_GameplayObjectives_EObjectiveTriggerAction, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnEnter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnEnter_SetBit(void* Obj)
	{
		((AObjectiveTrigger*)Obj)->bDestroyOnEnter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnEnter = { "bDestroyOnEnter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectiveTrigger), &Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnEnter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveActivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveActivate_SetBit(void* Obj)
	{
		((AObjectiveTrigger*)Obj)->bDestroyOnObjectiveActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveActivate = { "bDestroyOnObjectiveActivate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectiveTrigger), &Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveDeactivate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveDeactivate_SetBit(void* Obj)
	{
		((AObjectiveTrigger*)Obj)->bDestroyOnObjectiveDeactivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveDeactivate = { "bDestroyOnObjectiveDeactivate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectiveTrigger), &Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveDeactivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveDeactivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bSucceed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bSucceed_SetBit(void* Obj)
	{
		((AObjectiveTrigger*)Obj)->bSucceed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bSucceed = { "bSucceed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectiveTrigger), &Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bSucceed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bSucceed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bSucceed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bStart_SetBit(void* Obj)
	{
		((AObjectiveTrigger*)Obj)->bStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectiveTrigger), &Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDisplayOnUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDisplayOnUI_SetBit(void* Obj)
	{
		((AObjectiveTrigger*)Obj)->bDisplayOnUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDisplayOnUI = { "bDisplayOnUI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectiveTrigger), &Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDisplayOnUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDisplayOnUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDisplayOnUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((AObjectiveTrigger*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectiveTrigger), &Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveName = { "ObjectiveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectiveTrigger, ObjectiveName), METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveManager = { "ObjectiveManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectiveTrigger, ObjectiveManager), Z_Construct_UClass_AObjectiveManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectiveTrigger, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectiveTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDestroyOnObjectiveDeactivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bSucceed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bDisplayOnUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_bReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_ObjectiveManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveTrigger_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectiveTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectiveTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectiveTrigger_Statics::ClassParams = {
		&AObjectiveTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AObjectiveTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjectiveTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectiveTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectiveTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectiveTrigger, 3786542386);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<AObjectiveTrigger>()
	{
		return AObjectiveTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectiveTrigger(Z_Construct_UClass_AObjectiveTrigger, &AObjectiveTrigger::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("AObjectiveTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectiveTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
