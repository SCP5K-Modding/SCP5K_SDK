// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AISpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawn() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawn();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrolPath_NoRegister();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAISquad_Types();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
class UScriptStruct* FAISpawn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FAISpawn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISpawn, Z_Construct_UPackage__Script_AISentience(), TEXT("AISpawn"), sizeof(FAISpawn), Get_Z_Construct_UScriptStruct_FAISpawn_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FAISpawn>()
{
	return FAISpawn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISpawn(FAISpawn::StaticStruct, TEXT("/Script/AISentience"), TEXT("AISpawn"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFAISpawn
{
	FScriptStruct_AISentience_StaticRegisterNativesFAISpawn()
	{
		UScriptStruct::DeferCppStructOps<FAISpawn>(FName(TEXT("AISpawn")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFAISpawn;
	struct Z_Construct_UScriptStruct_FAISpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PotentialAIWeapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotentialAIWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PotentialAIWeapons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeLeader_MetaData[];
#endif
		static void NewProp_bShouldBeLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldEverBeLeader_MetaData[];
#endif
		static void NewProp_bShouldEverBeLeader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldEverBeLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredReactionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredReactionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredMinReactionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredMinReactionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredFireDelayMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredFireDelayMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSkillLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DesiredSkillLevel;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredPatrolPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DesiredPatrolPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredPatrolWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredPatrolWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredRoamRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredRoamRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredRoamWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredRoamWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoamingBasedOnSpawn_MetaData[];
#endif
		static void NewProp_bRoamingBasedOnSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoamingBasedOnSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredCalmBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DesiredCalmBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSquadType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DesiredSquadType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PotentialCalmBehaviors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotentialCalmBehaviors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PotentialCalmBehaviors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredBehaviorSwitchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredBehaviorSwitchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredCombatBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DesiredCombatBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredMorale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredMorale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredMoraleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredMoraleMultiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PotentialBodyModels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotentialBodyModels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PotentialBodyModels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PotentialHeadModels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotentialHeadModels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PotentialHeadModels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalAttachedMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalAttachedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalAttachedMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredAIVoiceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredAIVoiceData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISpawn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AIClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AIClass = { "AIClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, AIClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AIClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialAIWeapons_Inner = { "PotentialAIWeapons", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialAIWeapons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialAIWeapons = { "PotentialAIWeapons", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, PotentialAIWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialAIWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialAIWeapons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldBeLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldBeLeader_SetBit(void* Obj)
	{
		((FAISpawn*)Obj)->bShouldBeLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldBeLeader = { "bShouldBeLeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAISpawn), &Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldBeLeader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldBeLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldBeLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverBeLeader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverBeLeader_SetBit(void* Obj)
	{
		((FAISpawn*)Obj)->bShouldEverBeLeader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverBeLeader = { "bShouldEverBeLeader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAISpawn), &Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverBeLeader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverBeLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverBeLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredReactionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredReactionTime = { "DesiredReactionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredReactionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredReactionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredReactionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMinReactionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMinReactionTime = { "DesiredMinReactionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredMinReactionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMinReactionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMinReactionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredFireDelayMult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredFireDelayMult = { "DesiredFireDelayMult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredFireDelayMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredFireDelayMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredFireDelayMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSkillLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSkillLevel = { "DesiredSkillLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredSkillLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSkillLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSkillLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverDropAlert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverDropAlert_SetBit(void* Obj)
	{
		((FAISpawn*)Obj)->bShouldEverDropAlert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverDropAlert = { "bShouldEverDropAlert", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAISpawn), &Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverDropAlert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverDropAlert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverDropAlert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_TimeTillCalm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_TimeTillCalm = { "TimeTillCalm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, TimeTillCalm), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_TimeTillCalm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_TimeTillCalm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolPath = { "DesiredPatrolPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredPatrolPath), Z_Construct_UClass_ASAIPatrolPath_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolWaitTime = { "DesiredPatrolWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredPatrolWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamRadius = { "DesiredRoamRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredRoamRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamWaitTime = { "DesiredRoamWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredRoamWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bRoamingBasedOnSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bRoamingBasedOnSpawn_SetBit(void* Obj)
	{
		((FAISpawn*)Obj)->bRoamingBasedOnSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bRoamingBasedOnSpawn = { "bRoamingBasedOnSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAISpawn), &Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bRoamingBasedOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bRoamingBasedOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bRoamingBasedOnSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCalmBehavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCalmBehavior = { "DesiredCalmBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredCalmBehavior), Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCalmBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCalmBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSquadType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSquadType = { "DesiredSquadType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredSquadType), Z_Construct_UEnum_AISentience_ESAISquad_Types, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSquadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSquadType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialCalmBehaviors_Inner = { "PotentialCalmBehaviors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AISentience_ESAIBehaviors_Calm, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialCalmBehaviors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialCalmBehaviors = { "PotentialCalmBehaviors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, PotentialCalmBehaviors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialCalmBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialCalmBehaviors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredBehaviorSwitchTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredBehaviorSwitchTime = { "DesiredBehaviorSwitchTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredBehaviorSwitchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredBehaviorSwitchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredBehaviorSwitchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCombatBehavior_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCombatBehavior = { "DesiredCombatBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredCombatBehavior), Z_Construct_UEnum_AISentience_ESAIBehaviors_Combat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCombatBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCombatBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMorale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMorale = { "DesiredMorale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredMorale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMorale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMorale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMoraleMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMoraleMultiplier = { "DesiredMoraleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredMoraleMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMoraleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMoraleMultiplier_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialBodyModels_Inner = { "PotentialBodyModels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialBodyModels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialBodyModels = { "PotentialBodyModels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, PotentialBodyModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialBodyModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialBodyModels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialHeadModels_Inner = { "PotentialHeadModels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialHeadModels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialHeadModels = { "PotentialHeadModels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, PotentialHeadModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialHeadModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialHeadModels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AdditionalAttachedMeshes_Inner = { "AdditionalAttachedMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AdditionalAttachedMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AdditionalAttachedMeshes = { "AdditionalAttachedMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, AdditionalAttachedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AdditionalAttachedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AdditionalAttachedMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredAIVoiceData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISpawn" },
		{ "ModuleRelativePath", "Public/AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredAIVoiceData = { "DesiredAIVoiceData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawn, DesiredAIVoiceData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredAIVoiceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredAIVoiceData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialAIWeapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialAIWeapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldBeLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverBeLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredReactionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMinReactionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredFireDelayMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSkillLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bShouldEverDropAlert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_TimeTillCalm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredPatrolWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredRoamWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_bRoamingBasedOnSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCalmBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredSquadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialCalmBehaviors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialCalmBehaviors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredBehaviorSwitchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredCombatBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMorale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredMoraleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialBodyModels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialBodyModels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialHeadModels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_PotentialHeadModels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AdditionalAttachedMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_AdditionalAttachedMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawn_Statics::NewProp_DesiredAIVoiceData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISpawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"AISpawn",
		sizeof(FAISpawn),
		alignof(FAISpawn),
		Z_Construct_UScriptStruct_FAISpawn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISpawn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISpawn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISpawn"), sizeof(FAISpawn), Get_Z_Construct_UScriptStruct_FAISpawn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISpawn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISpawn_Hash() { return 429555850U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
