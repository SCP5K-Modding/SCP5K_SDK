// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/User.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UUser_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UUser();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUser::execAdvertiseGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDGameServer);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::AdvertiseGame(Z_Param_SteamIDGameServer,Z_Param_ServerIP,Z_Param_ServerPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBeginAuthSession)
	{
		P_GET_TARRAY(uint8,Z_Param_Ticket);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamBeginAuthSessionResult*)Z_Param__Result=UUser::BeginAuthSession(Z_Param_Ticket,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsBehindNAT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsBehindNAT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneIdentifying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneIdentifying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneRequiringVerification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneRequiringVerification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneVerified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneVerified();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsTwoFactorEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsTwoFactorEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execCancelAuthTicket)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_TicketHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::CancelAuthTicket(Z_Param_TicketHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execDecompressVoice)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedBuffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSampleRate);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DestBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::DecompressVoice(Z_Param_Out_CompressedBuffer,Z_Param_DesiredSampleRate,Z_Param_Out_DestBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execEndAuthSession)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::EndAuthSession(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetAuthSessionTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=UUser::GetAuthSessionTicket(Z_Param_Out_Ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetAvailableVoice)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CompressedBytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UncompressedBytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_UncompressedVoiceDesiredSampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::GetAvailableVoice(Z_Param_Out_CompressedBytes,Z_Param_Out_UncompressedBytes,Z_Param_UncompressedVoiceDesiredSampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetEncryptedAppTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::GetEncryptedAppTicket(Z_Param_Out_Ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetGameBadgeLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Series);
		P_GET_UBOOL(Z_Param_bFoil);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetGameBadgeLevel(Z_Param_Series,Z_Param_bFoil);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetPlayerSteamLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetPlayerSteamLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UUser::GetSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetSteamID_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UUser::GetSteamID_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetVoice)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DestBuffer);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesWritten);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::GetVoice(Z_Param_Out_DestBuffer,Z_Param_Out_BytesWritten);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetVoiceOptimalSampleRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetVoiceOptimalSampleRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execRequestEncryptedAppTicket)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(uint8,Z_Param_DataToInclude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEncryptedAppTicket(FOnRequestEncryptedAppTicket(Z_Param_Out_Callback),Z_Param_DataToInclude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execRequestStoreAuthURL)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_RedirectURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestStoreAuthURL(FOnStoreAuthURLResponse(Z_Param_Out_Callback),Z_Param_RedirectURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execStartVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::StartVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execStopVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::StopVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execUserHasLicenseForApp)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=UUser::UserHasLicenseForApp(Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	void UUser::StaticRegisterNativesUUser()
	{
		UClass* Class = UUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvertiseGame", &UUser::execAdvertiseGame },
			{ "BeginAuthSession", &UUser::execBeginAuthSession },
			{ "BIsBehindNAT", &UUser::execBIsBehindNAT },
			{ "BIsPhoneIdentifying", &UUser::execBIsPhoneIdentifying },
			{ "BIsPhoneRequiringVerification", &UUser::execBIsPhoneRequiringVerification },
			{ "BIsPhoneVerified", &UUser::execBIsPhoneVerified },
			{ "BIsTwoFactorEnabled", &UUser::execBIsTwoFactorEnabled },
			{ "BLoggedOn", &UUser::execBLoggedOn },
			{ "CancelAuthTicket", &UUser::execCancelAuthTicket },
			{ "DecompressVoice", &UUser::execDecompressVoice },
			{ "EndAuthSession", &UUser::execEndAuthSession },
			{ "GetAuthSessionTicket", &UUser::execGetAuthSessionTicket },
			{ "GetAvailableVoice", &UUser::execGetAvailableVoice },
			{ "GetEncryptedAppTicket", &UUser::execGetEncryptedAppTicket },
			{ "GetGameBadgeLevel", &UUser::execGetGameBadgeLevel },
			{ "GetPlayerSteamLevel", &UUser::execGetPlayerSteamLevel },
			{ "GetSteamID", &UUser::execGetSteamID },
			{ "GetSteamID_Pure", &UUser::execGetSteamID_Pure },
			{ "GetVoice", &UUser::execGetVoice },
			{ "GetVoiceOptimalSampleRate", &UUser::execGetVoiceOptimalSampleRate },
			{ "RequestEncryptedAppTicket", &UUser::execRequestEncryptedAppTicket },
			{ "RequestStoreAuthURL", &UUser::execRequestStoreAuthURL },
			{ "StartVoiceRecording", &UUser::execStartVoiceRecording },
			{ "StopVoiceRecording", &UUser::execStopVoiceRecording },
			{ "UserHasLicenseForApp", &UUser::execUserHasLicenseForApp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUser_AdvertiseGame_Statics
	{
		struct User_eventAdvertiseGame_Parms
		{
			FSteamID SteamIDGameServer;
			FString ServerIP;
			int32 ServerPort;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, ServerIP), METADATA_PARAMS(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerIP_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, ServerPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_SteamIDGameServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_ServerPort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "AdvertiseGame", nullptr, nullptr, sizeof(User_eventAdvertiseGame_Parms), Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_AdvertiseGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_AdvertiseGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BeginAuthSession_Statics
	{
		struct User_eventBeginAuthSession_Parms
		{
			TArray<uint8> Ticket;
			FSteamID SteamID;
			ESteamBeginAuthSessionResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_Ticket_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_Ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BeginAuthSession", nullptr, nullptr, sizeof(User_eventBeginAuthSession_Parms), Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BeginAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BeginAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsBehindNAT_Statics
	{
		struct User_eventBIsBehindNAT_Parms
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
	void Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsBehindNAT_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsBehindNAT_Parms), &Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsBehindNAT", nullptr, nullptr, sizeof(User_eventBIsBehindNAT_Parms), Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsBehindNAT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics
	{
		struct User_eventBIsPhoneIdentifying_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneIdentifying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsPhoneIdentifying_Parms), &Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneIdentifying", nullptr, nullptr, sizeof(User_eventBIsPhoneIdentifying_Parms), Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneIdentifying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics
	{
		struct User_eventBIsPhoneRequiringVerification_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneRequiringVerification_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsPhoneRequiringVerification_Parms), &Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneRequiringVerification", nullptr, nullptr, sizeof(User_eventBIsPhoneRequiringVerification_Parms), Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics
	{
		struct User_eventBIsPhoneVerified_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneVerified_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsPhoneVerified_Parms), &Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneVerified", nullptr, nullptr, sizeof(User_eventBIsPhoneVerified_Parms), Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneVerified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics
	{
		struct User_eventBIsTwoFactorEnabled_Parms
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
	void Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsTwoFactorEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsTwoFactorEnabled_Parms), &Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsTwoFactorEnabled", nullptr, nullptr, sizeof(User_eventBIsTwoFactorEnabled_Parms), Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsTwoFactorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BLoggedOn_Statics
	{
		struct User_eventBLoggedOn_Parms
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
	void Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBLoggedOn_Parms), &Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(User_eventBLoggedOn_Parms), Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_CancelAuthTicket_Statics
	{
		struct User_eventCancelAuthTicket_Parms
		{
			FSteamTicketHandle TicketHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TicketHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::NewProp_TicketHandle = { "TicketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventCancelAuthTicket_Parms, TicketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::NewProp_TicketHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "CancelAuthTicket", nullptr, nullptr, sizeof(User_eventCancelAuthTicket_Parms), Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_CancelAuthTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_DecompressVoice_Statics
	{
		struct User_eventDecompressVoice_Parms
		{
			TArray<uint8> CompressedBuffer;
			int32 DesiredSampleRate;
			TArray<uint8> DestBuffer;
			ESteamVoiceResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressedBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompressedBuffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DesiredSampleRate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DestBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestBuffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_Inner = { "CompressedBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer = { "CompressedBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDecompressVoice_Parms, CompressedBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DesiredSampleRate = { "DesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDecompressVoice_Parms, DesiredSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DestBuffer_Inner = { "DestBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DestBuffer = { "DestBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDecompressVoice_Parms, DestBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDecompressVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_CompressedBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DesiredSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DestBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_DestBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "DecompressVoice", nullptr, nullptr, sizeof(User_eventDecompressVoice_Parms), Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_DecompressVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_DecompressVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_EndAuthSession_Statics
	{
		struct User_eventEndAuthSession_Parms
		{
			FSteamID SteamID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_EndAuthSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "EndAuthSession", nullptr, nullptr, sizeof(User_eventEndAuthSession_Parms), Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_EndAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_EndAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics
	{
		struct User_eventGetAuthSessionTicket_Parms
		{
			TArray<uint8> Ticket;
			FSteamTicketHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_Ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetAuthSessionTicket", nullptr, nullptr, sizeof(User_eventGetAuthSessionTicket_Parms), Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetAuthSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetAvailableVoice_Statics
	{
		struct User_eventGetAvailableVoice_Parms
		{
			int32 CompressedBytes;
			int32 UncompressedBytes;
			int32 UncompressedVoiceDesiredSampleRate;
			ESteamVoiceResult ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressedBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UncompressedVoiceDesiredSampleRate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_CompressedBytes = { "CompressedBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, CompressedBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_UncompressedBytes = { "UncompressedBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, UncompressedBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_UncompressedVoiceDesiredSampleRate = { "UncompressedVoiceDesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, UncompressedVoiceDesiredSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_CompressedBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_UncompressedBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_UncompressedVoiceDesiredSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetAvailableVoice", nullptr, nullptr, sizeof(User_eventGetAvailableVoice_Parms), Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetAvailableVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics
	{
		struct User_eventGetEncryptedAppTicket_Parms
		{
			TArray<uint8> Ticket;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ticket;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetEncryptedAppTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventGetEncryptedAppTicket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventGetEncryptedAppTicket_Parms), &Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_Ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetEncryptedAppTicket", nullptr, nullptr, sizeof(User_eventGetEncryptedAppTicket_Parms), Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetEncryptedAppTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics
	{
		struct User_eventGetGameBadgeLevel_Parms
		{
			int32 Series;
			bool bFoil;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Series;
		static void NewProp_bFoil_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFoil;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_Series = { "Series", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetGameBadgeLevel_Parms, Series), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit(void* Obj)
	{
		((User_eventGetGameBadgeLevel_Parms*)Obj)->bFoil = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil = { "bFoil", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventGetGameBadgeLevel_Parms), &Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetGameBadgeLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_Series,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetGameBadgeLevel", nullptr, nullptr, sizeof(User_eventGetGameBadgeLevel_Parms), Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetGameBadgeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics
	{
		struct User_eventGetPlayerSteamLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetPlayerSteamLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetPlayerSteamLevel", nullptr, nullptr, sizeof(User_eventGetPlayerSteamLevel_Parms), Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetPlayerSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetSteamID_Statics
	{
		struct User_eventGetSteamID_Parms
		{
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetSteamID", nullptr, nullptr, sizeof(User_eventGetSteamID_Parms), Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics
	{
		struct User_eventGetSteamID_Pure_Parms
		{
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetSteamID_Pure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetSteamID_Pure", nullptr, nullptr, sizeof(User_eventGetSteamID_Pure_Parms), Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetSteamID_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetVoice_Statics
	{
		struct User_eventGetVoice_Parms
		{
			TArray<uint8> DestBuffer;
			int32 BytesWritten;
			ESteamVoiceResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DestBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestBuffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesWritten;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_DestBuffer_Inner = { "DestBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_DestBuffer = { "DestBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetVoice_Parms, DestBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_BytesWritten = { "BytesWritten", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetVoice_Parms, BytesWritten), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_DestBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_DestBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_BytesWritten,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetVoice", nullptr, nullptr, sizeof(User_eventGetVoice_Parms), Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics
	{
		struct User_eventGetVoiceOptimalSampleRate_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetVoiceOptimalSampleRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetVoiceOptimalSampleRate", nullptr, nullptr, sizeof(User_eventGetVoiceOptimalSampleRate_Parms), Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics
	{
		struct User_eventRequestEncryptedAppTicket_Parms
		{
			FScriptDelegate Callback;
			TArray<uint8> DataToInclude;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataToInclude_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DataToInclude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventRequestEncryptedAppTicket_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude_Inner = { "DataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude = { "DataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventRequestEncryptedAppTicket_Parms, DataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "RequestEncryptedAppTicket", nullptr, nullptr, sizeof(User_eventRequestEncryptedAppTicket_Parms), Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_RequestEncryptedAppTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics
	{
		struct User_eventRequestStoreAuthURL_Parms
		{
			FScriptDelegate Callback;
			FString RedirectURL;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedirectURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventRequestStoreAuthURL_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventRequestStoreAuthURL_Parms, RedirectURL), METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "RequestStoreAuthURL", nullptr, nullptr, sizeof(User_eventRequestStoreAuthURL_Parms), Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_RequestStoreAuthURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_StartVoiceRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "StartVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_StartVoiceRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_StopVoiceRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "StopVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_StopVoiceRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics
	{
		struct User_eventUserHasLicenseForApp_Parms
		{
			FSteamID SteamID;
			int32 AppID;
			ESteamUserHasLicenseForAppResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "UserHasLicenseForApp", nullptr, nullptr, sizeof(User_eventUserHasLicenseForApp_Parms), Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_UserHasLicenseForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUser_NoRegister()
	{
		return UUser::StaticClass();
	}
	struct Z_Construct_UClass_UUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientGameServerDeny_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientGameServerDeny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWebCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameWebCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAuthSessionTicketResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetAuthSessionTicketResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPCFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_IPCFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LicensesUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LicensesUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MicroTxnAuthorizationResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MicroTxnAuthorizationResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamServerConnectFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServerConnectFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamServersConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamServersDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersDisconnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidateAuthTicketResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidateAuthTicketResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncryptedAppTicketResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EncryptedAppTicketResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUser_AdvertiseGame, "AdvertiseGame" }, // 3324668852
		{ &Z_Construct_UFunction_UUser_BeginAuthSession, "BeginAuthSession" }, // 2456563625
		{ &Z_Construct_UFunction_UUser_BIsBehindNAT, "BIsBehindNAT" }, // 4188929228
		{ &Z_Construct_UFunction_UUser_BIsPhoneIdentifying, "BIsPhoneIdentifying" }, // 79131421
		{ &Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification, "BIsPhoneRequiringVerification" }, // 633512959
		{ &Z_Construct_UFunction_UUser_BIsPhoneVerified, "BIsPhoneVerified" }, // 2148301696
		{ &Z_Construct_UFunction_UUser_BIsTwoFactorEnabled, "BIsTwoFactorEnabled" }, // 3093633793
		{ &Z_Construct_UFunction_UUser_BLoggedOn, "BLoggedOn" }, // 3285560789
		{ &Z_Construct_UFunction_UUser_CancelAuthTicket, "CancelAuthTicket" }, // 357415192
		{ &Z_Construct_UFunction_UUser_DecompressVoice, "DecompressVoice" }, // 1895096273
		{ &Z_Construct_UFunction_UUser_EndAuthSession, "EndAuthSession" }, // 2384278077
		{ &Z_Construct_UFunction_UUser_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 1921534779
		{ &Z_Construct_UFunction_UUser_GetAvailableVoice, "GetAvailableVoice" }, // 2642821633
		{ &Z_Construct_UFunction_UUser_GetEncryptedAppTicket, "GetEncryptedAppTicket" }, // 1320222042
		{ &Z_Construct_UFunction_UUser_GetGameBadgeLevel, "GetGameBadgeLevel" }, // 2775746382
		{ &Z_Construct_UFunction_UUser_GetPlayerSteamLevel, "GetPlayerSteamLevel" }, // 3765002127
		{ &Z_Construct_UFunction_UUser_GetSteamID, "GetSteamID" }, // 4168625
		{ &Z_Construct_UFunction_UUser_GetSteamID_Pure, "GetSteamID_Pure" }, // 1515787578
		{ &Z_Construct_UFunction_UUser_GetVoice, "GetVoice" }, // 1235996586
		{ &Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate, "GetVoiceOptimalSampleRate" }, // 3420194832
		{ &Z_Construct_UFunction_UUser_RequestEncryptedAppTicket, "RequestEncryptedAppTicket" }, // 3014925289
		{ &Z_Construct_UFunction_UUser_RequestStoreAuthURL, "RequestStoreAuthURL" }, // 3408649901
		{ &Z_Construct_UFunction_UUser_StartVoiceRecording, "StartVoiceRecording" }, // 1699627109
		{ &Z_Construct_UFunction_UUser_StopVoiceRecording, "StopVoiceRecording" }, // 2632246686
		{ &Z_Construct_UFunction_UUser_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 2240915176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "User.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny = { "ClientGameServerDeny", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, ClientGameServerDeny), Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback = { "GameWebCallback", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, GameWebCallback), Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse = { "GetAuthSessionTicketResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, GetAuthSessionTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure = { "IPCFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, IPCFailure), Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated = { "LicensesUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, LicensesUpdated), Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse = { "MicroTxnAuthorizationResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, MicroTxnAuthorizationResponse), Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure = { "SteamServerConnectFailure", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, SteamServerConnectFailure), Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected = { "SteamServersConnected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, SteamServersConnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected = { "SteamServersDisconnected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, SteamServersDisconnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse = { "ValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, ValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse = { "EncryptedAppTicketResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, EncryptedAppTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUser_Statics::ClassParams = {
		&UUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUser, 3543436573);
	template<> STEAMCORE_API UClass* StaticClass<UUser>()
	{
		return UUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUser(Z_Construct_UClass_UUser, &UUser::StaticClass, TEXT("/Script/SteamCore"), TEXT("UUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
