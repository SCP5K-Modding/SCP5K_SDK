// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SearchForGameProgressCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSearchForGameProgressCallback() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameProgressCallback();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FSearchForGameProgressCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchForGameProgressCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("SearchForGameProgressCallback"), sizeof(FSearchForGameProgressCallback), Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSearchForGameProgressCallback>()
{
	return FSearchForGameProgressCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSearchForGameProgressCallback(FSearchForGameProgressCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SearchForGameProgressCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameProgressCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameProgressCallback()
	{
		UScriptStruct::DeferCppStructOps<FSearchForGameProgressCallback>(FName(TEXT("SearchForGameProgressCallback")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameProgressCallback;
	struct Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDEndedSearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDEndedSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsRemainingEstimate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsRemainingEstimate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersSearching_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersSearching;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SearchForGameProgressCallback.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchForGameProgressCallback>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameProgressCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameProgressCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameProgressCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameProgressCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameProgressCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameProgressCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, LobbyId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameProgressCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameProgressCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch = { "SteamIDEndedSearch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SteamIDEndedSearch), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameProgressCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameProgressCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate = { "SecondsRemainingEstimate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, SecondsRemainingEstimate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameProgressCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameProgressCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching = { "PlayersSearching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameProgressCallback, PlayersSearching), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SearchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SteamIDEndedSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_SecondsRemainingEstimate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::NewProp_PlayersSearching,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SearchForGameProgressCallback",
		sizeof(FSearchForGameProgressCallback),
		alignof(FSearchForGameProgressCallback),
		Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameProgressCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SearchForGameProgressCallback"), sizeof(FSearchForGameProgressCallback), Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSearchForGameProgressCallback_Hash() { return 722579921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
