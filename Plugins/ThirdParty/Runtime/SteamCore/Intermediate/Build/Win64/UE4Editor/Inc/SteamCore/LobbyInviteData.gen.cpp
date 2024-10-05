// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LobbyInviteData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyInviteData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
// End Cross Module References
class UScriptStruct* FLobbyInviteData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyInviteData, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyInviteData"), sizeof(FLobbyInviteData), Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyInviteData>()
{
	return FLobbyInviteData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyInviteData(FLobbyInviteData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyInviteData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyInviteData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyInviteData()
	{
		UScriptStruct::DeferCppStructOps<FLobbyInviteData>(FName(TEXT("LobbyInviteData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyInviteData;
	struct Z_Construct_UScriptStruct_FLobbyInviteData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyInviteData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyInviteData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInviteData" },
		{ "ModuleRelativePath", "Public/LobbyInviteData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInviteData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInviteData" },
		{ "ModuleRelativePath", "Public/LobbyInviteData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInviteData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyInviteData" },
		{ "ModuleRelativePath", "Public/LobbyInviteData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInviteData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyInviteData",
		sizeof(FLobbyInviteData),
		alignof(FLobbyInviteData),
		Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyInviteData"), sizeof(FLobbyInviteData), Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyInviteData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash() { return 2160473739U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
