// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameLobbyJoinRequested.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLobbyJoinRequested() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameLobbyJoinRequested();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FGameLobbyJoinRequested::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameLobbyJoinRequested, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameLobbyJoinRequested"), sizeof(FGameLobbyJoinRequested), Get_Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameLobbyJoinRequested>()
{
	return FGameLobbyJoinRequested::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameLobbyJoinRequested(FGameLobbyJoinRequested::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameLobbyJoinRequested"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameLobbyJoinRequested
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameLobbyJoinRequested()
	{
		UScriptStruct::DeferCppStructOps<FGameLobbyJoinRequested>(FName(TEXT("GameLobbyJoinRequested")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameLobbyJoinRequested;
	struct Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameLobbyJoinRequested.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameLobbyJoinRequested>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLobbyJoinRequested" },
		{ "ModuleRelativePath", "Public/GameLobbyJoinRequested.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLobbyJoinRequested, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameLobbyJoinRequested" },
		{ "ModuleRelativePath", "Public/GameLobbyJoinRequested.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameLobbyJoinRequested, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDFriend_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::NewProp_SteamIDFriend,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameLobbyJoinRequested",
		sizeof(FGameLobbyJoinRequested),
		alignof(FGameLobbyJoinRequested),
		Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameLobbyJoinRequested()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameLobbyJoinRequested"), sizeof(FGameLobbyJoinRequested), Get_Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameLobbyJoinRequested_Hash() { return 3283310964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
