// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameServerItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameServerItem() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr();
// End Cross Module References
class UScriptStruct* FGameServerItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameServerItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerItem, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameServerItem"), sizeof(FGameServerItem), Get_Z_Construct_UScriptStruct_FGameServerItem_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameServerItem>()
{
	return FGameServerItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameServerItem(FGameServerItem::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameServerItem"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameServerItem
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameServerItem()
	{
		UScriptStruct::DeferCppStructOps<FGameServerItem>(FName(TEXT("GameServerItem")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameServerItem;
	struct Z_Construct_UScriptStruct_FGameServerItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamServerAddr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamServerAddr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Players;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPassword_MetaData[];
#endif
		static void NewProp_bPassword_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BSecure_MetaData[];
#endif
		static void NewProp_BSecure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BSecure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameServerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, ServerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, GameDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, GameTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr = { "SteamServerAddr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, SteamServerAddr), Z_Construct_UScriptStruct_FSteamServerAddr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, Ping), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, Players), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers = { "BotPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, BotPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, ServerVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit(void* Obj)
	{
		((FGameServerItem*)Obj)->bPassword = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword = { "bPassword", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BSecure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerItem" },
		{ "ModuleRelativePath", "Public/GameServerItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BSecure_SetBit(void* Obj)
	{
		((FGameServerItem*)Obj)->BSecure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BSecure = { "BSecure", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BSecure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BSecure,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameServerItem",
		sizeof(FGameServerItem),
		alignof(FGameServerItem),
		Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameServerItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameServerItem"), sizeof(FGameServerItem), Get_Z_Construct_UScriptStruct_FGameServerItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameServerItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameServerItem_Hash() { return 996510471U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
