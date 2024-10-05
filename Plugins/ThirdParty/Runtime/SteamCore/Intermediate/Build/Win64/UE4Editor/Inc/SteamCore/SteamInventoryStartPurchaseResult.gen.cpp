// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamInventoryStartPurchaseResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventoryStartPurchaseResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FSteamInventoryStartPurchaseResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamInventoryStartPurchaseResult"), sizeof(FSteamInventoryStartPurchaseResult), Get_Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamInventoryStartPurchaseResult>()
{
	return FSteamInventoryStartPurchaseResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamInventoryStartPurchaseResult(FSteamInventoryStartPurchaseResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamInventoryStartPurchaseResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryStartPurchaseResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryStartPurchaseResult()
	{
		UScriptStruct::DeferCppStructOps<FSteamInventoryStartPurchaseResult>(FName(TEXT("SteamInventoryStartPurchaseResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryStartPurchaseResult;
	struct Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventoryStartPurchaseResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryStartPurchaseResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryStartPurchaseResult" },
		{ "ModuleRelativePath", "Public/SteamInventoryStartPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryStartPurchaseResult" },
		{ "ModuleRelativePath", "Public/SteamInventoryStartPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, OrderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryStartPurchaseResult" },
		{ "ModuleRelativePath", "Public/SteamInventoryStartPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryStartPurchaseResult, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::NewProp_TransactionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamInventoryStartPurchaseResult",
		sizeof(FSteamInventoryStartPurchaseResult),
		alignof(FSteamInventoryStartPurchaseResult),
		Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamInventoryStartPurchaseResult"), sizeof(FSteamInventoryStartPurchaseResult), Get_Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryStartPurchaseResult_Hash() { return 2559503756U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
