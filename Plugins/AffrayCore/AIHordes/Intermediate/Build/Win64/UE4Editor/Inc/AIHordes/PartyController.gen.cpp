// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/PartyController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyController() {}
// Cross Module References
	AIHORDES_API UClass* Z_Construct_UClass_APartyController_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_APartyController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIHORDES_API UEnum* Z_Construct_UEnum_AIHordes_EHordeAgentMovementMode();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AParty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
// End Cross Module References
	DEFINE_FUNCTION(APartyController::execAlert)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Alert_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGeneratePath)
	{
		P_GET_STRUCT(FVector,Z_Param_Destination);
		P_GET_ENUM(EHordeAgentMovementMode,Z_Param_MovementMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GeneratePath(Z_Param_Destination,EHordeAgentMovementMode(Z_Param_MovementMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetAlertThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAlertThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetClosest)
	{
		P_GET_TARRAY(APawn*,Z_Param_Targets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetClosest(Z_Param_Targets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetCooldownSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCooldownSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetCurrentTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetCurrentTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetDetectionLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDetectionLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetInvestigateThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInvestigateThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetInvestigatingPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInvestigatingPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetMaxDetectionLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxDetectionLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AParty**)Z_Param__Result=P_THIS->GetParty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execGetSeenTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APawn*>*)Z_Param__Result=P_THIS->GetSeenTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execInvestigate)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Investigate_Implementation(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execOnEndSeePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_SeenPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndSeePawn_Implementation(Z_Param_SeenPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execOnPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execOnSeePawn)
	{
		P_GET_OBJECT(APawn,Z_Param_SeenPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeePawn_Implementation(Z_Param_SeenPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execSetDetectionLevel)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDetectionLevel(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execStartInvestigating)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInvestigating(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execStopInvestigating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopInvestigating_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APartyController::execStopMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMoving();
		P_NATIVE_END;
	}
	static FName NAME_APartyController_Alert = FName(TEXT("Alert"));
	void APartyController::Alert()
	{
		ProcessEvent(FindFunctionChecked(NAME_APartyController_Alert),NULL);
	}
	static FName NAME_APartyController_Investigate = FName(TEXT("Investigate"));
	FVector APartyController::Investigate(FVector position)
	{
		PartyController_eventInvestigate_Parms Parms;
		Parms.position=position;
		ProcessEvent(FindFunctionChecked(NAME_APartyController_Investigate),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_APartyController_OnEndSeePawn = FName(TEXT("OnEndSeePawn"));
	void APartyController::OnEndSeePawn(APawn* SeenPawn)
	{
		PartyController_eventOnEndSeePawn_Parms Parms;
		Parms.SeenPawn=SeenPawn;
		ProcessEvent(FindFunctionChecked(NAME_APartyController_OnEndSeePawn),&Parms);
	}
	static FName NAME_APartyController_OnSeePawn = FName(TEXT("OnSeePawn"));
	void APartyController::OnSeePawn(APawn* SeenPawn)
	{
		PartyController_eventOnSeePawn_Parms Parms;
		Parms.SeenPawn=SeenPawn;
		ProcessEvent(FindFunctionChecked(NAME_APartyController_OnSeePawn),&Parms);
	}
	static FName NAME_APartyController_StopInvestigating = FName(TEXT("StopInvestigating"));
	void APartyController::StopInvestigating()
	{
		ProcessEvent(FindFunctionChecked(NAME_APartyController_StopInvestigating),NULL);
	}
	void APartyController::StaticRegisterNativesAPartyController()
	{
		UClass* Class = APartyController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Alert", &APartyController::execAlert },
			{ "GeneratePath", &APartyController::execGeneratePath },
			{ "GetAlertThreshold", &APartyController::execGetAlertThreshold },
			{ "GetClosest", &APartyController::execGetClosest },
			{ "GetCooldownSpeed", &APartyController::execGetCooldownSpeed },
			{ "GetCurrentTarget", &APartyController::execGetCurrentTarget },
			{ "GetDetectionLevel", &APartyController::execGetDetectionLevel },
			{ "GetInvestigateThreshold", &APartyController::execGetInvestigateThreshold },
			{ "GetInvestigatingPosition", &APartyController::execGetInvestigatingPosition },
			{ "GetMaxDetectionLevel", &APartyController::execGetMaxDetectionLevel },
			{ "GetParty", &APartyController::execGetParty },
			{ "GetSeenTargets", &APartyController::execGetSeenTargets },
			{ "Investigate", &APartyController::execInvestigate },
			{ "OnEndSeePawn", &APartyController::execOnEndSeePawn },
			{ "OnPerceptionUpdated", &APartyController::execOnPerceptionUpdated },
			{ "OnSeePawn", &APartyController::execOnSeePawn },
			{ "SetDetectionLevel", &APartyController::execSetDetectionLevel },
			{ "StartInvestigating", &APartyController::execStartInvestigating },
			{ "StopInvestigating", &APartyController::execStopInvestigating },
			{ "StopMoving", &APartyController::execStopMoving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APartyController_Alert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_Alert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_Alert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "Alert", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_Alert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_Alert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_Alert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_Alert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GeneratePath_Statics
	{
		struct PartyController_eventGeneratePath_Parms
		{
			FVector Destination;
			EHordeAgentMovementMode MovementMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGeneratePath_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_MovementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGeneratePath_Parms, MovementMode), Z_Construct_UEnum_AIHordes_EHordeAgentMovementMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PartyController_eventGeneratePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PartyController_eventGeneratePath_Parms), &Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GeneratePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_MovementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GeneratePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GeneratePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GeneratePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GeneratePath", nullptr, nullptr, sizeof(PartyController_eventGeneratePath_Parms), Z_Construct_UFunction_APartyController_GeneratePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GeneratePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GeneratePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GeneratePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GeneratePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GeneratePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics
	{
		struct PartyController_eventGetAlertThreshold_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetAlertThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetAlertThreshold", nullptr, nullptr, sizeof(PartyController_eventGetAlertThreshold_Parms), Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetAlertThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetAlertThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetClosest_Statics
	{
		struct PartyController_eventGetClosest_Parms
		{
			TArray<APawn*> Targets;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APartyController_GetClosest_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APartyController_GetClosest_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetClosest_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APartyController_GetClosest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetClosest_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetClosest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetClosest_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetClosest_Statics::NewProp_Targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetClosest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetClosest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetClosest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetClosest", nullptr, nullptr, sizeof(PartyController_eventGetClosest_Parms), Z_Construct_UFunction_APartyController_GetClosest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetClosest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetClosest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetClosest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetClosest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetClosest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics
	{
		struct PartyController_eventGetCooldownSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetCooldownSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetCooldownSpeed", nullptr, nullptr, sizeof(PartyController_eventGetCooldownSpeed_Parms), Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetCooldownSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetCooldownSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics
	{
		struct PartyController_eventGetCurrentTarget_Parms
		{
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetCurrentTarget_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetCurrentTarget", nullptr, nullptr, sizeof(PartyController_eventGetCurrentTarget_Parms), Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics
	{
		struct PartyController_eventGetDetectionLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetDetectionLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetDetectionLevel", nullptr, nullptr, sizeof(PartyController_eventGetDetectionLevel_Parms), Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetDetectionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetDetectionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics
	{
		struct PartyController_eventGetInvestigateThreshold_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetInvestigateThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetInvestigateThreshold", nullptr, nullptr, sizeof(PartyController_eventGetInvestigateThreshold_Parms), Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetInvestigateThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetInvestigateThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics
	{
		struct PartyController_eventGetInvestigatingPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetInvestigatingPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetInvestigatingPosition", nullptr, nullptr, sizeof(PartyController_eventGetInvestigatingPosition_Parms), Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetInvestigatingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetInvestigatingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics
	{
		struct PartyController_eventGetMaxDetectionLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetMaxDetectionLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetMaxDetectionLevel", nullptr, nullptr, sizeof(PartyController_eventGetMaxDetectionLevel_Parms), Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetMaxDetectionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetMaxDetectionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetParty_Statics
	{
		struct PartyController_eventGetParty_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APartyController_GetParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetParty_Parms, ReturnValue), Z_Construct_UClass_AParty_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetParty", nullptr, nullptr, sizeof(PartyController_eventGetParty_Parms), Z_Construct_UFunction_APartyController_GetParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_GetSeenTargets_Statics
	{
		struct PartyController_eventGetSeenTargets_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventGetSeenTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "GetSeenTargets", nullptr, nullptr, sizeof(PartyController_eventGetSeenTargets_Parms), Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_GetSeenTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_GetSeenTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_Investigate_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyController_Investigate_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventInvestigate_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyController_Investigate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventInvestigate_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_Investigate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_Investigate_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_Investigate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_Investigate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_Investigate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "Investigate", nullptr, nullptr, sizeof(PartyController_eventInvestigate_Parms), Z_Construct_UFunction_APartyController_Investigate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_Investigate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_Investigate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_Investigate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_Investigate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_Investigate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventOnEndSeePawn_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "OnEndSeePawn", nullptr, nullptr, sizeof(PartyController_eventOnEndSeePawn_Parms), Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_OnEndSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_OnEndSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics
	{
		struct PartyController_eventOnPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(PartyController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_OnSeePawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APartyController_OnSeePawn_Statics::NewProp_SeenPawn = { "SeenPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventOnSeePawn_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_OnSeePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_OnSeePawn_Statics::NewProp_SeenPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_OnSeePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "OnSeePawn", nullptr, nullptr, sizeof(PartyController_eventOnSeePawn_Parms), Z_Construct_UFunction_APartyController_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_OnSeePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_OnSeePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_OnSeePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_OnSeePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_OnSeePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics
	{
		struct PartyController_eventSetDetectionLevel_Parms
		{
			float Level;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventSetDetectionLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "SetDetectionLevel", nullptr, nullptr, sizeof(PartyController_eventSetDetectionLevel_Parms), Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_SetDetectionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_SetDetectionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_StartInvestigating_Statics
	{
		struct PartyController_eventStartInvestigating_Parms
		{
			FVector position;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyController_StartInvestigating_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyController_eventStartInvestigating_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyController_StartInvestigating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyController_StartInvestigating_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_StartInvestigating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_StartInvestigating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "StartInvestigating", nullptr, nullptr, sizeof(PartyController_eventStartInvestigating_Parms), Z_Construct_UFunction_APartyController_StartInvestigating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_StartInvestigating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_StartInvestigating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_StartInvestigating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_StartInvestigating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_StartInvestigating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_StopInvestigating_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_StopInvestigating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_StopInvestigating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "StopInvestigating", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_StopInvestigating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_StopInvestigating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_StopInvestigating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_StopInvestigating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyController_StopMoving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyController_StopMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyController_StopMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyController, nullptr, "StopMoving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyController_StopMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APartyController_StopMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyController_StopMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyController_StopMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APartyController_NoRegister()
	{
		return APartyController::StaticClass();
	}
	struct Z_Construct_UClass_APartyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SeenTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlertThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigateThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvestigateThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDetectionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDetectionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionCooldownSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionCooldownSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigateLoudnessThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvestigateLoudnessThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvestigating_MetaData[];
#endif
		static void NewProp_bInvestigating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvestigating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigatingPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvestigatingPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APartyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APartyController_Alert, "Alert" }, // 3565217163
		{ &Z_Construct_UFunction_APartyController_GeneratePath, "GeneratePath" }, // 3742746100
		{ &Z_Construct_UFunction_APartyController_GetAlertThreshold, "GetAlertThreshold" }, // 375888446
		{ &Z_Construct_UFunction_APartyController_GetClosest, "GetClosest" }, // 1918937793
		{ &Z_Construct_UFunction_APartyController_GetCooldownSpeed, "GetCooldownSpeed" }, // 3751746755
		{ &Z_Construct_UFunction_APartyController_GetCurrentTarget, "GetCurrentTarget" }, // 2958325833
		{ &Z_Construct_UFunction_APartyController_GetDetectionLevel, "GetDetectionLevel" }, // 3482780043
		{ &Z_Construct_UFunction_APartyController_GetInvestigateThreshold, "GetInvestigateThreshold" }, // 4219937071
		{ &Z_Construct_UFunction_APartyController_GetInvestigatingPosition, "GetInvestigatingPosition" }, // 1163185229
		{ &Z_Construct_UFunction_APartyController_GetMaxDetectionLevel, "GetMaxDetectionLevel" }, // 1376321033
		{ &Z_Construct_UFunction_APartyController_GetParty, "GetParty" }, // 397141273
		{ &Z_Construct_UFunction_APartyController_GetSeenTargets, "GetSeenTargets" }, // 1260270462
		{ &Z_Construct_UFunction_APartyController_Investigate, "Investigate" }, // 326645634
		{ &Z_Construct_UFunction_APartyController_OnEndSeePawn, "OnEndSeePawn" }, // 2922227606
		{ &Z_Construct_UFunction_APartyController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2271727333
		{ &Z_Construct_UFunction_APartyController_OnSeePawn, "OnSeePawn" }, // 1890259836
		{ &Z_Construct_UFunction_APartyController_SetDetectionLevel, "SetDetectionLevel" }, // 3025196797
		{ &Z_Construct_UFunction_APartyController_StartInvestigating, "StartInvestigating" }, // 2854145103
		{ &Z_Construct_UFunction_APartyController_StopInvestigating, "StopInvestigating" }, // 3273843411
		{ &Z_Construct_UFunction_APartyController_StopMoving, "StopMoving" }, // 2264241816
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PartyController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_SeenTargets_Inner = { "SeenTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_SeenTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_SeenTargets = { "SeenTargets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, SeenTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_SeenTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_SeenTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, CurrentTarget), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_AlertThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_AlertThreshold = { "AlertThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, AlertThreshold), METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_AlertThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_AlertThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateThreshold = { "InvestigateThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, InvestigateThreshold), METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_MaxDetectionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_MaxDetectionLevel = { "MaxDetectionLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, MaxDetectionLevel), METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_MaxDetectionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_MaxDetectionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_DetectionCooldownSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_DetectionCooldownSpeed = { "DetectionCooldownSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, DetectionCooldownSpeed), METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_DetectionCooldownSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_DetectionCooldownSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateLoudnessThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateLoudnessThreshold = { "InvestigateLoudnessThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, InvestigateLoudnessThreshold), METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateLoudnessThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateLoudnessThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_bInvestigating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	void Z_Construct_UClass_APartyController_Statics::NewProp_bInvestigating_SetBit(void* Obj)
	{
		((APartyController*)Obj)->bInvestigating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_bInvestigating = { "bInvestigating", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APartyController), &Z_Construct_UClass_APartyController_Statics::NewProp_bInvestigating_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_bInvestigating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_bInvestigating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_InvestigatingPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_InvestigatingPosition = { "InvestigatingPosition", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, InvestigatingPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_InvestigatingPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_InvestigatingPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyController_Statics::NewProp_DetectionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartyController" },
		{ "ModuleRelativePath", "Public/PartyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APartyController_Statics::NewProp_DetectionLevel = { "DetectionLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyController, DetectionLevel), METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::NewProp_DetectionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::NewProp_DetectionLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartyController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_SeenTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_SeenTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_AlertThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_MaxDetectionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_DetectionCooldownSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_InvestigateLoudnessThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_bInvestigating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_InvestigatingPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyController_Statics::NewProp_DetectionLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APartyController_Statics::ClassParams = {
		&APartyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APartyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APartyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APartyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APartyController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APartyController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APartyController, 981369825);
	template<> AIHORDES_API UClass* StaticClass<APartyController>()
	{
		return APartyController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APartyController(Z_Construct_UClass_APartyController, &APartyController::StaticClass, TEXT("/Script/AIHordes"), TEXT("APartyController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartyController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
