// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordActivityParty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordActivityParty() {}
// Cross Module References
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityParty();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordPartySize();
// End Cross Module References
class UScriptStruct* FDiscordActivityParty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDCORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityParty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordActivityParty, Z_Construct_UPackage__Script_DiscordCore(), TEXT("DiscordActivityParty"), sizeof(FDiscordActivityParty), Get_Z_Construct_UScriptStruct_FDiscordActivityParty_Hash());
	}
	return Singleton;
}
template<> DISCORDCORE_API UScriptStruct* StaticStruct<FDiscordActivityParty>()
{
	return FDiscordActivityParty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordActivityParty(FDiscordActivityParty::StaticStruct, TEXT("/Script/DiscordCore"), TEXT("DiscordActivityParty"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityParty
{
	FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityParty()
	{
		UScriptStruct::DeferCppStructOps<FDiscordActivityParty>(FName(TEXT("DiscordActivityParty")));
	}
} ScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivityParty;
	struct Z_Construct_UScriptStruct_FDiscordActivityParty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordActivityParty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordActivityParty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityParty" },
		{ "ModuleRelativePath", "Public/DiscordActivityParty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivityParty, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivityParty" },
		{ "ModuleRelativePath", "Public/DiscordActivityParty.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivityParty, Size), Z_Construct_UScriptStruct_FDiscordPartySize, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::NewProp_Size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
		nullptr,
		&NewStructOps,
		"DiscordActivityParty",
		sizeof(FDiscordActivityParty),
		alignof(FDiscordActivityParty),
		Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivityParty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityParty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordActivityParty"), sizeof(FDiscordActivityParty), Get_Z_Construct_UScriptStruct_FDiscordActivityParty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordActivityParty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordActivityParty_Hash() { return 1144914479U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
