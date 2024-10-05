// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GetAppDependenciesResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetAppDependenciesResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGetAppDependenciesResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
// End Cross Module References
class UScriptStruct* FGetAppDependenciesResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGetAppDependenciesResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetAppDependenciesResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("GetAppDependenciesResult"), sizeof(FGetAppDependenciesResult), Get_Z_Construct_UScriptStruct_FGetAppDependenciesResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGetAppDependenciesResult>()
{
	return FGetAppDependenciesResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetAppDependenciesResult(FGetAppDependenciesResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GetAppDependenciesResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGetAppDependenciesResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGetAppDependenciesResult()
	{
		UScriptStruct::DeferCppStructOps<FGetAppDependenciesResult>(FName(TEXT("GetAppDependenciesResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGetAppDependenciesResult;
	struct Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AppIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumAppDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAppDependencies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNumAppDependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNumAppDependencies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GetAppDependenciesResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetAppDependenciesResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetAppDependenciesResult" },
		{ "ModuleRelativePath", "Public/GetAppDependenciesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAppDependenciesResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetAppDependenciesResult" },
		{ "ModuleRelativePath", "Public/GetAppDependenciesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAppDependenciesResult, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_AppIDs_Inner = { "AppIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_AppIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetAppDependenciesResult" },
		{ "ModuleRelativePath", "Public/GetAppDependenciesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_AppIDs = { "AppIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAppDependenciesResult, AppIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_AppIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_AppIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_NumAppDependencies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetAppDependenciesResult" },
		{ "ModuleRelativePath", "Public/GetAppDependenciesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_NumAppDependencies = { "NumAppDependencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAppDependenciesResult, NumAppDependencies), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_NumAppDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_NumAppDependencies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_TotalNumAppDependencies_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetAppDependenciesResult" },
		{ "ModuleRelativePath", "Public/GetAppDependenciesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_TotalNumAppDependencies = { "TotalNumAppDependencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAppDependenciesResult, TotalNumAppDependencies), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_TotalNumAppDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_TotalNumAppDependencies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_AppIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_AppIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_NumAppDependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::NewProp_TotalNumAppDependencies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GetAppDependenciesResult",
		sizeof(FGetAppDependenciesResult),
		alignof(FGetAppDependenciesResult),
		Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetAppDependenciesResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetAppDependenciesResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetAppDependenciesResult"), sizeof(FGetAppDependenciesResult), Get_Z_Construct_UScriptStruct_FGetAppDependenciesResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetAppDependenciesResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetAppDependenciesResult_Hash() { return 3492210428U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
