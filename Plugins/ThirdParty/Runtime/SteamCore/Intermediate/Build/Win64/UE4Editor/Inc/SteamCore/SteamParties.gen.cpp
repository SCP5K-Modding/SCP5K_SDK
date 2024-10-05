// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamParties.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamParties() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamParties_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamParties();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPartyBeaconID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamPartyBeaconLocation();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamParties::execCancelReservation)
	{
		P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconID);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamParties::CancelReservation(Z_Param_BeaconID,Z_Param_SteamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execChangeNumOpenSlots)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconID);
		P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeNumOpenSlots(FOnChangeNumOpenSlots(Z_Param_Out_Callback),Z_Param_BeaconID,Z_Param_OpenSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execCreateBeacon)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_OpenSlots);
		P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_BeaconLocation);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateBeacon(FOnCreateBeacon(Z_Param_Out_Callback),Z_Param_OpenSlots,Z_Param_BeaconLocation,Z_Param_ConnectString,Z_Param_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execDestroyBeacon)
	{
		P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::DestroyBeacon(Z_Param_BeaconID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetAvailableBeaconLocations)
	{
		P_GET_TARRAY_REF(FSteamPartyBeaconLocation,Z_Param_Out_LocationList);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumLocations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::GetAvailableBeaconLocations(Z_Param_Out_LocationList,Z_Param_MaxNumLocations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetBeaconByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPartyBeaconID*)Z_Param__Result=USteamParties::GetBeaconByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetBeaconDetails)
	{
		P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconID);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDBeaconOwner);
		P_GET_STRUCT_REF(FSteamPartyBeaconLocation,Z_Param_Out_Location);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::GetBeaconDetails(Z_Param_BeaconID,Z_Param_Out_SteamIDBeaconOwner,Z_Param_Out_Location,Z_Param_Out_OutMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetBeaconLocationData)
	{
		P_GET_STRUCT(FSteamPartyBeaconLocation,Z_Param_BeaconLocation);
		P_GET_ENUM(ESteamPartiesBeaconLocationData,Z_Param_EData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PCHDataStringOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::GetBeaconLocationData(Z_Param_BeaconLocation,ESteamPartiesBeaconLocationData(Z_Param_EData),Z_Param_Out_PCHDataStringOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetNumActiveBeacons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamParties::GetNumActiveBeacons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execGetNumAvailableBeaconLocations)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLocations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamParties::GetNumAvailableBeaconLocations(Z_Param_Out_NumLocations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execJoinParty)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinParty(FOnJoinParty(Z_Param_Out_Callback),Z_Param_BeaconID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamParties::execOnReservationCompleted)
	{
		P_GET_STRUCT(FPartyBeaconID,Z_Param_BeaconID);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamParties::OnReservationCompleted(Z_Param_BeaconID,Z_Param_SteamIDUser);
		P_NATIVE_END;
	}
	void USteamParties::StaticRegisterNativesUSteamParties()
	{
		UClass* Class = USteamParties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelReservation", &USteamParties::execCancelReservation },
			{ "ChangeNumOpenSlots", &USteamParties::execChangeNumOpenSlots },
			{ "CreateBeacon", &USteamParties::execCreateBeacon },
			{ "DestroyBeacon", &USteamParties::execDestroyBeacon },
			{ "GetAvailableBeaconLocations", &USteamParties::execGetAvailableBeaconLocations },
			{ "GetBeaconByIndex", &USteamParties::execGetBeaconByIndex },
			{ "GetBeaconDetails", &USteamParties::execGetBeaconDetails },
			{ "GetBeaconLocationData", &USteamParties::execGetBeaconLocationData },
			{ "GetNumActiveBeacons", &USteamParties::execGetNumActiveBeacons },
			{ "GetNumAvailableBeaconLocations", &USteamParties::execGetNumAvailableBeaconLocations },
			{ "JoinParty", &USteamParties::execJoinParty },
			{ "OnReservationCompleted", &USteamParties::execOnReservationCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamParties_CancelReservation_Statics
	{
		struct SteamParties_eventCancelReservation_Parms
		{
			FPartyBeaconID BeaconID;
			FSteamID SteamIDUser;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_CancelReservation_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCancelReservation_Parms, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_CancelReservation_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCancelReservation_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_CancelReservation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CancelReservation_Statics::NewProp_BeaconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CancelReservation_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_CancelReservation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_CancelReservation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "CancelReservation", nullptr, nullptr, sizeof(SteamParties_eventCancelReservation_Parms), Z_Construct_UFunction_USteamParties_CancelReservation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CancelReservation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_CancelReservation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CancelReservation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_CancelReservation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_CancelReservation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics
	{
		struct SteamParties_eventChangeNumOpenSlots_Parms
		{
			FScriptDelegate Callback;
			FPartyBeaconID BeaconID;
			int32 OpenSlots;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventChangeNumOpenSlots_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlots__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventChangeNumOpenSlots_Parms, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventChangeNumOpenSlots_Parms, OpenSlots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_BeaconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::NewProp_OpenSlots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "ChangeNumOpenSlots", nullptr, nullptr, sizeof(SteamParties_eventChangeNumOpenSlots_Parms), Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_CreateBeacon_Statics
	{
		struct SteamParties_eventCreateBeacon_Parms
		{
			FScriptDelegate Callback;
			int32 OpenSlots;
			FSteamPartyBeaconLocation BeaconLocation;
			FString ConnectString;
			FString MetaData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OpenSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeacon__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_OpenSlots = { "OpenSlots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, OpenSlots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_ConnectString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, ConnectString), METADATA_PARAMS(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_ConnectString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_ConnectString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventCreateBeacon_Parms, MetaData), METADATA_PARAMS(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_OpenSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_BeaconLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_ConnectString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "CreateBeacon", nullptr, nullptr, sizeof(SteamParties_eventCreateBeacon_Parms), Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_CreateBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_CreateBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics
	{
		struct SteamParties_eventDestroyBeacon_Parms
		{
			FPartyBeaconID BeaconID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventDestroyBeacon_Parms, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventDestroyBeacon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventDestroyBeacon_Parms), &Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_BeaconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "DestroyBeacon", nullptr, nullptr, sizeof(SteamParties_eventDestroyBeacon_Parms), Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_DestroyBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_DestroyBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics
	{
		struct SteamParties_eventGetAvailableBeaconLocations_Parms
		{
			TArray<FSteamPartyBeaconLocation> LocationList;
			int32 MaxNumLocations;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocationList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumLocations;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_LocationList_Inner = { "LocationList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_LocationList = { "LocationList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetAvailableBeaconLocations_Parms, LocationList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_MaxNumLocations = { "MaxNumLocations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetAvailableBeaconLocations_Parms, MaxNumLocations), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventGetAvailableBeaconLocations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventGetAvailableBeaconLocations_Parms), &Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_LocationList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_LocationList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_MaxNumLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetAvailableBeaconLocations", nullptr, nullptr, sizeof(SteamParties_eventGetAvailableBeaconLocations_Parms), Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics
	{
		struct SteamParties_eventGetBeaconByIndex_Parms
		{
			int32 Index;
			FPartyBeaconID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetBeaconByIndex", nullptr, nullptr, sizeof(SteamParties_eventGetBeaconByIndex_Parms), Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetBeaconByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetBeaconByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics
	{
		struct SteamParties_eventGetBeaconDetails_Parms
		{
			FPartyBeaconID BeaconID;
			FSteamID SteamIDBeaconOwner;
			FSteamPartyBeaconLocation Location;
			FString OutMetadata;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDBeaconOwner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconDetails_Parms, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_SteamIDBeaconOwner = { "SteamIDBeaconOwner", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconDetails_Parms, SteamIDBeaconOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconDetails_Parms, Location), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_OutMetadata = { "OutMetadata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconDetails_Parms, OutMetadata), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventGetBeaconDetails_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventGetBeaconDetails_Parms), &Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_BeaconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_SteamIDBeaconOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_OutMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetBeaconDetails", nullptr, nullptr, sizeof(SteamParties_eventGetBeaconDetails_Parms), Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetBeaconDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetBeaconDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics
	{
		struct SteamParties_eventGetBeaconLocationData_Parms
		{
			FSteamPartyBeaconLocation BeaconLocation;
			ESteamPartiesBeaconLocationData EData;
			FString PCHDataStringOut;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EData_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PCHDataStringOut;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_BeaconLocation = { "BeaconLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconLocationData_Parms, BeaconLocation), Z_Construct_UScriptStruct_FSteamPartyBeaconLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_EData_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_EData = { "EData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconLocationData_Parms, EData), Z_Construct_UEnum_SteamCore_ESteamPartiesBeaconLocationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_PCHDataStringOut = { "PCHDataStringOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetBeaconLocationData_Parms, PCHDataStringOut), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventGetBeaconLocationData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventGetBeaconLocationData_Parms), &Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_BeaconLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_EData_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_EData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_PCHDataStringOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetBeaconLocationData", nullptr, nullptr, sizeof(SteamParties_eventGetBeaconLocationData_Parms), Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetBeaconLocationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetBeaconLocationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics
	{
		struct SteamParties_eventGetNumActiveBeacons_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetNumActiveBeacons_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetNumActiveBeacons", nullptr, nullptr, sizeof(SteamParties_eventGetNumActiveBeacons_Parms), Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetNumActiveBeacons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetNumActiveBeacons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics
	{
		struct SteamParties_eventGetNumAvailableBeaconLocations_Parms
		{
			int32 NumLocations;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLocations;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_NumLocations = { "NumLocations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventGetNumAvailableBeaconLocations_Parms, NumLocations), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamParties_eventGetNumAvailableBeaconLocations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamParties_eventGetNumAvailableBeaconLocations_Parms), &Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_NumLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "GetNumAvailableBeaconLocations", nullptr, nullptr, sizeof(SteamParties_eventGetNumAvailableBeaconLocations_Parms), Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_JoinParty_Statics
	{
		struct SteamParties_eventJoinParty_Parms
		{
			FScriptDelegate Callback;
			FPartyBeaconID BeaconID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventJoinParty_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinParty__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventJoinParty_Parms, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_JoinParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_JoinParty_Statics::NewProp_BeaconID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_JoinParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_JoinParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "JoinParty", nullptr, nullptr, sizeof(SteamParties_eventJoinParty_Parms), Z_Construct_UFunction_USteamParties_JoinParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_JoinParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_JoinParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_JoinParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_JoinParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_JoinParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics
	{
		struct SteamParties_eventOnReservationCompleted_Parms
		{
			FPartyBeaconID BeaconID;
			FSteamID SteamIDUser;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeaconID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::NewProp_BeaconID = { "BeaconID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventOnReservationCompleted_Parms, BeaconID), Z_Construct_UScriptStruct_FPartyBeaconID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamParties_eventOnReservationCompleted_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::NewProp_BeaconID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamParties, nullptr, "OnReservationCompleted", nullptr, nullptr, sizeof(SteamParties_eventOnReservationCompleted_Parms), Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamParties_OnReservationCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamParties_OnReservationCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamParties_NoRegister()
	{
		return USteamParties::StaticClass();
	}
	struct Z_Construct_UClass_USteamParties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinPartyDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinPartyDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateBeaconDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CreateBeaconDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservationNotificationDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReservationNotificationDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeNumOpenSlotsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeNumOpenSlotsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableBeaconLocationsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvailableBeaconLocationsDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveBeaconsDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActiveBeaconsDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamParties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamParties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamParties_CancelReservation, "CancelReservation" }, // 166024241
		{ &Z_Construct_UFunction_USteamParties_ChangeNumOpenSlots, "ChangeNumOpenSlots" }, // 1074560485
		{ &Z_Construct_UFunction_USteamParties_CreateBeacon, "CreateBeacon" }, // 2533138515
		{ &Z_Construct_UFunction_USteamParties_DestroyBeacon, "DestroyBeacon" }, // 3765066355
		{ &Z_Construct_UFunction_USteamParties_GetAvailableBeaconLocations, "GetAvailableBeaconLocations" }, // 3817396823
		{ &Z_Construct_UFunction_USteamParties_GetBeaconByIndex, "GetBeaconByIndex" }, // 90953747
		{ &Z_Construct_UFunction_USteamParties_GetBeaconDetails, "GetBeaconDetails" }, // 2047180171
		{ &Z_Construct_UFunction_USteamParties_GetBeaconLocationData, "GetBeaconLocationData" }, // 237601132
		{ &Z_Construct_UFunction_USteamParties_GetNumActiveBeacons, "GetNumActiveBeacons" }, // 3532734520
		{ &Z_Construct_UFunction_USteamParties_GetNumAvailableBeaconLocations, "GetNumAvailableBeaconLocations" }, // 797388320
		{ &Z_Construct_UFunction_USteamParties_JoinParty, "JoinParty" }, // 998319287
		{ &Z_Construct_UFunction_USteamParties_OnReservationCompleted, "OnReservationCompleted" }, // 912930443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamParties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate = { "JoinPartyDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, JoinPartyDelegate), Z_Construct_UDelegateFunction_SteamCore_OnJoinPartyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate = { "CreateBeaconDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, CreateBeaconDelegate), Z_Construct_UDelegateFunction_SteamCore_OnCreateBeaconDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate = { "ReservationNotificationDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, ReservationNotificationDelegate), Z_Construct_UDelegateFunction_SteamCore_OnReservationNotificationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate = { "ChangeNumOpenSlotsDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, ChangeNumOpenSlotsDelegate), Z_Construct_UDelegateFunction_SteamCore_OnChangeNumOpenSlotsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate = { "AvailableBeaconLocationsDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, AvailableBeaconLocationsDelegate), Z_Construct_UDelegateFunction_SteamCore_OnAvailableBeaconLocationsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamParties" },
		{ "ModuleRelativePath", "Public/SteamParties.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate = { "ActiveBeaconsDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamParties, ActiveBeaconsDelegate), Z_Construct_UDelegateFunction_SteamCore_OnActiveBeaconsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamParties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_JoinPartyDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_CreateBeaconDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_ReservationNotificationDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_ChangeNumOpenSlotsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_AvailableBeaconLocationsDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamParties_Statics::NewProp_ActiveBeaconsDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamParties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamParties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamParties_Statics::ClassParams = {
		&USteamParties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamParties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamParties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamParties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamParties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamParties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamParties, 1091761038);
	template<> STEAMCORE_API UClass* StaticClass<USteamParties>()
	{
		return USteamParties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamParties(Z_Construct_UClass_USteamParties, &USteamParties::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamParties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamParties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
