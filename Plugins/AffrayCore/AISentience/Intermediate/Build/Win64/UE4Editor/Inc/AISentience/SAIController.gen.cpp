// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIController() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIController_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAITarget();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIState();
	AISENTIENCE_API UClass* Z_Construct_UClass_UAIInfoSharingComponent_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAISound();
	LIGHTSENSING_API UClass* Z_Construct_UClass_ALightManager_NoRegister();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAITeam();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAISoundType();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_SAITargetUpdatedDelegate__DelegateSignature();
	AISENTIENCE_API UFunction* Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature();
	AISENTIENCE_API UClass* Z_Construct_UClass_UAIInfoSharer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASAIController::execAddAlertness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAlertness(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execAddDetection)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDetection(Z_Param_Actor,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execAddTarget)
	{
		P_GET_STRUCT(FSAITarget,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execBlueprintGetTeamAttitudeTowards)
	{
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=P_THIS->BlueprintGetTeamAttitudeTowards(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execEndIdle)
	{
		P_GET_ENUM(ESAIState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndIdle(ESAIState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execGetCurrentTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCurrentTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execGetIgnoredTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetIgnoredTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESAIState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execGetTargetRef)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FSAITarget,Z_Param_Out_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTargetRef(Z_Param_Actor,Z_Param_Out_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execGetTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSAITarget>*)Z_Param__Result=P_THIS->GetTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execGetTargetScore)
	{
		P_GET_STRUCT(FSAITarget,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Factor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTargetScore(Z_Param_Target,Z_Param_Factor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execGetTargetStrength)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LightStrength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DistanceStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTargetStrength(Z_Param_Actor,Z_Param_Out_LightStrength,Z_Param_Out_DistanceStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execHasCurrentTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCurrentTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execIgnoreTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IgnoreTarget(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execIsAlert)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlert();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execIsInvestigating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInvestigating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execIsTargetDead)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargetDead(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execOnAISenseDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAISenseDamage_Implementation(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execOnAISenseHearing)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAISenseHearing_Implementation(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execOnAISenseSight)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAISenseSight_Implementation(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execOnAISenseSuppression)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_UBOOL(Z_Param_bSuperSonic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAISenseSuppression_Implementation(Z_Param_Actor,Z_Param_Location,Z_Param_bSuperSonic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execOnTargetPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execPickTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->PickTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execSetState)
	{
		P_GET_ENUM(ESAIState,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetState(ESAIState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execStartIdle)
	{
		P_GET_ENUM(ESAIState,Z_Param_PreviousState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartIdle(ESAIState(Z_Param_PreviousState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execStartInvestigating)
	{
		P_GET_STRUCT_REF(FSAISound,Z_Param_Out_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInvestigating_Implementation(Z_Param_Out_NewSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execStopInvestigating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopInvestigating_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execTickTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execUnIgnoreTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnIgnoreTarget(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execUpdateBlackBoardParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBlackBoardParameters_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASAIController::execUpdateCurrentTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewTarget);
		P_GET_UBOOL(Z_Param_bLockTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrentTarget_Implementation(Z_Param_NewTarget,Z_Param_bLockTarget);
		P_NATIVE_END;
	}
	static FName NAME_ASAIController_InfoSharingComponentUpdated = FName(TEXT("InfoSharingComponentUpdated"));
	void ASAIController::InfoSharingComponentUpdated(UAIInfoSharingComponent* UpdatedInfoSharingComponent)
	{
		SAIController_eventInfoSharingComponentUpdated_Parms Parms;
		Parms.UpdatedInfoSharingComponent=UpdatedInfoSharingComponent;
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_InfoSharingComponentUpdated),&Parms);
	}
	static FName NAME_ASAIController_OnAISenseDamage = FName(TEXT("OnAISenseDamage"));
	void ASAIController::OnAISenseDamage(AActor* Actor, FAIStimulus Stimulus)
	{
		SAIController_eventOnAISenseDamage_Parms Parms;
		Parms.Actor=Actor;
		Parms.Stimulus=Stimulus;
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_OnAISenseDamage),&Parms);
	}
	static FName NAME_ASAIController_OnAISenseHearing = FName(TEXT("OnAISenseHearing"));
	void ASAIController::OnAISenseHearing(AActor* Actor, FAIStimulus Stimulus)
	{
		SAIController_eventOnAISenseHearing_Parms Parms;
		Parms.Actor=Actor;
		Parms.Stimulus=Stimulus;
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_OnAISenseHearing),&Parms);
	}
	static FName NAME_ASAIController_OnAISenseSight = FName(TEXT("OnAISenseSight"));
	void ASAIController::OnAISenseSight(AActor* Actor, FAIStimulus Stimulus)
	{
		SAIController_eventOnAISenseSight_Parms Parms;
		Parms.Actor=Actor;
		Parms.Stimulus=Stimulus;
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_OnAISenseSight),&Parms);
	}
	static FName NAME_ASAIController_OnAISenseSuppression = FName(TEXT("OnAISenseSuppression"));
	void ASAIController::OnAISenseSuppression(AActor* Actor, FVector Location, bool bSuperSonic)
	{
		SAIController_eventOnAISenseSuppression_Parms Parms;
		Parms.Actor=Actor;
		Parms.Location=Location;
		Parms.bSuperSonic=bSuperSonic ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_OnAISenseSuppression),&Parms);
	}
	static FName NAME_ASAIController_StartInvestigating = FName(TEXT("StartInvestigating"));
	void ASAIController::StartInvestigating(FSAISound& NewSound)
	{
		SAIController_eventStartInvestigating_Parms Parms;
		Parms.NewSound=NewSound;
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_StartInvestigating),&Parms);
		NewSound=Parms.NewSound;
	}
	static FName NAME_ASAIController_StopInvestigating = FName(TEXT("StopInvestigating"));
	void ASAIController::StopInvestigating()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_StopInvestigating),NULL);
	}
	static FName NAME_ASAIController_UpdateBlackBoardParameters = FName(TEXT("UpdateBlackBoardParameters"));
	void ASAIController::UpdateBlackBoardParameters()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_UpdateBlackBoardParameters),NULL);
	}
	static FName NAME_ASAIController_UpdateCurrentTarget = FName(TEXT("UpdateCurrentTarget"));
	void ASAIController::UpdateCurrentTarget(AActor* NewTarget, bool bLockTarget)
	{
		SAIController_eventUpdateCurrentTarget_Parms Parms;
		Parms.NewTarget=NewTarget;
		Parms.bLockTarget=bLockTarget ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASAIController_UpdateCurrentTarget),&Parms);
	}
	void ASAIController::StaticRegisterNativesASAIController()
	{
		UClass* Class = ASAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAlertness", &ASAIController::execAddAlertness },
			{ "AddDetection", &ASAIController::execAddDetection },
			{ "AddTarget", &ASAIController::execAddTarget },
			{ "BlueprintGetTeamAttitudeTowards", &ASAIController::execBlueprintGetTeamAttitudeTowards },
			{ "EndIdle", &ASAIController::execEndIdle },
			{ "GetCurrentTarget", &ASAIController::execGetCurrentTarget },
			{ "GetIgnoredTargets", &ASAIController::execGetIgnoredTargets },
			{ "GetState", &ASAIController::execGetState },
			{ "GetTargetRef", &ASAIController::execGetTargetRef },
			{ "GetTargets", &ASAIController::execGetTargets },
			{ "GetTargetScore", &ASAIController::execGetTargetScore },
			{ "GetTargetStrength", &ASAIController::execGetTargetStrength },
			{ "HasCurrentTarget", &ASAIController::execHasCurrentTarget },
			{ "IgnoreTarget", &ASAIController::execIgnoreTarget },
			{ "IsAlert", &ASAIController::execIsAlert },
			{ "IsInvestigating", &ASAIController::execIsInvestigating },
			{ "IsTargetDead", &ASAIController::execIsTargetDead },
			{ "OnAISenseDamage", &ASAIController::execOnAISenseDamage },
			{ "OnAISenseHearing", &ASAIController::execOnAISenseHearing },
			{ "OnAISenseSight", &ASAIController::execOnAISenseSight },
			{ "OnAISenseSuppression", &ASAIController::execOnAISenseSuppression },
			{ "OnTargetPerceptionUpdated", &ASAIController::execOnTargetPerceptionUpdated },
			{ "PickTarget", &ASAIController::execPickTarget },
			{ "SetState", &ASAIController::execSetState },
			{ "StartIdle", &ASAIController::execStartIdle },
			{ "StartInvestigating", &ASAIController::execStartInvestigating },
			{ "StopInvestigating", &ASAIController::execStopInvestigating },
			{ "TickTargets", &ASAIController::execTickTargets },
			{ "UnIgnoreTarget", &ASAIController::execUnIgnoreTarget },
			{ "UpdateBlackBoardParameters", &ASAIController::execUpdateBlackBoardParameters },
			{ "UpdateCurrentTarget", &ASAIController::execUpdateCurrentTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAIController_AddAlertness_Statics
	{
		struct SAIController_eventAddAlertness_Parms
		{
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIController_AddAlertness_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventAddAlertness_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_AddAlertness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_AddAlertness_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_AddAlertness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_AddAlertness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "AddAlertness", nullptr, nullptr, sizeof(SAIController_eventAddAlertness_Parms), Z_Construct_UFunction_ASAIController_AddAlertness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_AddAlertness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_AddAlertness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_AddAlertness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_AddAlertness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_AddAlertness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_AddDetection_Statics
	{
		struct SAIController_eventAddDetection_Parms
		{
			AActor* Actor;
			float Amount;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_AddDetection_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventAddDetection_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIController_AddDetection_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventAddDetection_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_AddDetection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_AddDetection_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_AddDetection_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_AddDetection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_AddDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "AddDetection", nullptr, nullptr, sizeof(SAIController_eventAddDetection_Parms), Z_Construct_UFunction_ASAIController_AddDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_AddDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_AddDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_AddDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_AddDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_AddDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_AddTarget_Statics
	{
		struct SAIController_eventAddTarget_Parms
		{
			FSAITarget Target;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_AddTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventAddTarget_Parms, Target), Z_Construct_UScriptStruct_FSAITarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_AddTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_AddTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_AddTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_AddTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "AddTarget", nullptr, nullptr, sizeof(SAIController_eventAddTarget_Parms), Z_Construct_UFunction_ASAIController_AddTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_AddTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_AddTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_AddTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_AddTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_AddTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics
	{
		struct SAIController_eventBlueprintGetTeamAttitudeTowards_Parms
		{
			const AActor* Other;
			TEnumAsByte<ETeamAttitude::Type> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventBlueprintGetTeamAttitudeTowards_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::NewProp_Other_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventBlueprintGetTeamAttitudeTowards_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "BlueprintGetTeamAttitudeTowards", nullptr, nullptr, sizeof(SAIController_eventBlueprintGetTeamAttitudeTowards_Parms), Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_EndIdle_Statics
	{
		struct SAIController_eventEndIdle_Parms
		{
			ESAIState NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAIController_EndIdle_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASAIController_EndIdle_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventEndIdle_Parms, NewState), Z_Construct_UEnum_AISentience_ESAIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_EndIdle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_EndIdle_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_EndIdle_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_EndIdle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_EndIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "EndIdle", nullptr, nullptr, sizeof(SAIController_eventEndIdle_Parms), Z_Construct_UFunction_ASAIController_EndIdle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_EndIdle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_EndIdle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_EndIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_EndIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_EndIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics
	{
		struct SAIController_eventGetCurrentTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetCurrentTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "GetCurrentTarget", nullptr, nullptr, sizeof(SAIController_eventGetCurrentTarget_Parms), Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_GetCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_GetCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics
	{
		struct SAIController_eventGetIgnoredTargets_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetIgnoredTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "GetIgnoredTargets", nullptr, nullptr, sizeof(SAIController_eventGetIgnoredTargets_Parms), Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_GetIgnoredTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_GetIgnoredTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_GetState_Statics
	{
		struct SAIController_eventGetState_Parms
		{
			ESAIState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAIController_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASAIController_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_AISentience_ESAIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_GetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "GetState", nullptr, nullptr, sizeof(SAIController_eventGetState_Parms), Z_Construct_UFunction_ASAIController_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_GetTargetRef_Statics
	{
		struct SAIController_eventGetTargetRef_Parms
		{
			AActor* Actor;
			FSAITarget Target;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetRef_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetRef_Parms, Target), Z_Construct_UScriptStruct_FSAITarget, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIController_eventGetTargetRef_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIController_eventGetTargetRef_Parms), &Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "GetTargetRef", nullptr, nullptr, sizeof(SAIController_eventGetTargetRef_Parms), Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_GetTargetRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_GetTargetRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_GetTargets_Statics
	{
		struct SAIController_eventGetTargets_Parms
		{
			TArray<FSAITarget> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_GetTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSAITarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASAIController_GetTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_GetTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_GetTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_GetTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "GetTargets", nullptr, nullptr, sizeof(SAIController_eventGetTargets_Parms), Z_Construct_UFunction_ASAIController_GetTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_GetTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_GetTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_GetTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_GetTargetScore_Statics
	{
		struct SAIController_eventGetTargetScore_Parms
		{
			FSAITarget Target;
			float Factor;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Factor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetScore_Parms, Target), Z_Construct_UScriptStruct_FSAITarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetScore_Parms, Factor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::NewProp_Factor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "GetTargetScore", nullptr, nullptr, sizeof(SAIController_eventGetTargetScore_Parms), Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_GetTargetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_GetTargetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics
	{
		struct SAIController_eventGetTargetStrength_Parms
		{
			AActor* Actor;
			float LightStrength;
			float DistanceStrength;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightStrength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceStrength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetStrength_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::NewProp_LightStrength = { "LightStrength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetStrength_Parms, LightStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::NewProp_DistanceStrength = { "DistanceStrength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetStrength_Parms, DistanceStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventGetTargetStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::NewProp_LightStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::NewProp_DistanceStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "GetTargetStrength", nullptr, nullptr, sizeof(SAIController_eventGetTargetStrength_Parms), Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_GetTargetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_GetTargetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics
	{
		struct SAIController_eventHasCurrentTarget_Parms
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
	void Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIController_eventHasCurrentTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIController_eventHasCurrentTarget_Parms), &Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "HasCurrentTarget", nullptr, nullptr, sizeof(SAIController_eventHasCurrentTarget_Parms), Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_HasCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_HasCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics
	{
		struct SAIController_eventIgnoreTarget_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventIgnoreTarget_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "IgnoreTarget", nullptr, nullptr, sizeof(SAIController_eventIgnoreTarget_Parms), Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_IgnoreTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_IgnoreTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedInfoSharingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedInfoSharingComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::NewProp_UpdatedInfoSharingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::NewProp_UpdatedInfoSharingComponent = { "UpdatedInfoSharingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventInfoSharingComponentUpdated_Parms, UpdatedInfoSharingComponent), Z_Construct_UClass_UAIInfoSharingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::NewProp_UpdatedInfoSharingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::NewProp_UpdatedInfoSharingComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::NewProp_UpdatedInfoSharingComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "InfoSharingComponentUpdated", nullptr, nullptr, sizeof(SAIController_eventInfoSharingComponentUpdated_Parms), Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_IsAlert_Statics
	{
		struct SAIController_eventIsAlert_Parms
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
	void Z_Construct_UFunction_ASAIController_IsAlert_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIController_eventIsAlert_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIController_IsAlert_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIController_eventIsAlert_Parms), &Z_Construct_UFunction_ASAIController_IsAlert_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_IsAlert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_IsAlert_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_IsAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_IsAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "IsAlert", nullptr, nullptr, sizeof(SAIController_eventIsAlert_Parms), Z_Construct_UFunction_ASAIController_IsAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_IsAlert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_IsAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_IsAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_IsAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_IsAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_IsInvestigating_Statics
	{
		struct SAIController_eventIsInvestigating_Parms
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
	void Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIController_eventIsInvestigating_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIController_eventIsInvestigating_Parms), &Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "IsInvestigating", nullptr, nullptr, sizeof(SAIController_eventIsInvestigating_Parms), Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_IsInvestigating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_IsInvestigating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_IsTargetDead_Statics
	{
		struct SAIController_eventIsTargetDead_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventIsTargetDead_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIController_eventIsTargetDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIController_eventIsTargetDead_Parms), &Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "IsTargetDead", nullptr, nullptr, sizeof(SAIController_eventIsTargetDead_Parms), Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_IsTargetDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_IsTargetDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnAISenseDamage_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnAISenseDamage_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "OnAISenseDamage", nullptr, nullptr, sizeof(SAIController_eventOnAISenseDamage_Parms), Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_OnAISenseDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_OnAISenseDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnAISenseHearing_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnAISenseHearing_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "OnAISenseHearing", nullptr, nullptr, sizeof(SAIController_eventOnAISenseHearing_Parms), Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_OnAISenseHearing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_OnAISenseHearing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnAISenseSight_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnAISenseSight_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "OnAISenseSight", nullptr, nullptr, sizeof(SAIController_eventOnAISenseSight_Parms), Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_OnAISenseSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_OnAISenseSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_bSuperSonic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuperSonic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnAISenseSuppression_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnAISenseSuppression_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::NewProp_bSuperSonic_SetBit(void* Obj)
	{
		((SAIController_eventOnAISenseSuppression_Parms*)Obj)->bSuperSonic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::NewProp_bSuperSonic = { "bSuperSonic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIController_eventOnAISenseSuppression_Parms), &Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::NewProp_bSuperSonic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::NewProp_bSuperSonic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "OnAISenseSuppression", nullptr, nullptr, sizeof(SAIController_eventOnAISenseSuppression_Parms), Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_OnAISenseSuppression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_OnAISenseSuppression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics
	{
		struct SAIController_eventOnTargetPerceptionUpdated_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "OnTargetPerceptionUpdated", nullptr, nullptr, sizeof(SAIController_eventOnTargetPerceptionUpdated_Parms), Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_PickTarget_Statics
	{
		struct SAIController_eventPickTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_PickTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventPickTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_PickTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_PickTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_PickTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_PickTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "PickTarget", nullptr, nullptr, sizeof(SAIController_eventPickTarget_Parms), Z_Construct_UFunction_ASAIController_PickTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_PickTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_PickTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_PickTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_PickTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_PickTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_SetState_Statics
	{
		struct SAIController_eventSetState_Parms
		{
			ESAIState NewState;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAIController_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASAIController_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventSetState_Parms, NewState), Z_Construct_UEnum_AISentience_ESAIState, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASAIController_SetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIController_eventSetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIController_SetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIController_eventSetState_Parms), &Z_Construct_UFunction_ASAIController_SetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_SetState_Statics::NewProp_NewState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_SetState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_SetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "SetState", nullptr, nullptr, sizeof(SAIController_eventSetState_Parms), Z_Construct_UFunction_ASAIController_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_StartIdle_Statics
	{
		struct SAIController_eventStartIdle_Parms
		{
			ESAIState PreviousState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASAIController_StartIdle_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASAIController_StartIdle_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventStartIdle_Parms, PreviousState), Z_Construct_UEnum_AISentience_ESAIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_StartIdle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_StartIdle_Statics::NewProp_PreviousState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_StartIdle_Statics::NewProp_PreviousState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_StartIdle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_StartIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "StartIdle", nullptr, nullptr, sizeof(SAIController_eventStartIdle_Parms), Z_Construct_UFunction_ASAIController_StartIdle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_StartIdle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_StartIdle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_StartIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_StartIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_StartIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_StartInvestigating_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventStartInvestigating_Parms, NewSound), Z_Construct_UScriptStruct_FSAISound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "StartInvestigating", nullptr, nullptr, sizeof(SAIController_eventStartInvestigating_Parms), Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_StartInvestigating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_StartInvestigating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_StopInvestigating_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_StopInvestigating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_StopInvestigating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "StopInvestigating", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_StopInvestigating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_StopInvestigating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_StopInvestigating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_StopInvestigating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_TickTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_TickTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_TickTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "TickTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_TickTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_TickTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_TickTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_TickTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics
	{
		struct SAIController_eventUnIgnoreTarget_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventUnIgnoreTarget_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "UnIgnoreTarget", nullptr, nullptr, sizeof(SAIController_eventUnIgnoreTarget_Parms), Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_UnIgnoreTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_UnIgnoreTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_UpdateBlackBoardParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_UpdateBlackBoardParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_UpdateBlackBoardParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "UpdateBlackBoardParameters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_UpdateBlackBoardParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_UpdateBlackBoardParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_UpdateBlackBoardParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_UpdateBlackBoardParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static void NewProp_bLockTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIController_eventUpdateCurrentTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::NewProp_bLockTarget_SetBit(void* Obj)
	{
		((SAIController_eventUpdateCurrentTarget_Parms*)Obj)->bLockTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::NewProp_bLockTarget = { "bLockTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIController_eventUpdateCurrentTarget_Parms), &Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::NewProp_bLockTarget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::NewProp_NewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::NewProp_bLockTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAIController, nullptr, "UpdateCurrentTarget", nullptr, nullptr, sizeof(SAIController_eventUpdateCurrentTarget_Parms), Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAIController_UpdateCurrentTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAIController_UpdateCurrentTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAIController_NoRegister()
	{
		return ASAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatestSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatestSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsInvestigating_MetaData[];
#endif
		static void NewProp_bWantsInvestigating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsInvestigating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alertness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alertness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockCurrentTarget_MetaData[];
#endif
		static void NewProp_bLockCurrentTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockCurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFocus_MetaData[];
#endif
		static void NewProp_bUseFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnUnPossess_MetaData[];
#endif
		static void NewProp_bDestroyOnUnPossess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnUnPossess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceThreatAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceThreatAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageThreatAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageThreatAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionThreatAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuppressionThreatAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreatDecaySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThreatDecaySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVisibleWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetVisibleWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDistanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetDistanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDamageWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetDamageWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetThreatWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetThreatWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPrejudiceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetPrejudiceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTimeWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetTimeWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPlayerWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetPlayerWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDetectionSightTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDetectionSightTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSightTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSightTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionDecaySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionDecaySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertnessDecaySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlertnessDecaySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrejudiceDecaySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrejudiceDecaySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePrejudiceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePrejudiceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityPrejudiceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisibilityPrejudiceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetedPrejudiceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetedPrejudiceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAlertness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAlertness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAlertness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAlertness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetUpdateFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSightDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSightDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionAlertnessWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionAlertnessWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionDetectionAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuppressionDetectionAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFriendlySoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFriendlySoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentTargetKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSeenLocationKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LastSeenLocationKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSensedLocationKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LastSensedLocationKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VisibleKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigatingKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InvestigatingKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvestigatingLocationKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InvestigatingLocationKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatestSoundAgeKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LatestSoundAgeKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreatKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThreatKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDotKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SightDotKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanSeeAgentKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CanSeeAgentKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxThreatKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaxThreatKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertnessKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AlertnessKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DetectionKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHealthKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetHealthKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HealthKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedLocationKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PredictedLocationKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSinceSawTargetKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TimeSinceSawTargetKeyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceKeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DistanceKeyName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinSoundLocationUpdatePriority_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSoundLocationUpdatePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MinSoundLocationUpdatePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSoundSwitchAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSoundSwitchAge;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttitudeOverrides_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttitudeOverrides_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttitudeOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttitudeOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AttitudeOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCrowdSimulation_MetaData[];
#endif
		static void NewProp_bEnableCrowdSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCrowdSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSlowDownAtGoal_MetaData[];
#endif
		static void NewProp_bEnableSlowDownAtGoal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSlowDownAtGoal;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetLost_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetDied_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetDied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTargetSightUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetSightUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredTargets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAIController_AddAlertness, "AddAlertness" }, // 1385939081
		{ &Z_Construct_UFunction_ASAIController_AddDetection, "AddDetection" }, // 4117352776
		{ &Z_Construct_UFunction_ASAIController_AddTarget, "AddTarget" }, // 811125823
		{ &Z_Construct_UFunction_ASAIController_BlueprintGetTeamAttitudeTowards, "BlueprintGetTeamAttitudeTowards" }, // 2432258793
		{ &Z_Construct_UFunction_ASAIController_EndIdle, "EndIdle" }, // 211941397
		{ &Z_Construct_UFunction_ASAIController_GetCurrentTarget, "GetCurrentTarget" }, // 381582488
		{ &Z_Construct_UFunction_ASAIController_GetIgnoredTargets, "GetIgnoredTargets" }, // 2564976563
		{ &Z_Construct_UFunction_ASAIController_GetState, "GetState" }, // 1399216713
		{ &Z_Construct_UFunction_ASAIController_GetTargetRef, "GetTargetRef" }, // 813202169
		{ &Z_Construct_UFunction_ASAIController_GetTargets, "GetTargets" }, // 3055239136
		{ &Z_Construct_UFunction_ASAIController_GetTargetScore, "GetTargetScore" }, // 4248831928
		{ &Z_Construct_UFunction_ASAIController_GetTargetStrength, "GetTargetStrength" }, // 4085468162
		{ &Z_Construct_UFunction_ASAIController_HasCurrentTarget, "HasCurrentTarget" }, // 182041436
		{ &Z_Construct_UFunction_ASAIController_IgnoreTarget, "IgnoreTarget" }, // 1096986192
		{ &Z_Construct_UFunction_ASAIController_InfoSharingComponentUpdated, "InfoSharingComponentUpdated" }, // 4219595303
		{ &Z_Construct_UFunction_ASAIController_IsAlert, "IsAlert" }, // 3371629984
		{ &Z_Construct_UFunction_ASAIController_IsInvestigating, "IsInvestigating" }, // 3931133356
		{ &Z_Construct_UFunction_ASAIController_IsTargetDead, "IsTargetDead" }, // 2495854250
		{ &Z_Construct_UFunction_ASAIController_OnAISenseDamage, "OnAISenseDamage" }, // 346626278
		{ &Z_Construct_UFunction_ASAIController_OnAISenseHearing, "OnAISenseHearing" }, // 1740847244
		{ &Z_Construct_UFunction_ASAIController_OnAISenseSight, "OnAISenseSight" }, // 3719459694
		{ &Z_Construct_UFunction_ASAIController_OnAISenseSuppression, "OnAISenseSuppression" }, // 154621148
		{ &Z_Construct_UFunction_ASAIController_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 3920589888
		{ &Z_Construct_UFunction_ASAIController_PickTarget, "PickTarget" }, // 3689146645
		{ &Z_Construct_UFunction_ASAIController_SetState, "SetState" }, // 1304610671
		{ &Z_Construct_UFunction_ASAIController_StartIdle, "StartIdle" }, // 2572549163
		{ &Z_Construct_UFunction_ASAIController_StartInvestigating, "StartInvestigating" }, // 3591524330
		{ &Z_Construct_UFunction_ASAIController_StopInvestigating, "StopInvestigating" }, // 1824080130
		{ &Z_Construct_UFunction_ASAIController_TickTargets, "TickTargets" }, // 1072683402
		{ &Z_Construct_UFunction_ASAIController_UnIgnoreTarget, "UnIgnoreTarget" }, // 1459273018
		{ &Z_Construct_UFunction_ASAIController_UpdateBlackBoardParameters, "UpdateBlackBoardParameters" }, // 4003068326
		{ &Z_Construct_UFunction_ASAIController_UpdateCurrentTarget, "UpdateCurrentTarget" }, // 1094144552
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSound = { "LatestSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, LatestSound), Z_Construct_UScriptStruct_FSAISound, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bWantsInvestigating_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bWantsInvestigating_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bWantsInvestigating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bWantsInvestigating = { "bWantsInvestigating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bWantsInvestigating_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bWantsInvestigating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bWantsInvestigating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_Alertness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_Alertness = { "Alertness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, Alertness), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_Alertness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_Alertness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bLockCurrentTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bLockCurrentTarget_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bLockCurrentTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bLockCurrentTarget = { "bLockCurrentTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bLockCurrentTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bLockCurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bLockCurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bUseFocus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bUseFocus_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bUseFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bUseFocus = { "bUseFocus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bUseFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bUseFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bUseFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bDestroyOnUnPossess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bDestroyOnUnPossess_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bDestroyOnUnPossess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bDestroyOnUnPossess = { "bDestroyOnUnPossess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bDestroyOnUnPossess_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bDestroyOnUnPossess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bDestroyOnUnPossess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_LightManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_LightManager = { "LightManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, LightManager), Z_Construct_UClass_ALightManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_LightManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_LightManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceThreatAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceThreatAmount = { "DistanceThreatAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, DistanceThreatAmount), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceThreatAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceThreatAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_DamageThreatAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_DamageThreatAmount = { "DamageThreatAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, DamageThreatAmount), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_DamageThreatAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_DamageThreatAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionThreatAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionThreatAmount = { "SuppressionThreatAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, SuppressionThreatAmount), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionThreatAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionThreatAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatDecaySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatDecaySpeed = { "ThreatDecaySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, ThreatDecaySpeed), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatDecaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatDecaySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetVisibleWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetVisibleWeight = { "TargetVisibleWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetVisibleWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetVisibleWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetVisibleWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDistanceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDistanceWeight = { "TargetDistanceWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetDistanceWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDistanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDistanceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDamageWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDamageWeight = { "TargetDamageWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetDamageWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDamageWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDamageWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetThreatWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetThreatWeight = { "TargetThreatWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetThreatWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetThreatWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetThreatWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPrejudiceWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPrejudiceWeight = { "TargetPrejudiceWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetPrejudiceWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPrejudiceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPrejudiceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetTimeWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetTimeWeight = { "TargetTimeWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetTimeWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetTimeWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetTimeWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPlayerWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPlayerWeight = { "TargetPlayerWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetPlayerWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPlayerWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPlayerWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MinDetectionSightTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MinDetectionSightTime = { "MinDetectionSightTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MinDetectionSightTime), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MinDetectionSightTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MinDetectionSightTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightTime = { "MaxSightTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MaxSightTime), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionDecaySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionDecaySpeed = { "DetectionDecaySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, DetectionDecaySpeed), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionDecaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionDecaySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessDecaySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessDecaySpeed = { "AlertnessDecaySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, AlertnessDecaySpeed), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessDecaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessDecaySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_PrejudiceDecaySpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_PrejudiceDecaySpeed = { "PrejudiceDecaySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, PrejudiceDecaySpeed), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_PrejudiceDecaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_PrejudiceDecaySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_DamagePrejudiceAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_DamagePrejudiceAmount = { "DamagePrejudiceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, DamagePrejudiceAmount), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_DamagePrejudiceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_DamagePrejudiceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_VisibilityPrejudiceAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_VisibilityPrejudiceAmount = { "VisibilityPrejudiceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, VisibilityPrejudiceAmount), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_VisibilityPrejudiceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_VisibilityPrejudiceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetedPrejudiceAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetedPrejudiceAmount = { "TargetedPrejudiceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetedPrejudiceAmount), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetedPrejudiceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetedPrejudiceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MinAlertness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MinAlertness = { "MinAlertness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MinAlertness), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MinAlertness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MinAlertness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MaxAlertness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MaxAlertness = { "MaxAlertness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MaxAlertness), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MaxAlertness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MaxAlertness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetUpdateFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetUpdateFrequency = { "TargetUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightDistance = { "MaxSightDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MaxSightDistance), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionAlertnessWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionAlertnessWeight = { "DetectionAlertnessWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, DetectionAlertnessWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionAlertnessWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionAlertnessWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionDetectionAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionDetectionAmount = { "SuppressionDetectionAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, SuppressionDetectionAmount), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionDetectionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionDetectionAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MinFriendlySoundRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MinFriendlySoundRadius = { "MinFriendlySoundRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MinFriendlySoundRadius), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MinFriendlySoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MinFriendlySoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTargetKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTargetKeyName = { "CurrentTargetKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, CurrentTargetKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTargetKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTargetKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_LastSeenLocationKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_LastSeenLocationKeyName = { "LastSeenLocationKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, LastSeenLocationKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_LastSeenLocationKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_LastSeenLocationKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_LastSensedLocationKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_LastSensedLocationKeyName = { "LastSensedLocationKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, LastSensedLocationKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_LastSensedLocationKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_LastSensedLocationKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_LocationKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_LocationKeyName = { "LocationKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, LocationKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_LocationKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_LocationKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_VisibleKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_VisibleKeyName = { "VisibleKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, VisibleKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_VisibleKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_VisibleKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingKeyName = { "InvestigatingKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, InvestigatingKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingLocationKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingLocationKeyName = { "InvestigatingLocationKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, InvestigatingLocationKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingLocationKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingLocationKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSoundAgeKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSoundAgeKeyName = { "LatestSoundAgeKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, LatestSoundAgeKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSoundAgeKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSoundAgeKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatKeyName = { "ThreatKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, ThreatKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_SightDotKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_SightDotKeyName = { "SightDotKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, SightDotKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_SightDotKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_SightDotKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_CanSeeAgentKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_CanSeeAgentKeyName = { "CanSeeAgentKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, CanSeeAgentKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_CanSeeAgentKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_CanSeeAgentKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MaxThreatKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MaxThreatKeyName = { "MaxThreatKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MaxThreatKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MaxThreatKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MaxThreatKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessKeyName = { "AlertnessKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, AlertnessKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionKeyName = { "DetectionKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, DetectionKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TargetHealthKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TargetHealthKeyName = { "TargetHealthKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TargetHealthKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetHealthKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TargetHealthKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_HealthKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_HealthKeyName = { "HealthKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, HealthKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_HealthKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_HealthKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_PredictedLocationKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_PredictedLocationKeyName = { "PredictedLocationKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, PredictedLocationKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_PredictedLocationKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_PredictedLocationKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_TimeSinceSawTargetKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_TimeSinceSawTargetKeyName = { "TimeSinceSawTargetKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, TimeSinceSawTargetKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_TimeSinceSawTargetKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_TimeSinceSawTargetKeyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceKeyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceKeyName = { "DistanceKeyName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, DistanceKeyName), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceKeyName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_Team_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_Team_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, Team), Z_Construct_UEnum_AISentience_ESAITeam, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_Team_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundLocationUpdatePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundLocationUpdatePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundLocationUpdatePriority = { "MinSoundLocationUpdatePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MinSoundLocationUpdatePriority), Z_Construct_UEnum_AISentience_ESAISoundType, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundLocationUpdatePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundLocationUpdatePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundSwitchAge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundSwitchAge = { "MinSoundSwitchAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, MinSoundSwitchAge), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundSwitchAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundSwitchAge_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_ValueProp = { "AttitudeOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_Key_KeyProp = { "AttitudeOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AISentience_ESAITeam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides = { "AttitudeOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, AttitudeOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSimulation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSimulation_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bEnableCrowdSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSimulation = { "bEnableCrowdSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableSlowDownAtGoal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableSlowDownAtGoal_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bEnableSlowDownAtGoal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableSlowDownAtGoal = { "bEnableSlowDownAtGoal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableSlowDownAtGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableSlowDownAtGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableSlowDownAtGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSeparation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSeparation_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bEnableCrowdSeparation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSeparation = { "bEnableCrowdSeparation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSeparation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSeparation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSeparation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdObstacleAvoidance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdObstacleAvoidance_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bEnableCrowdObstacleAvoidance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdObstacleAvoidance = { "bEnableCrowdObstacleAvoidance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdObstacleAvoidance_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdObstacleAvoidance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdObstacleAvoidance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdAnticipateTurns_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdAnticipateTurns_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bEnableCrowdAnticipateTurns = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdAnticipateTurns = { "bEnableCrowdAnticipateTurns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdAnticipateTurns_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdAnticipateTurns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdAnticipateTurns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdOptimizeVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdOptimizeVisibility_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bEnableCrowdOptimizeVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdOptimizeVisibility = { "bEnableCrowdOptimizeVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdOptimizeVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdOptimizeVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdOptimizeVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdPathOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	void Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdPathOffset_SetBit(void* Obj)
	{
		((ASAIController*)Obj)->bEnableCrowdPathOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdPathOffset = { "bEnableCrowdPathOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAIController), &Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdPathOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdPathOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdPathOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_CrowdSeparationWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_CrowdSeparationWeight = { "CrowdSeparationWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, CrowdSeparationWeight), METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_CrowdSeparationWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_CrowdSeparationWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetAdded = { "OnTargetAdded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, OnTargetAdded), Z_Construct_UDelegateFunction_AISentience_SAITargetUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetLost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetLost = { "OnTargetLost", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, OnTargetLost), Z_Construct_UDelegateFunction_AISentience_SAITargetUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetDied_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetDied = { "OnTargetDied", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, OnTargetDied), Z_Construct_UDelegateFunction_AISentience_SAITargetUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetDied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetDied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetSightUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetSightUpdated = { "OnTargetSightUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, OnTargetSightUpdated), Z_Construct_UDelegateFunction_AISentience_SAITargetSightUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetSightUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetSightUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSAITarget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_Targets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_Targets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_IgnoredTargets_Inner = { "IgnoredTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::NewProp_IgnoredTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIController" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASAIController_Statics::NewProp_IgnoredTargets = { "IgnoredTargets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIController, IgnoredTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::NewProp_IgnoredTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::NewProp_IgnoredTargets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bWantsInvestigating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_Alertness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bLockCurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bUseFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bDestroyOnUnPossess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_LightManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceThreatAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_DamageThreatAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionThreatAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatDecaySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetVisibleWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDistanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetDamageWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetThreatWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPrejudiceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetTimeWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetPlayerWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MinDetectionSightTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionDecaySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessDecaySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_PrejudiceDecaySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_DamagePrejudiceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_VisibilityPrejudiceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetedPrejudiceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MinAlertness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MaxAlertness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetUpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MaxSightDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionAlertnessWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_SuppressionDetectionAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MinFriendlySoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTargetKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_LastSeenLocationKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_LastSensedLocationKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_LocationKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_VisibleKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_InvestigatingLocationKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_LatestSoundAgeKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_ThreatKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_SightDotKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_CanSeeAgentKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MaxThreatKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_AlertnessKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_DetectionKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TargetHealthKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_HealthKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_PredictedLocationKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_TimeSinceSawTargetKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_DistanceKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_Team_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundLocationUpdatePriority_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundLocationUpdatePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_MinSoundSwitchAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_AttitudeOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableSlowDownAtGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdSeparation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdObstacleAvoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdAnticipateTurns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdOptimizeVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_bEnableCrowdPathOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_CrowdSeparationWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetDied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_OnTargetSightUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_Targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_IgnoredTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIController_Statics::NewProp_IgnoredTargets,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASAIController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIInfoSharer_NoRegister, (int32)VTABLE_OFFSET(ASAIController, IAIInfoSharer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAIController_Statics::ClassParams = {
		&ASAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAIController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAIController, 3826228731);
	template<> AISENTIENCE_API UClass* StaticClass<ASAIController>()
	{
		return ASAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAIController(Z_Construct_UClass_ASAIController, &ASAIController::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
