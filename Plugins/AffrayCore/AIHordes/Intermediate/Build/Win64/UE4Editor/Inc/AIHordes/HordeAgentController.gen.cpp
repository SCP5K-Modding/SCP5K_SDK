// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/HordeAgentController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeAgentController() {}
// Cross Module References
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgentController_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgentController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
// End Cross Module References
	DEFINE_FUNCTION(AHordeAgentController::execGetHordeAgent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHordeAgent**)Z_Param__Result=P_THIS->GetHordeAgent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgentController::execGetSeenTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APawn*>*)Z_Param__Result=P_THIS->GetSeenTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgentController::execOnVisibleTargetUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_SeenActor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVisibleTargetUpdated(Z_Param_SeenActor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void AHordeAgentController::StaticRegisterNativesAHordeAgentController()
	{
		UClass* Class = AHordeAgentController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHordeAgent", &AHordeAgentController::execGetHordeAgent },
			{ "GetSeenTargets", &AHordeAgentController::execGetSeenTargets },
			{ "OnVisibleTargetUpdated", &AHordeAgentController::execOnVisibleTargetUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics
	{
		struct HordeAgentController_eventGetHordeAgent_Parms
		{
			AHordeAgent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgentController_eventGetHordeAgent_Parms, ReturnValue), Z_Construct_UClass_AHordeAgent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgentController, nullptr, "GetHordeAgent", nullptr, nullptr, sizeof(HordeAgentController_eventGetHordeAgent_Parms), Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgentController_GetHordeAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgentController_GetHordeAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics
	{
		struct HordeAgentController_eventGetSeenTargets_Parms
		{
			TArray<APawn*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgentController_eventGetSeenTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgentController, nullptr, "GetSeenTargets", nullptr, nullptr, sizeof(HordeAgentController_eventGetSeenTargets_Parms), Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgentController_GetSeenTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgentController_GetSeenTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics
	{
		struct HordeAgentController_eventOnVisibleTargetUpdated_Parms
		{
			AActor* SeenActor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::NewProp_SeenActor = { "SeenActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgentController_eventOnVisibleTargetUpdated_Parms, SeenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgentController_eventOnVisibleTargetUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::NewProp_SeenActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgentController, nullptr, "OnVisibleTargetUpdated", nullptr, nullptr, sizeof(HordeAgentController_eventOnVisibleTargetUpdated_Parms), Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHordeAgentController_NoRegister()
	{
		return AHordeAgentController::StaticClass();
	}
	struct Z_Construct_UClass_AHordeAgentController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SeenTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCrowdSeparation_MetaData[];
#endif
		static void NewProp_bEnableCrowdSeparation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCrowdSeparation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCrowdObstacleAvoidance_MetaData[];
#endif
		static void NewProp_bEnableCrowdObstacleAvoidance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCrowdObstacleAvoidance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCrowdAnticipateTurns_MetaData[];
#endif
		static void NewProp_bEnableCrowdAnticipateTurns_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCrowdAnticipateTurns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCrowdOptimizeVisibility_MetaData[];
#endif
		static void NewProp_bEnableCrowdOptimizeVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCrowdOptimizeVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCrowdPathOffset_MetaData[];
#endif
		static void NewProp_bEnableCrowdPathOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCrowdPathOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdSeparationWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrowdSeparationWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHordeAgentController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHordeAgentController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHordeAgentController_GetHordeAgent, "GetHordeAgent" }, // 3374945363
		{ &Z_Construct_UFunction_AHordeAgentController_GetSeenTargets, "GetSeenTargets" }, // 830270293
		{ &Z_Construct_UFunction_AHordeAgentController_OnVisibleTargetUpdated, "OnVisibleTargetUpdated" }, // 1069784532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HordeAgentController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::NewProp_TeamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgentController" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgentController, TeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_TeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_TeamID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_SeenTargets_Inner = { "SeenTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::NewProp_SeenTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgentController" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_SeenTargets = { "SeenTargets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgentController, SeenTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_SeenTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_SeenTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdSeparation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgentController" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	void Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdSeparation_SetBit(void* Obj)
	{
		((AHordeAgentController*)Obj)->bEnableCrowdSeparation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdSeparation = { "bEnableCrowdSeparation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHordeAgentController), &Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdSeparation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdSeparation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdSeparation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdObstacleAvoidance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgentController" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	void Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdObstacleAvoidance_SetBit(void* Obj)
	{
		((AHordeAgentController*)Obj)->bEnableCrowdObstacleAvoidance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdObstacleAvoidance = { "bEnableCrowdObstacleAvoidance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHordeAgentController), &Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdObstacleAvoidance_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdObstacleAvoidance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdObstacleAvoidance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdAnticipateTurns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgentController" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	void Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdAnticipateTurns_SetBit(void* Obj)
	{
		((AHordeAgentController*)Obj)->bEnableCrowdAnticipateTurns = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdAnticipateTurns = { "bEnableCrowdAnticipateTurns", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHordeAgentController), &Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdAnticipateTurns_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdAnticipateTurns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdAnticipateTurns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdOptimizeVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgentController" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	void Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdOptimizeVisibility_SetBit(void* Obj)
	{
		((AHordeAgentController*)Obj)->bEnableCrowdOptimizeVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdOptimizeVisibility = { "bEnableCrowdOptimizeVisibility", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHordeAgentController), &Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdOptimizeVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdOptimizeVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdOptimizeVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdPathOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgentController" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	void Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdPathOffset_SetBit(void* Obj)
	{
		((AHordeAgentController*)Obj)->bEnableCrowdPathOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdPathOffset = { "bEnableCrowdPathOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHordeAgentController), &Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdPathOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdPathOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdPathOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgentController_Statics::NewProp_CrowdSeparationWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgentController" },
		{ "ModuleRelativePath", "Public/HordeAgentController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHordeAgentController_Statics::NewProp_CrowdSeparationWeight = { "CrowdSeparationWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgentController, CrowdSeparationWeight), METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_CrowdSeparationWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::NewProp_CrowdSeparationWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHordeAgentController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_SeenTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_SeenTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdSeparation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdObstacleAvoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdAnticipateTurns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdOptimizeVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_bEnableCrowdPathOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgentController_Statics::NewProp_CrowdSeparationWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHordeAgentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHordeAgentController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHordeAgentController_Statics::ClassParams = {
		&AHordeAgentController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHordeAgentController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHordeAgentController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgentController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHordeAgentController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHordeAgentController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHordeAgentController, 3133730666);
	template<> AIHORDES_API UClass* StaticClass<AHordeAgentController>()
	{
		return AHordeAgentController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHordeAgentController(Z_Construct_UClass_AHordeAgentController, &AHordeAgentController::StaticClass, TEXT("/Script/AIHordes"), TEXT("AHordeAgentController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHordeAgentController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
