// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayActivitySecrets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayActivitySecrets() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
class UScriptStruct* FDiscordGatewayActivitySecrets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayActivitySecrets"), sizeof(FDiscordGatewayActivitySecrets), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayActivitySecrets>()
{
	return FDiscordGatewayActivitySecrets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayActivitySecrets(FDiscordGatewayActivitySecrets::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayActivitySecrets"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivitySecrets
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivitySecrets()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayActivitySecrets>(FName(TEXT("DiscordGatewayActivitySecrets")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivitySecrets;
	struct Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Join_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Join;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spectate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Spectate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Match;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivitySecrets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayActivitySecrets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Join_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivitySecrets" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivitySecrets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Join = { "Join", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivitySecrets, Join), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Join_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Join_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Spectate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivitySecrets" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivitySecrets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Spectate = { "Spectate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivitySecrets, Spectate), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Spectate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Spectate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Match_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivitySecrets" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivitySecrets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivitySecrets, Match), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Match_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Join,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Spectate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::NewProp_Match,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayActivitySecrets",
		sizeof(FDiscordGatewayActivitySecrets),
		alignof(FDiscordGatewayActivitySecrets),
		Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayActivitySecrets"), sizeof(FDiscordGatewayActivitySecrets), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivitySecrets_Hash() { return 4018855988U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
