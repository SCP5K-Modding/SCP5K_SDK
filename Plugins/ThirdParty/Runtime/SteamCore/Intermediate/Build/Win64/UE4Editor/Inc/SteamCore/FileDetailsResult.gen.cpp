// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/FileDetailsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileDetailsResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FFileDetailsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFileDetailsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileDetailsResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("FileDetailsResult"), sizeof(FFileDetailsResult), Get_Z_Construct_UScriptStruct_FFileDetailsResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFileDetailsResult>()
{
	return FFileDetailsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFileDetailsResult(FFileDetailsResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FileDetailsResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFileDetailsResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFileDetailsResult()
	{
		UScriptStruct::DeferCppStructOps<FFileDetailsResult>(FName(TEXT("FileDetailsResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFileDetailsResult;
	struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SHA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SHA;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Flags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileDetailsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FileDetailsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileDetailsResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileDetailsResult" },
		{ "ModuleRelativePath", "Public/FileDetailsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFileDetailsResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileDetailsResult" },
		{ "ModuleRelativePath", "Public/FileDetailsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFileDetailsResult, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileDetailsResult" },
		{ "ModuleRelativePath", "Public/FileDetailsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA = { "SHA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFileDetailsResult, SHA), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileDetailsResult" },
		{ "ModuleRelativePath", "Public/FileDetailsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFileDetailsResult, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FileDetailsResult",
		sizeof(FFileDetailsResult),
		alignof(FFileDetailsResult),
		Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFileDetailsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FileDetailsResult"), sizeof(FFileDetailsResult), Get_Z_Construct_UScriptStruct_FFileDetailsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFileDetailsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFileDetailsResult_Hash() { return 764957938U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
