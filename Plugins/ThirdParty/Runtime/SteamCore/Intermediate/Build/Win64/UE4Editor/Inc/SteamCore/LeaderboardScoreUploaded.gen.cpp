// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LeaderboardScoreUploaded.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardScoreUploaded() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
// End Cross Module References
class UScriptStruct* FLeaderboardScoreUploaded::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoreUploaded"), sizeof(FLeaderboardScoreUploaded), Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardScoreUploaded>()
{
	return FLeaderboardScoreUploaded::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeaderboardScoreUploaded(FLeaderboardScoreUploaded::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LeaderboardScoreUploaded"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoreUploaded
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoreUploaded()
	{
		UScriptStruct::DeferCppStructOps<FLeaderboardScoreUploaded>(FName(TEXT("LeaderboardScoreUploaded")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoreUploaded;
	struct Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScoreChanged_MetaData[];
#endif
		static void NewProp_bScoreChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalRankNew_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GlobalRankNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalRankPrevious_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GlobalRankPrevious;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LeaderboardScoreUploaded.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoreUploaded>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoreUploaded" },
		{ "ModuleRelativePath", "Public/LeaderboardScoreUploaded.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FLeaderboardScoreUploaded*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoreUploaded" },
		{ "ModuleRelativePath", "Public/LeaderboardScoreUploaded.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoreUploaded" },
		{ "ModuleRelativePath", "Public/LeaderboardScoreUploaded.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoreUploaded" },
		{ "ModuleRelativePath", "Public/LeaderboardScoreUploaded.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
	{
		((FLeaderboardScoreUploaded*)Obj)->bScoreChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoreUploaded" },
		{ "ModuleRelativePath", "Public/LeaderboardScoreUploaded.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew = { "GlobalRankNew", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankNew), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LeaderboardScoreUploaded" },
		{ "ModuleRelativePath", "Public/LeaderboardScoreUploaded.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious = { "GlobalRankPrevious", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankPrevious), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardScoreUploaded",
		sizeof(FLeaderboardScoreUploaded),
		alignof(FLeaderboardScoreUploaded),
		Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeaderboardScoreUploaded"), sizeof(FLeaderboardScoreUploaded), Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash() { return 1021723110U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
