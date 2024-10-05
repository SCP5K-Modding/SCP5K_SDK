// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordActivitySecrets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordActivitySecrets() {}
// Cross Module References
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivitySecrets();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
// End Cross Module References
class UScriptStruct* FDiscordActivitySecrets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDCORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordActivitySecrets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordActivitySecrets, Z_Construct_UPackage__Script_DiscordCore(), TEXT("DiscordActivitySecrets"), sizeof(FDiscordActivitySecrets), Get_Z_Construct_UScriptStruct_FDiscordActivitySecrets_Hash());
	}
	return Singleton;
}
template<> DISCORDCORE_API UScriptStruct* StaticStruct<FDiscordActivitySecrets>()
{
	return FDiscordActivitySecrets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordActivitySecrets(FDiscordActivitySecrets::StaticStruct, TEXT("/Script/DiscordCore"), TEXT("DiscordActivitySecrets"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivitySecrets
{
	FScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivitySecrets()
	{
		UScriptStruct::DeferCppStructOps<FDiscordActivitySecrets>(FName(TEXT("DiscordActivitySecrets")));
	}
} ScriptStruct_DiscordCore_StaticRegisterNativesFDiscordActivitySecrets;
	struct Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Match;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Join_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Join;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spectate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Spectate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordActivitySecrets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordActivitySecrets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Match_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivitySecrets" },
		{ "ModuleRelativePath", "Public/DiscordActivitySecrets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivitySecrets, Match), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Match_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Join_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivitySecrets" },
		{ "ModuleRelativePath", "Public/DiscordActivitySecrets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Join = { "Join", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivitySecrets, Join), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Join_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Join_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Spectate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordActivitySecrets" },
		{ "ModuleRelativePath", "Public/DiscordActivitySecrets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Spectate = { "Spectate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordActivitySecrets, Spectate), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Spectate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Spectate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Match,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Join,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::NewProp_Spectate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
		nullptr,
		&NewStructOps,
		"DiscordActivitySecrets",
		sizeof(FDiscordActivitySecrets),
		alignof(FDiscordActivitySecrets),
		Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordActivitySecrets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordActivitySecrets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordActivitySecrets"), sizeof(FDiscordActivitySecrets), Get_Z_Construct_UScriptStruct_FDiscordActivitySecrets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordActivitySecrets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordActivitySecrets_Hash() { return 3542015644U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
