// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUtilities() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamUtilities_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreIdentical();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHostPingData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreValid();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamComparisonOp();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
// End Cross Module References
	DEFINE_FUNCTION(USteamUtilities::execBP_BytesToString)
	{
		P_GET_TARRAY(uint8,Z_Param_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BP_BytesToString(Z_Param_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBP_StringToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=USteamUtilities::BP_StringToBytes(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakInventoryUpdateHandle)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakInventoryUpdateHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakPublishedFileID)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_FileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakPublishedFileID(Z_Param_FileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakSteamGameID)
	{
		P_GET_STRUCT(FSteamGameID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakSteamGameID(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakSteamID)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakSteamID(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakTicketHandle)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakTicketHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakUGCHandle)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakUGCHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execCancelQuery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::CancelQuery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execConstructServerFilter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UServerFilter**)Z_Param__Result=USteamUtilities::ConstructServerFilter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execEncryptString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::EncryptString(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execEqual)
	{
		P_GET_STRUCT(FSteamID,Z_Param_A);
		P_GET_STRUCT(FSteamID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::Equal(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execEqual_Exec)
	{
		P_GET_STRUCT(FSteamID,Z_Param_A);
		P_GET_STRUCT(FSteamID,Z_Param_B);
		P_GET_ENUM_REF(ESteamCoreIdentical,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::Equal_Exec(Z_Param_A,Z_Param_B,(ESteamCoreIdentical&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execFromUnixTimestamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Timestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=USteamUtilities::FromUnixTimestamp(Z_Param_Timestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetAccountType)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamAccountType*)Z_Param__Result=USteamUtilities::GetAccountType(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetBool)
	{
		P_GET_STRUCT(FSteamSessionSetting,Z_Param_settings);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::GetBool(Z_Param_settings,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetHostPingData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHostPingData*)Z_Param__Result=USteamUtilities::GetHostPingData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetInteger)
	{
		P_GET_STRUCT(FSteamSessionSetting,Z_Param_settings);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamUtilities::GetInteger(Z_Param_settings,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetPingFromHostData)
	{
		P_GET_STRUCT_REF(FHostPingData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamUtilities::GetPingFromHostData(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetPublicIp)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::GetPublicIp(FOnHTTPResponse(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetSteamIdFromPlayerState)
	{
		P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=USteamUtilities::GetSteamIdFromPlayerState(Z_Param_PlayerState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetString)
	{
		P_GET_STRUCT(FSteamSessionSetting,Z_Param_settings);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::GetString(Z_Param_settings,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid)
	{
		P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsGameIDValid(Z_Param_GameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid_Exec)
	{
		P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsGameIDValid_Exec(Z_Param_GameID,(ESteamCoreValid&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsLobby(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsPublishedFileIDValid)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsPublishedFileIDValid(Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsPublishedFileIDValid_Exec)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_Handle);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsPublishedFileIDValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsRecalculatingPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsRecalculatingPing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamIDValid_Exec)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsSteamIDValid_Exec(Z_Param_SteamID,(ESteamCoreValid&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamInventoryUpdateHandleValid(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamTicketHandleValid(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid_Exec)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsSteamTicketHandleValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsUGCHandleValid(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid_Exec)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsUGCHandleValid_Exec(Z_Param_Handle,(ESteamCoreValid&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsUsingP2PRelays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsUsingP2PRelays();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsValid)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsValid(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execListenForSteamMessages)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::ListenForSteamMessages(FOnSteamMessage(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeBool)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeBool(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeInteger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeInteger(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeInventoryUpdateHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamInventoryUpdateHandle*)Z_Param__Result=USteamUtilities::MakeInventoryUpdateHandle(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakePublishedFileID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPublishedFileID*)Z_Param__Result=USteamUtilities::MakePublishedFileID(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSearchBool)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchBool(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSearchInteger)
	{
		P_GET_ENUM(ESteamComparisonOp,Z_Param_ComparisonOperator);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchInteger(ESteamComparisonOp(Z_Param_ComparisonOperator),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSearchString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSteamGameID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamGameID*)Z_Param__Result=USteamUtilities::MakeSteamGameID(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSteamID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=USteamUtilities::MakeSteamID(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeTicketHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=USteamUtilities::MakeTicketHandle(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeUGCHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamUGCHandle*)Z_Param__Result=USteamUtilities::MakeUGCHandle(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execNotEqual)
	{
		P_GET_STRUCT(FSteamID,Z_Param_A);
		P_GET_STRUCT(FSteamID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::NotEqual(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_A);
		P_GET_STRUCT(FPublishedFileID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_Equals(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals_Exec)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_A);
		P_GET_STRUCT(FPublishedFileID,Z_Param_B);
		P_GET_ENUM_REF(ESteamCoreIdentical,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::PublishedFileID_Equals_Exec(Z_Param_A,Z_Param_B,(ESteamCoreIdentical&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_NotEquals)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_A);
		P_GET_STRUCT(FPublishedFileID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_NotEquals(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execReleaseRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::ReleaseRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execSteamItemInstanceID_Equals)
	{
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::SteamItemInstanceID_Equals(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execSteamItemInstanceID_Equals_Exec)
	{
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
		P_GET_ENUM_REF(ESteamCoreIdentical,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::SteamItemInstanceID_Equals_Exec(Z_Param_A,Z_Param_B,(ESteamCoreIdentical&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	void USteamUtilities::StaticRegisterNativesUSteamUtilities()
	{
		UClass* Class = USteamUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_BytesToString", &USteamUtilities::execBP_BytesToString },
			{ "BP_StringToBytes", &USteamUtilities::execBP_StringToBytes },
			{ "BreakInventoryUpdateHandle", &USteamUtilities::execBreakInventoryUpdateHandle },
			{ "BreakPublishedFileID", &USteamUtilities::execBreakPublishedFileID },
			{ "BreakSteamGameID", &USteamUtilities::execBreakSteamGameID },
			{ "BreakSteamID", &USteamUtilities::execBreakSteamID },
			{ "BreakTicketHandle", &USteamUtilities::execBreakTicketHandle },
			{ "BreakUGCHandle", &USteamUtilities::execBreakUGCHandle },
			{ "CancelQuery", &USteamUtilities::execCancelQuery },
			{ "ConstructServerFilter", &USteamUtilities::execConstructServerFilter },
			{ "EncryptString", &USteamUtilities::execEncryptString },
			{ "Equal", &USteamUtilities::execEqual },
			{ "Equal_Exec", &USteamUtilities::execEqual_Exec },
			{ "FromUnixTimestamp", &USteamUtilities::execFromUnixTimestamp },
			{ "GetAccountType", &USteamUtilities::execGetAccountType },
			{ "GetBool", &USteamUtilities::execGetBool },
			{ "GetHostPingData", &USteamUtilities::execGetHostPingData },
			{ "GetInteger", &USteamUtilities::execGetInteger },
			{ "GetPingFromHostData", &USteamUtilities::execGetPingFromHostData },
			{ "GetPublicIp", &USteamUtilities::execGetPublicIp },
			{ "GetSteamIdFromPlayerState", &USteamUtilities::execGetSteamIdFromPlayerState },
			{ "GetString", &USteamUtilities::execGetString },
			{ "IsGameIDValid", &USteamUtilities::execIsGameIDValid },
			{ "IsGameIDValid_Exec", &USteamUtilities::execIsGameIDValid_Exec },
			{ "IsLobby", &USteamUtilities::execIsLobby },
			{ "IsPublishedFileIDValid", &USteamUtilities::execIsPublishedFileIDValid },
			{ "IsPublishedFileIDValid_Exec", &USteamUtilities::execIsPublishedFileIDValid_Exec },
			{ "IsRecalculatingPing", &USteamUtilities::execIsRecalculatingPing },
			{ "IsSteamAvailable", &USteamUtilities::execIsSteamAvailable },
			{ "IsSteamIDValid_Exec", &USteamUtilities::execIsSteamIDValid_Exec },
			{ "IsSteamInventoryUpdateHandleValid", &USteamUtilities::execIsSteamInventoryUpdateHandleValid },
			{ "IsSteamInventoryUpdateHandleValid_Exec", &USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec },
			{ "IsSteamTicketHandleValid", &USteamUtilities::execIsSteamTicketHandleValid },
			{ "IsSteamTicketHandleValid_Exec", &USteamUtilities::execIsSteamTicketHandleValid_Exec },
			{ "IsUGCHandleValid", &USteamUtilities::execIsUGCHandleValid },
			{ "IsUGCHandleValid_Exec", &USteamUtilities::execIsUGCHandleValid_Exec },
			{ "IsUsingP2PRelays", &USteamUtilities::execIsUsingP2PRelays },
			{ "IsValid", &USteamUtilities::execIsValid },
			{ "ListenForSteamMessages", &USteamUtilities::execListenForSteamMessages },
			{ "MakeBool", &USteamUtilities::execMakeBool },
			{ "MakeInteger", &USteamUtilities::execMakeInteger },
			{ "MakeInventoryUpdateHandle", &USteamUtilities::execMakeInventoryUpdateHandle },
			{ "MakePublishedFileID", &USteamUtilities::execMakePublishedFileID },
			{ "MakeSearchBool", &USteamUtilities::execMakeSearchBool },
			{ "MakeSearchInteger", &USteamUtilities::execMakeSearchInteger },
			{ "MakeSearchString", &USteamUtilities::execMakeSearchString },
			{ "MakeSteamGameID", &USteamUtilities::execMakeSteamGameID },
			{ "MakeSteamID", &USteamUtilities::execMakeSteamID },
			{ "MakeString", &USteamUtilities::execMakeString },
			{ "MakeTicketHandle", &USteamUtilities::execMakeTicketHandle },
			{ "MakeUGCHandle", &USteamUtilities::execMakeUGCHandle },
			{ "NotEqual", &USteamUtilities::execNotEqual },
			{ "PublishedFileID_Equals", &USteamUtilities::execPublishedFileID_Equals },
			{ "PublishedFileID_Equals_Exec", &USteamUtilities::execPublishedFileID_Equals_Exec },
			{ "PublishedFileID_NotEquals", &USteamUtilities::execPublishedFileID_NotEquals },
			{ "ReleaseRequest", &USteamUtilities::execReleaseRequest },
			{ "SteamItemInstanceID_Equals", &USteamUtilities::execSteamItemInstanceID_Equals },
			{ "SteamItemInstanceID_Equals_Exec", &USteamUtilities::execSteamItemInstanceID_Equals_Exec },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics
	{
		struct SteamUtilities_eventBP_BytesToString_Parms
		{
			TArray<uint8> Array;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBP_BytesToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBP_BytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BP_BytesToString", nullptr, nullptr, sizeof(SteamUtilities_eventBP_BytesToString_Parms), Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BP_BytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics
	{
		struct SteamUtilities_eventBP_StringToBytes_Parms
		{
			FString String;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBP_StringToBytes_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBP_StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BP_StringToBytes", nullptr, nullptr, sizeof(SteamUtilities_eventBP_StringToBytes_Parms), Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BP_StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics
	{
		struct SteamUtilities_eventBreakInventoryUpdateHandle_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakInventoryUpdateHandle", nullptr, nullptr, sizeof(SteamUtilities_eventBreakInventoryUpdateHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics
	{
		struct SteamUtilities_eventBreakPublishedFileID_Parms
		{
			FPublishedFileID FileID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID = { "FileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, FileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakPublishedFileID", nullptr, nullptr, sizeof(SteamUtilities_eventBreakPublishedFileID_Parms), Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics
	{
		struct SteamUtilities_eventBreakSteamGameID_Parms
		{
			FSteamGameID SteamID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamGameID", nullptr, nullptr, sizeof(SteamUtilities_eventBreakSteamGameID_Parms), Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamGameID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics
	{
		struct SteamUtilities_eventBreakSteamID_Parms
		{
			FSteamID SteamID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamID", nullptr, nullptr, sizeof(SteamUtilities_eventBreakSteamID_Parms), Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics
	{
		struct SteamUtilities_eventBreakTicketHandle_Parms
		{
			FSteamTicketHandle Handle;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakTicketHandle", nullptr, nullptr, sizeof(SteamUtilities_eventBreakTicketHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakTicketHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics
	{
		struct SteamUtilities_eventBreakUGCHandle_Parms
		{
			FSteamUGCHandle Handle;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakUGCHandle", nullptr, nullptr, sizeof(SteamUtilities_eventBreakUGCHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_CancelQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_CancelQuery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_CancelQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "CancelQuery", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_CancelQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_CancelQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_CancelQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_CancelQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics
	{
		struct SteamUtilities_eventConstructServerFilter_Parms
		{
			UObject* WorldContextObject;
			UServerFilter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, ReturnValue), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ConstructServerFilter", nullptr, nullptr, sizeof(SteamUtilities_eventConstructServerFilter_Parms), Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_ConstructServerFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_EncryptString_Statics
	{
		struct SteamUtilities_eventEncryptString_Parms
		{
			FString String;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEncryptString_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEncryptString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "EncryptString", nullptr, nullptr, sizeof(SteamUtilities_eventEncryptString_Parms), Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_EncryptString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_Equal_Statics
	{
		struct SteamUtilities_eventEqual_Parms
		{
			FSteamID A;
			FSteamID B;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventEqual_Parms), &Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal", nullptr, nullptr, sizeof(SteamUtilities_eventEqual_Parms), Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics
	{
		struct SteamUtilities_eventEqual_Exec_Parms
		{
			FSteamID A;
			FSteamID B;
			ESteamCoreIdentical Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_B_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventEqual_Exec_Parms), Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_Equal_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics
	{
		struct SteamUtilities_eventFromUnixTimestamp_Parms
		{
			FString Timestamp;
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Timestamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventFromUnixTimestamp_Parms, Timestamp), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventFromUnixTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "FromUnixTimestamp", nullptr, nullptr, sizeof(SteamUtilities_eventFromUnixTimestamp_Parms), Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics
	{
		struct SteamUtilities_eventGetAccountType_Parms
		{
			FSteamID SteamID;
			ESteamAccountType ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetAccountType", nullptr, nullptr, sizeof(SteamUtilities_eventGetAccountType_Parms), Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetAccountType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetBool_Statics
	{
		struct SteamUtilities_eventGetBool_Parms
		{
			FSteamSessionSetting settings;
			FString Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetBool_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetBool_Parms, settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetBool_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventGetBool_Parms), &Z_Construct_UFunction_USteamUtilities_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetBool_Statics::NewProp_settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetBool_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetBool", nullptr, nullptr, sizeof(SteamUtilities_eventGetBool_Parms), Z_Construct_UFunction_USteamUtilities_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics
	{
		struct SteamUtilities_eventGetHostPingData_Parms
		{
			FHostPingData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetHostPingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FHostPingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetHostPingData", nullptr, nullptr, sizeof(SteamUtilities_eventGetHostPingData_Parms), Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetHostPingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetInteger_Statics
	{
		struct SteamUtilities_eventGetInteger_Parms
		{
			FSteamSessionSetting settings;
			FString Key;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetInteger", nullptr, nullptr, sizeof(SteamUtilities_eventGetInteger_Parms), Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics
	{
		struct SteamUtilities_eventGetPingFromHostData_Parms
		{
			FHostPingData Data;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, Data), Z_Construct_UScriptStruct_FHostPingData, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPingFromHostData", nullptr, nullptr, sizeof(SteamUtilities_eventGetPingFromHostData_Parms), Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetPingFromHostData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics
	{
		struct SteamUtilities_eventGetPublicIp_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetPublicIp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnHTTPResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPublicIp", nullptr, nullptr, sizeof(SteamUtilities_eventGetPublicIp_Parms), Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetPublicIp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics
	{
		struct SteamUtilities_eventGetSteamIdFromPlayerState_Parms
		{
			APlayerState* PlayerState;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetSteamIdFromPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetSteamIdFromPlayerState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetSteamIdFromPlayerState", nullptr, nullptr, sizeof(SteamUtilities_eventGetSteamIdFromPlayerState_Parms), Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetString_Statics
	{
		struct SteamUtilities_eventGetString_Parms
		{
			FSteamSessionSetting settings;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_settings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_settings = { "settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetString", nullptr, nullptr, sizeof(SteamUtilities_eventGetString_Parms), Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics
	{
		struct SteamUtilities_eventIsGameIDValid_Parms
		{
			FSteamGameID GameID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID_MetaData)) };
	void Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsGameIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsGameIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsGameIDValid_Parms), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics
	{
		struct SteamUtilities_eventIsGameIDValid_Exec_Parms
		{
			FSteamGameID GameID;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsGameIDValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsLobby_Statics
	{
		struct SteamUtilities_eventIsLobby_Parms
		{
			FSteamID SteamID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsLobby_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsLobby_Parms), &Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsLobby", nullptr, nullptr, sizeof(SteamUtilities_eventIsLobby_Parms), Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics
	{
		struct SteamUtilities_eventIsPublishedFileIDValid_Parms
		{
			FPublishedFileID PublishedFileID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsPublishedFileIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsPublishedFileIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPublishedFileIDValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsPublishedFileIDValid_Parms), Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics
	{
		struct SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms
		{
			FPublishedFileID Handle;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPublishedFileIDValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics
	{
		struct SteamUtilities_eventIsRecalculatingPing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsRecalculatingPing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsRecalculatingPing_Parms), &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsRecalculatingPing", nullptr, nullptr, sizeof(SteamUtilities_eventIsRecalculatingPing_Parms), Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics
	{
		struct SteamUtilities_eventIsSteamAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamAvailable_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamAvailable", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamAvailable_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamIDValid_Exec_Parms
		{
			FSteamID SteamID;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamIDValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamIDValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics
	{
		struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle_MetaData)) };
	void Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms
		{
			FSteamInventoryUpdateHandle Handle;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics
	{
		struct SteamUtilities_eventIsSteamTicketHandleValid_Parms
		{
			FSteamTicketHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle_MetaData)) };
	void Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamTicketHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms
		{
			FSteamTicketHandle Handle;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics
	{
		struct SteamUtilities_eventIsUGCHandleValid_Parms
		{
			FSteamUGCHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle_MetaData)) };
	void Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsUGCHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsUGCHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsUGCHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsUGCHandleValid_Exec_Parms
		{
			FSteamUGCHandle Handle;
			ESteamCoreValid Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsUGCHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics
	{
		struct SteamUtilities_eventIsUsingP2PRelays_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsUsingP2PRelays_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsUsingP2PRelays_Parms), &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUsingP2PRelays", nullptr, nullptr, sizeof(SteamUtilities_eventIsUsingP2PRelays_Parms), Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsValid_Statics
	{
		struct SteamUtilities_eventIsValid_Parms
		{
			FSteamID SteamID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsValid_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsValid_Parms), Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics
	{
		struct SteamUtilities_eventListenForSteamMessages_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventListenForSteamMessages_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ListenForSteamMessages", nullptr, nullptr, sizeof(SteamUtilities_eventListenForSteamMessages_Parms), Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeBool_Statics
	{
		struct SteamUtilities_eventMakeBool_Parms
		{
			bool bValue;
			FSteamSessionSetting ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventMakeBool_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventMakeBool_Parms), &Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_bValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeBool", nullptr, nullptr, sizeof(SteamUtilities_eventMakeBool_Parms), Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics
	{
		struct SteamUtilities_eventMakeInteger_Parms
		{
			int32 Value;
			FSteamSessionSetting ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInteger_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInteger", nullptr, nullptr, sizeof(SteamUtilities_eventMakeInteger_Parms), Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics
	{
		struct SteamUtilities_eventMakeInventoryUpdateHandle_Parms
		{
			FString Value;
			FSteamInventoryUpdateHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInventoryUpdateHandle", nullptr, nullptr, sizeof(SteamUtilities_eventMakeInventoryUpdateHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics
	{
		struct SteamUtilities_eventMakePublishedFileID_Parms
		{
			FString Value;
			FPublishedFileID ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakePublishedFileID", nullptr, nullptr, sizeof(SteamUtilities_eventMakePublishedFileID_Parms), Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakePublishedFileID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics
	{
		struct SteamUtilities_eventMakeSearchBool_Parms
		{
			bool bValue;
			FSteamSessionSearchSetting ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_bValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventMakeSearchBool_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventMakeSearchBool_Parms), &Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_bValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_bValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchBool", nullptr, nullptr, sizeof(SteamUtilities_eventMakeSearchBool_Parms), Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics
	{
		struct SteamUtilities_eventMakeSearchInteger_Parms
		{
			ESteamComparisonOp ComparisonOperator;
			int32 Value;
			FSteamSessionSearchSetting ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComparisonOperator_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonOperator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComparisonOperator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator = { "ComparisonOperator", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, ComparisonOperator), Z_Construct_UEnum_SteamCore_ESteamComparisonOp, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchInteger", nullptr, nullptr, sizeof(SteamUtilities_eventMakeSearchInteger_Parms), Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics
	{
		struct SteamUtilities_eventMakeSearchString_Parms
		{
			FString Value;
			FSteamSessionSearchSetting ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchString", nullptr, nullptr, sizeof(SteamUtilities_eventMakeSearchString_Parms), Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics
	{
		struct SteamUtilities_eventMakeSteamGameID_Parms
		{
			FString Value;
			FSteamGameID ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamGameID", nullptr, nullptr, sizeof(SteamUtilities_eventMakeSteamGameID_Parms), Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamGameID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics
	{
		struct SteamUtilities_eventMakeSteamID_Parms
		{
			FString Value;
			FSteamID ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamID", nullptr, nullptr, sizeof(SteamUtilities_eventMakeSteamID_Parms), Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeString_Statics
	{
		struct SteamUtilities_eventMakeString_Parms
		{
			FString Value;
			FSteamSessionSetting ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeString", nullptr, nullptr, sizeof(SteamUtilities_eventMakeString_Parms), Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics
	{
		struct SteamUtilities_eventMakeTicketHandle_Parms
		{
			FString Value;
			FSteamTicketHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeTicketHandle", nullptr, nullptr, sizeof(SteamUtilities_eventMakeTicketHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeTicketHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics
	{
		struct SteamUtilities_eventMakeUGCHandle_Parms
		{
			FString Value;
			FSteamUGCHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeUGCHandle", nullptr, nullptr, sizeof(SteamUtilities_eventMakeUGCHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_NotEqual_Statics
	{
		struct SteamUtilities_eventNotEqual_Parms
		{
			FSteamID A;
			FSteamID B;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventNotEqual_Parms), &Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "NotEqual", nullptr, nullptr, sizeof(SteamUtilities_eventNotEqual_Parms), Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics
	{
		struct SteamUtilities_eventPublishedFileID_Equals_Parms
		{
			FPublishedFileID A;
			FPublishedFileID B;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventPublishedFileID_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals", nullptr, nullptr, sizeof(SteamUtilities_eventPublishedFileID_Equals_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics
	{
		struct SteamUtilities_eventPublishedFileID_Equals_Exec_Parms
		{
			FPublishedFileID A;
			FPublishedFileID B;
			ESteamCoreIdentical Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics
	{
		struct SteamUtilities_eventPublishedFileID_NotEquals_Parms
		{
			FPublishedFileID A;
			FPublishedFileID B;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventPublishedFileID_NotEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_NotEquals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_NotEquals", nullptr, nullptr, sizeof(SteamUtilities_eventPublishedFileID_NotEquals_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_ReleaseRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ReleaseRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ReleaseRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ReleaseRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ReleaseRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReleaseRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_ReleaseRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_ReleaseRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics
	{
		struct SteamUtilities_eventSteamItemInstanceID_Equals_Parms
		{
			FSteamItemInstanceID A;
			FSteamItemInstanceID B;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventSteamItemInstanceID_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventSteamItemInstanceID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SteamItemInstanceID_Equals", nullptr, nullptr, sizeof(SteamUtilities_eventSteamItemInstanceID_Equals_Parms), Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics
	{
		struct SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms
		{
			FSteamItemInstanceID A;
			FSteamItemInstanceID B;
			ESteamCoreIdentical Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, Result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SteamItemInstanceID_Equals_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms), Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamUtilities_NoRegister()
	{
		return USteamUtilities::StaticClass();
	}
	struct Z_Construct_UClass_USteamUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamUtilities_BP_BytesToString, "BP_BytesToString" }, // 510221085
		{ &Z_Construct_UFunction_USteamUtilities_BP_StringToBytes, "BP_StringToBytes" }, // 1235144446
		{ &Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle, "BreakInventoryUpdateHandle" }, // 2065621479
		{ &Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID, "BreakPublishedFileID" }, // 2008107011
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamGameID, "BreakSteamGameID" }, // 4141860017
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamID, "BreakSteamID" }, // 1947796032
		{ &Z_Construct_UFunction_USteamUtilities_BreakTicketHandle, "BreakTicketHandle" }, // 987410168
		{ &Z_Construct_UFunction_USteamUtilities_BreakUGCHandle, "BreakUGCHandle" }, // 2641241152
		{ &Z_Construct_UFunction_USteamUtilities_CancelQuery, "CancelQuery" }, // 4121697612
		{ &Z_Construct_UFunction_USteamUtilities_ConstructServerFilter, "ConstructServerFilter" }, // 2490197283
		{ &Z_Construct_UFunction_USteamUtilities_EncryptString, "EncryptString" }, // 887683389
		{ &Z_Construct_UFunction_USteamUtilities_Equal, "Equal" }, // 3315605814
		{ &Z_Construct_UFunction_USteamUtilities_Equal_Exec, "Equal_Exec" }, // 932914894
		{ &Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp, "FromUnixTimestamp" }, // 3030613065
		{ &Z_Construct_UFunction_USteamUtilities_GetAccountType, "GetAccountType" }, // 3148285278
		{ &Z_Construct_UFunction_USteamUtilities_GetBool, "GetBool" }, // 2800572419
		{ &Z_Construct_UFunction_USteamUtilities_GetHostPingData, "GetHostPingData" }, // 3311952633
		{ &Z_Construct_UFunction_USteamUtilities_GetInteger, "GetInteger" }, // 1148109320
		{ &Z_Construct_UFunction_USteamUtilities_GetPingFromHostData, "GetPingFromHostData" }, // 3609457830
		{ &Z_Construct_UFunction_USteamUtilities_GetPublicIp, "GetPublicIp" }, // 607326749
		{ &Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState, "GetSteamIdFromPlayerState" }, // 2556875333
		{ &Z_Construct_UFunction_USteamUtilities_GetString, "GetString" }, // 4195214161
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid, "IsGameIDValid" }, // 3130036727
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec, "IsGameIDValid_Exec" }, // 3545498459
		{ &Z_Construct_UFunction_USteamUtilities_IsLobby, "IsLobby" }, // 2435240492
		{ &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid, "IsPublishedFileIDValid" }, // 1074901096
		{ &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec, "IsPublishedFileIDValid_Exec" }, // 2881029667
		{ &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing, "IsRecalculatingPing" }, // 2302168192
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable, "IsSteamAvailable" }, // 1878525075
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec, "IsSteamIDValid_Exec" }, // 3525603007
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid, "IsSteamInventoryUpdateHandleValid" }, // 2970660907
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec, "IsSteamInventoryUpdateHandleValid_Exec" }, // 1044049617
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid, "IsSteamTicketHandleValid" }, // 161445679
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec, "IsSteamTicketHandleValid_Exec" }, // 2598953020
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid, "IsUGCHandleValid" }, // 2446380075
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec, "IsUGCHandleValid_Exec" }, // 1548793210
		{ &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays, "IsUsingP2PRelays" }, // 3463588082
		{ &Z_Construct_UFunction_USteamUtilities_IsValid, "IsValid" }, // 2574503026
		{ &Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages, "ListenForSteamMessages" }, // 628863313
		{ &Z_Construct_UFunction_USteamUtilities_MakeBool, "MakeBool" }, // 82709235
		{ &Z_Construct_UFunction_USteamUtilities_MakeInteger, "MakeInteger" }, // 525031607
		{ &Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle, "MakeInventoryUpdateHandle" }, // 3564522390
		{ &Z_Construct_UFunction_USteamUtilities_MakePublishedFileID, "MakePublishedFileID" }, // 3250251016
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchBool, "MakeSearchBool" }, // 2955783381
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchInteger, "MakeSearchInteger" }, // 542400426
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchString, "MakeSearchString" }, // 2332984903
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamGameID, "MakeSteamGameID" }, // 453675975
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamID, "MakeSteamID" }, // 1723438510
		{ &Z_Construct_UFunction_USteamUtilities_MakeString, "MakeString" }, // 3788042575
		{ &Z_Construct_UFunction_USteamUtilities_MakeTicketHandle, "MakeTicketHandle" }, // 1607107482
		{ &Z_Construct_UFunction_USteamUtilities_MakeUGCHandle, "MakeUGCHandle" }, // 2562623895
		{ &Z_Construct_UFunction_USteamUtilities_NotEqual, "NotEqual" }, // 3082034652
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals, "PublishedFileID_Equals" }, // 2231698431
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec, "PublishedFileID_Equals_Exec" }, // 100160170
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals, "PublishedFileID_NotEquals" }, // 3645903262
		{ &Z_Construct_UFunction_USteamUtilities_ReleaseRequest, "ReleaseRequest" }, // 1801923761
		{ &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals, "SteamItemInstanceID_Equals" }, // 3138608333
		{ &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec, "SteamItemInstanceID_Equals_Exec" }, // 22167626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamUtilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamUtilities_Statics::ClassParams = {
		&USteamUtilities::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamUtilities, 41920585);
	template<> STEAMCORE_API UClass* StaticClass<USteamUtilities>()
	{
		return USteamUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamUtilities(Z_Construct_UClass_USteamUtilities, &USteamUtilities::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
