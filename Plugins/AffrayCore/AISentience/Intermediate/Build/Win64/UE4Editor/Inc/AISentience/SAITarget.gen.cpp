// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAITarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAITarget() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAITarget();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSAITarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSAITarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAITarget, Z_Construct_UPackage__Script_AISentience(), TEXT("SAITarget"), sizeof(FSAITarget), Get_Z_Construct_UScriptStruct_FSAITarget_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSAITarget>()
{
	return FSAITarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAITarget(FSAITarget::StaticStruct, TEXT("/Script/AISentience"), TEXT("SAITarget"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSAITarget
{
	FScriptStruct_AISentience_StaticRegisterNativesFSAITarget()
	{
		UScriptStruct::DeferCppStructOps<FSAITarget>(FName(TEXT("SAITarget")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSAITarget;
	struct Z_Construct_UScriptStruct_FSAITarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenVisible_MetaData[];
#endif
		static void NewProp_bHasBeenVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Detection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Detection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prejudice_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Prejudice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastConfirmedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastConfirmedPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastConfirmedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastConfirmedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSensedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSensedPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstSeenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstSeenTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSeenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastSeenTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightDot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxThreat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxThreat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAITarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAITarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FSAITarget*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSAITarget), &Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bHasBeenVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bHasBeenVisible_SetBit(void* Obj)
	{
		((FSAITarget*)Obj)->bHasBeenVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bHasBeenVisible = { "bHasBeenVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSAITarget), &Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bHasBeenVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bHasBeenVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bHasBeenVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_TeamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, TeamID), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_TeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Detection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Detection = { "Detection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, Detection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Detection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Detection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Prejudice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Prejudice = { "Prejudice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, Prejudice), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Prejudice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Prejudice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastLightIntensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastLightIntensity = { "LastLightIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, LastLightIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastLightIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastLightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedPosition = { "LastConfirmedPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, LastConfirmedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedVelocity = { "LastConfirmedVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, LastConfirmedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSensedPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSensedPosition = { "LastSensedPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, LastSensedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSensedPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSensedPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_FirstSeenTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_FirstSeenTime = { "FirstSeenTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, FirstSeenTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_FirstSeenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_FirstSeenTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSeenTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSeenTime = { "LastSeenTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, LastSeenTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSeenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSeenTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_SightDot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_SightDot = { "SightDot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, SightDot), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_SightDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_SightDot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Threat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Threat = { "Threat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, Threat), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Threat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Threat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_MaxThreat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_MaxThreat = { "MaxThreat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, MaxThreat), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_MaxThreat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_MaxThreat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAITarget" },
		{ "ModuleRelativePath", "Public/SAITarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAITarget, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAITarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_bHasBeenVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Detection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Prejudice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastLightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastConfirmedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSensedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_FirstSeenTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_LastSeenTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_SightDot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Threat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_MaxThreat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAITarget_Statics::NewProp_Health,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAITarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SAITarget",
		sizeof(FSAITarget),
		alignof(FSAITarget),
		Z_Construct_UScriptStruct_FSAITarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAITarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAITarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAITarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAITarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAITarget"), sizeof(FSAITarget), Get_Z_Construct_UScriptStruct_FSAITarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAITarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAITarget_Hash() { return 1339002311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
