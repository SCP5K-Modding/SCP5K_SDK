// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/DiscordGatewayActivityAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordGatewayActivityAsset() {}
// Cross Module References
	DISCORDGATEWAY_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
class UScriptStruct* FDiscordGatewayActivityAsset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDGATEWAY_API uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("DiscordGatewayActivityAsset"), sizeof(FDiscordGatewayActivityAsset), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Hash());
	}
	return Singleton;
}
template<> DISCORDGATEWAY_API UScriptStruct* StaticStruct<FDiscordGatewayActivityAsset>()
{
	return FDiscordGatewayActivityAsset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordGatewayActivityAsset(FDiscordGatewayActivityAsset::StaticStruct, TEXT("/Script/DiscordGateway"), TEXT("DiscordGatewayActivityAsset"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityAsset
{
	FScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityAsset()
	{
		UScriptStruct::DeferCppStructOps<FDiscordGatewayActivityAsset>(FName(TEXT("DiscordGatewayActivityAsset")));
	}
} ScriptStruct_DiscordGateway_StaticRegisterNativesFDiscordGatewayActivityAsset;
	struct Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LargeImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmallImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SmallText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordGatewayActivityAsset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityAsset" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeImage = { "LargeImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityAsset, LargeImage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityAsset" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeText = { "LargeText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityAsset, LargeText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityAsset" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallImage = { "SmallImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityAsset, SmallImage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordGatewayActivityAsset" },
		{ "ModuleRelativePath", "Public/DiscordGatewayActivityAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallText = { "SmallText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordGatewayActivityAsset, SmallText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_LargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::NewProp_SmallText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordGateway,
		nullptr,
		&NewStructOps,
		"DiscordGatewayActivityAsset",
		sizeof(FDiscordGatewayActivityAsset),
		alignof(FDiscordGatewayActivityAsset),
		Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordGatewayActivityAsset"), sizeof(FDiscordGatewayActivityAsset), Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordGatewayActivityAsset_Hash() { return 2592231742U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
