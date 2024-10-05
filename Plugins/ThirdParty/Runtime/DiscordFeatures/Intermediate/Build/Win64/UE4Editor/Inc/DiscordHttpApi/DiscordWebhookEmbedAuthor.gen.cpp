// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordWebhookEmbedAuthor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordWebhookEmbedAuthor() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
class UScriptStruct* FDiscordWebhookEmbedAuthor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordWebhookEmbedAuthor"), sizeof(FDiscordWebhookEmbedAuthor), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordWebhookEmbedAuthor>()
{
	return FDiscordWebhookEmbedAuthor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordWebhookEmbedAuthor(FDiscordWebhookEmbedAuthor::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordWebhookEmbedAuthor"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedAuthor
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedAuthor()
	{
		UScriptStruct::DeferCppStructOps<FDiscordWebhookEmbedAuthor>(FName(TEXT("DiscordWebhookEmbedAuthor")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedAuthor;
	struct Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedAuthor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordWebhookEmbedAuthor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedAuthor" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedAuthor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedAuthor, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedAuthor" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedAuthor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedAuthor, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_IconUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedAuthor" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedAuthor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_IconUrl = { "IconUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedAuthor, IconUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_IconUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_IconUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_ProxyIconUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedAuthor" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedAuthor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_ProxyIconUrl = { "ProxyIconUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedAuthor, ProxyIconUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_ProxyIconUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_ProxyIconUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_IconUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::NewProp_ProxyIconUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordWebhookEmbedAuthor",
		sizeof(FDiscordWebhookEmbedAuthor),
		alignof(FDiscordWebhookEmbedAuthor),
		Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordWebhookEmbedAuthor"), sizeof(FDiscordWebhookEmbedAuthor), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor_Hash() { return 4277495066U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
