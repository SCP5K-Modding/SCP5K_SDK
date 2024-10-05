// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamInventoryRequestPricesResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventoryRequestPricesResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FSteamInventoryRequestPricesResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamInventoryRequestPricesResult"), sizeof(FSteamInventoryRequestPricesResult), Get_Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamInventoryRequestPricesResult>()
{
	return FSteamInventoryRequestPricesResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamInventoryRequestPricesResult(FSteamInventoryRequestPricesResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamInventoryRequestPricesResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryRequestPricesResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryRequestPricesResult()
	{
		UScriptStruct::DeferCppStructOps<FSteamInventoryRequestPricesResult>(FName(TEXT("SteamInventoryRequestPricesResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryRequestPricesResult;
	struct Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventoryRequestPricesResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryRequestPricesResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryRequestPricesResult" },
		{ "ModuleRelativePath", "Public/SteamInventoryRequestPricesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryRequestPricesResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryRequestPricesResult" },
		{ "ModuleRelativePath", "Public/SteamInventoryRequestPricesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryRequestPricesResult, Currency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::NewProp_Currency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamInventoryRequestPricesResult",
		sizeof(FSteamInventoryRequestPricesResult),
		alignof(FSteamInventoryRequestPricesResult),
		Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamInventoryRequestPricesResult"), sizeof(FSteamInventoryRequestPricesResult), Get_Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryRequestPricesResult_Hash() { return 616090467U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
