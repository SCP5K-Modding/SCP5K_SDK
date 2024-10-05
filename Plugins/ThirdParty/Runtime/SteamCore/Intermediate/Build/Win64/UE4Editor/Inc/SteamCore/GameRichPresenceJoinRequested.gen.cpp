// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameRichPresenceJoinRequested.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameRichPresenceJoinRequested() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FGameRichPresenceJoinRequested::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameRichPresenceJoinRequested"), sizeof(FGameRichPresenceJoinRequested), Get_Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameRichPresenceJoinRequested>()
{
	return FGameRichPresenceJoinRequested::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameRichPresenceJoinRequested(FGameRichPresenceJoinRequested::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameRichPresenceJoinRequested"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameRichPresenceJoinRequested
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameRichPresenceJoinRequested()
	{
		UScriptStruct::DeferCppStructOps<FGameRichPresenceJoinRequested>(FName(TEXT("GameRichPresenceJoinRequested")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameRichPresenceJoinRequested;
	struct Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Connect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameRichPresenceJoinRequested.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameRichPresenceJoinRequested>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_SteamIDFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameRichPresenceJoinRequested" },
		{ "ModuleRelativePath", "Public/GameRichPresenceJoinRequested.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameRichPresenceJoinRequested, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_SteamIDFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_SteamIDFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_Connect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameRichPresenceJoinRequested" },
		{ "ModuleRelativePath", "Public/GameRichPresenceJoinRequested.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_Connect = { "Connect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameRichPresenceJoinRequested, Connect), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_Connect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_Connect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::NewProp_Connect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameRichPresenceJoinRequested",
		sizeof(FGameRichPresenceJoinRequested),
		alignof(FGameRichPresenceJoinRequested),
		Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameRichPresenceJoinRequested"), sizeof(FGameRichPresenceJoinRequested), Get_Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameRichPresenceJoinRequested_Hash() { return 3246795291U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
