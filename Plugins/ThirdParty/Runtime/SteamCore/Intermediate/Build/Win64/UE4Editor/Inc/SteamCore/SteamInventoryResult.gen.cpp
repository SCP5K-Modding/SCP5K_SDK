// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamInventoryResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamInventoryResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FSteamInventoryResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamInventoryResult"), sizeof(FSteamInventoryResult), Get_Z_Construct_UScriptStruct_FSteamInventoryResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamInventoryResult>()
{
	return FSteamInventoryResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamInventoryResult(FSteamInventoryResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamInventoryResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryResult()
	{
		UScriptStruct::DeferCppStructOps<FSteamInventoryResult>(FName(TEXT("SteamInventoryResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryResult;
	struct Z_Construct_UScriptStruct_FSteamInventoryResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamInventoryResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamInventoryResult" },
		{ "ModuleRelativePath", "Public/SteamInventoryResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamInventoryResult, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamInventoryResult",
		sizeof(FSteamInventoryResult),
		alignof(FSteamInventoryResult),
		Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamInventoryResult"), sizeof(FSteamInventoryResult), Get_Z_Construct_UScriptStruct_FSteamInventoryResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamInventoryResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryResult_Hash() { return 1273505840U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
