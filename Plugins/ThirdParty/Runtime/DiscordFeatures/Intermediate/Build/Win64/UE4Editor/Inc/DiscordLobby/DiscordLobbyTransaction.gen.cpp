// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordLobby/Public/DiscordLobbyTransaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordLobbyTransaction() {}
// Cross Module References
	DISCORDLOBBY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyTransaction();
	UPackage* Z_Construct_UPackage__Script_DiscordLobby();
// End Cross Module References
class UScriptStruct* FDiscordLobbyTransaction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDLOBBY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordLobbyTransaction, Z_Construct_UPackage__Script_DiscordLobby(), TEXT("DiscordLobbyTransaction"), sizeof(FDiscordLobbyTransaction), Get_Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Hash());
	}
	return Singleton;
}
template<> DISCORDLOBBY_API UScriptStruct* StaticStruct<FDiscordLobbyTransaction>()
{
	return FDiscordLobbyTransaction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordLobbyTransaction(FDiscordLobbyTransaction::StaticStruct, TEXT("/Script/DiscordLobby"), TEXT("DiscordLobbyTransaction"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbyTransaction
{
	FScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbyTransaction()
	{
		UScriptStruct::DeferCppStructOps<FDiscordLobbyTransaction>(FName(TEXT("DiscordLobbyTransaction")));
	}
} ScriptStruct_DiscordLobby_StaticRegisterNativesFDiscordLobbyTransaction;
	struct Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordLobbyTransaction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordLobbyTransaction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordLobby,
		nullptr,
		&NewStructOps,
		"DiscordLobbyTransaction",
		sizeof(FDiscordLobbyTransaction),
		alignof(FDiscordLobbyTransaction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordLobbyTransaction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordLobby();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordLobbyTransaction"), sizeof(FDiscordLobbyTransaction), Get_Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordLobbyTransaction_Hash() { return 1171049092U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
