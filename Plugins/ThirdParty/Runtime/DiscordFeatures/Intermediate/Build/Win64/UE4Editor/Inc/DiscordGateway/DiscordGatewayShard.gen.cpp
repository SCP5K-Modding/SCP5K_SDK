// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayShard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayShard() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayShard();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
class UScriptStruct* FDiscordGatewayShard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayShard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayShard, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayShard"), sizeof(FDiscordGatewayShard), Get_Z_Construct_UScriptStruct_FDiscordGatewayShard_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayShard>()
{
	return FDiscordGatewayShard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayShard(FDiscordGatewayShard::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayShard"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayShard
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayShard()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayShard>(FName(TEXT("DiscordGatewayShard")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayShard;
	struct Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ShardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumShards_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_NumShards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayShard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayShard>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_ShardId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayShard" },
		{ "ModuleRelativePath", "Public/DiscordGatewayShard.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_ShardId = { "ShardId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayShard, ShardId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_ShardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_ShardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_NumShards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayShard" },
		{ "ModuleRelativePath", "Public/DiscordGatewayShard.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_NumShards = { "NumShards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayShard, NumShards), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_NumShards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_NumShards_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_ShardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::NewProp_NumShards,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayShard",
		sizeof(FDiscordGatewayShard),
		alignof(FDiscordGatewayShard),
		Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayShard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayShard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayShard"), sizeof(FDiscordGatewayShard), Get_Z_Construct_UScriptStruct_FDiscordGatewayShard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayShard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayShard_Hash() { return 1818831719U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
