// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GetUserItemVoteResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetUserItemVoteResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGetUserItemVoteResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FGetUserItemVoteResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGetUserItemVoteResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetUserItemVoteResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("GetUserItemVoteResult"), sizeof(FGetUserItemVoteResult), Get_Z_Construct_UScriptStruct_FGetUserItemVoteResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGetUserItemVoteResult>()
{
	return FGetUserItemVoteResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetUserItemVoteResult(FGetUserItemVoteResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GetUserItemVoteResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGetUserItemVoteResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGetUserItemVoteResult()
	{
		UScriptStruct::DeferCppStructOps<FGetUserItemVoteResult>(FName(TEXT("GetUserItemVoteResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGetUserItemVoteResult;
	struct Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVotedUp_MetaData[];
#endif
		static void NewProp_bVotedUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVotedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVotedDown_MetaData[];
#endif
		static void NewProp_bVotedDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVotedDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVoteSkipped_MetaData[];
#endif
		static void NewProp_bVoteSkipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVoteSkipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GetUserItemVoteResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetUserItemVoteResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserItemVoteResult" },
		{ "ModuleRelativePath", "Public/GetUserItemVoteResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserItemVoteResult, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserItemVoteResult" },
		{ "ModuleRelativePath", "Public/GetUserItemVoteResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetUserItemVoteResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserItemVoteResult" },
		{ "ModuleRelativePath", "Public/GetUserItemVoteResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedUp_SetBit(void* Obj)
	{
		((FGetUserItemVoteResult*)Obj)->bVotedUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedUp = { "bVotedUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGetUserItemVoteResult), &Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserItemVoteResult" },
		{ "ModuleRelativePath", "Public/GetUserItemVoteResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedDown_SetBit(void* Obj)
	{
		((FGetUserItemVoteResult*)Obj)->bVotedDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedDown = { "bVotedDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGetUserItemVoteResult), &Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVoteSkipped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GetUserItemVoteResult" },
		{ "ModuleRelativePath", "Public/GetUserItemVoteResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVoteSkipped_SetBit(void* Obj)
	{
		((FGetUserItemVoteResult*)Obj)->bVoteSkipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVoteSkipped = { "bVoteSkipped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGetUserItemVoteResult), &Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVoteSkipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVoteSkipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVoteSkipped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVotedDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::NewProp_bVoteSkipped,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GetUserItemVoteResult",
		sizeof(FGetUserItemVoteResult),
		alignof(FGetUserItemVoteResult),
		Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetUserItemVoteResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetUserItemVoteResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetUserItemVoteResult"), sizeof(FGetUserItemVoteResult), Get_Z_Construct_UScriptStruct_FGetUserItemVoteResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetUserItemVoteResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetUserItemVoteResult_Hash() { return 772679026U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
