// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIComponent() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIComponent_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAISquad_Types();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAISquad();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrolPath_NoRegister();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAIInteractionAnimations();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSeenTarget();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAIHeard();
// End Cross Module References
	DEFINE_FUNCTION(USAIComponent::execBuffMorale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BuffAmount);
		P_GET_UBOOL(Z_Param_bPlayVoiceLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuffMorale(Z_Param_BuffAmount,Z_Param_bPlayVoiceLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execCanRoamFromSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRoamFromSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetAllKnownTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAllKnownTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetCoverTraceDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCoverTraceDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetCurrentCalmBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESAIBehaviors_Calm::Type>*)Z_Param__Result=P_THIS->GetCurrentCalmBehavior();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetCurrentCombatBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESAIBehaviors_Combat::Type>*)Z_Param__Result=P_THIS->GetCurrentCombatBehavior();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetCurrentMorale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMorale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetCurrentPatrolKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentPatrolKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetCurrentSquadType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESAISquad_Types::Type>*)Z_Param__Result=P_THIS->GetCurrentSquadType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetDesiredTargetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetDesiredTargetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetDetectionSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDetectionSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetFireDelayMult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFireDelayMult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetLastDamageLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLastDamageLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetMaxCoverCrouchDist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxCoverCrouchDist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetMaxSquadMembers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxSquadMembers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetPatrolWaitTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPatrolWaitTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetReactionTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReactionTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetRoamRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoamRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetRoamWaitTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRoamWaitTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetSkillLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetSquadMembers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APawn*>*)Z_Param__Result=P_THIS->GetSquadMembers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetSquadRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAISquad*)Z_Param__Result=P_THIS->GetSquadRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execGetStartLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetStartLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execHasHeardNoise)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasHeardNoise();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execHasLowerCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasLowerCover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execHasUpperCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasUpperCover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execIsLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execNerfMorale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NerfAmount);
		P_GET_UBOOL(Z_Param_bPlayVoiceLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NerfMorale(Z_Param_NerfAmount,Z_Param_bPlayVoiceLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetAIBehaviorSwitchTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSwitchTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAIBehaviorSwitchTime(Z_Param_NewSwitchTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetAIVoices)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_NewVoices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAIVoices(Z_Param_NewVoices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetAvailableCalmBehaviors)
	{
		P_GET_TARRAY(TEnumAsByte<ESAIBehaviors_Calm::Type>,Z_Param_NewCalmBehaviors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAvailableCalmBehaviors(Z_Param_NewCalmBehaviors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetCurrentCalmBehavior)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewCalmBehavior);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentCalmBehavior(ESAIBehaviors_Calm::Type(Z_Param_NewCalmBehavior));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetCurrentMorale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMorale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentMorale(Z_Param_NewMorale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetFireDelayMult)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFireDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFireDelayMult(Z_Param_NewFireDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetMoraleMultipler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoraleMultipler(Z_Param_NewMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetPatrolDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPatrolDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPatrolDelay(Z_Param_NewPatrolDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetPatrolPath)
	{
		P_GET_OBJECT(ASAIPatrolPath,Z_Param_NewPatrolPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPatrolPath(Z_Param_NewPatrolPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetRoamFromSpawn)
	{
		P_GET_UBOOL(Z_Param_bShouldUseStart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoamFromSpawn(Z_Param_bShouldUseStart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetRoamRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoamRadius(Z_Param_NewRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetSkillLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewSkillLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillLevel(Z_Param_NewSkillLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetSquadRef)
	{
		P_GET_STRUCT(FAISquad,Z_Param_NewSquadRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSquadRef(Z_Param_NewSquadRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAIComponent::execSetSquadType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewSquadType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSquadType(ESAISquad_Types::Type(Z_Param_NewSquadType));
		P_NATIVE_END;
	}
	static FName NAME_USAIComponent_EventEnemyDied = FName(TEXT("EventEnemyDied"));
	void USAIComponent::EventEnemyDied(bool bShouldPlayVoiceline)
	{
		SAIComponent_eventEventEnemyDied_Parms Parms;
		Parms.bShouldPlayVoiceline=bShouldPlayVoiceline ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USAIComponent_EventEnemyDied),&Parms);
	}
	static FName NAME_USAIComponent_EventFriendlyDied = FName(TEXT("EventFriendlyDied"));
	void USAIComponent::EventFriendlyDied(bool bShouldPlayVoiceline, bool bIsLastSquadMember)
	{
		SAIComponent_eventEventFriendlyDied_Parms Parms;
		Parms.bShouldPlayVoiceline=bShouldPlayVoiceline ? true : false;
		Parms.bIsLastSquadMember=bIsLastSquadMember ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USAIComponent_EventFriendlyDied),&Parms);
	}
	static FName NAME_USAIComponent_EventMovingToCover = FName(TEXT("EventMovingToCover"));
	void USAIComponent::EventMovingToCover(bool bShouldPlayVoiceline)
	{
		SAIComponent_eventEventMovingToCover_Parms Parms;
		Parms.bShouldPlayVoiceline=bShouldPlayVoiceline ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USAIComponent_EventMovingToCover),&Parms);
	}
	static FName NAME_USAIComponent_EventStartInteraction = FName(TEXT("EventStartInteraction"));
	void USAIComponent::EventStartInteraction(bool bShouldPlayVoiceline)
	{
		SAIComponent_eventEventStartInteraction_Parms Parms;
		Parms.bShouldPlayVoiceline=bShouldPlayVoiceline ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USAIComponent_EventStartInteraction),&Parms);
	}
	static FName NAME_USAIComponent_PlayVoiceLine = FName(TEXT("PlayVoiceLine"));
	void USAIComponent::PlayVoiceLine(FName VoicelineType)
	{
		SAIComponent_eventPlayVoiceLine_Parms Parms;
		Parms.VoicelineType=VoicelineType;
		ProcessEvent(FindFunctionChecked(NAME_USAIComponent_PlayVoiceLine),&Parms);
	}
	static FName NAME_USAIComponent_RandomizeCalmBehavior = FName(TEXT("RandomizeCalmBehavior"));
	void USAIComponent::RandomizeCalmBehavior()
	{
		ProcessEvent(FindFunctionChecked(NAME_USAIComponent_RandomizeCalmBehavior),NULL);
	}
	void USAIComponent::StaticRegisterNativesUSAIComponent()
	{
		UClass* Class = USAIComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuffMorale", &USAIComponent::execBuffMorale },
			{ "CanRoamFromSpawn", &USAIComponent::execCanRoamFromSpawn },
			{ "GetAllKnownTargets", &USAIComponent::execGetAllKnownTargets },
			{ "GetCoverTraceDistance", &USAIComponent::execGetCoverTraceDistance },
			{ "GetCurrentCalmBehavior", &USAIComponent::execGetCurrentCalmBehavior },
			{ "GetCurrentCombatBehavior", &USAIComponent::execGetCurrentCombatBehavior },
			{ "GetCurrentMorale", &USAIComponent::execGetCurrentMorale },
			{ "GetCurrentPatrolKey", &USAIComponent::execGetCurrentPatrolKey },
			{ "GetCurrentSquadType", &USAIComponent::execGetCurrentSquadType },
			{ "GetDesiredTargetActor", &USAIComponent::execGetDesiredTargetActor },
			{ "GetDetectionSpeed", &USAIComponent::execGetDetectionSpeed },
			{ "GetFireDelayMult", &USAIComponent::execGetFireDelayMult },
			{ "GetLastDamageLocation", &USAIComponent::execGetLastDamageLocation },
			{ "GetMaxCoverCrouchDist", &USAIComponent::execGetMaxCoverCrouchDist },
			{ "GetMaxSquadMembers", &USAIComponent::execGetMaxSquadMembers },
			{ "GetPatrolWaitTime", &USAIComponent::execGetPatrolWaitTime },
			{ "GetReactionTime", &USAIComponent::execGetReactionTime },
			{ "GetRoamRadius", &USAIComponent::execGetRoamRadius },
			{ "GetRoamWaitTime", &USAIComponent::execGetRoamWaitTime },
			{ "GetSkillLevel", &USAIComponent::execGetSkillLevel },
			{ "GetSquadMembers", &USAIComponent::execGetSquadMembers },
			{ "GetSquadRef", &USAIComponent::execGetSquadRef },
			{ "GetStartLocation", &USAIComponent::execGetStartLocation },
			{ "HasHeardNoise", &USAIComponent::execHasHeardNoise },
			{ "HasLowerCover", &USAIComponent::execHasLowerCover },
			{ "HasUpperCover", &USAIComponent::execHasUpperCover },
			{ "IsLeader", &USAIComponent::execIsLeader },
			{ "NerfMorale", &USAIComponent::execNerfMorale },
			{ "SetAIBehaviorSwitchTime", &USAIComponent::execSetAIBehaviorSwitchTime },
			{ "SetAIVoices", &USAIComponent::execSetAIVoices },
			{ "SetAvailableCalmBehaviors", &USAIComponent::execSetAvailableCalmBehaviors },
			{ "SetCurrentCalmBehavior", &USAIComponent::execSetCurrentCalmBehavior },
			{ "SetCurrentMorale", &USAIComponent::execSetCurrentMorale },
			{ "SetFireDelayMult", &USAIComponent::execSetFireDelayMult },
			{ "SetMoraleMultipler", &USAIComponent::execSetMoraleMultipler },
			{ "SetPatrolDelay", &USAIComponent::execSetPatrolDelay },
			{ "SetPatrolPath", &USAIComponent::execSetPatrolPath },
			{ "SetRoamFromSpawn", &USAIComponent::execSetRoamFromSpawn },
			{ "SetRoamRadius", &USAIComponent::execSetRoamRadius },
			{ "SetSkillLevel", &USAIComponent::execSetSkillLevel },
			{ "SetSquadRef", &USAIComponent::execSetSquadRef },
			{ "SetSquadType", &USAIComponent::execSetSquadType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAIComponent_BuffMorale_Statics
	{
		struct SAIComponent_eventBuffMorale_Parms
		{
			float BuffAmount;
			bool bPlayVoiceLine;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffAmount;
		static void NewProp_bPlayVoiceLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayVoiceLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::NewProp_BuffAmount = { "BuffAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventBuffMorale_Parms, BuffAmount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::NewProp_bPlayVoiceLine_SetBit(void* Obj)
	{
		((SAIComponent_eventBuffMorale_Parms*)Obj)->bPlayVoiceLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::NewProp_bPlayVoiceLine = { "bPlayVoiceLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventBuffMorale_Parms), &Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::NewProp_bPlayVoiceLine_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::NewProp_BuffAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::NewProp_bPlayVoiceLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "BuffMorale", nullptr, nullptr, sizeof(SAIComponent_eventBuffMorale_Parms), Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_BuffMorale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_BuffMorale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics
	{
		struct SAIComponent_eventCanRoamFromSpawn_Parms
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
	void Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIComponent_eventCanRoamFromSpawn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventCanRoamFromSpawn_Parms), &Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "CanRoamFromSpawn", nullptr, nullptr, sizeof(SAIComponent_eventCanRoamFromSpawn_Parms), Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics
	{
		static void NewProp_bShouldPlayVoiceline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPlayVoiceline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::NewProp_bShouldPlayVoiceline_SetBit(void* Obj)
	{
		((SAIComponent_eventEventEnemyDied_Parms*)Obj)->bShouldPlayVoiceline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::NewProp_bShouldPlayVoiceline = { "bShouldPlayVoiceline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventEventEnemyDied_Parms), &Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::NewProp_bShouldPlayVoiceline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::NewProp_bShouldPlayVoiceline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "EventEnemyDied", nullptr, nullptr, sizeof(SAIComponent_eventEventEnemyDied_Parms), Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_EventEnemyDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_EventEnemyDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics
	{
		static void NewProp_bShouldPlayVoiceline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPlayVoiceline;
		static void NewProp_bIsLastSquadMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLastSquadMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::NewProp_bShouldPlayVoiceline_SetBit(void* Obj)
	{
		((SAIComponent_eventEventFriendlyDied_Parms*)Obj)->bShouldPlayVoiceline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::NewProp_bShouldPlayVoiceline = { "bShouldPlayVoiceline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventEventFriendlyDied_Parms), &Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::NewProp_bShouldPlayVoiceline_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::NewProp_bIsLastSquadMember_SetBit(void* Obj)
	{
		((SAIComponent_eventEventFriendlyDied_Parms*)Obj)->bIsLastSquadMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::NewProp_bIsLastSquadMember = { "bIsLastSquadMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventEventFriendlyDied_Parms), &Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::NewProp_bIsLastSquadMember_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::NewProp_bShouldPlayVoiceline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::NewProp_bIsLastSquadMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "EventFriendlyDied", nullptr, nullptr, sizeof(SAIComponent_eventEventFriendlyDied_Parms), Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_EventFriendlyDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_EventFriendlyDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics
	{
		static void NewProp_bShouldPlayVoiceline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPlayVoiceline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::NewProp_bShouldPlayVoiceline_SetBit(void* Obj)
	{
		((SAIComponent_eventEventMovingToCover_Parms*)Obj)->bShouldPlayVoiceline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::NewProp_bShouldPlayVoiceline = { "bShouldPlayVoiceline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventEventMovingToCover_Parms), &Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::NewProp_bShouldPlayVoiceline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::NewProp_bShouldPlayVoiceline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "EventMovingToCover", nullptr, nullptr, sizeof(SAIComponent_eventEventMovingToCover_Parms), Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_EventMovingToCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_EventMovingToCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics
	{
		static void NewProp_bShouldPlayVoiceline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPlayVoiceline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::NewProp_bShouldPlayVoiceline_SetBit(void* Obj)
	{
		((SAIComponent_eventEventStartInteraction_Parms*)Obj)->bShouldPlayVoiceline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::NewProp_bShouldPlayVoiceline = { "bShouldPlayVoiceline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventEventStartInteraction_Parms), &Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::NewProp_bShouldPlayVoiceline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::NewProp_bShouldPlayVoiceline,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "EventStartInteraction", nullptr, nullptr, sizeof(SAIComponent_eventEventStartInteraction_Parms), Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_EventStartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_EventStartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics
	{
		struct SAIComponent_eventGetAllKnownTargets_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetAllKnownTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetAllKnownTargets", nullptr, nullptr, sizeof(SAIComponent_eventGetAllKnownTargets_Parms), Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetAllKnownTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetAllKnownTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics
	{
		struct SAIComponent_eventGetCoverTraceDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetCoverTraceDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetCoverTraceDistance", nullptr, nullptr, sizeof(SAIComponent_eventGetCoverTraceDistance_Parms), Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics
	{
		struct SAIComponent_eventGetCurrentCalmBehavior_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetCurrentCalmBehavior_Parms, ReturnValue), Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetCurrentCalmBehavior", nullptr, nullptr, sizeof(SAIComponent_eventGetCurrentCalmBehavior_Parms), Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics
	{
		struct SAIComponent_eventGetCurrentCombatBehavior_Parms
		{
			TEnumAsByte<ESAIBehaviors_Combat::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetCurrentCombatBehavior_Parms, ReturnValue), Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetCurrentCombatBehavior", nullptr, nullptr, sizeof(SAIComponent_eventGetCurrentCombatBehavior_Parms), Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics
	{
		struct SAIComponent_eventGetCurrentMorale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetCurrentMorale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetCurrentMorale", nullptr, nullptr, sizeof(SAIComponent_eventGetCurrentMorale_Parms), Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetCurrentMorale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetCurrentMorale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics
	{
		struct SAIComponent_eventGetCurrentPatrolKey_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetCurrentPatrolKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetCurrentPatrolKey", nullptr, nullptr, sizeof(SAIComponent_eventGetCurrentPatrolKey_Parms), Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics
	{
		struct SAIComponent_eventGetCurrentSquadType_Parms
		{
			TEnumAsByte<ESAISquad_Types::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetCurrentSquadType_Parms, ReturnValue), Z_Construct_UEnum_AISentience_ESAISquad_Types, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetCurrentSquadType", nullptr, nullptr, sizeof(SAIComponent_eventGetCurrentSquadType_Parms), Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetCurrentSquadType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetCurrentSquadType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics
	{
		struct SAIComponent_eventGetDesiredTargetActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetDesiredTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetDesiredTargetActor", nullptr, nullptr, sizeof(SAIComponent_eventGetDesiredTargetActor_Parms), Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics
	{
		struct SAIComponent_eventGetDetectionSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetDetectionSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetDetectionSpeed", nullptr, nullptr, sizeof(SAIComponent_eventGetDetectionSpeed_Parms), Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetDetectionSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetDetectionSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics
	{
		struct SAIComponent_eventGetFireDelayMult_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetFireDelayMult_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetFireDelayMult", nullptr, nullptr, sizeof(SAIComponent_eventGetFireDelayMult_Parms), Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetFireDelayMult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetFireDelayMult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics
	{
		struct SAIComponent_eventGetLastDamageLocation_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetLastDamageLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetLastDamageLocation", nullptr, nullptr, sizeof(SAIComponent_eventGetLastDamageLocation_Parms), Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetLastDamageLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetLastDamageLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics
	{
		struct SAIComponent_eventGetMaxCoverCrouchDist_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetMaxCoverCrouchDist_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetMaxCoverCrouchDist", nullptr, nullptr, sizeof(SAIComponent_eventGetMaxCoverCrouchDist_Parms), Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics
	{
		struct SAIComponent_eventGetMaxSquadMembers_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetMaxSquadMembers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetMaxSquadMembers", nullptr, nullptr, sizeof(SAIComponent_eventGetMaxSquadMembers_Parms), Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics
	{
		struct SAIComponent_eventGetPatrolWaitTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetPatrolWaitTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetPatrolWaitTime", nullptr, nullptr, sizeof(SAIComponent_eventGetPatrolWaitTime_Parms), Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics
	{
		struct SAIComponent_eventGetReactionTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetReactionTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetReactionTime", nullptr, nullptr, sizeof(SAIComponent_eventGetReactionTime_Parms), Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetReactionTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetReactionTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics
	{
		struct SAIComponent_eventGetRoamRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetRoamRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetRoamRadius", nullptr, nullptr, sizeof(SAIComponent_eventGetRoamRadius_Parms), Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetRoamRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetRoamRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics
	{
		struct SAIComponent_eventGetRoamWaitTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetRoamWaitTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetRoamWaitTime", nullptr, nullptr, sizeof(SAIComponent_eventGetRoamWaitTime_Parms), Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetRoamWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetRoamWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics
	{
		struct SAIComponent_eventGetSkillLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetSkillLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetSkillLevel", nullptr, nullptr, sizeof(SAIComponent_eventGetSkillLevel_Parms), Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetSkillLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetSkillLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics
	{
		struct SAIComponent_eventGetSquadMembers_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetSquadMembers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetSquadMembers", nullptr, nullptr, sizeof(SAIComponent_eventGetSquadMembers_Parms), Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetSquadMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetSquadMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics
	{
		struct SAIComponent_eventGetSquadRef_Parms
		{
			FAISquad ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetSquadRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FAISquad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetSquadRef", nullptr, nullptr, sizeof(SAIComponent_eventGetSquadRef_Parms), Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetSquadRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetSquadRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics
	{
		struct SAIComponent_eventGetStartLocation_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventGetStartLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "GetStartLocation", nullptr, nullptr, sizeof(SAIComponent_eventGetStartLocation_Parms), Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_GetStartLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_GetStartLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics
	{
		struct SAIComponent_eventHasHeardNoise_Parms
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
	void Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIComponent_eventHasHeardNoise_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventHasHeardNoise_Parms), &Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "HasHeardNoise", nullptr, nullptr, sizeof(SAIComponent_eventHasHeardNoise_Parms), Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_HasHeardNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_HasHeardNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics
	{
		struct SAIComponent_eventHasLowerCover_Parms
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
	void Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIComponent_eventHasLowerCover_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventHasLowerCover_Parms), &Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "HasLowerCover", nullptr, nullptr, sizeof(SAIComponent_eventHasLowerCover_Parms), Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_HasLowerCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_HasLowerCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics
	{
		struct SAIComponent_eventHasUpperCover_Parms
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
	void Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIComponent_eventHasUpperCover_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventHasUpperCover_Parms), &Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "HasUpperCover", nullptr, nullptr, sizeof(SAIComponent_eventHasUpperCover_Parms), Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_HasUpperCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_HasUpperCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_IsLeader_Statics
	{
		struct SAIComponent_eventIsLeader_Parms
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
	void Z_Construct_UFunction_USAIComponent_IsLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SAIComponent_eventIsLeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_IsLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventIsLeader_Parms), &Z_Construct_UFunction_USAIComponent_IsLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_IsLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_IsLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_IsLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_IsLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "IsLeader", nullptr, nullptr, sizeof(SAIComponent_eventIsLeader_Parms), Z_Construct_UFunction_USAIComponent_IsLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_IsLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_IsLeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_IsLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_IsLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_IsLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_NerfMorale_Statics
	{
		struct SAIComponent_eventNerfMorale_Parms
		{
			float NerfAmount;
			bool bPlayVoiceLine;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NerfAmount;
		static void NewProp_bPlayVoiceLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayVoiceLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::NewProp_NerfAmount = { "NerfAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventNerfMorale_Parms, NerfAmount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::NewProp_bPlayVoiceLine_SetBit(void* Obj)
	{
		((SAIComponent_eventNerfMorale_Parms*)Obj)->bPlayVoiceLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::NewProp_bPlayVoiceLine = { "bPlayVoiceLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventNerfMorale_Parms), &Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::NewProp_bPlayVoiceLine_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::NewProp_NerfAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::NewProp_bPlayVoiceLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "NerfMorale", nullptr, nullptr, sizeof(SAIComponent_eventNerfMorale_Parms), Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_NerfMorale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_NerfMorale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VoicelineType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::NewProp_VoicelineType = { "VoicelineType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventPlayVoiceLine_Parms, VoicelineType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::NewProp_VoicelineType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "PlayVoiceLine", nullptr, nullptr, sizeof(SAIComponent_eventPlayVoiceLine_Parms), Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_PlayVoiceLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_PlayVoiceLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_RandomizeCalmBehavior_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_RandomizeCalmBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_RandomizeCalmBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "RandomizeCalmBehavior", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_RandomizeCalmBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_RandomizeCalmBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_RandomizeCalmBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_RandomizeCalmBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics
	{
		struct SAIComponent_eventSetAIBehaviorSwitchTime_Parms
		{
			float NewSwitchTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSwitchTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::NewProp_NewSwitchTime = { "NewSwitchTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetAIBehaviorSwitchTime_Parms, NewSwitchTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::NewProp_NewSwitchTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetAIBehaviorSwitchTime", nullptr, nullptr, sizeof(SAIComponent_eventSetAIBehaviorSwitchTime_Parms), Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics
	{
		struct SAIComponent_eventSetAIVoices_Parms
		{
			FDataTableRowHandle NewVoices;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVoices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::NewProp_NewVoices = { "NewVoices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetAIVoices_Parms, NewVoices), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::NewProp_NewVoices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetAIVoices", nullptr, nullptr, sizeof(SAIComponent_eventSetAIVoices_Parms), Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetAIVoices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetAIVoices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics
	{
		struct SAIComponent_eventSetAvailableCalmBehaviors_Parms
		{
			TArray<TEnumAsByte<ESAIBehaviors_Calm::Type> > NewCalmBehaviors;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCalmBehaviors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewCalmBehaviors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::NewProp_NewCalmBehaviors_Inner = { "NewCalmBehaviors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::NewProp_NewCalmBehaviors = { "NewCalmBehaviors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetAvailableCalmBehaviors_Parms, NewCalmBehaviors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::NewProp_NewCalmBehaviors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::NewProp_NewCalmBehaviors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetAvailableCalmBehaviors", nullptr, nullptr, sizeof(SAIComponent_eventSetAvailableCalmBehaviors_Parms), Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics
	{
		struct SAIComponent_eventSetCurrentCalmBehavior_Parms
		{
			TEnumAsByte<ESAIBehaviors_Calm::Type> NewCalmBehavior;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCalmBehavior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::NewProp_NewCalmBehavior = { "NewCalmBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetCurrentCalmBehavior_Parms, NewCalmBehavior), Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::NewProp_NewCalmBehavior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetCurrentCalmBehavior", nullptr, nullptr, sizeof(SAIComponent_eventSetCurrentCalmBehavior_Parms), Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics
	{
		struct SAIComponent_eventSetCurrentMorale_Parms
		{
			float NewMorale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMorale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::NewProp_NewMorale = { "NewMorale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetCurrentMorale_Parms, NewMorale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::NewProp_NewMorale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetCurrentMorale", nullptr, nullptr, sizeof(SAIComponent_eventSetCurrentMorale_Parms), Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetCurrentMorale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetCurrentMorale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics
	{
		struct SAIComponent_eventSetFireDelayMult_Parms
		{
			float NewFireDelay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFireDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::NewProp_NewFireDelay = { "NewFireDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetFireDelayMult_Parms, NewFireDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::NewProp_NewFireDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetFireDelayMult", nullptr, nullptr, sizeof(SAIComponent_eventSetFireDelayMult_Parms), Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetFireDelayMult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetFireDelayMult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics
	{
		struct SAIComponent_eventSetMoraleMultipler_Parms
		{
			float NewMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::NewProp_NewMultiplier = { "NewMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetMoraleMultipler_Parms, NewMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::NewProp_NewMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetMoraleMultipler", nullptr, nullptr, sizeof(SAIComponent_eventSetMoraleMultipler_Parms), Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetMoraleMultipler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetMoraleMultipler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics
	{
		struct SAIComponent_eventSetPatrolDelay_Parms
		{
			float NewPatrolDelay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPatrolDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::NewProp_NewPatrolDelay = { "NewPatrolDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetPatrolDelay_Parms, NewPatrolDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::NewProp_NewPatrolDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetPatrolDelay", nullptr, nullptr, sizeof(SAIComponent_eventSetPatrolDelay_Parms), Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetPatrolDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetPatrolDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics
	{
		struct SAIComponent_eventSetPatrolPath_Parms
		{
			ASAIPatrolPath* NewPatrolPath;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPatrolPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::NewProp_NewPatrolPath = { "NewPatrolPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetPatrolPath_Parms, NewPatrolPath), Z_Construct_UClass_ASAIPatrolPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::NewProp_NewPatrolPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetPatrolPath", nullptr, nullptr, sizeof(SAIComponent_eventSetPatrolPath_Parms), Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetPatrolPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetPatrolPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics
	{
		struct SAIComponent_eventSetRoamFromSpawn_Parms
		{
			bool bShouldUseStart;
		};
		static void NewProp_bShouldUseStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUseStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::NewProp_bShouldUseStart_SetBit(void* Obj)
	{
		((SAIComponent_eventSetRoamFromSpawn_Parms*)Obj)->bShouldUseStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::NewProp_bShouldUseStart = { "bShouldUseStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SAIComponent_eventSetRoamFromSpawn_Parms), &Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::NewProp_bShouldUseStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::NewProp_bShouldUseStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetRoamFromSpawn", nullptr, nullptr, sizeof(SAIComponent_eventSetRoamFromSpawn_Parms), Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics
	{
		struct SAIComponent_eventSetRoamRadius_Parms
		{
			float NewRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetRoamRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetRoamRadius", nullptr, nullptr, sizeof(SAIComponent_eventSetRoamRadius_Parms), Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetRoamRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetRoamRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics
	{
		struct SAIComponent_eventSetSkillLevel_Parms
		{
			int32 NewSkillLevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewSkillLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::NewProp_NewSkillLevel = { "NewSkillLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetSkillLevel_Parms, NewSkillLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::NewProp_NewSkillLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetSkillLevel", nullptr, nullptr, sizeof(SAIComponent_eventSetSkillLevel_Parms), Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetSkillLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetSkillLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics
	{
		struct SAIComponent_eventSetSquadRef_Parms
		{
			FAISquad NewSquadRef;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSquadRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::NewProp_NewSquadRef = { "NewSquadRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetSquadRef_Parms, NewSquadRef), Z_Construct_UScriptStruct_FAISquad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::NewProp_NewSquadRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetSquadRef", nullptr, nullptr, sizeof(SAIComponent_eventSetSquadRef_Parms), Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetSquadRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetSquadRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAIComponent_SetSquadType_Statics
	{
		struct SAIComponent_eventSetSquadType_Parms
		{
			TEnumAsByte<ESAISquad_Types::Type> NewSquadType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewSquadType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::NewProp_NewSquadType = { "NewSquadType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAIComponent_eventSetSquadType_Parms, NewSquadType), Z_Construct_UEnum_AISentience_ESAISquad_Types, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::NewProp_NewSquadType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAIComponent, nullptr, "SetSquadType", nullptr, nullptr, sizeof(SAIComponent_eventSetSquadType_Parms), Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAIComponent_SetSquadType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAIComponent_SetSquadType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAIComponent_NoRegister()
	{
		return USAIComponent::StaticClass();
	}
	struct Z_Construct_UClass_USAIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlyInteracting_MetaData[];
#endif
		static void NewProp_bCurrentlyInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlyInteracting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionAnims_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionAnims;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMorale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMorale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoraleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoraleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReactionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoverTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCoverCrouchDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCoverCrouchDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireDelayMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireDelayMult;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllPerceivedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllPerceivedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllPerceivedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllKnownTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllKnownTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllKnownTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredTargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DesiredTargetActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllKnownTargets_New_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllKnownTargets_New_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllKnownTargets_New;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BestTarget_New_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BestTarget_New;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldEverDropAlert_MetaData[];
#endif
		static void NewProp_bShouldEverDropAlert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldEverDropAlert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeTillCalm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeTillCalm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHeardNoise_MetaData[];
#endif
		static void NewProp_bHeardNoise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHeardNoise;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllHeardActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllHeardActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllHeardActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllRelevantHeardActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllRelevantHeardActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllRelevantHeardActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLowerCover_MetaData[];
#endif
		static void NewProp_bHasLowerCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLowerCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasUpperCover_MetaData[];
#endif
		static void NewProp_bHasUpperCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasUpperCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRightCover_MetaData[];
#endif
		static void NewProp_bHasRightCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRightCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLeftCover_MetaData[];
#endif
		static void NewProp_bHasLeftCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLeftCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCalmBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentCalmBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCombatBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentCombatBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSquadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentSquadType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvailableCalmBehaviors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableCalmBehaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableCalmBehaviors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorSwitchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BehaviorSwitchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCombat_MetaData[];
#endif
		static void NewProp_bInCombat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCombat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasEverBeenInCombat_MetaData[];
#endif
		static void NewProp_bHasEverBeenInCombat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasEverBeenInCombat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombatTension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CombatTension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNearbyCover_MetaData[];
#endif
		static void NewProp_bHasNearbyCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNearbyCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInCover_MetaData[];
#endif
		static void NewProp_bIsInCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLastKnownLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLastKnownLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDamageLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastDamageLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLeader_MetaData[];
#endif
		static void NewProp_bIsLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSquadMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSquadMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SquadMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SquadMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquadRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SquadRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPatrolkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentPatrolkey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPointWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolPointWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoamWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoamWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoamFromSpawn_MetaData[];
#endif
		static void NewProp_bRoamFromSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoamFromSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIVoiceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIVoiceData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAIComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAIComponent_BuffMorale, "BuffMorale" }, // 2939256830
		{ &Z_Construct_UFunction_USAIComponent_CanRoamFromSpawn, "CanRoamFromSpawn" }, // 739124856
		{ &Z_Construct_UFunction_USAIComponent_EventEnemyDied, "EventEnemyDied" }, // 2379589031
		{ &Z_Construct_UFunction_USAIComponent_EventFriendlyDied, "EventFriendlyDied" }, // 4294000325
		{ &Z_Construct_UFunction_USAIComponent_EventMovingToCover, "EventMovingToCover" }, // 3387557807
		{ &Z_Construct_UFunction_USAIComponent_EventStartInteraction, "EventStartInteraction" }, // 2864809201
		{ &Z_Construct_UFunction_USAIComponent_GetAllKnownTargets, "GetAllKnownTargets" }, // 2832736332
		{ &Z_Construct_UFunction_USAIComponent_GetCoverTraceDistance, "GetCoverTraceDistance" }, // 3641099706
		{ &Z_Construct_UFunction_USAIComponent_GetCurrentCalmBehavior, "GetCurrentCalmBehavior" }, // 1044856025
		{ &Z_Construct_UFunction_USAIComponent_GetCurrentCombatBehavior, "GetCurrentCombatBehavior" }, // 3070964675
		{ &Z_Construct_UFunction_USAIComponent_GetCurrentMorale, "GetCurrentMorale" }, // 1864782734
		{ &Z_Construct_UFunction_USAIComponent_GetCurrentPatrolKey, "GetCurrentPatrolKey" }, // 3479187787
		{ &Z_Construct_UFunction_USAIComponent_GetCurrentSquadType, "GetCurrentSquadType" }, // 4033468317
		{ &Z_Construct_UFunction_USAIComponent_GetDesiredTargetActor, "GetDesiredTargetActor" }, // 2953796347
		{ &Z_Construct_UFunction_USAIComponent_GetDetectionSpeed, "GetDetectionSpeed" }, // 636110181
		{ &Z_Construct_UFunction_USAIComponent_GetFireDelayMult, "GetFireDelayMult" }, // 532397923
		{ &Z_Construct_UFunction_USAIComponent_GetLastDamageLocation, "GetLastDamageLocation" }, // 2642694366
		{ &Z_Construct_UFunction_USAIComponent_GetMaxCoverCrouchDist, "GetMaxCoverCrouchDist" }, // 2139747303
		{ &Z_Construct_UFunction_USAIComponent_GetMaxSquadMembers, "GetMaxSquadMembers" }, // 3365939247
		{ &Z_Construct_UFunction_USAIComponent_GetPatrolWaitTime, "GetPatrolWaitTime" }, // 1560297722
		{ &Z_Construct_UFunction_USAIComponent_GetReactionTime, "GetReactionTime" }, // 238990795
		{ &Z_Construct_UFunction_USAIComponent_GetRoamRadius, "GetRoamRadius" }, // 4239789837
		{ &Z_Construct_UFunction_USAIComponent_GetRoamWaitTime, "GetRoamWaitTime" }, // 371458728
		{ &Z_Construct_UFunction_USAIComponent_GetSkillLevel, "GetSkillLevel" }, // 447421523
		{ &Z_Construct_UFunction_USAIComponent_GetSquadMembers, "GetSquadMembers" }, // 547616460
		{ &Z_Construct_UFunction_USAIComponent_GetSquadRef, "GetSquadRef" }, // 624062386
		{ &Z_Construct_UFunction_USAIComponent_GetStartLocation, "GetStartLocation" }, // 2463435973
		{ &Z_Construct_UFunction_USAIComponent_HasHeardNoise, "HasHeardNoise" }, // 1723225801
		{ &Z_Construct_UFunction_USAIComponent_HasLowerCover, "HasLowerCover" }, // 2131012959
		{ &Z_Construct_UFunction_USAIComponent_HasUpperCover, "HasUpperCover" }, // 103280661
		{ &Z_Construct_UFunction_USAIComponent_IsLeader, "IsLeader" }, // 853176792
		{ &Z_Construct_UFunction_USAIComponent_NerfMorale, "NerfMorale" }, // 259577904
		{ &Z_Construct_UFunction_USAIComponent_PlayVoiceLine, "PlayVoiceLine" }, // 518476507
		{ &Z_Construct_UFunction_USAIComponent_RandomizeCalmBehavior, "RandomizeCalmBehavior" }, // 2874427086
		{ &Z_Construct_UFunction_USAIComponent_SetAIBehaviorSwitchTime, "SetAIBehaviorSwitchTime" }, // 2633409442
		{ &Z_Construct_UFunction_USAIComponent_SetAIVoices, "SetAIVoices" }, // 297310401
		{ &Z_Construct_UFunction_USAIComponent_SetAvailableCalmBehaviors, "SetAvailableCalmBehaviors" }, // 732368082
		{ &Z_Construct_UFunction_USAIComponent_SetCurrentCalmBehavior, "SetCurrentCalmBehavior" }, // 1203241798
		{ &Z_Construct_UFunction_USAIComponent_SetCurrentMorale, "SetCurrentMorale" }, // 3617487867
		{ &Z_Construct_UFunction_USAIComponent_SetFireDelayMult, "SetFireDelayMult" }, // 2613232508
		{ &Z_Construct_UFunction_USAIComponent_SetMoraleMultipler, "SetMoraleMultipler" }, // 2096656004
		{ &Z_Construct_UFunction_USAIComponent_SetPatrolDelay, "SetPatrolDelay" }, // 4199542635
		{ &Z_Construct_UFunction_USAIComponent_SetPatrolPath, "SetPatrolPath" }, // 4287353932
		{ &Z_Construct_UFunction_USAIComponent_SetRoamFromSpawn, "SetRoamFromSpawn" }, // 960596496
		{ &Z_Construct_UFunction_USAIComponent_SetRoamRadius, "SetRoamRadius" }, // 316922576
		{ &Z_Construct_UFunction_USAIComponent_SetSkillLevel, "SetSkillLevel" }, // 3266673742
		{ &Z_Construct_UFunction_USAIComponent_SetSquadRef, "SetSquadRef" }, // 1598805219
		{ &Z_Construct_UFunction_USAIComponent_SetSquadType, "SetSquadType" }, // 3625477101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SAIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bCurrentlyInteracting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bCurrentlyInteracting_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bCurrentlyInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bCurrentlyInteracting = { "bCurrentlyInteracting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bCurrentlyInteracting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bCurrentlyInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bCurrentlyInteracting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractionAnims_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractionAnims = { "InteractionAnims", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, InteractionAnims), Z_Construct_UScriptStruct_FAIInteractionAnimations, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractionAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractionAnims_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractTransform = { "InteractTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, InteractTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentMorale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentMorale = { "CurrentMorale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, CurrentMorale), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentMorale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentMorale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_MoraleMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_MoraleMultiplier = { "MoraleMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, MoraleMultiplier), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_MoraleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_MoraleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_ReactionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_ReactionTime = { "ReactionTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, ReactionTime), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_ReactionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_ReactionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionSpeed = { "DetectionSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, DetectionSpeed), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_CoverTraceDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_CoverTraceDistance = { "CoverTraceDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, CoverTraceDistance), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_CoverTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_CoverTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxCoverCrouchDist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxCoverCrouchDist = { "MaxCoverCrouchDist", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, MaxCoverCrouchDist), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxCoverCrouchDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxCoverCrouchDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_FireDelayMult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_FireDelayMult = { "FireDelayMult", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, FireDelayMult), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_FireDelayMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_FireDelayMult_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllPerceivedActors_Inner = { "AllPerceivedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_AllPerceivedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllPerceivedActors = { "AllPerceivedActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, AllPerceivedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllPerceivedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllPerceivedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_Inner = { "AllKnownTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets = { "AllKnownTargets", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, AllKnownTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_DesiredTargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_DesiredTargetActor = { "DesiredTargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, DesiredTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_DesiredTargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_DesiredTargetActor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_New_Inner = { "AllKnownTargets_New", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSeenTarget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_New_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_New = { "AllKnownTargets_New", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, AllKnownTargets_New), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_New_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_BestTarget_New_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_BestTarget_New = { "BestTarget_New", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, BestTarget_New), Z_Construct_UScriptStruct_FSeenTarget, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_BestTarget_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_BestTarget_New_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionRate = { "DetectionRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, DetectionRate), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bShouldEverDropAlert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bShouldEverDropAlert_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bShouldEverDropAlert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bShouldEverDropAlert = { "bShouldEverDropAlert", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bShouldEverDropAlert_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bShouldEverDropAlert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bShouldEverDropAlert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_TimeTillCalm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_TimeTillCalm = { "TimeTillCalm", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, TimeTillCalm), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_TimeTillCalm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_TimeTillCalm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bHeardNoise_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bHeardNoise_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bHeardNoise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bHeardNoise = { "bHeardNoise", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bHeardNoise_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHeardNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHeardNoise_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllHeardActors_Inner = { "AllHeardActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIHeard, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_AllHeardActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllHeardActors = { "AllHeardActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, AllHeardActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllHeardActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllHeardActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllRelevantHeardActors_Inner = { "AllRelevantHeardActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIHeard, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_AllRelevantHeardActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AllRelevantHeardActors = { "AllRelevantHeardActors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, AllRelevantHeardActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllRelevantHeardActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_AllRelevantHeardActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLowerCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLowerCover_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bHasLowerCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLowerCover = { "bHasLowerCover", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLowerCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLowerCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLowerCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasUpperCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasUpperCover_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bHasUpperCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasUpperCover = { "bHasUpperCover", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasUpperCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasUpperCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasUpperCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasRightCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasRightCover_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bHasRightCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasRightCover = { "bHasRightCover", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasRightCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasRightCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasRightCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLeftCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLeftCover_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bHasLeftCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLeftCover = { "bHasLeftCover", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLeftCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLeftCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLeftCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCalmBehavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCalmBehavior = { "CurrentCalmBehavior", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, CurrentCalmBehavior), Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCalmBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCalmBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCombatBehavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCombatBehavior = { "CurrentCombatBehavior", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, CurrentCombatBehavior), Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCombatBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCombatBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentSquadType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentSquadType = { "CurrentSquadType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, CurrentSquadType), Z_Construct_UEnum_AISentience_ESAISquad_Types, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentSquadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentSquadType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AvailableCalmBehaviors_Inner = { "AvailableCalmBehaviors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_AvailableCalmBehaviors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AvailableCalmBehaviors = { "AvailableCalmBehaviors", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, AvailableCalmBehaviors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_AvailableCalmBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_AvailableCalmBehaviors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_BehaviorSwitchTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_BehaviorSwitchTime = { "BehaviorSwitchTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, BehaviorSwitchTime), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_BehaviorSwitchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_BehaviorSwitchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_SkillLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_SkillLevel = { "SkillLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, SkillLevel), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_SkillLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_SkillLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bInCombat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bInCombat_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bInCombat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bInCombat = { "bInCombat", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bInCombat_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bInCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bInCombat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasEverBeenInCombat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasEverBeenInCombat_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bHasEverBeenInCombat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasEverBeenInCombat = { "bHasEverBeenInCombat", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasEverBeenInCombat_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasEverBeenInCombat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasEverBeenInCombat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_CombatTension_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_CombatTension = { "CombatTension", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, CombatTension), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_CombatTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_CombatTension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasNearbyCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasNearbyCover_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bHasNearbyCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasNearbyCover = { "bHasNearbyCover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasNearbyCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasNearbyCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasNearbyCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsInCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsInCover_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bIsInCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsInCover = { "bIsInCover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsInCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsInCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsInCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_TargetLastKnownLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_TargetLastKnownLocation = { "TargetLastKnownLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, TargetLastKnownLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_TargetLastKnownLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_TargetLastKnownLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_LastDamageLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_LastDamageLocation = { "LastDamageLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, LastDamageLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_LastDamageLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_LastDamageLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsLeader_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bIsLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsLeader = { "bIsLeader", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsLeader_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxSquadMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxSquadMembers = { "MaxSquadMembers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, MaxSquadMembers), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxSquadMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxSquadMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_LeaderPawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_LeaderPawn = { "LeaderPawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, LeaderPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_LeaderPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_LeaderPawn_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadMembers_Inner = { "SquadMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadMembers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadMembers = { "SquadMembers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, SquadMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadMembers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadRef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadRef = { "SquadRef", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, SquadRef), Z_Construct_UScriptStruct_FAISquad, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentPatrolkey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentPatrolkey = { "CurrentPatrolkey", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, CurrentPatrolkey), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentPatrolkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentPatrolkey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, PatrolPath), Z_Construct_UClass_ASAIPatrolPath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPointWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPointWaitTime = { "PatrolPointWaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, PatrolPointWaitTime), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPointWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPointWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamRadius = { "RoamRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, RoamRadius), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamWaitTime = { "RoamWaitTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, RoamWaitTime), METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_bRoamFromSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	void Z_Construct_UClass_USAIComponent_Statics::NewProp_bRoamFromSpawn_SetBit(void* Obj)
	{
		((USAIComponent*)Obj)->bRoamFromSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_bRoamFromSpawn = { "bRoamFromSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USAIComponent), &Z_Construct_UClass_USAIComponent_Statics::NewProp_bRoamFromSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_bRoamFromSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_bRoamFromSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIComponent_Statics::NewProp_AIVoiceData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIComponent" },
		{ "ModuleRelativePath", "Public/SAIComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIComponent_Statics::NewProp_AIVoiceData = { "AIVoiceData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIComponent, AIVoiceData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::NewProp_AIVoiceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::NewProp_AIVoiceData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAIComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bCurrentlyInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractionAnims,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_InteractTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentMorale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_MoraleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_ReactionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_CoverTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxCoverCrouchDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_FireDelayMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllPerceivedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllPerceivedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_DesiredTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_New_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllKnownTargets_New,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_BestTarget_New,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_DetectionRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bShouldEverDropAlert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_TimeTillCalm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bHeardNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllHeardActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllHeardActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllRelevantHeardActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AllRelevantHeardActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLowerCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasUpperCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasRightCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasLeftCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCalmBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentCombatBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentSquadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AvailableCalmBehaviors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AvailableCalmBehaviors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_BehaviorSwitchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_SkillLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bInCombat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasEverBeenInCombat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_CombatTension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bHasNearbyCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsInCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_TargetLastKnownLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_LastDamageLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bIsLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_MaxSquadMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_LeaderPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_SquadRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_CurrentPatrolkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_PatrolPointWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_RoamWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_bRoamFromSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIComponent_Statics::NewProp_AIVoiceData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIComponent_Statics::ClassParams = {
		&USAIComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USAIComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USAIComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIComponent, 4126007612);
	template<> AISENTIENCE_API UClass* StaticClass<USAIComponent>()
	{
		return USAIComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIComponent(Z_Construct_UClass_USAIComponent, &USAIComponent::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIComponent"), false, nullptr, nullptr, nullptr);

	void USAIComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bHasLowerCover(TEXT("bHasLowerCover"));
		static const FName Name_bHasUpperCover(TEXT("bHasUpperCover"));
		static const FName Name_bHasRightCover(TEXT("bHasRightCover"));
		static const FName Name_bHasLeftCover(TEXT("bHasLeftCover"));

		const bool bIsValid = true
			&& Name_bHasLowerCover == ClassReps[(int32)ENetFields_Private::bHasLowerCover].Property->GetFName()
			&& Name_bHasUpperCover == ClassReps[(int32)ENetFields_Private::bHasUpperCover].Property->GetFName()
			&& Name_bHasRightCover == ClassReps[(int32)ENetFields_Private::bHasRightCover].Property->GetFName()
			&& Name_bHasLeftCover == ClassReps[(int32)ENetFields_Private::bHasLeftCover].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USAIComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
