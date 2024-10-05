// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ReservationNotificationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReservationNotificationData() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FReservationNotificationData();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FReservationNotificationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FReservationNotificationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReservationNotificationData, Z_Construct_UPackage__Script_SteamCore(), TEXT("ReservationNotificationData"), sizeof(FReservationNotificationData), Get_Z_Construct_UScriptStruct_FReservationNotificationData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FReservationNotificationData>()
{
	return FReservationNotificationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReservationNotificationData(FReservationNotificationData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ReservationNotificationData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFReservationNotificationData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFReservationNotificationData()
	{
		UScriptStruct::DeferCppStructOps<FReservationNotificationData>(FName(TEXT("ReservationNotificationData")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFReservationNotificationData;
	struct Z_Construct_UScriptStruct_FReservationNotificationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDJoiner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDJoiner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReservationNotificationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReservationNotificationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReservationNotificationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReservationNotificationData" },
		{ "ModuleRelativePath", "Public/ReservationNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReservationNotificationData, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ReservationNotificationData" },
		{ "ModuleRelativePath", "Public/ReservationNotificationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner = { "SteamIDJoiner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReservationNotificationData, SteamIDJoiner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_BeaconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReservationNotificationData_Statics::NewProp_SteamIDJoiner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReservationNotificationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ReservationNotificationData",
		sizeof(FReservationNotificationData),
		alignof(FReservationNotificationData),
		Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservationNotificationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReservationNotificationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReservationNotificationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReservationNotificationData"), sizeof(FReservationNotificationData), Get_Z_Construct_UScriptStruct_FReservationNotificationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReservationNotificationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReservationNotificationData_Hash() { return 46871016U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
