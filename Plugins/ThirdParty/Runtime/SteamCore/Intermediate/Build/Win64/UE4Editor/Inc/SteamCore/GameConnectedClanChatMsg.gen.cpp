// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameConnectedClanChatMsg.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameConnectedClanChatMsg() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameConnectedClanChatMsg();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FGameConnectedClanChatMsg::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameConnectedClanChatMsg"), sizeof(FGameConnectedClanChatMsg), Get_Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameConnectedClanChatMsg>()
{
	return FGameConnectedClanChatMsg::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameConnectedClanChatMsg(FGameConnectedClanChatMsg::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameConnectedClanChatMsg"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedClanChatMsg
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedClanChatMsg()
	{
		UScriptStruct::DeferCppStructOps<FGameConnectedClanChatMsg>(FName(TEXT("GameConnectedClanChatMsg")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedClanChatMsg;
	struct Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDClanChat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameConnectedClanChatMsg.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameConnectedClanChatMsg>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedClanChatMsg" },
		{ "ModuleRelativePath", "Public/GameConnectedClanChatMsg.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameConnectedClanChatMsg, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDClanChat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedClanChatMsg" },
		{ "ModuleRelativePath", "Public/GameConnectedClanChatMsg.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameConnectedClanChatMsg, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDClanChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDClanChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_MessageID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedClanChatMsg" },
		{ "ModuleRelativePath", "Public/GameConnectedClanChatMsg.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameConnectedClanChatMsg, MessageID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_MessageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_MessageID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::NewProp_MessageID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameConnectedClanChatMsg",
		sizeof(FGameConnectedClanChatMsg),
		alignof(FGameConnectedClanChatMsg),
		Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameConnectedClanChatMsg()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameConnectedClanChatMsg"), sizeof(FGameConnectedClanChatMsg), Get_Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameConnectedClanChatMsg_Hash() { return 3558165776U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
