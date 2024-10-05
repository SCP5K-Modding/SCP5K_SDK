// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SearchForGameResultCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSearchForGameResultCallback() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameResultCallback();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FSearchForGameResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchForGameResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("SearchForGameResultCallback"), sizeof(FSearchForGameResultCallback), Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSearchForGameResultCallback>()
{
	return FSearchForGameResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSearchForGameResultCallback(FSearchForGameResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SearchForGameResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameResultCallback()
	{
		UScriptStruct::DeferCppStructOps<FSearchForGameResultCallback>(FName(TEXT("SearchForGameResultCallback")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSearchForGameResultCallback;
	struct Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountPlayersInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountPlayersInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountAcceptedGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountAcceptedGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinalCallback_MetaData[];
#endif
		static void NewProp_bFinalCallback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinalCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SearchForGameResultCallback.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchForGameResultCallback>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameResultCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID = { "SearchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, SearchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameResultCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameResultCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame = { "CountPlayersInGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, CountPlayersInGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameResultCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame = { "CountAcceptedGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, CountAcceptedGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameResultCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost = { "SteamIDHost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSearchForGameResultCallback, SteamIDHost), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SearchForGameResultCallback" },
		{ "ModuleRelativePath", "Public/SearchForGameResultCallback.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_SetBit(void* Obj)
	{
		((FSearchForGameResultCallback*)Obj)->bFinalCallback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback = { "bFinalCallback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSearchForGameResultCallback), &Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SearchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountPlayersInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_CountAcceptedGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_SteamIDHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::NewProp_bFinalCallback,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SearchForGameResultCallback",
		sizeof(FSearchForGameResultCallback),
		alignof(FSearchForGameResultCallback),
		Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchForGameResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SearchForGameResultCallback"), sizeof(FSearchForGameResultCallback), Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSearchForGameResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSearchForGameResultCallback_Hash() { return 3412534104U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
