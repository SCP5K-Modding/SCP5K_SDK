// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/AIMeleeAttackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMeleeAttackType() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAIMeleeAttackType();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UEnum* Z_Construct_UEnum_FPSController_EMeleeAttackDirection();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FAIMeleeAttackType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAIMeleeAttackType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIMeleeAttackType, Z_Construct_UPackage__Script_FPSController(), TEXT("AIMeleeAttackType"), sizeof(FAIMeleeAttackType), Get_Z_Construct_UScriptStruct_FAIMeleeAttackType_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FAIMeleeAttackType>()
{
	return FAIMeleeAttackType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIMeleeAttackType(FAIMeleeAttackType::StaticStruct, TEXT("/Script/FPSController"), TEXT("AIMeleeAttackType"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFAIMeleeAttackType
{
	FScriptStruct_FPSController_StaticRegisterNativesFAIMeleeAttackType()
	{
		UScriptStruct::DeferCppStructOps<FAIMeleeAttackType>(FName(TEXT("AIMeleeAttackType")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFAIMeleeAttackType;
	struct Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttackName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeBlocked_MetaData[];
#endif
		static void NewProp_bCanBeBlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireVisibility_MetaData[];
#endif
		static void NewProp_bRequireVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAttacksHitMultiple_MetaData[];
#endif
		static void NewProp_bShouldAttacksHitMultiple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAttacksHitMultiple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHitFriendlies_MetaData[];
#endif
		static void NewProp_bCanHitFriendlies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHitFriendlies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopDuringAttack_MetaData[];
#endif
		static void NewProp_bStopDuringAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopDuringAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControlRotationDirection_MetaData[];
#endif
		static void NewProp_bUseControlRotationDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControlRotationDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireClearance_MetaData[];
#endif
		static void NewProp_bRequireClearance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireClearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumClearance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumClearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAttackDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartAttackDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndAttackDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndAttackDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextAttackDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NextAttackDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetectionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAttackDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIMeleeAttackType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackName = { "AttackName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, AttackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanBeBlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanBeBlocked_SetBit(void* Obj)
	{
		((FAIMeleeAttackType*)Obj)->bCanBeBlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanBeBlocked = { "bCanBeBlocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAIMeleeAttackType), &Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanBeBlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanBeBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanBeBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireVisibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireVisibility_SetBit(void* Obj)
	{
		((FAIMeleeAttackType*)Obj)->bRequireVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireVisibility = { "bRequireVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAIMeleeAttackType), &Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireVisibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, AttackDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDirection = { "AttackDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, AttackDirection), Z_Construct_UEnum_FPSController_EMeleeAttackDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumSpeed = { "MinimumSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, MinimumSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MaximumSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MaximumSpeed = { "MaximumSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, MaximumSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MaximumSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MaximumSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bShouldAttacksHitMultiple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bShouldAttacksHitMultiple_SetBit(void* Obj)
	{
		((FAIMeleeAttackType*)Obj)->bShouldAttacksHitMultiple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bShouldAttacksHitMultiple = { "bShouldAttacksHitMultiple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAIMeleeAttackType), &Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bShouldAttacksHitMultiple_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bShouldAttacksHitMultiple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bShouldAttacksHitMultiple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanHitFriendlies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanHitFriendlies_SetBit(void* Obj)
	{
		((FAIMeleeAttackType*)Obj)->bCanHitFriendlies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanHitFriendlies = { "bCanHitFriendlies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAIMeleeAttackType), &Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanHitFriendlies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanHitFriendlies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanHitFriendlies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bStopDuringAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bStopDuringAttack_SetBit(void* Obj)
	{
		((FAIMeleeAttackType*)Obj)->bStopDuringAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bStopDuringAttack = { "bStopDuringAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAIMeleeAttackType), &Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bStopDuringAttack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bStopDuringAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bStopDuringAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bUseControlRotationDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bUseControlRotationDirection_SetBit(void* Obj)
	{
		((FAIMeleeAttackType*)Obj)->bUseControlRotationDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bUseControlRotationDirection = { "bUseControlRotationDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAIMeleeAttackType), &Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bUseControlRotationDirection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bUseControlRotationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bUseControlRotationDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireClearance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireClearance_SetBit(void* Obj)
	{
		((FAIMeleeAttackType*)Obj)->bRequireClearance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireClearance = { "bRequireClearance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAIMeleeAttackType), &Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireClearance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireClearance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireClearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumClearance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumClearance = { "MinimumClearance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, MinimumClearance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumClearance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumClearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_CancelMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_CancelMontage = { "CancelMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, CancelMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_CancelMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_CancelMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_Montage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_StartAttackDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_StartAttackDelay = { "StartAttackDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, StartAttackDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_StartAttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_StartAttackDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_EndAttackDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_EndAttackDelay = { "EndAttackDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, EndAttackDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_EndAttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_EndAttackDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_NextAttackDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_NextAttackDelay = { "NextAttackDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, NextAttackDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_NextAttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_NextAttackDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceSize = { "TraceSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, TraceSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, TraceLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_DetectionRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_DetectionRadius = { "DetectionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, DetectionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_DetectionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_DetectionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinAttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIMeleeAttackType" },
		{ "ModuleRelativePath", "Public/AIMeleeAttackType.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinAttackDistance = { "MinAttackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMeleeAttackType, MinAttackDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinAttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinAttackDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanBeBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_AttackDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MaximumSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bShouldAttacksHitMultiple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bCanHitFriendlies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bStopDuringAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bUseControlRotationDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_bRequireClearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinimumClearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_CancelMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_StartAttackDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_EndAttackDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_NextAttackDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_TraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_DetectionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::NewProp_MinAttackDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"AIMeleeAttackType",
		sizeof(FAIMeleeAttackType),
		alignof(FAIMeleeAttackType),
		Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIMeleeAttackType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIMeleeAttackType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIMeleeAttackType"), sizeof(FAIMeleeAttackType), Get_Z_Construct_UScriptStruct_FAIMeleeAttackType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIMeleeAttackType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIMeleeAttackType_Hash() { return 3438179967U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
