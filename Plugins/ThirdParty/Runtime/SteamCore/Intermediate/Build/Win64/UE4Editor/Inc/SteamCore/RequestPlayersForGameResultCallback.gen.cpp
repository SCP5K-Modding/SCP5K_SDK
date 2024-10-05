// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RequestPlayersForGameResultCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequestPlayersForGameResultCallback() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState();
// End Cross Module References
class UScriptStruct* FRequestPlayersForGameResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestPlayersForGameResultCallback"), sizeof(FRequestPlayersForGameResultCallback), Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestPlayersForGameResultCallback>()
{
	return FRequestPlayersForGameResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequestPlayersForGameResultCallback(FRequestPlayersForGameResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RequestPlayersForGameResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameResultCallback()
	{
		UScriptStruct::DeferCppStructOps<FRequestPlayersForGameResultCallback>(FName(TEXT("RequestPlayersForGameResultCallback")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRequestPlayersForGameResultCallback;
	struct Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDPlayerFound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayerFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerAcceptState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAcceptState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerAcceptState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersFound_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayersFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPlayersAcceptedGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayersAcceptedGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuggestedTeamIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuggestedTeamIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestPlayersForGameResultCallback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound = { "SteamIDPlayerFound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SteamIDPlayerFound), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState = { "PlayerAcceptState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, PlayerAcceptState), Z_Construct_UEnum_SteamCore_ESteamPlayerAcceptState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, PlayerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound = { "TotalPlayersFound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, TotalPlayersFound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame = { "TotalPlayersAcceptedGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, TotalPlayersAcceptedGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex = { "SuggestedTeamIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, SuggestedTeamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RequestPlayersForGameResultCallback" },
		{ "ModuleRelativePath", "Public/RequestPlayersForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestPlayersForGameResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SearchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDPlayerFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerAcceptState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_TotalPlayersAcceptedGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_SuggestedTeamIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::NewProp_UniqueGameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestPlayersForGameResultCallback",
		sizeof(FRequestPlayersForGameResultCallback),
		alignof(FRequestPlayersForGameResultCallback),
		Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RequestPlayersForGameResultCallback"), sizeof(FRequestPlayersForGameResultCallback), Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequestPlayersForGameResultCallback_Hash() { return 3204405645U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
