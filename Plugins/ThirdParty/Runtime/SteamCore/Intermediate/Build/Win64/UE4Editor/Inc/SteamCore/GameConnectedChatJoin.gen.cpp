// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameConnectedChatJoin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameConnectedChatJoin() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameConnectedChatJoin();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FGameConnectedChatJoin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameConnectedChatJoin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameConnectedChatJoin, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameConnectedChatJoin"), sizeof(FGameConnectedChatJoin), Get_Z_Construct_UScriptStruct_FGameConnectedChatJoin_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameConnectedChatJoin>()
{
	return FGameConnectedChatJoin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameConnectedChatJoin(FGameConnectedChatJoin::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameConnectedChatJoin"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedChatJoin
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedChatJoin()
	{
		UScriptStruct::DeferCppStructOps<FGameConnectedChatJoin>(FName(TEXT("GameConnectedChatJoin")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameConnectedChatJoin;
	struct Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDClanChat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameConnectedChatJoin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameConnectedChatJoin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDClanChat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedChatJoin" },
		{ "ModuleRelativePath", "Public/GameConnectedChatJoin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameConnectedChatJoin, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDClanChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDClanChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameConnectedChatJoin" },
		{ "ModuleRelativePath", "Public/GameConnectedChatJoin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameConnectedChatJoin, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::NewProp_SteamIDUser,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameConnectedChatJoin",
		sizeof(FGameConnectedChatJoin),
		alignof(FGameConnectedChatJoin),
		Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameConnectedChatJoin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameConnectedChatJoin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameConnectedChatJoin"), sizeof(FGameConnectedChatJoin), Get_Z_Construct_UScriptStruct_FGameConnectedChatJoin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameConnectedChatJoin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameConnectedChatJoin_Hash() { return 2222873207U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
