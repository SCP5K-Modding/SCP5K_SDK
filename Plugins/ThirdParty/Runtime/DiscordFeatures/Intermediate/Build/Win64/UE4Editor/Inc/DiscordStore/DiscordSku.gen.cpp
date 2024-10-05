// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStore/Public/DiscordSku.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordSku() {}
// Cross Module References
	DISCORDSTORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordSku();
	UPackage* Z_Construct_UPackage__Script_DiscordStore();
	DISCORDSTORE_API UEnum* Z_Construct_UEnum_DiscordStore_EDiscordSkuType();
	DISCORDSTORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordSkuPrice();
// End Cross Module References
class UScriptStruct* FDiscordSku::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDSTORE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordSku_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordSku, Z_Construct_UPackage__Script_DiscordStore(), TEXT("DiscordSku"), sizeof(FDiscordSku), Get_Z_Construct_UScriptStruct_FDiscordSku_Hash());
	}
	return Singleton;
}
template<> DISCORDSTORE_API UScriptStruct* StaticStruct<FDiscordSku>()
{
	return FDiscordSku::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordSku(FDiscordSku::StaticStruct, TEXT("/Script/DiscordStore"), TEXT("DiscordSku"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordStore_StaticRegisterNativesFDiscordSku
{
	FScriptStruct_DiscordStore_StaticRegisterNativesFDiscordSku()
	{
		UScriptStruct::DeferCppStructOps<FDiscordSku>(FName(TEXT("DiscordSku")));
	}
} ScriptStruct_DiscordStore_StaticRegisterNativesFDiscordSku;
	struct Z_Construct_UScriptStruct_FDiscordSku_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Price;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSku_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordSku.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordSku_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordSku>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSku" },
		{ "ModuleRelativePath", "Public/DiscordSku.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSku, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSku" },
		{ "ModuleRelativePath", "Public/DiscordSku.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSku, Type), Z_Construct_UEnum_DiscordStore_EDiscordSkuType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSku" },
		{ "ModuleRelativePath", "Public/DiscordSku.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSku, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Price_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordSku" },
		{ "ModuleRelativePath", "Public/DiscordSku.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordSku, Price), Z_Construct_UScriptStruct_FDiscordSkuPrice, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Price_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordSku_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordSku_Statics::NewProp_Price,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordSku_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStore,
		nullptr,
		&NewStructOps,
		"DiscordSku",
		sizeof(FDiscordSku),
		alignof(FDiscordSku),
		Z_Construct_UScriptStruct_FDiscordSku_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSku_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordSku_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordSku_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordSku()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordSku_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordStore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordSku"), sizeof(FDiscordSku), Get_Z_Construct_UScriptStruct_FDiscordSku_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordSku_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordSku_Hash() { return 1772040684U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
