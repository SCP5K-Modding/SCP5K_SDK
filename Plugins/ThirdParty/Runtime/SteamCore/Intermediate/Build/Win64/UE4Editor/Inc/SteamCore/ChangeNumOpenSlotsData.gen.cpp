// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ChangeNumOpenSlotsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeNumOpenSlotsData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
class UScriptStruct* FChangeNumOpenSlotsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData, Z_Construct_UPackage__Script_SteamCore(), TEXT("ChangeNumOpenSlotsData"), sizeof(FChangeNumOpenSlotsData), Get_Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FChangeNumOpenSlotsData>()
{
	return FChangeNumOpenSlotsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChangeNumOpenSlotsData(FChangeNumOpenSlotsData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ChangeNumOpenSlotsData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFChangeNumOpenSlotsData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFChangeNumOpenSlotsData()
	{
		UScriptStruct::DeferCppStructOps<FChangeNumOpenSlotsData>(FName(TEXT("ChangeNumOpenSlotsData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFChangeNumOpenSlotsData;
	struct Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChangeNumOpenSlotsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChangeNumOpenSlotsData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChangeNumOpenSlotsData" },
		{ "ModuleRelativePath", "Public/ChangeNumOpenSlotsData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChangeNumOpenSlotsData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ChangeNumOpenSlotsData",
		sizeof(FChangeNumOpenSlotsData),
		alignof(FChangeNumOpenSlotsData),
		Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChangeNumOpenSlotsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChangeNumOpenSlotsData"), sizeof(FChangeNumOpenSlotsData), Get_Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChangeNumOpenSlotsData_Hash() { return 2154129721U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
