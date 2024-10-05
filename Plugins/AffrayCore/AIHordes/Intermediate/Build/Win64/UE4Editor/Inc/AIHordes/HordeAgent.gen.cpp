// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/HordeAgent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeAgent() {}
// Cross Module References
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgent_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgent();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	AIHORDES_API UEnum* Z_Construct_UEnum_AIHordes_EHordeAgentMovementMode();
	AIHORDES_API UClass* Z_Construct_UClass_AHorde_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgentController_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AParty_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHordeAgent::execGetCrawlingSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCrawlingSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execGetCurrentMovementMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHordeAgentMovementMode*)Z_Param__Result=P_THIS->GetCurrentMovementMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execGetHorde)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHorde**)Z_Param__Result=P_THIS->GetHorde();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execGetHordeAgentController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHordeAgentController**)Z_Param__Result=P_THIS->GetHordeAgentController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execGetParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AParty**)Z_Param__Result=P_THIS->GetParty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execGetRunningSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRunningSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execGetTickInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTickInterval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execGetWalkingSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWalkingSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execGetWanderingSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWanderingSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execSetHorde)
	{
		P_GET_OBJECT(AHorde,Z_Param_Horde);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorde(Z_Param_Horde);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execSetMovementMode)
	{
		P_GET_ENUM(EHordeAgentMovementMode,Z_Param_MovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementMode_Implementation(EHordeAgentMovementMode(Z_Param_MovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execSetParty)
	{
		P_GET_OBJECT(AParty,Z_Param_Party);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParty(Z_Param_Party);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeAgent::execSetTickInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Interval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickInterval(Z_Param_Interval);
		P_NATIVE_END;
	}
	static FName NAME_AHordeAgent_SetMovementMode = FName(TEXT("SetMovementMode"));
	void AHordeAgent::SetMovementMode(EHordeAgentMovementMode MovementMode)
	{
		HordeAgent_eventSetMovementMode_Parms Parms;
		Parms.MovementMode=MovementMode;
		ProcessEvent(FindFunctionChecked(NAME_AHordeAgent_SetMovementMode),&Parms);
	}
	void AHordeAgent::StaticRegisterNativesAHordeAgent()
	{
		UClass* Class = AHordeAgent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCrawlingSpeed", &AHordeAgent::execGetCrawlingSpeed },
			{ "GetCurrentMovementMode", &AHordeAgent::execGetCurrentMovementMode },
			{ "GetHorde", &AHordeAgent::execGetHorde },
			{ "GetHordeAgentController", &AHordeAgent::execGetHordeAgentController },
			{ "GetParty", &AHordeAgent::execGetParty },
			{ "GetRunningSpeed", &AHordeAgent::execGetRunningSpeed },
			{ "GetTickInterval", &AHordeAgent::execGetTickInterval },
			{ "GetWalkingSpeed", &AHordeAgent::execGetWalkingSpeed },
			{ "GetWanderingSpeed", &AHordeAgent::execGetWanderingSpeed },
			{ "SetHorde", &AHordeAgent::execSetHorde },
			{ "SetMovementMode", &AHordeAgent::execSetMovementMode },
			{ "SetParty", &AHordeAgent::execSetParty },
			{ "SetTickInterval", &AHordeAgent::execSetTickInterval },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics
	{
		struct HordeAgent_eventGetCrawlingSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetCrawlingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetCrawlingSpeed", nullptr, nullptr, sizeof(HordeAgent_eventGetCrawlingSpeed_Parms), Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics
	{
		struct HordeAgent_eventGetCurrentMovementMode_Parms
		{
			EHordeAgentMovementMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetCurrentMovementMode_Parms, ReturnValue), Z_Construct_UEnum_AIHordes_EHordeAgentMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetCurrentMovementMode", nullptr, nullptr, sizeof(HordeAgent_eventGetCurrentMovementMode_Parms), Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_GetHorde_Statics
	{
		struct HordeAgent_eventGetHorde_Parms
		{
			AHorde* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetHorde_Parms, ReturnValue), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetHorde", nullptr, nullptr, sizeof(HordeAgent_eventGetHorde_Parms), Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetHorde()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetHorde_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics
	{
		struct HordeAgent_eventGetHordeAgentController_Parms
		{
			AHordeAgentController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetHordeAgentController_Parms, ReturnValue), Z_Construct_UClass_AHordeAgentController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetHordeAgentController", nullptr, nullptr, sizeof(HordeAgent_eventGetHordeAgentController_Parms), Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetHordeAgentController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetHordeAgentController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_GetParty_Statics
	{
		struct HordeAgent_eventGetParty_Parms
		{
			AParty* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeAgent_GetParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetParty_Parms, ReturnValue), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetParty", nullptr, nullptr, sizeof(HordeAgent_eventGetParty_Parms), Z_Construct_UFunction_AHordeAgent_GetParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics
	{
		struct HordeAgent_eventGetRunningSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetRunningSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetRunningSpeed", nullptr, nullptr, sizeof(HordeAgent_eventGetRunningSpeed_Parms), Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetRunningSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetRunningSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics
	{
		struct HordeAgent_eventGetTickInterval_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetTickInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetTickInterval", nullptr, nullptr, sizeof(HordeAgent_eventGetTickInterval_Parms), Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics
	{
		struct HordeAgent_eventGetWalkingSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetWalkingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetWalkingSpeed", nullptr, nullptr, sizeof(HordeAgent_eventGetWalkingSpeed_Parms), Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics
	{
		struct HordeAgent_eventGetWanderingSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventGetWanderingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "GetWanderingSpeed", nullptr, nullptr, sizeof(HordeAgent_eventGetWanderingSpeed_Parms), Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_SetHorde_Statics
	{
		struct HordeAgent_eventSetHorde_Parms
		{
			AHorde* Horde;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Horde;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::NewProp_Horde = { "Horde", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventSetHorde_Parms, Horde), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::NewProp_Horde,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "SetHorde", nullptr, nullptr, sizeof(HordeAgent_eventSetHorde_Parms), Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_SetHorde()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_SetHorde_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::NewProp_MovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventSetMovementMode_Parms, MovementMode), Z_Construct_UEnum_AIHordes_EHordeAgentMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::NewProp_MovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::NewProp_MovementMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "SetMovementMode", nullptr, nullptr, sizeof(HordeAgent_eventSetMovementMode_Parms), Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_SetMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_SetMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_SetParty_Statics
	{
		struct HordeAgent_eventSetParty_Parms
		{
			AParty* Party;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Party;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeAgent_SetParty_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventSetParty_Parms, Party), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_SetParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_SetParty_Statics::NewProp_Party,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_SetParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_SetParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "SetParty", nullptr, nullptr, sizeof(HordeAgent_eventSetParty_Parms), Z_Construct_UFunction_AHordeAgent_SetParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_SetParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_SetParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_SetParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_SetParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_SetParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics
	{
		struct HordeAgent_eventSetTickInterval_Parms
		{
			float Interval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeAgent_eventSetTickInterval_Parms, Interval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::NewProp_Interval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeAgent, nullptr, "SetTickInterval", nullptr, nullptr, sizeof(HordeAgent_eventSetTickInterval_Parms), Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeAgent_SetTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeAgent_SetTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHordeAgent_NoRegister()
	{
		return AHordeAgent::StaticClass();
	}
	struct Z_Construct_UClass_AHordeAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHorde_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentHorde;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentParty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentParty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedVariation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedVariation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WanderingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WanderingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrawlingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrawlingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunningSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentMovementMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentMovementMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHordeAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHordeAgent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHordeAgent_GetCrawlingSpeed, "GetCrawlingSpeed" }, // 762478197
		{ &Z_Construct_UFunction_AHordeAgent_GetCurrentMovementMode, "GetCurrentMovementMode" }, // 1220709697
		{ &Z_Construct_UFunction_AHordeAgent_GetHorde, "GetHorde" }, // 3255433585
		{ &Z_Construct_UFunction_AHordeAgent_GetHordeAgentController, "GetHordeAgentController" }, // 2517316167
		{ &Z_Construct_UFunction_AHordeAgent_GetParty, "GetParty" }, // 3891303120
		{ &Z_Construct_UFunction_AHordeAgent_GetRunningSpeed, "GetRunningSpeed" }, // 4249839392
		{ &Z_Construct_UFunction_AHordeAgent_GetTickInterval, "GetTickInterval" }, // 1563870557
		{ &Z_Construct_UFunction_AHordeAgent_GetWalkingSpeed, "GetWalkingSpeed" }, // 1940234377
		{ &Z_Construct_UFunction_AHordeAgent_GetWanderingSpeed, "GetWanderingSpeed" }, // 3409533105
		{ &Z_Construct_UFunction_AHordeAgent_SetHorde, "SetHorde" }, // 1828627657
		{ &Z_Construct_UFunction_AHordeAgent_SetMovementMode, "SetMovementMode" }, // 2725561733
		{ &Z_Construct_UFunction_AHordeAgent_SetParty, "SetParty" }, // 317072953
		{ &Z_Construct_UFunction_AHordeAgent_SetTickInterval, "SetTickInterval" }, // 833080221
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HordeAgent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentHorde_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentHorde = { "CurrentHorde", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, CurrentHorde), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentHorde_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentHorde_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentParty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentParty = { "CurrentParty", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, CurrentParty), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentParty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentParty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_TickInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, TickInterval), METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_SpeedVariation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_SpeedVariation = { "SpeedVariation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, SpeedVariation), METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_SpeedVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_SpeedVariation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_WanderingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_WanderingSpeed = { "WanderingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, WanderingSpeed), METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_WanderingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_WanderingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_WalkingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, WalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_WalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_WalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_CrawlingSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_CrawlingSpeed = { "CrawlingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, CrawlingSpeed), METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_CrawlingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_CrawlingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_RunningSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_RunningSpeed = { "RunningSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, RunningSpeed), METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_RunningSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_RunningSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentMovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentMovementMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeAgent" },
		{ "ModuleRelativePath", "Public/HordeAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentMovementMode = { "CurrentMovementMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeAgent, CurrentMovementMode), Z_Construct_UEnum_AIHordes_EHordeAgentMovementMode, METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentMovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentMovementMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHordeAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentHorde,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentParty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_TickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_SpeedVariation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_WanderingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_WalkingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_CrawlingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_RunningSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentMovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeAgent_Statics::NewProp_CurrentMovementMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHordeAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHordeAgent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHordeAgent_Statics::ClassParams = {
		&AHordeAgent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHordeAgent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHordeAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHordeAgent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHordeAgent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHordeAgent, 1094319879);
	template<> AIHORDES_API UClass* StaticClass<AHordeAgent>()
	{
		return AHordeAgent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHordeAgent(Z_Construct_UClass_AHordeAgent, &AHordeAgent::StaticClass, TEXT("/Script/AIHordes"), TEXT("AHordeAgent"), false, nullptr, nullptr, nullptr);

	void AHordeAgent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentHorde(TEXT("CurrentHorde"));
		static const FName Name_CurrentParty(TEXT("CurrentParty"));

		const bool bIsValid = true
			&& Name_CurrentHorde == ClassReps[(int32)ENetFields_Private::CurrentHorde].Property->GetFName()
			&& Name_CurrentParty == ClassReps[(int32)ENetFields_Private::CurrentParty].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AHordeAgent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHordeAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
