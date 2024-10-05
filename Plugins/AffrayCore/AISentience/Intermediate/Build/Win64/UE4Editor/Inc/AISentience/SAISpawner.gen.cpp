// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAISpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAISpawner() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAISpawner_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAISpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASAISpawner::execbIsDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->bIsDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execGetPatrolPointWaitTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPatrolPointWaitTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execGetRoamRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoamRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execGetRoamWaitTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoamWaitTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execGetSpawnedCalmBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESAIBehaviors_Calm::Type>*)Z_Param__Result=P_THIS->GetSpawnedCalmBehavior();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execGetSpawnedMorale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpawnedMorale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execGetSpawnedMoraleMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpawnedMoraleMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execGetSpawnedPatrolKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSpawnedPatrolKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execIsSpawnedAsLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpawnedAsLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAISpawner::execSpawnAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAI();
		P_NATIVE_END;
	}
	void ASAISpawner::StaticRegisterNativesASAISpawner()
	{
		UClass* Class = ASAISpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "bIsDisabled", &ASAISpawner::execbIsDisabled },
			{ "GetPatrolPointWaitTime", &ASAISpawner::execGetPatrolPointWaitTime },
			{ "GetRoamRadius", &ASAISpawner::execGetRoamRadius },
			{ "GetRoamWaitTime", &ASAISpawner::execGetRoamWaitTime },
			{ "GetSpawnedCalmBehavior", &ASAISpawner::execGetSpawnedCalmBehavior },
			{ "GetSpawnedMorale", &ASAISpawner::execGetSpawnedMorale },
			{ "GetSpawnedMoraleMultiplier", &ASAISpawner::execGetSpawnedMoraleMultiplier },
			{ "GetSpawnedPatrolKey", &ASAISpawner::execGetSpawnedPatrolKey },
			{ "IsSpawnedAsLeader", &ASAISpawner::execIsSpawnedAsLeader },
			{ "SpawnAI", &ASAISpawner::execSpawnAI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics
	{
		struct SAISpawner_eventbIsDisabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAISpawner_eventbIsDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAISpawner_eventbIsDisabled_Parms), &Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "bIsDisabled", nullptr, nullptr, sizeof(SAISpawner_eventbIsDisabled_Parms), Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_bIsDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_bIsDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics
	{
		struct SAISpawner_eventGetPatrolPointWaitTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISpawner_eventGetPatrolPointWaitTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "GetPatrolPointWaitTime", nullptr, nullptr, sizeof(SAISpawner_eventGetPatrolPointWaitTime_Parms), Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics
	{
		struct SAISpawner_eventGetRoamRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISpawner_eventGetRoamRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "GetRoamRadius", nullptr, nullptr, sizeof(SAISpawner_eventGetRoamRadius_Parms), Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_GetRoamRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_GetRoamRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics
	{
		struct SAISpawner_eventGetRoamWaitTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISpawner_eventGetRoamWaitTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "GetRoamWaitTime", nullptr, nullptr, sizeof(SAISpawner_eventGetRoamWaitTime_Parms), Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics
	{
		struct SAISpawner_eventGetSpawnedCalmBehavior_Parms
		{
			TEnumAsByte<ESAIBehaviors_Calm::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISpawner_eventGetSpawnedCalmBehavior_Parms, ReturnValue), Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "GetSpawnedCalmBehavior", nullptr, nullptr, sizeof(SAISpawner_eventGetSpawnedCalmBehavior_Parms), Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics
	{
		struct SAISpawner_eventGetSpawnedMorale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISpawner_eventGetSpawnedMorale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "GetSpawnedMorale", nullptr, nullptr, sizeof(SAISpawner_eventGetSpawnedMorale_Parms), Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics
	{
		struct SAISpawner_eventGetSpawnedMoraleMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISpawner_eventGetSpawnedMoraleMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "GetSpawnedMoraleMultiplier", nullptr, nullptr, sizeof(SAISpawner_eventGetSpawnedMoraleMultiplier_Parms), Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics
	{
		struct SAISpawner_eventGetSpawnedPatrolKey_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAISpawner_eventGetSpawnedPatrolKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "GetSpawnedPatrolKey", nullptr, nullptr, sizeof(SAISpawner_eventGetSpawnedPatrolKey_Parms), Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics
	{
		struct SAISpawner_eventIsSpawnedAsLeader_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAISpawner_eventIsSpawnedAsLeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAISpawner_eventIsSpawnedAsLeader_Parms), &Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "IsSpawnedAsLeader", nullptr, nullptr, sizeof(SAISpawner_eventIsSpawnedAsLeader_Parms), Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAISpawner_SpawnAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAISpawner_SpawnAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAISpawner_SpawnAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAISpawner, nullptr, "SpawnAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAISpawner_SpawnAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAISpawner_SpawnAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAISpawner_SpawnAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAISpawner_SpawnAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAISpawner_NoRegister()
	{
		return ASAISpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASAISpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnedAsLeader_MetaData[];
#endif
		static void NewProp_bSpawnedAsLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnedAsLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeadersSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeadersSpawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedCalmBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpawnedCalmBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedRoamRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnedRoamRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedRoamWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnedRoamWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPatrolPointWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnedPatrolPointWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedPatrolkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnedPatrolkey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedMorale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnedMorale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedMoraleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnedMoraleMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAISpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAISpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAISpawner_bIsDisabled, "bIsDisabled" }, // 333244953
		{ &Z_Construct_UFunction_ASAISpawner_GetPatrolPointWaitTime, "GetPatrolPointWaitTime" }, // 1959230316
		{ &Z_Construct_UFunction_ASAISpawner_GetRoamRadius, "GetRoamRadius" }, // 1993622527
		{ &Z_Construct_UFunction_ASAISpawner_GetRoamWaitTime, "GetRoamWaitTime" }, // 1907550547
		{ &Z_Construct_UFunction_ASAISpawner_GetSpawnedCalmBehavior, "GetSpawnedCalmBehavior" }, // 1247253371
		{ &Z_Construct_UFunction_ASAISpawner_GetSpawnedMorale, "GetSpawnedMorale" }, // 3043024567
		{ &Z_Construct_UFunction_ASAISpawner_GetSpawnedMoraleMultiplier, "GetSpawnedMoraleMultiplier" }, // 1244625892
		{ &Z_Construct_UFunction_ASAISpawner_GetSpawnedPatrolKey, "GetSpawnedPatrolKey" }, // 855282730
		{ &Z_Construct_UFunction_ASAISpawner_IsSpawnedAsLeader, "IsSpawnedAsLeader" }, // 2516730942
		{ &Z_Construct_UFunction_ASAISpawner_SpawnAI, "SpawnAI" }, // 3627208884
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAISpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_bSpawnedAsLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	void Z_Construct_UClass_ASAISpawner_Statics::NewProp_bSpawnedAsLeader_SetBit(void* Obj)
	{
		((ASAISpawner*)Obj)->bSpawnedAsLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_bSpawnedAsLeader = { "bSpawnedAsLeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAISpawner), &Z_Construct_UClass_ASAISpawner_Statics::NewProp_bSpawnedAsLeader_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_bSpawnedAsLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_bSpawnedAsLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_LeadersSpawner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_LeadersSpawner = { "LeadersSpawner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, LeadersSpawner), Z_Construct_UClass_ASAISpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_LeadersSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_LeadersSpawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIComponent = { "AIComponent", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, AIComponent), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_bDisabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	void Z_Construct_UClass_ASAISpawner_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((ASAISpawner*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAISpawner), &Z_Construct_UClass_ASAISpawner_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_bDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIToSpawn = { "AIToSpawn", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, AIToSpawn), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedAI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedAI = { "SpawnedAI", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnedAI), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnRange = { "SpawnRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnRange), METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedCalmBehavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedCalmBehavior = { "SpawnedCalmBehavior", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnedCalmBehavior), Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedCalmBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedCalmBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamRadius = { "SpawnedRoamRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnedRoamRadius), METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamWaitTime = { "SpawnedRoamWaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnedRoamWaitTime), METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolPointWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolPointWaitTime = { "SpawnedPatrolPointWaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnedPatrolPointWaitTime), METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolPointWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolPointWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolkey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolkey = { "SpawnedPatrolkey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnedPatrolkey), METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolkey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMorale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMorale = { "SpawnedMorale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnedMorale), METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMorale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMorale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMoraleMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISpawner" },
		{ "ModuleRelativePath", "Public/SAISpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMoraleMultiplier = { "SpawnedMoraleMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAISpawner, SpawnedMoraleMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMoraleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMoraleMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAISpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_bSpawnedAsLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_LeadersSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_bDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_AIToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedCalmBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedRoamWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolPointWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedPatrolkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMorale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAISpawner_Statics::NewProp_SpawnedMoraleMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAISpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAISpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAISpawner_Statics::ClassParams = {
		&ASAISpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAISpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAISpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAISpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAISpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAISpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAISpawner, 2189146125);
	template<> AISENTIENCE_API UClass* StaticClass<ASAISpawner>()
	{
		return ASAISpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAISpawner(Z_Construct_UClass_ASAISpawner, &ASAISpawner::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAISpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAISpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
