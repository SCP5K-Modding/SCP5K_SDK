// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamPartyBeaconLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamPartyBeaconLocation() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType();
// End Cross Module References
class UScriptStruct* FSteamPartyBeaconLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamPartyBeaconLocation"), sizeof(FSteamPartyBeaconLocation), Get_Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamPartyBeaconLocation>()
{
	return FSteamPartyBeaconLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamPartyBeaconLocation(FSteamPartyBeaconLocation::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamPartyBeaconLocation"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamPartyBeaconLocation
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamPartyBeaconLocation()
	{
		UScriptStruct::DeferCppStructOps<FSteamPartyBeaconLocation>(FName(TEXT("SteamPartyBeaconLocation")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamPartyBeaconLocation;
	struct Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamPartyBeaconLocation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamPartyBeaconLocation>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamPartyBeaconLocation" },
		{ "ModuleRelativePath", "Public/SteamPartyBeaconLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamPartyBeaconLocation, Type), Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamPartyBeaconLocation" },
		{ "ModuleRelativePath", "Public/SteamPartyBeaconLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId = { "LocationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamPartyBeaconLocation, LocationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::NewProp_LocationId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamPartyBeaconLocation",
		sizeof(FSteamPartyBeaconLocation),
		alignof(FSteamPartyBeaconLocation),
		Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamPartyBeaconLocation"), sizeof(FSteamPartyBeaconLocation), Get_Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamPartyBeaconLocation_Hash() { return 1114351342U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
