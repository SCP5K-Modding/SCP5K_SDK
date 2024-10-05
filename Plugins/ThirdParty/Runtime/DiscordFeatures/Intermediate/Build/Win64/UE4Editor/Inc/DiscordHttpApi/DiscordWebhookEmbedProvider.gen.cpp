// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordWebhookEmbedProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordWebhookEmbedProvider() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
// End Cross Module References
class UScriptStruct* FDiscordWebhookEmbedProvider::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordWebhookEmbedProvider"), sizeof(FDiscordWebhookEmbedProvider), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordWebhookEmbedProvider>()
{
	return FDiscordWebhookEmbedProvider::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordWebhookEmbedProvider(FDiscordWebhookEmbedProvider::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordWebhookEmbedProvider"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedProvider
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedProvider()
	{
		UScriptStruct::DeferCppStructOps<FDiscordWebhookEmbedProvider>(FName(TEXT("DiscordWebhookEmbedProvider")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbedProvider;
	struct Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordWebhookEmbedProvider>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedProvider" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedProvider, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbedProvider" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbedProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbedProvider, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::NewProp_URL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordWebhookEmbedProvider",
		sizeof(FDiscordWebhookEmbedProvider),
		alignof(FDiscordWebhookEmbedProvider),
		Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordWebhookEmbedProvider"), sizeof(FDiscordWebhookEmbedProvider), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider_Hash() { return 3114881048U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
