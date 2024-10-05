// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/IPCFailure.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPCFailure() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIPCFailure();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFailureType();
// End Cross Module References
class UScriptStruct* FIPCFailure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FIPCFailure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIPCFailure, Z_Construct_UPackage__Script_SteamCore(), TEXT("IPCFailure"), sizeof(FIPCFailure), Get_Z_Construct_UScriptStruct_FIPCFailure_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FIPCFailure>()
{
	return FIPCFailure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIPCFailure(FIPCFailure::StaticStruct, TEXT("/Script/SteamCore"), TEXT("IPCFailure"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFIPCFailure
{
	FScriptStruct_SteamCore_StaticRegisterNativesFIPCFailure()
	{
		UScriptStruct::DeferCppStructOps<FIPCFailure>(FName(TEXT("IPCFailure")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFIPCFailure;
	struct Z_Construct_UScriptStruct_FIPCFailure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailureType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailureType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FailureType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IPCFailure.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIPCFailure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIPCFailure>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IPCFailure" },
		{ "ModuleRelativePath", "Public/IPCFailure.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIPCFailure, FailureType), Z_Construct_UEnum_SteamCore_ESteamFailureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIPCFailure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"IPCFailure",
		sizeof(FIPCFailure),
		alignof(FIPCFailure),
		Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIPCFailure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIPCFailure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IPCFailure"), sizeof(FIPCFailure), Get_Z_Construct_UScriptStruct_FIPCFailure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIPCFailure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIPCFailure_Hash() { return 1116555335U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
