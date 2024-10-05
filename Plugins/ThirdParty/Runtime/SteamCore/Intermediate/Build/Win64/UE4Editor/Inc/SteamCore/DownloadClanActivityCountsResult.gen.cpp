// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/DownloadClanActivityCountsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownloadClanActivityCountsResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FDownloadClanActivityCountsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("DownloadClanActivityCountsResult"), sizeof(FDownloadClanActivityCountsResult), Get_Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FDownloadClanActivityCountsResult>()
{
	return FDownloadClanActivityCountsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDownloadClanActivityCountsResult(FDownloadClanActivityCountsResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("DownloadClanActivityCountsResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFDownloadClanActivityCountsResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFDownloadClanActivityCountsResult()
	{
		UScriptStruct::DeferCppStructOps<FDownloadClanActivityCountsResult>(FName(TEXT("DownloadClanActivityCountsResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFDownloadClanActivityCountsResult;
	struct Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DownloadClanActivityCountsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDownloadClanActivityCountsResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::NewProp_bSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DownloadClanActivityCountsResult" },
		{ "ModuleRelativePath", "Public/DownloadClanActivityCountsResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FDownloadClanActivityCountsResult*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDownloadClanActivityCountsResult), &Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::NewProp_bSuccess,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"DownloadClanActivityCountsResult",
		sizeof(FDownloadClanActivityCountsResult),
		alignof(FDownloadClanActivityCountsResult),
		Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DownloadClanActivityCountsResult"), sizeof(FDownloadClanActivityCountsResult), Get_Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDownloadClanActivityCountsResult_Hash() { return 995614573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
