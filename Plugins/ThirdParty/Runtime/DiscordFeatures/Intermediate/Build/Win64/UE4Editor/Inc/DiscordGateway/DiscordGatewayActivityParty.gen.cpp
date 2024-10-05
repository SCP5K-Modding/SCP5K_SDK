// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayActivityParty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayActivityParty() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityParty();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
class UScriptStruct* FDiscordGatewayActivityParty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayActivityParty"), sizeof(FDiscordGatewayActivityParty), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayActivityParty>()
{
	return FDiscordGatewayActivityParty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayActivityParty(FDiscordGatewayActivityParty::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayActivityParty"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityParty
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityParty()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayActivityParty>(FName(TEXT("DiscordGatewayActivityParty")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityParty;
	struct Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityParty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayActivityParty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityParty" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityParty.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityParty, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_CurrentSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityParty" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityParty.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_CurrentSize = { "CurrentSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityParty, CurrentSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_CurrentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_CurrentSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_MaxSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityParty" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityParty.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_MaxSize = { "MaxSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityParty, MaxSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_MaxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_MaxSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_CurrentSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::NewProp_MaxSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayActivityParty",
		sizeof(FDiscordGatewayActivityParty),
		alignof(FDiscordGatewayActivityParty),
		Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityParty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayActivityParty"), sizeof(FDiscordGatewayActivityParty), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityParty_Hash() { return 782181814U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
