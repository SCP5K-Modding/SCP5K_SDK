// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/HostPingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostPingData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHostPingData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FHostPingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FHostPingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHostPingData, Z_Construct_UPackage__Script_SteamCore(), TEXT("HostPingData"), sizeof(FHostPingData), Get_Z_Construct_UScriptStruct_FHostPingData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FHostPingData>()
{
	return FHostPingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHostPingData(FHostPingData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("HostPingData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFHostPingData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFHostPingData()
	{
		UScriptStruct::DeferCppStructOps<FHostPingData>(FName(TEXT("HostPingData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFHostPingData;
	struct Z_Construct_UScriptStruct_FHostPingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHostPingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HostPingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHostPingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHostPingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HostPingData" },
		{ "ModuleRelativePath", "Public/HostPingData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString = { "HostString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHostPingData, HostString), METADATA_PARAMS(Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHostPingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"HostPingData",
		sizeof(FHostPingData),
		alignof(FHostPingData),
		Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHostPingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHostPingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHostPingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HostPingData"), sizeof(FHostPingData), Get_Z_Construct_UScriptStruct_FHostPingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHostPingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHostPingData_Hash() { return 373425856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
