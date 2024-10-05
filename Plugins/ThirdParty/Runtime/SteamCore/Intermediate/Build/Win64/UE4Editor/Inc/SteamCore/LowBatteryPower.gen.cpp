// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/LowBatteryPower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowBatteryPower() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
class UScriptStruct* FLowBatteryPower::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowBatteryPower, Z_Construct_UPackage__Script_SteamCore(), TEXT("LowBatteryPower"), sizeof(FLowBatteryPower), Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLowBatteryPower>()
{
	return FLowBatteryPower::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLowBatteryPower(FLowBatteryPower::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LowBatteryPower"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLowBatteryPower
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLowBatteryPower()
	{
		UScriptStruct::DeferCppStructOps<FLowBatteryPower>(FName(TEXT("LowBatteryPower")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLowBatteryPower;
	struct Z_Construct_UScriptStruct_FLowBatteryPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinutesBatteryLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinutesBatteryLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LowBatteryPower.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowBatteryPower>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LowBatteryPower" },
		{ "ModuleRelativePath", "Public/LowBatteryPower.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft = { "MinutesBatteryLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowBatteryPower, MinutesBatteryLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LowBatteryPower",
		sizeof(FLowBatteryPower),
		alignof(FLowBatteryPower),
		Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LowBatteryPower"), sizeof(FLowBatteryPower), Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLowBatteryPower_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash() { return 443005630U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
