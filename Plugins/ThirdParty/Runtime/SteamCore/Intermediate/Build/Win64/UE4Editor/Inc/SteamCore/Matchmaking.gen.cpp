// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Matchmaking.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmaking() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UMatchmaking_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UMatchmaking();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UMatchmaking::execAddFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
		P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_Flags);
		P_GET_PROPERTY(FIntProperty,Z_Param_TimeLastPlayedOnServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::AddFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnectionPort,Z_Param_QueryPort,Z_Param_Flags,Z_Param_TimeLastPlayedOnServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListCompatibleMembersFilter)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListDistanceFilter)
	{
		P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_LobbyDistanceFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter(Z_Param_LobbyDistanceFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListFilterSlotsAvailable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotsAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(Z_Param_SlotsAvailable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListNearValueFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_ValueToBeCloseTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListNearValueFilter(Z_Param_KeyToMatch,Z_Param_ValueToBeCloseTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListNumericalFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_ValueToMatch);
		P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListNumericalFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListResultCountFilter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListResultCountFilter(Z_Param_MaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListStringFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyToMatch);
		P_GET_PROPERTY(FStrProperty,Z_Param_ValueToMatch);
		P_GET_ENUM(ESteamLobbyComparison,Z_Param_ComparisonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListStringFilter(Z_Param_KeyToMatch,Z_Param_ValueToMatch,ESteamLobbyComparison(Z_Param_ComparisonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execCreateLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateLobby(FOnCreateLobby(Z_Param_Out_Callback),ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execDeleteLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::DeleteLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Game);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionPort);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
		P_GET_TARRAY_REF(ESteamFavoriteFlags,Z_Param_Out_Flags);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeLastPlayedOnServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::GetFavoriteGame(Z_Param_Game,Z_Param_Out_AppID,Z_Param_Out_IP,Z_Param_Out_ConnectionPort,Z_Param_Out_QueryPort,Z_Param_Out_Flags,Z_Param_Out_TimeLastPlayedOnServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetFavoriteGameCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetFavoriteGameCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Lobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyByIndex(Z_Param_Lobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyChatEntry)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDUser);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetLobbyChatEntry(Z_Param_SteamIDLobby,Z_Param_MessageID,Z_Param_Out_SteamIDUser,Z_Param_Out_Message,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMatchmaking::GetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyDataByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_LobbyData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::GetLobbyDataByIndex(Z_Param_SteamIDLobby,Z_Param_LobbyData,Z_Param_Out_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyDataCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetLobbyDataCount(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyGameServer)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameServerIP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameServerPort);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDGameServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::GetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_Out_GameServerIP,Z_Param_Out_GameServerPort,Z_Param_Out_SteamIDGameServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_Member);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyMemberByIndex(Z_Param_SteamIDLobby,Z_Param_Member);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMatchmaking::GetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_SteamIDUser,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberLimit)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetLobbyMemberLimit(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyOwner(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetNumLobbyMembers)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetNumLobbyMembers(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execInviteUserToLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDInvitee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::InviteUserToLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDInvitee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execJoinLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinLobby(FOnJoinLobby(Z_Param_Out_Callback),Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execLeaveLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::LeaveLobby(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execRemoveFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_IP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConnectionPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
		P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::RemoveFavoriteGame(Z_Param_AppID,Z_Param_IP,Z_Param_ConnectionPort,Z_Param_QueryPort,Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execRequestLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::RequestLobbyData(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execRequestLobbyList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLobbyList(FOnRequestLobbyList(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSendLobbyChatMsg)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SendLobbyChatMsg(Z_Param_SteamIDLobby,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLinkedLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobbyDependent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLinkedLobby(Z_Param_SteamIDLobby,Z_Param_SteamIDLobbyDependent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyGameServer)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameServerIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameServerPort);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDGameServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::SetLobbyGameServer(Z_Param_SteamIDLobby,Z_Param_GameServerIP,Z_Param_GameServerPort,Z_Param_SteamIDGameServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyJoinable)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_UBOOL(Z_Param_bLobbyJoinable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyJoinable(Z_Param_SteamIDLobby,Z_Param_bLobbyJoinable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyMemberData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::SetLobbyMemberData(Z_Param_SteamIDLobby,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyMemberLimit)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyMemberLimit(Z_Param_SteamIDLobby,Z_Param_MaxMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDNewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyOwner(Z_Param_SteamIDLobby,Z_Param_SteamIDNewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyType)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyType(Z_Param_SteamIDLobby,ESteamLobbyType(Z_Param_LobbyType));
		P_NATIVE_END;
	}
	void UMatchmaking::StaticRegisterNativesUMatchmaking()
	{
		UClass* Class = UMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFavoriteGame", &UMatchmaking::execAddFavoriteGame },
			{ "AddRequestLobbyListCompatibleMembersFilter", &UMatchmaking::execAddRequestLobbyListCompatibleMembersFilter },
			{ "AddRequestLobbyListDistanceFilter", &UMatchmaking::execAddRequestLobbyListDistanceFilter },
			{ "AddRequestLobbyListFilterSlotsAvailable", &UMatchmaking::execAddRequestLobbyListFilterSlotsAvailable },
			{ "AddRequestLobbyListNearValueFilter", &UMatchmaking::execAddRequestLobbyListNearValueFilter },
			{ "AddRequestLobbyListNumericalFilter", &UMatchmaking::execAddRequestLobbyListNumericalFilter },
			{ "AddRequestLobbyListResultCountFilter", &UMatchmaking::execAddRequestLobbyListResultCountFilter },
			{ "AddRequestLobbyListStringFilter", &UMatchmaking::execAddRequestLobbyListStringFilter },
			{ "CreateLobby", &UMatchmaking::execCreateLobby },
			{ "DeleteLobbyData", &UMatchmaking::execDeleteLobbyData },
			{ "GetFavoriteGame", &UMatchmaking::execGetFavoriteGame },
			{ "GetFavoriteGameCount", &UMatchmaking::execGetFavoriteGameCount },
			{ "GetLobbyByIndex", &UMatchmaking::execGetLobbyByIndex },
			{ "GetLobbyChatEntry", &UMatchmaking::execGetLobbyChatEntry },
			{ "GetLobbyData", &UMatchmaking::execGetLobbyData },
			{ "GetLobbyDataByIndex", &UMatchmaking::execGetLobbyDataByIndex },
			{ "GetLobbyDataCount", &UMatchmaking::execGetLobbyDataCount },
			{ "GetLobbyGameServer", &UMatchmaking::execGetLobbyGameServer },
			{ "GetLobbyMemberByIndex", &UMatchmaking::execGetLobbyMemberByIndex },
			{ "GetLobbyMemberData", &UMatchmaking::execGetLobbyMemberData },
			{ "GetLobbyMemberLimit", &UMatchmaking::execGetLobbyMemberLimit },
			{ "GetLobbyOwner", &UMatchmaking::execGetLobbyOwner },
			{ "GetNumLobbyMembers", &UMatchmaking::execGetNumLobbyMembers },
			{ "InviteUserToLobby", &UMatchmaking::execInviteUserToLobby },
			{ "JoinLobby", &UMatchmaking::execJoinLobby },
			{ "LeaveLobby", &UMatchmaking::execLeaveLobby },
			{ "RemoveFavoriteGame", &UMatchmaking::execRemoveFavoriteGame },
			{ "RequestLobbyData", &UMatchmaking::execRequestLobbyData },
			{ "RequestLobbyList", &UMatchmaking::execRequestLobbyList },
			{ "SendLobbyChatMsg", &UMatchmaking::execSendLobbyChatMsg },
			{ "SetLinkedLobby", &UMatchmaking::execSetLinkedLobby },
			{ "SetLobbyData", &UMatchmaking::execSetLobbyData },
			{ "SetLobbyGameServer", &UMatchmaking::execSetLobbyGameServer },
			{ "SetLobbyJoinable", &UMatchmaking::execSetLobbyJoinable },
			{ "SetLobbyMemberData", &UMatchmaking::execSetLobbyMemberData },
			{ "SetLobbyMemberLimit", &UMatchmaking::execSetLobbyMemberLimit },
			{ "SetLobbyOwner", &UMatchmaking::execSetLobbyOwner },
			{ "SetLobbyType", &UMatchmaking::execSetLobbyType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics
	{
		struct Matchmaking_eventAddFavoriteGame_Parms
		{
			int32 AppID;
			FString IP;
			int32 ConnectionPort;
			int32 QueryPort;
			TArray<ESteamFavoriteFlags> Flags;
			int32 TimeLastPlayedOnServer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_IP_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ConnectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddFavoriteGame", nullptr, nullptr, sizeof(Matchmaking_eventAddFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms
		{
			FSteamID SteamIDLobby;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListCompatibleMembersFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms
		{
			ESteamLobbyDistanceFilter LobbyDistanceFilter;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LobbyDistanceFilter_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LobbyDistanceFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter = { "LobbyDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms, LobbyDistanceFilter), Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_LobbyDistanceFilter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListDistanceFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms
		{
			int32 SlotsAvailable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotsAvailable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable = { "SlotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms, SlotsAvailable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_SlotsAvailable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListFilterSlotsAvailable", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms
		{
			FString KeyToMatch;
			int32 ValueToBeCloseTo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValueToBeCloseTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms, KeyToMatch), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo = { "ValueToBeCloseTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms, ValueToBeCloseTo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_KeyToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_ValueToBeCloseTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListNearValueFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms
		{
			FString KeyToMatch;
			int32 ValueToMatch;
			ESteamLobbyComparison ComparisonType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValueToMatch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, KeyToMatch), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ValueToMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_KeyToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ValueToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_ComparisonType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListNumericalFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms
		{
			int32 MaxResults;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_MaxResults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListResultCountFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListStringFilter_Parms
		{
			FString KeyToMatch;
			FString ValueToMatch;
			ESteamLobbyComparison ComparisonType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyToMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueToMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValueToMatch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ComparisonType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ComparisonType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch = { "KeyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, KeyToMatch), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch = { "ValueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, ValueToMatch), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, ComparisonType), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_KeyToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ValueToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_ComparisonType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListStringFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListStringFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics
	{
		struct Matchmaking_eventCreateLobby_Parms
		{
			FScriptDelegate Callback;
			ESteamLobbyType LobbyType;
			int32 MaxMembers;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_LobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_MaxMembers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "CreateLobby", nullptr, nullptr, sizeof(Matchmaking_eventCreateLobby_Parms), Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics
	{
		struct Matchmaking_eventDeleteLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventDeleteLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventDeleteLobbyData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventDeleteLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventDeleteLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "DeleteLobbyData", nullptr, nullptr, sizeof(Matchmaking_eventDeleteLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_DeleteLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics
	{
		struct Matchmaking_eventGetFavoriteGame_Parms
		{
			int32 Game;
			int32 AppID;
			FString IP;
			int32 ConnectionPort;
			int32 QueryPort;
			TArray<ESteamFavoriteFlags> Flags;
			int32 TimeLastPlayedOnServer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Game;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeLastPlayedOnServer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Game = { "Game", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, Game), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, IP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer = { "TimeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, TimeLastPlayedOnServer), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetFavoriteGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventGetFavoriteGame_Parms), &Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Game,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ConnectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_TimeLastPlayedOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetFavoriteGame", nullptr, nullptr, sizeof(Matchmaking_eventGetFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics
	{
		struct Matchmaking_eventGetFavoriteGameCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGameCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetFavoriteGameCount", nullptr, nullptr, sizeof(Matchmaking_eventGetFavoriteGameCount_Parms), Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics
	{
		struct Matchmaking_eventGetLobbyByIndex_Parms
		{
			int32 Lobby;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lobby;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyByIndex_Parms, Lobby), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_Lobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyByIndex", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics
	{
		struct Matchmaking_eventGetLobbyChatEntry_Parms
		{
			FSteamID SteamIDLobby;
			int32 MessageID;
			FSteamID SteamIDUser;
			FString Message;
			ESteamChatEntryType ChatEntryType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, MessageID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_MessageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ChatEntryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyChatEntry", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyChatEntry_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics
	{
		struct Matchmaking_eventGetLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyData", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics
	{
		struct Matchmaking_eventGetLobbyDataByIndex_Parms
		{
			FSteamID SteamIDLobby;
			int32 LobbyData;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LobbyData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData = { "LobbyData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, LobbyData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetLobbyDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventGetLobbyDataByIndex_Parms), &Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_LobbyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyDataByIndex", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyDataByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics
	{
		struct Matchmaking_eventGetLobbyDataCount_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataCount_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyDataCount", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyDataCount_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics
	{
		struct Matchmaking_eventGetLobbyGameServer_Parms
		{
			FSteamID SteamIDLobby;
			FString GameServerIP;
			int32 GameServerPort;
			FSteamID SteamIDGameServer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_GameServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyGameServer", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyGameServer_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics
	{
		struct Matchmaking_eventGetLobbyMemberByIndex_Parms
		{
			FSteamID SteamIDLobby;
			int32 Member;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Member;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, Member), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_Member,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberByIndex", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyMemberByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics
	{
		struct Matchmaking_eventGetLobbyMemberData_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDUser;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberData", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyMemberData_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics
	{
		struct Matchmaking_eventGetLobbyMemberLimit_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberLimit", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyMemberLimit_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics
	{
		struct Matchmaking_eventGetLobbyOwner_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyOwner", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyOwner_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics
	{
		struct Matchmaking_eventGetNumLobbyMembers_Parms
		{
			FSteamID SteamIDLobby;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetNumLobbyMembers_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetNumLobbyMembers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetNumLobbyMembers", nullptr, nullptr, sizeof(Matchmaking_eventGetNumLobbyMembers_Parms), Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics
	{
		struct Matchmaking_eventInviteUserToLobby_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDInvitee;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDInvitee;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventInviteUserToLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee = { "SteamIDInvitee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventInviteUserToLobby_Parms, SteamIDInvitee), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventInviteUserToLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventInviteUserToLobby_Parms), &Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_SteamIDInvitee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "InviteUserToLobby", nullptr, nullptr, sizeof(Matchmaking_eventInviteUserToLobby_Parms), Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_InviteUserToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics
	{
		struct Matchmaking_eventJoinLobby_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDLobby;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventJoinLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventJoinLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "JoinLobby", nullptr, nullptr, sizeof(Matchmaking_eventJoinLobby_Parms), Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_JoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics
	{
		struct Matchmaking_eventLeaveLobby_Parms
		{
			FSteamID SteamIDLobby;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventLeaveLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "LeaveLobby", nullptr, nullptr, sizeof(Matchmaking_eventLeaveLobby_Parms), Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics
	{
		struct Matchmaking_eventRemoveFavoriteGame_Parms
		{
			int32 AppID;
			FString IP;
			int32 ConnectionPort;
			int32 QueryPort;
			TArray<ESteamFavoriteFlags> Flags;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, IP), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventRemoveFavoriteGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventRemoveFavoriteGame_Parms), &Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ConnectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RemoveFavoriteGame", nullptr, nullptr, sizeof(Matchmaking_eventRemoveFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics
	{
		struct Matchmaking_eventRequestLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRequestLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventRequestLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventRequestLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RequestLobbyData", nullptr, nullptr, sizeof(Matchmaking_eventRequestLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RequestLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics
	{
		struct Matchmaking_eventRequestLobbyList_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRequestLobbyList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RequestLobbyList", nullptr, nullptr, sizeof(Matchmaking_eventRequestLobbyList_Parms), Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RequestLobbyList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics
	{
		struct Matchmaking_eventSendLobbyChatMsg_Parms
		{
			FSteamID SteamIDLobby;
			FString Message;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSendLobbyChatMsg_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSendLobbyChatMsg_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message_MetaData)) };
	void Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSendLobbyChatMsg_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSendLobbyChatMsg_Parms), &Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SendLobbyChatMsg", nullptr, nullptr, sizeof(Matchmaking_eventSendLobbyChatMsg_Parms), Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics
	{
		struct Matchmaking_eventSetLinkedLobby_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDLobbyDependent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobbyDependent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLinkedLobby_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent = { "SteamIDLobbyDependent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLinkedLobby_Parms, SteamIDLobbyDependent), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLinkedLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLinkedLobby_Parms), &Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_SteamIDLobbyDependent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLinkedLobby", nullptr, nullptr, sizeof(Matchmaking_eventSetLinkedLobby_Parms), Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLinkedLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics
	{
		struct Matchmaking_eventSetLobbyData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyData", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics
	{
		struct Matchmaking_eventSetLobbyGameServer_Parms
		{
			FSteamID SteamIDLobby;
			FString GameServerIP;
			int32 GameServerPort;
			FSteamID SteamIDGameServer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, GameServerIP), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, GameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_GameServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_SteamIDGameServer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyGameServer", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyGameServer_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics
	{
		struct Matchmaking_eventSetLobbyJoinable_Parms
		{
			FSteamID SteamIDLobby;
			bool bLobbyJoinable;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_bLobbyJoinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLobbyJoinable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyJoinable_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyJoinable_Parms*)Obj)->bLobbyJoinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable = { "bLobbyJoinable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyJoinable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyJoinable", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyJoinable_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics
	{
		struct Matchmaking_eventSetLobbyMemberData_Parms
		{
			FSteamID SteamIDLobby;
			FString Key;
			FString Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyMemberData", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyMemberData_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics
	{
		struct Matchmaking_eventSetLobbyMemberLimit_Parms
		{
			FSteamID SteamIDLobby;
			int32 MaxMembers;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberLimit_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberLimit_Parms, MaxMembers), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyMemberLimit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyMemberLimit_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_MaxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyMemberLimit", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyMemberLimit_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics
	{
		struct Matchmaking_eventSetLobbyOwner_Parms
		{
			FSteamID SteamIDLobby;
			FSteamID SteamIDNewOwner;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDNewOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyOwner_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner = { "SteamIDNewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyOwner_Parms, SteamIDNewOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyOwner_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_SteamIDNewOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyOwner", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyOwner_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics
	{
		struct Matchmaking_eventSetLobbyType_Parms
		{
			FSteamID SteamIDLobby;
			ESteamLobbyType LobbyType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyType_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyType_Parms, LobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyType_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_LobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyType", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyType_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMatchmaking_NoRegister()
	{
		return UMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoritesListAccountsUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListAccountsUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoritesListChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyChatMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyChatUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyDataUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyDataUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyEnter_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyGameCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyGameCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyKicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyKicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchmaking_AddFavoriteGame, "AddFavoriteGame" }, // 1480989433
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter, "AddRequestLobbyListCompatibleMembersFilter" }, // 3768413852
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter, "AddRequestLobbyListDistanceFilter" }, // 1081602531
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable, "AddRequestLobbyListFilterSlotsAvailable" }, // 2128233622
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter, "AddRequestLobbyListNearValueFilter" }, // 2261886811
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter, "AddRequestLobbyListNumericalFilter" }, // 1493735246
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter, "AddRequestLobbyListResultCountFilter" }, // 1594632037
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter, "AddRequestLobbyListStringFilter" }, // 3602203186
		{ &Z_Construct_UFunction_UMatchmaking_CreateLobby, "CreateLobby" }, // 3182668544
		{ &Z_Construct_UFunction_UMatchmaking_DeleteLobbyData, "DeleteLobbyData" }, // 1869710614
		{ &Z_Construct_UFunction_UMatchmaking_GetFavoriteGame, "GetFavoriteGame" }, // 3488616914
		{ &Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount, "GetFavoriteGameCount" }, // 1480674193
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex, "GetLobbyByIndex" }, // 251581655
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 2298406032
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyData, "GetLobbyData" }, // 1445069280
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex, "GetLobbyDataByIndex" }, // 3080127295
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount, "GetLobbyDataCount" }, // 1224612268
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer, "GetLobbyGameServer" }, // 2902505753
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex, "GetLobbyMemberByIndex" }, // 4276532997
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData, "GetLobbyMemberData" }, // 370555165
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit, "GetLobbyMemberLimit" }, // 1739750324
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyOwner, "GetLobbyOwner" }, // 1301224457
		{ &Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers, "GetNumLobbyMembers" }, // 2658147730
		{ &Z_Construct_UFunction_UMatchmaking_InviteUserToLobby, "InviteUserToLobby" }, // 550088933
		{ &Z_Construct_UFunction_UMatchmaking_JoinLobby, "JoinLobby" }, // 2029371975
		{ &Z_Construct_UFunction_UMatchmaking_LeaveLobby, "LeaveLobby" }, // 426829389
		{ &Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame, "RemoveFavoriteGame" }, // 328384174
		{ &Z_Construct_UFunction_UMatchmaking_RequestLobbyData, "RequestLobbyData" }, // 3313441865
		{ &Z_Construct_UFunction_UMatchmaking_RequestLobbyList, "RequestLobbyList" }, // 2804785615
		{ &Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg, "SendLobbyChatMsg" }, // 2502163756
		{ &Z_Construct_UFunction_UMatchmaking_SetLinkedLobby, "SetLinkedLobby" }, // 1691546012
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyData, "SetLobbyData" }, // 1463363992
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer, "SetLobbyGameServer" }, // 1446000639
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable, "SetLobbyJoinable" }, // 2960158913
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData, "SetLobbyMemberData" }, // 3466954234
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit, "SetLobbyMemberLimit" }, // 119561562
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyOwner, "SetLobbyOwner" }, // 591949071
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyType, "SetLobbyType" }, // 1213370951
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Matchmaking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated = { "FavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, FavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged = { "FavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, FavoritesListChanged), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg = { "LobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate = { "LobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyChatUpdate), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate = { "LobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyDataUpdate), Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter = { "LobbyEnter", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyEnter), Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated = { "LobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyGameCreated), Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite = { "LobbyInvite", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyInvite), Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked = { "LobbyKicked", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyKicked), Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatchmaking_Statics::ClassParams = {
		&UMatchmaking::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMatchmaking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatchmaking, 551003558);
	template<> STEAMCORE_API UClass* StaticClass<UMatchmaking>()
	{
		return UMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatchmaking(Z_Construct_UClass_UMatchmaking, &UMatchmaking::StaticClass, TEXT("/Script/SteamCore"), TEXT("UMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
