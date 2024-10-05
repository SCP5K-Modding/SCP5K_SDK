// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordWebhookEmbedFooter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordWebhookEmbedFooter() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
class UScriptStruct* FDiscordWebhookEmbedFooter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordWebhookEmbedFooter"), sizeof(FDiscordWebhookEmbedFooter), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordWebhookEmbedFooter>()
{
	return FDiscordWebhookEmbedFooter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordWebhookEmbedFooter(FDiscordWebhookEmbedFooter::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordWebhookEmbedFooter"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedFooter
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedFooter()
	{
		UScriptStruct::DeferCppStructOps<FDiscordWebhookEmbedFooter>(FName(TEXT("DiscordWebhookEmbedFooter")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedFooter;
	struct Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyIconUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProxyIconUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedFooter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordWebhookEmbedFooter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedFooter" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedFooter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedFooter, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_IconUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedFooter" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedFooter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_IconUrl = { "IconUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedFooter, IconUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_IconUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_IconUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_ProxyIconUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedFooter" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedFooter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_ProxyIconUrl = { "ProxyIconUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedFooter, ProxyIconUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_ProxyIconUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_ProxyIconUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_IconUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::NewProp_ProxyIconUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordWebhookEmbedFooter",
		sizeof(FDiscordWebhookEmbedFooter),
		alignof(FDiscordWebhookEmbedFooter),
		Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordWebhookEmbedFooter"), sizeof(FDiscordWebhookEmbedFooter), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter_Hash() { return 2156328959U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
