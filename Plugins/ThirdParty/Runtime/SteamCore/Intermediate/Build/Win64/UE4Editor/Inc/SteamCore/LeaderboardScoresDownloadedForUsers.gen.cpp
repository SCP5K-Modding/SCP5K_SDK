// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LeaderboardScoresDownloadedForUsers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardScoresDownloadedForUsers() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
// End Cross Module References
class UScriptStruct* FLeaderboardScoresDownloadedForUsers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoresDownloadedForUsers"), sizeof(FLeaderboardScoresDownloadedForUsers), Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardScoresDownloadedForUsers>()
{
	return FLeaderboardScoresDownloadedForUsers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeaderboardScoresDownloadedForUsers(FLeaderboardScoresDownloadedForUsers::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LeaderboardScoresDownloadedForUsers"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloadedForUsers
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloadedForUsers()
	{
		UScriptStruct::DeferCppStructOps<FLeaderboardScoresDownloadedForUsers>(FName(TEXT("LeaderboardScoresDownloadedForUsers")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloadedForUsers;
	struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeaderboardScoresDownloadedForUsers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloadedForUsers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoresDownloadedForUsers" },
		{ "ModuleRelativePath", "Public/LeaderboardScoresDownloadedForUsers.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoresDownloadedForUsers" },
		{ "ModuleRelativePath", "Public/LeaderboardScoresDownloadedForUsers.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoresDownloadedForUsers" },
		{ "ModuleRelativePath", "Public/LeaderboardScoresDownloadedForUsers.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, EntryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardScoresDownloadedForUsers",
		sizeof(FLeaderboardScoresDownloadedForUsers),
		alignof(FLeaderboardScoresDownloadedForUsers),
		Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeaderboardScoresDownloadedForUsers"), sizeof(FLeaderboardScoresDownloadedForUsers), Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash() { return 430090573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
