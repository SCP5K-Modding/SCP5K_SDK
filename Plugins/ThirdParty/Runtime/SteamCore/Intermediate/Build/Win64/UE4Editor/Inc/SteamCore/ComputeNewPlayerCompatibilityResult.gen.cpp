// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ComputeNewPlayerCompatibilityResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeNewPlayerCompatibilityResult() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FComputeNewPlayerCompatibilityResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ComputeNewPlayerCompatibilityResult"), sizeof(FComputeNewPlayerCompatibilityResult), Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FComputeNewPlayerCompatibilityResult>()
{
	return FComputeNewPlayerCompatibilityResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComputeNewPlayerCompatibilityResult(FComputeNewPlayerCompatibilityResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ComputeNewPlayerCompatibilityResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFComputeNewPlayerCompatibilityResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFComputeNewPlayerCompatibilityResult()
	{
		UScriptStruct::DeferCppStructOps<FComputeNewPlayerCompatibilityResult>(FName(TEXT("ComputeNewPlayerCompatibilityResult")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFComputeNewPlayerCompatibilityResult;
	struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersThatDontLikeCandidate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersThatDontLikeCandidate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersThatCandidateDoesntLike_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersThatCandidateDoesntLike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClanPlayersThatDontLikeCandidate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClanPlayersThatDontLikeCandidate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDCandidate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDCandidate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComputeNewPlayerCompatibilityResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeNewPlayerCompatibilityResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputeNewPlayerCompatibilityResult" },
		{ "ModuleRelativePath", "Public/ComputeNewPlayerCompatibilityResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputeNewPlayerCompatibilityResult" },
		{ "ModuleRelativePath", "Public/ComputeNewPlayerCompatibilityResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate = { "PlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, PlayersThatDontLikeCandidate), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputeNewPlayerCompatibilityResult" },
		{ "ModuleRelativePath", "Public/ComputeNewPlayerCompatibilityResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike = { "PlayersThatCandidateDoesntLike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, PlayersThatCandidateDoesntLike), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputeNewPlayerCompatibilityResult" },
		{ "ModuleRelativePath", "Public/ComputeNewPlayerCompatibilityResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate = { "ClanPlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, ClanPlayersThatDontLikeCandidate), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ComputeNewPlayerCompatibilityResult" },
		{ "ModuleRelativePath", "Public/ComputeNewPlayerCompatibilityResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate = { "SteamIDCandidate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, SteamIDCandidate), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ComputeNewPlayerCompatibilityResult",
		sizeof(FComputeNewPlayerCompatibilityResult),
		alignof(FComputeNewPlayerCompatibilityResult),
		Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComputeNewPlayerCompatibilityResult"), sizeof(FComputeNewPlayerCompatibilityResult), Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash() { return 1339162151U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
