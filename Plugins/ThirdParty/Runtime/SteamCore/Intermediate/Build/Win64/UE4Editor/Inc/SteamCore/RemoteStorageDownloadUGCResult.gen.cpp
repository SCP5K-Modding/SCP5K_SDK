// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemoteStorageDownloadUGCResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteStorageDownloadUGCResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FRemoteStorageDownloadUGCResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageDownloadUGCResult"), sizeof(FRemoteStorageDownloadUGCResult), Get_Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageDownloadUGCResult>()
{
	return FRemoteStorageDownloadUGCResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStorageDownloadUGCResult(FRemoteStorageDownloadUGCResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStorageDownloadUGCResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageDownloadUGCResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageDownloadUGCResult()
	{
		UScriptStruct::DeferCppStructOps<FRemoteStorageDownloadUGCResult>(FName(TEXT("RemoteStorageDownloadUGCResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageDownloadUGCResult;
	struct Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeInBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeInBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorageDownloadUGCResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageDownloadUGCResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageDownloadUGCResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageDownloadUGCResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageDownloadUGCResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageDownloadUGCResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle = { "FileHandle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, FileHandle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageDownloadUGCResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageDownloadUGCResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageDownloadUGCResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageDownloadUGCResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes = { "SizeInBytes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, SizeInBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageDownloadUGCResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageDownloadUGCResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageDownloadUGCResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageDownloadUGCResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageDownloadUGCResult, SteamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_FileHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SizeInBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::NewProp_SteamIDOwner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageDownloadUGCResult",
		sizeof(FRemoteStorageDownloadUGCResult),
		alignof(FRemoteStorageDownloadUGCResult),
		Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStorageDownloadUGCResult"), sizeof(FRemoteStorageDownloadUGCResult), Get_Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageDownloadUGCResult_Hash() { return 901349655U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
