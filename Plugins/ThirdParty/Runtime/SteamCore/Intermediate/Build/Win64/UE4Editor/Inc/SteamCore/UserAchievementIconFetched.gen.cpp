// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UserAchievementIconFetched.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserAchievementIconFetched() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FUserAchievementIconFetched::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementIconFetched, Z_Construct_UPackage__Script_SteamCore(), TEXT("UserAchievementIconFetched"), sizeof(FUserAchievementIconFetched), Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserAchievementIconFetched>()
{
	return FUserAchievementIconFetched::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserAchievementIconFetched(FUserAchievementIconFetched::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UserAchievementIconFetched"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementIconFetched
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementIconFetched()
	{
		UScriptStruct::DeferCppStructOps<FUserAchievementIconFetched>(FName(TEXT("UserAchievementIconFetched")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementIconFetched;
	struct Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAchieved_MetaData[];
#endif
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserAchievementIconFetched.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementIconFetched>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementIconFetched" },
		{ "ModuleRelativePath", "Public/UserAchievementIconFetched.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementIconFetched, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementIconFetched" },
		{ "ModuleRelativePath", "Public/UserAchievementIconFetched.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementIconFetched, AchievementName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementIconFetched" },
		{ "ModuleRelativePath", "Public/UserAchievementIconFetched.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((FUserAchievementIconFetched*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserAchievementIconFetched), &Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserAchievementIconFetched" },
		{ "ModuleRelativePath", "Public/UserAchievementIconFetched.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementIconFetched, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserAchievementIconFetched",
		sizeof(FUserAchievementIconFetched),
		alignof(FUserAchievementIconFetched),
		Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserAchievementIconFetched"), sizeof(FUserAchievementIconFetched), Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash() { return 2206255278U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
