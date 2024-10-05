// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LobbyChatUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyChatUpdate() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange();
// End Cross Module References
class UScriptStruct* FLobbyChatUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatUpdate, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyChatUpdate"), sizeof(FLobbyChatUpdate), Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyChatUpdate>()
{
	return FLobbyChatUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyChatUpdate(FLobbyChatUpdate::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyChatUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatUpdate
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatUpdate()
	{
		UScriptStruct::DeferCppStructOps<FLobbyChatUpdate>(FName(TEXT("LobbyChatUpdate")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatUpdate;
	struct Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUserChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUserChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDMakingChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDMakingChange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatMemberStateChange_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatMemberStateChange_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatMemberStateChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatMemberStateChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LobbyChatUpdate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyChatUpdate" },
		{ "ModuleRelativePath", "Public/LobbyChatUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyChatUpdate" },
		{ "ModuleRelativePath", "Public/LobbyChatUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged = { "SteamIDUserChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDUserChanged), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyChatUpdate" },
		{ "ModuleRelativePath", "Public/LobbyChatUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange = { "SteamIDMakingChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDMakingChange), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LobbyChatUpdate" },
		{ "ModuleRelativePath", "Public/LobbyChatUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatUpdate, ChatMemberStateChange), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyChatUpdate",
		sizeof(FLobbyChatUpdate),
		alignof(FLobbyChatUpdate),
		Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyChatUpdate"), sizeof(FLobbyChatUpdate), Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash() { return 3911232012U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
