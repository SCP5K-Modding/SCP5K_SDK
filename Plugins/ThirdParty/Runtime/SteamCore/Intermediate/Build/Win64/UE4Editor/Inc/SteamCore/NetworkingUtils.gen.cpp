// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/NetworkingUtils.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkingUtils() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UNetworkingUtils_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UNetworkingUtils();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation();
// End Cross Module References
	DEFINE_FUNCTION(UNetworkingUtils::execCheckPingDataUpToDate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAgeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckPingDataUpToDate(Z_Param_MaxAgeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworkingUtils::execConvertPingLocationToString)
	{
		P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNetworkingUtils::ConvertPingLocationToString(Z_Param_Out_Location,Z_Param_Out_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworkingUtils::execEstimatePingTimeBetweenTwoLocations)
	{
		P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location1);
		P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Location2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EstimatePingTimeBetweenTwoLocations(Z_Param_Out_Location1,Z_Param_Out_Location2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworkingUtils::execEstimatePingTimeFromLocalHost)
	{
		P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_RemoteLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->EstimatePingTimeFromLocalHost(Z_Param_Out_RemoteLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworkingUtils::execGetLocalPingLocation)
	{
		P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLocalPingLocation(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworkingUtils::execInitRelayNetworkAccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitRelayNetworkAccess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworkingUtils::execParsePingLocationString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_GET_STRUCT_REF(FSteamNetworkPingLocation,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNetworkingUtils::ParsePingLocationString(Z_Param_String,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	void UNetworkingUtils::StaticRegisterNativesUNetworkingUtils()
	{
		UClass* Class = UNetworkingUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPingDataUpToDate", &UNetworkingUtils::execCheckPingDataUpToDate },
			{ "ConvertPingLocationToString", &UNetworkingUtils::execConvertPingLocationToString },
			{ "EstimatePingTimeBetweenTwoLocations", &UNetworkingUtils::execEstimatePingTimeBetweenTwoLocations },
			{ "EstimatePingTimeFromLocalHost", &UNetworkingUtils::execEstimatePingTimeFromLocalHost },
			{ "GetLocalPingLocation", &UNetworkingUtils::execGetLocalPingLocation },
			{ "InitRelayNetworkAccess", &UNetworkingUtils::execInitRelayNetworkAccess },
			{ "ParsePingLocationString", &UNetworkingUtils::execParsePingLocationString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics
	{
		struct NetworkingUtils_eventCheckPingDataUpToDate_Parms
		{
			float MaxAgeSeconds;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAgeSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventCheckPingDataUpToDate_Parms, MaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NetworkingUtils_eventCheckPingDataUpToDate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NetworkingUtils_eventCheckPingDataUpToDate_Parms), &Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_MaxAgeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "CheckPingDataUpToDate", nullptr, nullptr, sizeof(NetworkingUtils_eventCheckPingDataUpToDate_Parms), Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics
	{
		struct NetworkingUtils_eventConvertPingLocationToString_Parms
		{
			FSteamNetworkPingLocation Location;
			FString String;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventConvertPingLocationToString_Parms, Location), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventConvertPingLocationToString_Parms, String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::NewProp_String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "ConvertPingLocationToString", nullptr, nullptr, sizeof(NetworkingUtils_eventConvertPingLocationToString_Parms), Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics
	{
		struct NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms
		{
			FSteamNetworkPingLocation Location1;
			FSteamNetworkPingLocation Location2;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1 = { "Location1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, Location1), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2 = { "Location2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, Location2), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_Location2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "EstimatePingTimeBetweenTwoLocations", nullptr, nullptr, sizeof(NetworkingUtils_eventEstimatePingTimeBetweenTwoLocations_Parms), Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics
	{
		struct NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms
		{
			FSteamNetworkPingLocation RemoteLocation;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemoteLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation = { "RemoteLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms, RemoteLocation), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_RemoteLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "EstimatePingTimeFromLocalHost", nullptr, nullptr, sizeof(NetworkingUtils_eventEstimatePingTimeFromLocalHost_Parms), Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics
	{
		struct NetworkingUtils_eventGetLocalPingLocation_Parms
		{
			FSteamNetworkPingLocation Result;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventGetLocalPingLocation_Parms, Result), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventGetLocalPingLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "GetLocalPingLocation", nullptr, nullptr, sizeof(NetworkingUtils_eventGetLocalPingLocation_Parms), Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "InitRelayNetworkAccess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics
	{
		struct NetworkingUtils_eventParsePingLocationString_Parms
		{
			FString String;
			FSteamNetworkPingLocation Result;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventParsePingLocationString_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NetworkingUtils_eventParsePingLocationString_Parms, Result), Z_Construct_UScriptStruct_FSteamNetworkPingLocation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NetworkingUtils_eventParsePingLocationString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NetworkingUtils_eventParsePingLocationString_Parms), &Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkingUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworkingUtils, nullptr, "ParsePingLocationString", nullptr, nullptr, sizeof(NetworkingUtils_eventParsePingLocationString_Parms), Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNetworkingUtils_NoRegister()
	{
		return UNetworkingUtils::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkingUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkingUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetworkingUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworkingUtils_CheckPingDataUpToDate, "CheckPingDataUpToDate" }, // 1449685685
		{ &Z_Construct_UFunction_UNetworkingUtils_ConvertPingLocationToString, "ConvertPingLocationToString" }, // 2929014827
		{ &Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeBetweenTwoLocations, "EstimatePingTimeBetweenTwoLocations" }, // 607298057
		{ &Z_Construct_UFunction_UNetworkingUtils_EstimatePingTimeFromLocalHost, "EstimatePingTimeFromLocalHost" }, // 2298064413
		{ &Z_Construct_UFunction_UNetworkingUtils_GetLocalPingLocation, "GetLocalPingLocation" }, // 2808647538
		{ &Z_Construct_UFunction_UNetworkingUtils_InitRelayNetworkAccess, "InitRelayNetworkAccess" }, // 1706473968
		{ &Z_Construct_UFunction_UNetworkingUtils_ParsePingLocationString, "ParsePingLocationString" }, // 1067654463
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkingUtils_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NetworkingUtils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NetworkingUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkingUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkingUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetworkingUtils_Statics::ClassParams = {
		&UNetworkingUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkingUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkingUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkingUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetworkingUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetworkingUtils, 2932096332);
	template<> STEAMCORE_API UClass* StaticClass<UNetworkingUtils>()
	{
		return UNetworkingUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetworkingUtils(Z_Construct_UClass_UNetworkingUtils, &UNetworkingUtils::StaticClass, TEXT("/Script/SteamCore"), TEXT("UNetworkingUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkingUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
