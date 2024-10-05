// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LobbyChatMsg.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyChatMsg() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
// End Cross Module References
class UScriptStruct* FLobbyChatMsg::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatMsg, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyChatMsg"), sizeof(FLobbyChatMsg), Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyChatMsg>()
{
	return FLobbyChatMsg::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyChatMsg(FLobbyChatMsg::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyChatMsg"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatMsg
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatMsg()
	{
		UScriptStruct::DeferCppStructOps<FLobbyChatMsg>(FName(TEXT("LobbyChatMsg")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatMsg;
	struct Z_Construct_UScriptStruct_FLobbyChatMsg_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEntryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChatID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyChatMsg.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatMsg>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyChatMsg" },
		{ "ModuleRelativePath", "Public/LobbyChatMsg.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatMsg, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyChatMsg" },
		{ "ModuleRelativePath", "Public/LobbyChatMsg.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatMsg, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyChatMsg" },
		{ "ModuleRelativePath", "Public/LobbyChatMsg.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatMsg, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyChatMsg" },
		{ "ModuleRelativePath", "Public/LobbyChatMsg.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatMsg, ChatID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyChatMsg",
		sizeof(FLobbyChatMsg),
		alignof(FLobbyChatMsg),
		Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyChatMsg"), sizeof(FLobbyChatMsg), Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash() { return 2650157370U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
