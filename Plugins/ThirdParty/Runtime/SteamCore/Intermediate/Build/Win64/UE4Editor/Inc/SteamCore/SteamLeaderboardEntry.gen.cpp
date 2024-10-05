// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamLeaderboardEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamLeaderboardEntry() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
// End Cross Module References
class UScriptStruct* FSteamLeaderboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntry, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboardEntry"), sizeof(FSteamLeaderboardEntry), Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamLeaderboardEntry>()
{
	return FSteamLeaderboardEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamLeaderboardEntry(FSteamLeaderboardEntry::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamLeaderboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntry
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntry()
	{
		UScriptStruct::DeferCppStructOps<FSteamLeaderboardEntry>(FName(TEXT("SteamLeaderboardEntry")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntry;
	struct Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GlobalRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamLeaderboardEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/SteamLeaderboardEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/SteamLeaderboardEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank = { "GlobalRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, GlobalRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/SteamLeaderboardEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/SteamLeaderboardEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, Details), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamLeaderboardEntry" },
		{ "ModuleRelativePath", "Public/SteamLeaderboardEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, UGCHandle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamLeaderboardEntry",
		sizeof(FSteamLeaderboardEntry),
		alignof(FSteamLeaderboardEntry),
		Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamLeaderboardEntry"), sizeof(FSteamLeaderboardEntry), Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash() { return 722650644U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
