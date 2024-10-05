// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/AddAppDependencyResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddAppDependencyResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAddAppDependencyResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
// End Cross Module References
class UScriptStruct* FAddAppDependencyResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FAddAppDependencyResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddAppDependencyResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("AddAppDependencyResult"), sizeof(FAddAppDependencyResult), Get_Z_Construct_UScriptStruct_FAddAppDependencyResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FAddAppDependencyResult>()
{
	return FAddAppDependencyResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAddAppDependencyResult(FAddAppDependencyResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("AddAppDependencyResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFAddAppDependencyResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFAddAppDependencyResult()
	{
		UScriptStruct::DeferCppStructOps<FAddAppDependencyResult>(FName(TEXT("AddAppDependencyResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFAddAppDependencyResult;
	struct Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AddAppDependencyResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddAppDependencyResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AddAppDependencyResult" },
		{ "ModuleRelativePath", "Public/AddAppDependencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAddAppDependencyResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AddAppDependencyResult" },
		{ "ModuleRelativePath", "Public/AddAppDependencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAddAppDependencyResult, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_PublishedFileID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AddAppDependencyResult" },
		{ "ModuleRelativePath", "Public/AddAppDependencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAddAppDependencyResult, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::NewProp_AppID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"AddAppDependencyResult",
		sizeof(FAddAppDependencyResult),
		alignof(FAddAppDependencyResult),
		Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddAppDependencyResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAddAppDependencyResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AddAppDependencyResult"), sizeof(FAddAppDependencyResult), Get_Z_Construct_UScriptStruct_FAddAppDependencyResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAddAppDependencyResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAddAppDependencyResult_Hash() { return 3267246013U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
