// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/P2PSessionConnectFail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP2PSessionConnectFail() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionConnectFail();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSessionError();
// End Cross Module References
class UScriptStruct* FP2PSessionConnectFail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FP2PSessionConnectFail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FP2PSessionConnectFail, Z_Construct_UPackage__Script_SteamCore(), TEXT("P2PSessionConnectFail"), sizeof(FP2PSessionConnectFail), Get_Z_Construct_UScriptStruct_FP2PSessionConnectFail_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FP2PSessionConnectFail>()
{
	return FP2PSessionConnectFail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FP2PSessionConnectFail(FP2PSessionConnectFail::StaticStruct, TEXT("/Script/SteamCore"), TEXT("P2PSessionConnectFail"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFP2PSessionConnectFail
{
	FScriptStruct_SteamCore_StaticRegisterNativesFP2PSessionConnectFail()
	{
		UScriptStruct::DeferCppStructOps<FP2PSessionConnectFail>(FName(TEXT("P2PSessionConnectFail")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFP2PSessionConnectFail;
	struct Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDRemote_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_P2PSessionError_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2PSessionError_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_P2PSessionError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/P2PSessionConnectFail.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FP2PSessionConnectFail>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "P2PSessionConnectFail" },
		{ "ModuleRelativePath", "Public/P2PSessionConnectFail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FP2PSessionConnectFail, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "P2PSessionConnectFail" },
		{ "ModuleRelativePath", "Public/P2PSessionConnectFail.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError = { "P2PSessionError", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FP2PSessionConnectFail, P2PSessionError), Z_Construct_UEnum_SteamCore_ESteamP2PSessionError, METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"P2PSessionConnectFail",
		sizeof(FP2PSessionConnectFail),
		alignof(FP2PSessionConnectFail),
		Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionConnectFail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FP2PSessionConnectFail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("P2PSessionConnectFail"), sizeof(FP2PSessionConnectFail), Get_Z_Construct_UScriptStruct_FP2PSessionConnectFail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FP2PSessionConnectFail_Hash() { return 1628012353U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
