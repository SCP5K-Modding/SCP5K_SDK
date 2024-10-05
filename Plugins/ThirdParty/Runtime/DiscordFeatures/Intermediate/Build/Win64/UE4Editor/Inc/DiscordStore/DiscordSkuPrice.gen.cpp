// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStore/Public/DiscordSkuPrice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordSkuPrice() {}
// Cross Module References
	DISCORDSTORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordSkuPrice();
	UPackage* Z_Construct_UPackage__Script_DiscordStore();
// End Cross Module References
class UScriptStruct* FDiscordSkuPrice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDSTORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordSkuPrice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordSkuPrice, Z_Construct_UPackage__Script_DiscordStore(), TEXT("DiscordSkuPrice"), sizeof(FDiscordSkuPrice), Get_Z_Construct_UScriptStruct_FDiscordSkuPrice_Hash());
	}
	return Singleton;
}
template<> DISCORDSTORE_API UScriptStruct* StaticStruct<FDiscordSkuPrice>()
{
	return FDiscordSkuPrice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordSkuPrice(FDiscordSkuPrice::StaticStruct, TEXT("/Script/DiscordStore"), TEXT("DiscordSkuPrice"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordStore_StaticRegisterNativesFDiscordSkuPrice
{
	FScriptStruct_DiscordStore_StaticRegisterNativesFDiscordSkuPrice()
	{
		UScriptStruct::DeferCppStructOps<FDiscordSkuPrice>(FName(TEXT("DiscordSkuPrice")));
	}
} ScriptStruct_DiscordStore_StaticRegisterNativesFDiscordSkuPrice;
	struct Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordSkuPrice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordSkuPrice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSkuPrice" },
		{ "ModuleRelativePath", "Public/DiscordSkuPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSkuPrice, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Currency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSkuPrice" },
		{ "ModuleRelativePath", "Public/DiscordSkuPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSkuPrice, Currency), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::NewProp_Currency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStore,
		nullptr,
		&NewStructOps,
		"DiscordSkuPrice",
		sizeof(FDiscordSkuPrice),
		alignof(FDiscordSkuPrice),
		Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordSkuPrice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordSkuPrice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordStore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordSkuPrice"), sizeof(FDiscordSkuPrice), Get_Z_Construct_UScriptStruct_FDiscordSkuPrice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordSkuPrice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordSkuPrice_Hash() { return 3743968429U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
