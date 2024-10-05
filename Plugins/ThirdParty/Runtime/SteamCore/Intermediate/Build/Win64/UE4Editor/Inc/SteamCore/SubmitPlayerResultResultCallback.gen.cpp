// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SubmitPlayerResultResultCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmitPlayerResultResultCallback() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FSubmitPlayerResultResultCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("SubmitPlayerResultResultCallback"), sizeof(FSubmitPlayerResultResultCallback), Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSubmitPlayerResultResultCallback>()
{
	return FSubmitPlayerResultResultCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubmitPlayerResultResultCallback(FSubmitPlayerResultResultCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SubmitPlayerResultResultCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSubmitPlayerResultResultCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSubmitPlayerResultResultCallback()
	{
		UScriptStruct::DeferCppStructOps<FSubmitPlayerResultResultCallback>(FName(TEXT("SubmitPlayerResultResultCallback")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSubmitPlayerResultResultCallback;
	struct Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubmitPlayerResultResultCallback.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmitPlayerResultResultCallback>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubmitPlayerResultResultCallback" },
		{ "ModuleRelativePath", "Public/SubmitPlayerResultResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubmitPlayerResultResultCallback" },
		{ "ModuleRelativePath", "Public/SubmitPlayerResultResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID = { "UniqueGameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, UniqueGameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubmitPlayerResultResultCallback" },
		{ "ModuleRelativePath", "Public/SubmitPlayerResultResultCallback.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubmitPlayerResultResultCallback, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_UniqueGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::NewProp_SteamIDPlayer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SubmitPlayerResultResultCallback",
		sizeof(FSubmitPlayerResultResultCallback),
		alignof(FSubmitPlayerResultResultCallback),
		Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubmitPlayerResultResultCallback"), sizeof(FSubmitPlayerResultResultCallback), Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubmitPlayerResultResultCallback_Hash() { return 2107620118U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
