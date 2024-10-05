// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamGameServer.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameServer() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamGameServer_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamGameServer();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(USteamGameServer::execAssociateWithClan)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssociateWithClan(FOnAssociateWithClan(Z_Param_Out_Callback),Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execBeginAuthSession)
	{
		P_GET_TARRAY(uint8,Z_Param_Ticket);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamBeginAuthSessionResult*)Z_Param__Result=P_THIS->BeginAuthSession(Z_Param_Ticket,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execBSecure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BSecure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execBUpdateUserData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BUpdateUserData(Z_Param_SteamIDUser,Z_Param_PlayerName,Z_Param_Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execCancelAuthTicket)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_TicketHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAuthTicket(Z_Param_TicketHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execClearAllKeyValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllKeyValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execComputeNewPlayerCompatibility)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDNewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeNewPlayerCompatibility(FOnComputeNewPlayerCompatibility(Z_Param_Out_Callback),Z_Param_SteamIDNewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execCreateUnauthenticatedUserConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->CreateUnauthenticatedUserConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execEnableHeartbeats)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableHeartbeats(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execEndAuthSession)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAuthSession(Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execForceHeartbeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceHeartbeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetAuthSessionTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=P_THIS->GetAuthSessionTicket(Z_Param_Out_Ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerPublicIP_PureCompact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP_PureCompact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execGetServerSteamID_PureCompact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID_PureCompact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execLogOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execLogOn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOn(Z_Param_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execLogOnAnonymous)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOnAnonymous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execRequestUserGroupStatus)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUserGroupStatus(Z_Param_SteamIDUser,Z_Param_SteamIDGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetBotPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BotPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBotPlayerCount(Z_Param_BotPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetDedicatedServer)
	{
		P_GET_UBOOL(Z_Param_bDedicated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDedicatedServer(Z_Param_bDedicated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetGameData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameData(Z_Param_GameData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetGameDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameDescription(Z_Param_GameDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetGameTags)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameTags(Z_Param_GameTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetHeartbeatInterval)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_HeartbeatInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeartbeatInterval(Z_Param_HeartbeatInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetKeyValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeyValue(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetMapName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapName(Z_Param_MapName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetMaxPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayersMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxPlayerCount(Z_Param_PlayersMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetModDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModDir(Z_Param_ModDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetPasswordProtected)
	{
		P_GET_UBOOL(Z_Param_bPasswordProtected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPasswordProtected(Z_Param_bPasswordProtected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetProduct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Product);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProduct(Z_Param_Product);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetRegion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Region);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_Region);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerName(Z_Param_ServerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetSpectatorPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SpectatorPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatorPort(Z_Param_SpectatorPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execSetSpectatorServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SpectatorServerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatorServerName(Z_Param_SpectatorServerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execUserHasLicenseForApp)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=P_THIS->UserHasLicenseForApp(Z_Param_SteamID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamGameServer::execWasRestartRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasRestartRequested();
		P_NATIVE_END;
	}
	void USteamGameServer::StaticRegisterNativesUSteamGameServer()
	{
		UClass* Class = USteamGameServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssociateWithClan", &USteamGameServer::execAssociateWithClan },
			{ "BeginAuthSession", &USteamGameServer::execBeginAuthSession },
			{ "BLoggedOn", &USteamGameServer::execBLoggedOn },
			{ "BSecure", &USteamGameServer::execBSecure },
			{ "BUpdateUserData", &USteamGameServer::execBUpdateUserData },
			{ "CancelAuthTicket", &USteamGameServer::execCancelAuthTicket },
			{ "ClearAllKeyValues", &USteamGameServer::execClearAllKeyValues },
			{ "ComputeNewPlayerCompatibility", &USteamGameServer::execComputeNewPlayerCompatibility },
			{ "CreateUnauthenticatedUserConnection", &USteamGameServer::execCreateUnauthenticatedUserConnection },
			{ "EnableHeartbeats", &USteamGameServer::execEnableHeartbeats },
			{ "EndAuthSession", &USteamGameServer::execEndAuthSession },
			{ "ForceHeartbeat", &USteamGameServer::execForceHeartbeat },
			{ "GetAuthSessionTicket", &USteamGameServer::execGetAuthSessionTicket },
			{ "GetServerPublicIP", &USteamGameServer::execGetServerPublicIP },
			{ "GetServerPublicIP_Pure", &USteamGameServer::execGetServerPublicIP_Pure },
			{ "GetServerPublicIP_PureCompact", &USteamGameServer::execGetServerPublicIP_PureCompact },
			{ "GetServerSteamID", &USteamGameServer::execGetServerSteamID },
			{ "GetServerSteamID_Pure", &USteamGameServer::execGetServerSteamID_Pure },
			{ "GetServerSteamID_PureCompact", &USteamGameServer::execGetServerSteamID_PureCompact },
			{ "LogOff", &USteamGameServer::execLogOff },
			{ "LogOn", &USteamGameServer::execLogOn },
			{ "LogOnAnonymous", &USteamGameServer::execLogOnAnonymous },
			{ "RequestUserGroupStatus", &USteamGameServer::execRequestUserGroupStatus },
			{ "SetBotPlayerCount", &USteamGameServer::execSetBotPlayerCount },
			{ "SetDedicatedServer", &USteamGameServer::execSetDedicatedServer },
			{ "SetGameData", &USteamGameServer::execSetGameData },
			{ "SetGameDescription", &USteamGameServer::execSetGameDescription },
			{ "SetGameTags", &USteamGameServer::execSetGameTags },
			{ "SetHeartbeatInterval", &USteamGameServer::execSetHeartbeatInterval },
			{ "SetKeyValue", &USteamGameServer::execSetKeyValue },
			{ "SetMapName", &USteamGameServer::execSetMapName },
			{ "SetMaxPlayerCount", &USteamGameServer::execSetMaxPlayerCount },
			{ "SetModDir", &USteamGameServer::execSetModDir },
			{ "SetPasswordProtected", &USteamGameServer::execSetPasswordProtected },
			{ "SetProduct", &USteamGameServer::execSetProduct },
			{ "SetRegion", &USteamGameServer::execSetRegion },
			{ "SetServerName", &USteamGameServer::execSetServerName },
			{ "SetSpectatorPort", &USteamGameServer::execSetSpectatorPort },
			{ "SetSpectatorServerName", &USteamGameServer::execSetSpectatorServerName },
			{ "UserHasLicenseForApp", &USteamGameServer::execUserHasLicenseForApp },
			{ "WasRestartRequested", &USteamGameServer::execWasRestartRequested },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics
	{
		struct SteamGameServer_eventAssociateWithClan_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDClan;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventAssociateWithClan_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventAssociateWithClan_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "AssociateWithClan", nullptr, nullptr, sizeof(SteamGameServer_eventAssociateWithClan_Parms), Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_AssociateWithClan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_AssociateWithClan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics
	{
		struct SteamGameServer_eventBeginAuthSession_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_Ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BeginAuthSession", nullptr, nullptr, sizeof(SteamGameServer_eventBeginAuthSession_Parms), Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_BeginAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_BeginAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics
	{
		struct SteamGameServer_eventBLoggedOn_Parms
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
	void Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamGameServer_eventBLoggedOn_Parms), &Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(SteamGameServer_eventBLoggedOn_Parms), Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_BSecure_Statics
	{
		struct SteamGameServer_eventBSecure_Parms
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
	void Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventBSecure_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamGameServer_eventBSecure_Parms), &Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BSecure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BSecure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BSecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BSecure", nullptr, nullptr, sizeof(SteamGameServer_eventBSecure_Parms), Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BSecure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_BSecure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_BSecure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics
	{
		struct SteamGameServer_eventBUpdateUserData_Parms
		{
			FSteamID SteamIDUser;
			FString PlayerName;
			int32 Score;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventBUpdateUserData_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventBUpdateUserData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamGameServer_eventBUpdateUserData_Parms), &Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "BUpdateUserData", nullptr, nullptr, sizeof(SteamGameServer_eventBUpdateUserData_Parms), Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_BUpdateUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_BUpdateUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics
	{
		struct SteamGameServer_eventCancelAuthTicket_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::NewProp_TicketHandle = { "TicketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventCancelAuthTicket_Parms, TicketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::NewProp_TicketHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "CancelAuthTicket", nullptr, nullptr, sizeof(SteamGameServer_eventCancelAuthTicket_Parms), Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_CancelAuthTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_CancelAuthTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ClearAllKeyValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics
	{
		struct SteamGameServer_eventComputeNewPlayerCompatibility_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDNewPlayer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDNewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventComputeNewPlayerCompatibility_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_SteamIDNewPlayer = { "SteamIDNewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventComputeNewPlayerCompatibility_Parms, SteamIDNewPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_SteamIDNewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ComputeNewPlayerCompatibility", nullptr, nullptr, sizeof(SteamGameServer_eventComputeNewPlayerCompatibility_Parms), Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics
	{
		struct SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "CreateUnauthenticatedUserConnection", nullptr, nullptr, sizeof(SteamGameServer_eventCreateUnauthenticatedUserConnection_Parms), Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics
	{
		struct SteamGameServer_eventEnableHeartbeats_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((SteamGameServer_eventEnableHeartbeats_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamGameServer_eventEnableHeartbeats_Parms), &Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "EnableHeartbeats", nullptr, nullptr, sizeof(SteamGameServer_eventEnableHeartbeats_Parms), Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_EnableHeartbeats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_EnableHeartbeats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics
	{
		struct SteamGameServer_eventEndAuthSession_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "EndAuthSession", nullptr, nullptr, sizeof(SteamGameServer_eventEndAuthSession_Parms), Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_EndAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_EndAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "ForceHeartbeat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_ForceHeartbeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_ForceHeartbeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics
	{
		struct SteamGameServer_eventGetAuthSessionTicket_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetAuthSessionTicket", nullptr, nullptr, sizeof(SteamGameServer_eventGetAuthSessionTicket_Parms), Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics
	{
		struct SteamGameServer_eventGetServerPublicIP_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP", nullptr, nullptr, sizeof(SteamGameServer_eventGetServerPublicIP_Parms), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics
	{
		struct SteamGameServer_eventGetServerPublicIP_Pure_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP_Pure", nullptr, nullptr, sizeof(SteamGameServer_eventGetServerPublicIP_Pure_Parms), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics
	{
		struct SteamGameServer_eventGetServerPublicIP_PureCompact_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerPublicIP_PureCompact_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerPublicIP_PureCompact", nullptr, nullptr, sizeof(SteamGameServer_eventGetServerPublicIP_PureCompact_Parms), Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics
	{
		struct SteamGameServer_eventGetServerSteamID_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID", nullptr, nullptr, sizeof(SteamGameServer_eventGetServerSteamID_Parms), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics
	{
		struct SteamGameServer_eventGetServerSteamID_Pure_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_Pure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID_Pure", nullptr, nullptr, sizeof(SteamGameServer_eventGetServerSteamID_Pure_Parms), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics
	{
		struct SteamGameServer_eventGetServerSteamID_PureCompact_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventGetServerSteamID_PureCompact_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "GetServerSteamID_PureCompact", nullptr, nullptr, sizeof(SteamGameServer_eventGetServerSteamID_PureCompact_Parms), Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_LogOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_LogOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_LogOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_LogOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_LogOn_Statics
	{
		struct SteamGameServer_eventLogOn_Parms
		{
			FString Token;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventLogOn_Parms, Token), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_LogOn_Statics::NewProp_Token,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_LogOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOn", nullptr, nullptr, sizeof(SteamGameServer_eventLogOn_Parms), Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_LogOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "LogOnAnonymous", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_LogOnAnonymous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_LogOnAnonymous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics
	{
		struct SteamGameServer_eventRequestUserGroupStatus_Parms
		{
			FSteamID SteamIDUser;
			FSteamID SteamIDGroup;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventRequestUserGroupStatus_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventRequestUserGroupStatus_Parms, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventRequestUserGroupStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamGameServer_eventRequestUserGroupStatus_Parms), &Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "RequestUserGroupStatus", nullptr, nullptr, sizeof(SteamGameServer_eventRequestUserGroupStatus_Parms), Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics
	{
		struct SteamGameServer_eventSetBotPlayerCount_Parms
		{
			int32 BotPlayers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotPlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::NewProp_BotPlayers = { "BotPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetBotPlayerCount_Parms, BotPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::NewProp_BotPlayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetBotPlayerCount", nullptr, nullptr, sizeof(SteamGameServer_eventSetBotPlayerCount_Parms), Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics
	{
		struct SteamGameServer_eventSetDedicatedServer_Parms
		{
			bool bDedicated;
		};
		static void NewProp_bDedicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDedicated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit(void* Obj)
	{
		((SteamGameServer_eventSetDedicatedServer_Parms*)Obj)->bDedicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated = { "bDedicated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamGameServer_eventSetDedicatedServer_Parms), &Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::NewProp_bDedicated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetDedicatedServer", nullptr, nullptr, sizeof(SteamGameServer_eventSetDedicatedServer_Parms), Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetDedicatedServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetDedicatedServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetGameData_Statics
	{
		struct SteamGameServer_eventSetGameData_Parms
		{
			FString GameData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetGameData_Parms, GameData), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::NewProp_GameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameData", nullptr, nullptr, sizeof(SteamGameServer_eventSetGameData_Parms), Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics
	{
		struct SteamGameServer_eventSetGameDescription_Parms
		{
			FString GameDescription;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetGameDescription_Parms, GameDescription), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::NewProp_GameDescription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameDescription", nullptr, nullptr, sizeof(SteamGameServer_eventSetGameDescription_Parms), Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetGameDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics
	{
		struct SteamGameServer_eventSetGameTags_Parms
		{
			FString GameTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetGameTags_Parms, GameTags), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::NewProp_GameTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetGameTags", nullptr, nullptr, sizeof(SteamGameServer_eventSetGameTags_Parms), Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetGameTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetGameTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics
	{
		struct SteamGameServer_eventSetHeartbeatInterval_Parms
		{
			int32 HeartbeatInterval;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeartbeatInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::NewProp_HeartbeatInterval = { "HeartbeatInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetHeartbeatInterval_Parms, HeartbeatInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::NewProp_HeartbeatInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetHeartbeatInterval", nullptr, nullptr, sizeof(SteamGameServer_eventSetHeartbeatInterval_Parms), Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics
	{
		struct SteamGameServer_eventSetKeyValue_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetKeyValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetKeyValue_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetKeyValue", nullptr, nullptr, sizeof(SteamGameServer_eventSetKeyValue_Parms), Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetMapName_Statics
	{
		struct SteamGameServer_eventSetMapName_Parms
		{
			FString MapName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetMapName_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetMapName", nullptr, nullptr, sizeof(SteamGameServer_eventSetMapName_Parms), Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics
	{
		struct SteamGameServer_eventSetMaxPlayerCount_Parms
		{
			int32 PlayersMax;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax = { "PlayersMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetMaxPlayerCount_Parms, PlayersMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetMaxPlayerCount", nullptr, nullptr, sizeof(SteamGameServer_eventSetMaxPlayerCount_Parms), Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetModDir_Statics
	{
		struct SteamGameServer_eventSetModDir_Parms
		{
			FString ModDir;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir = { "ModDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetModDir_Parms, ModDir), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::NewProp_ModDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetModDir", nullptr, nullptr, sizeof(SteamGameServer_eventSetModDir_Parms), Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetModDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetModDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics
	{
		struct SteamGameServer_eventSetPasswordProtected_Parms
		{
			bool bPasswordProtected;
		};
		static void NewProp_bPasswordProtected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
	{
		((SteamGameServer_eventSetPasswordProtected_Parms*)Obj)->bPasswordProtected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamGameServer_eventSetPasswordProtected_Parms), &Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetPasswordProtected", nullptr, nullptr, sizeof(SteamGameServer_eventSetPasswordProtected_Parms), Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetPasswordProtected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetPasswordProtected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetProduct_Statics
	{
		struct SteamGameServer_eventSetProduct_Parms
		{
			FString Product;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Product_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Product;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product = { "Product", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetProduct_Parms, Product), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::NewProp_Product,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetProduct", nullptr, nullptr, sizeof(SteamGameServer_eventSetProduct_Parms), Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetProduct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetProduct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetRegion_Statics
	{
		struct SteamGameServer_eventSetRegion_Parms
		{
			FString Region;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetRegion_Parms, Region), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::NewProp_Region,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetRegion", nullptr, nullptr, sizeof(SteamGameServer_eventSetRegion_Parms), Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetServerName_Statics
	{
		struct SteamGameServer_eventSetServerName_Parms
		{
			FString ServerName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetServerName_Parms, ServerName), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::NewProp_ServerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetServerName", nullptr, nullptr, sizeof(SteamGameServer_eventSetServerName_Parms), Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics
	{
		struct SteamGameServer_eventSetSpectatorPort_Parms
		{
			int32 SpectatorPort;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpectatorPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort = { "SpectatorPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetSpectatorPort_Parms, SpectatorPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetSpectatorPort", nullptr, nullptr, sizeof(SteamGameServer_eventSetSpectatorPort_Parms), Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetSpectatorPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetSpectatorPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics
	{
		struct SteamGameServer_eventSetSpectatorServerName_Parms
		{
			FString SpectatorServerName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpectatorServerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName = { "SpectatorServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventSetSpectatorServerName_Parms, SpectatorServerName), METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "SetSpectatorServerName", nullptr, nullptr, sizeof(SteamGameServer_eventSetSpectatorServerName_Parms), Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics
	{
		struct SteamGameServer_eventUserHasLicenseForApp_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamGameServer_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "UserHasLicenseForApp", nullptr, nullptr, sizeof(SteamGameServer_eventUserHasLicenseForApp_Parms), Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics
	{
		struct SteamGameServer_eventWasRestartRequested_Parms
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
	void Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamGameServer_eventWasRestartRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamGameServer_eventWasRestartRequested_Parms), &Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameServer, nullptr, "WasRestartRequested", nullptr, nullptr, sizeof(SteamGameServer_eventWasRestartRequested_Parms), Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamGameServer_WasRestartRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamGameServer_WasRestartRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamGameServer_NoRegister()
	{
		return USteamGameServer::StaticClass();
	}
	struct Z_Construct_UClass_USteamGameServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSPolicyResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSPolicyResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSClientGroupStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientGroupStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSValidateAuthTicketResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSValidateAuthTicketResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSClientApprove_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientApprove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSClientDeny_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientDeny;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamGameServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamGameServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamGameServer_AssociateWithClan, "AssociateWithClan" }, // 670411163
		{ &Z_Construct_UFunction_USteamGameServer_BeginAuthSession, "BeginAuthSession" }, // 3579502095
		{ &Z_Construct_UFunction_USteamGameServer_BLoggedOn, "BLoggedOn" }, // 2676701968
		{ &Z_Construct_UFunction_USteamGameServer_BSecure, "BSecure" }, // 90024177
		{ &Z_Construct_UFunction_USteamGameServer_BUpdateUserData, "BUpdateUserData" }, // 3794202761
		{ &Z_Construct_UFunction_USteamGameServer_CancelAuthTicket, "CancelAuthTicket" }, // 3516241631
		{ &Z_Construct_UFunction_USteamGameServer_ClearAllKeyValues, "ClearAllKeyValues" }, // 3817578990
		{ &Z_Construct_UFunction_USteamGameServer_ComputeNewPlayerCompatibility, "ComputeNewPlayerCompatibility" }, // 562258010
		{ &Z_Construct_UFunction_USteamGameServer_CreateUnauthenticatedUserConnection, "CreateUnauthenticatedUserConnection" }, // 1797938494
		{ &Z_Construct_UFunction_USteamGameServer_EnableHeartbeats, "EnableHeartbeats" }, // 808076230
		{ &Z_Construct_UFunction_USteamGameServer_EndAuthSession, "EndAuthSession" }, // 3365038699
		{ &Z_Construct_UFunction_USteamGameServer_ForceHeartbeat, "ForceHeartbeat" }, // 77252106
		{ &Z_Construct_UFunction_USteamGameServer_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 1854749503
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP, "GetServerPublicIP" }, // 2239069922
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_Pure, "GetServerPublicIP_Pure" }, // 2730889474
		{ &Z_Construct_UFunction_USteamGameServer_GetServerPublicIP_PureCompact, "GetServerPublicIP_PureCompact" }, // 3921604392
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID, "GetServerSteamID" }, // 2239909743
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID_Pure, "GetServerSteamID_Pure" }, // 84658744
		{ &Z_Construct_UFunction_USteamGameServer_GetServerSteamID_PureCompact, "GetServerSteamID_PureCompact" }, // 3570438207
		{ &Z_Construct_UFunction_USteamGameServer_LogOff, "LogOff" }, // 1556592210
		{ &Z_Construct_UFunction_USteamGameServer_LogOn, "LogOn" }, // 3693804024
		{ &Z_Construct_UFunction_USteamGameServer_LogOnAnonymous, "LogOnAnonymous" }, // 636912822
		{ &Z_Construct_UFunction_USteamGameServer_RequestUserGroupStatus, "RequestUserGroupStatus" }, // 2376464394
		{ &Z_Construct_UFunction_USteamGameServer_SetBotPlayerCount, "SetBotPlayerCount" }, // 776307233
		{ &Z_Construct_UFunction_USteamGameServer_SetDedicatedServer, "SetDedicatedServer" }, // 2820883806
		{ &Z_Construct_UFunction_USteamGameServer_SetGameData, "SetGameData" }, // 646024000
		{ &Z_Construct_UFunction_USteamGameServer_SetGameDescription, "SetGameDescription" }, // 2756440031
		{ &Z_Construct_UFunction_USteamGameServer_SetGameTags, "SetGameTags" }, // 2828582977
		{ &Z_Construct_UFunction_USteamGameServer_SetHeartbeatInterval, "SetHeartbeatInterval" }, // 3643229898
		{ &Z_Construct_UFunction_USteamGameServer_SetKeyValue, "SetKeyValue" }, // 2610220302
		{ &Z_Construct_UFunction_USteamGameServer_SetMapName, "SetMapName" }, // 2776147496
		{ &Z_Construct_UFunction_USteamGameServer_SetMaxPlayerCount, "SetMaxPlayerCount" }, // 3977206842
		{ &Z_Construct_UFunction_USteamGameServer_SetModDir, "SetModDir" }, // 2226158281
		{ &Z_Construct_UFunction_USteamGameServer_SetPasswordProtected, "SetPasswordProtected" }, // 912697297
		{ &Z_Construct_UFunction_USteamGameServer_SetProduct, "SetProduct" }, // 3789120665
		{ &Z_Construct_UFunction_USteamGameServer_SetRegion, "SetRegion" }, // 2977833545
		{ &Z_Construct_UFunction_USteamGameServer_SetServerName, "SetServerName" }, // 2268273685
		{ &Z_Construct_UFunction_USteamGameServer_SetSpectatorPort, "SetSpectatorPort" }, // 1105359399
		{ &Z_Construct_UFunction_USteamGameServer_SetSpectatorServerName, "SetSpectatorServerName" }, // 2388387118
		{ &Z_Construct_UFunction_USteamGameServer_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 1346308688
		{ &Z_Construct_UFunction_USteamGameServer_WasRestartRequested, "WasRestartRequested" }, // 3919148625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamGameServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse = { "GSPolicyResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameServer, GSPolicyResponse), Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus = { "GSClientGroupStatus", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameServer, GSClientGroupStatus), Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse = { "GSValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameServer, GSValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove = { "GSClientApprove", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameServer, GSClientApprove), Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamGameServer" },
		{ "ModuleRelativePath", "Public/SteamGameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny = { "GSClientDeny", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamGameServer, GSClientDeny), Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamGameServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSPolicyResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientGroupStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSValidateAuthTicketResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientApprove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameServer_Statics::NewProp_GSClientDeny,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamGameServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamGameServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamGameServer_Statics::ClassParams = {
		&USteamGameServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamGameServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamGameServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamGameServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamGameServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamGameServer, 1497390641);
	template<> STEAMCORE_API UClass* StaticClass<USteamGameServer>()
	{
		return USteamGameServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamGameServer(Z_Construct_UClass_USteamGameServer, &USteamGameServer::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamGameServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamGameServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
