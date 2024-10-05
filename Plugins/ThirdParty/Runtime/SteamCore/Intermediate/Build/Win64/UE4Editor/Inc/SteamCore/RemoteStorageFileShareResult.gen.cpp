// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemoteStorageFileShareResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteStorageFileShareResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
// End Cross Module References
class UScriptStruct* FRemoteStorageFileShareResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageFileShareResult"), sizeof(FRemoteStorageFileShareResult), Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageFileShareResult>()
{
	return FRemoteStorageFileShareResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStorageFileShareResult(FRemoteStorageFileShareResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStorageFileShareResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileShareResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileShareResult()
	{
		UScriptStruct::DeferCppStructOps<FRemoteStorageFileShareResult>(FName(TEXT("RemoteStorageFileShareResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileShareResult;
	struct Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_File;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorageFileShareResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileShareResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageFileShareResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageFileShareResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageFileShareResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageFileShareResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, File), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorageFileShareResult" },
		{ "ModuleRelativePath", "Public/RemoteStorageFileShareResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageFileShareResult",
		sizeof(FRemoteStorageFileShareResult),
		alignof(FRemoteStorageFileShareResult),
		Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStorageFileShareResult"), sizeof(FRemoteStorageFileShareResult), Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash() { return 39266920U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
