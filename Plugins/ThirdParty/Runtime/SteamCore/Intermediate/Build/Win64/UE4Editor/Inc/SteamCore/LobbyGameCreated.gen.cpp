// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LobbyGameCreated.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGameCreated() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FLobbyGameCreated::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyGameCreated, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyGameCreated"), sizeof(FLobbyGameCreated), Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyGameCreated>()
{
	return FLobbyGameCreated::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyGameCreated(FLobbyGameCreated::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyGameCreated"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyGameCreated
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyGameCreated()
	{
		UScriptStruct::DeferCppStructOps<FLobbyGameCreated>(FName(TEXT("LobbyGameCreated")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyGameCreated;
	struct Z_Construct_UScriptStruct_FLobbyGameCreated_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDGameServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyGameCreated.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyGameCreated>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyGameCreated" },
		{ "ModuleRelativePath", "Public/LobbyGameCreated.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyGameCreated, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyGameCreated" },
		{ "ModuleRelativePath", "Public/LobbyGameCreated.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyGameCreated, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyGameCreated" },
		{ "ModuleRelativePath", "Public/LobbyGameCreated.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyGameCreated, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyGameCreated" },
		{ "ModuleRelativePath", "Public/LobbyGameCreated.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyGameCreated, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyGameCreated",
		sizeof(FLobbyGameCreated),
		alignof(FLobbyGameCreated),
		Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyGameCreated"), sizeof(FLobbyGameCreated), Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash() { return 2465761962U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
