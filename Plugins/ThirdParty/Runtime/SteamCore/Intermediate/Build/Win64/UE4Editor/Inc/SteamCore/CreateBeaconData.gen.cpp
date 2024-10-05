// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/CreateBeaconData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateBeaconData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
// End Cross Module References
class UScriptStruct* FCreateBeaconData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FCreateBeaconData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateBeaconData, Z_Construct_UPackage__Script_SteamCore(), TEXT("CreateBeaconData"), sizeof(FCreateBeaconData), Get_Z_Construct_UScriptStruct_FCreateBeaconData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FCreateBeaconData>()
{
	return FCreateBeaconData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCreateBeaconData(FCreateBeaconData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("CreateBeaconData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFCreateBeaconData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFCreateBeaconData()
	{
		UScriptStruct::DeferCppStructOps<FCreateBeaconData>(FName(TEXT("CreateBeaconData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFCreateBeaconData;
	struct Z_Construct_UScriptStruct_FCreateBeaconData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateBeaconData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CreateBeaconData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateBeaconData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateBeaconData" },
		{ "ModuleRelativePath", "Public/CreateBeaconData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateBeaconData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CreateBeaconData" },
		{ "ModuleRelativePath", "Public/CreateBeaconData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateBeaconData, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateBeaconData_Statics::NewProp_BeaconID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateBeaconData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"CreateBeaconData",
		sizeof(FCreateBeaconData),
		alignof(FCreateBeaconData),
		Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateBeaconData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateBeaconData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCreateBeaconData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CreateBeaconData"), sizeof(FCreateBeaconData), Get_Z_Construct_UScriptStruct_FCreateBeaconData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCreateBeaconData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCreateBeaconData_Hash() { return 3571708615U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
