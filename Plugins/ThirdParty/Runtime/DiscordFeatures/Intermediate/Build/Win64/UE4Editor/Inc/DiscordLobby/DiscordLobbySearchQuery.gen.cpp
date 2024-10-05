// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DiscordLobbySearchQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobbySearchQuery() {}
// Cross Module References
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbySearchQuery();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
// End Cross Module References
class UScriptStruct* FDiscordLobbySearchQuery::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDLOBBY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordLobbySearchQuery, Z_Construct_UPackage__Script_DiscordLobby(), TEXT("DiscordLobbySearchQuery"), sizeof(FDiscordLobbySearchQuery), Get_Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Hash());
	}
	return Singleton;
}
template<> DISCORDLOBBY_API UScriptStruct* StaticStruct<FDiscordLobbySearchQuery>()
{
	return FDiscordLobbySearchQuery::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordLobbySearchQuery(FDiscordLobbySearchQuery::StaticStruct, TEXT("/Script/DiscordLobby"), TEXT("DiscordLobbySearchQuery"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbySearchQuery
{
	FScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbySearchQuery()
	{
		UScriptStruct::DeferCppStructOps<FDiscordLobbySearchQuery>(FName(TEXT("DiscordLobbySearchQuery")));
	}
} ScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbySearchQuery;
	struct Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordLobbySearchQuery.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordLobbySearchQuery>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
		nullptr,
		&NewStructOps,
		"DiscordLobbySearchQuery",
		sizeof(FDiscordLobbySearchQuery),
		alignof(FDiscordLobbySearchQuery),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbySearchQuery()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordLobby();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordLobbySearchQuery"), sizeof(FDiscordLobbySearchQuery), Get_Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbySearchQuery_Hash() { return 3153591066U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
