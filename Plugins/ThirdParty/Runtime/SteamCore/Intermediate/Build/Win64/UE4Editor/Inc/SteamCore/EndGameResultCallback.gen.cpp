// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/EndGameResultCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameResultCallback() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEndGameResultCallback();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FEndGameResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndGameResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("EndGameResultCallback"), sizeof(FEndGameResultCallback), Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FEndGameResultCallback>()
{
	return FEndGameResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEndGameResultCallback(FEndGameResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("EndGameResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFEndGameResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFEndGameResultCallback()
	{
		UScriptStruct::DeferCppStructOps<FEndGameResultCallback>(FName(TEXT("EndGameResultCallback")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFEndGameResultCallback;
	struct Z_Construct_UScriptStruct_FEndGameResultCallback_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueGameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueGameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EndGameResultCallback.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndGameResultCallback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EndGameResultCallback" },
		{ "ModuleRelativePath", "Public/EndGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEndGameResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EndGameResultCallback" },
		{ "ModuleRelativePath", "Public/EndGameResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEndGameResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::NewProp_UniqueGameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"EndGameResultCallback",
		sizeof(FEndGameResultCallback),
		alignof(FEndGameResultCallback),
		Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEndGameResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EndGameResultCallback"), sizeof(FEndGameResultCallback), Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEndGameResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEndGameResultCallback_Hash() { return 1751635492U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
