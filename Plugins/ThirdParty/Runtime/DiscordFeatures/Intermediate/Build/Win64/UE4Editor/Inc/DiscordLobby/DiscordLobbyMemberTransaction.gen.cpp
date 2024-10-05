// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DiscordLobbyMemberTransaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobbyMemberTransaction() {}
// Cross Module References
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
// End Cross Module References
class UScriptStruct* FDiscordLobbyMemberTransaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDLOBBY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction, Z_Construct_UPackage__Script_DiscordLobby(), TEXT("DiscordLobbyMemberTransaction"), sizeof(FDiscordLobbyMemberTransaction), Get_Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Hash());
	}
	return Singleton;
}
template<> DISCORDLOBBY_API UScriptStruct* StaticStruct<FDiscordLobbyMemberTransaction>()
{
	return FDiscordLobbyMemberTransaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordLobbyMemberTransaction(FDiscordLobbyMemberTransaction::StaticStruct, TEXT("/Script/DiscordLobby"), TEXT("DiscordLobbyMemberTransaction"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbyMemberTransaction
{
	FScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbyMemberTransaction()
	{
		UScriptStruct::DeferCppStructOps<FDiscordLobbyMemberTransaction>(FName(TEXT("DiscordLobbyMemberTransaction")));
	}
} ScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbyMemberTransaction;
	struct Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordLobbyMemberTransaction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordLobbyMemberTransaction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
		nullptr,
		&NewStructOps,
		"DiscordLobbyMemberTransaction",
		sizeof(FDiscordLobbyMemberTransaction),
		alignof(FDiscordLobbyMemberTransaction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordLobby();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordLobbyMemberTransaction"), sizeof(FDiscordLobbyMemberTransaction), Get_Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbyMemberTransaction_Hash() { return 3074582779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
