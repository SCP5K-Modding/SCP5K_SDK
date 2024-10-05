// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UserAchievementStored.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserAchievementStored() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
// End Cross Module References
class UScriptStruct* FUserAchievementStored::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementStored, Z_Construct_UPackage__Script_SteamCore(), TEXT("UserAchievementStored"), sizeof(FUserAchievementStored), Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserAchievementStored>()
{
	return FUserAchievementStored::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserAchievementStored(FUserAchievementStored::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UserAchievementStored"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementStored
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementStored()
	{
		UScriptStruct::DeferCppStructOps<FUserAchievementStored>(FName(TEXT("UserAchievementStored")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementStored;
	struct Z_Construct_UScriptStruct_FUserAchievementStored_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroupAchievement_MetaData[];
#endif
		static void NewProp_bGroupAchievement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroupAchievement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserAchievementStored.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementStored>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementStored" },
		{ "ModuleRelativePath", "Public/UserAchievementStored.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementStored" },
		{ "ModuleRelativePath", "Public/UserAchievementStored.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit(void* Obj)
	{
		((FUserAchievementStored*)Obj)->bGroupAchievement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement = { "bGroupAchievement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserAchievementStored), &Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementStored" },
		{ "ModuleRelativePath", "Public/UserAchievementStored.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementStored, AchievementName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementStored" },
		{ "ModuleRelativePath", "Public/UserAchievementStored.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementStored, CurrentProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementStored" },
		{ "ModuleRelativePath", "Public/UserAchievementStored.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementStored, MaxProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserAchievementStored",
		sizeof(FUserAchievementStored),
		alignof(FUserAchievementStored),
		Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserAchievementStored"), sizeof(FUserAchievementStored), Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserAchievementStored_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash() { return 3238030719U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
