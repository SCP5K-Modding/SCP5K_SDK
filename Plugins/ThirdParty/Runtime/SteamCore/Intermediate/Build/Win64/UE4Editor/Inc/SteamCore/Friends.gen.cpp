// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Friends.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriends() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UFriends_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UFriends();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCounts__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingList__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCount__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendFlags();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPersonaState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendRelationship();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamFriendsGroupID();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserRestriction();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIsFollowing__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoom__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerList__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaName__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAvatarImageLoaded__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFriendRichPresenceUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatJoin__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatLeave__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedClanChatMsg__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedFriendChatMsg__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameLobbyJoinRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameOverlayActivated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameRichPresenceJoinRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameServerChangeRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPersonaStateChange__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomCompletionResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClanOfficerListResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UFriends::execActivateGameOverlay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlay(Z_Param_Dialog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayInvitedialog)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayInvitedialog(Z_Param_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayInviteDialogConnectString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayInviteDialogConnectString(Z_Param_ConnectString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToStore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_ENUM(ESteamOverlayToStoreFlag,Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToStore(Z_Param_AppID,ESteamOverlayToStoreFlag(Z_Param_Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dialog);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToUser(Z_Param_Dialog,Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToWebPage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_ENUM(ESteamActivateGameOverlayToWebPageMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToWebPage(Z_Param_URL,ESteamActivateGameOverlayToWebPageMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execClearRichPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ClearRichPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execCloseClanChatWindowInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::CloseClanChatWindowInSteam(Z_Param_SteamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execDownloadClanActivityCounts)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(FSteamID,Z_Param_SteamIDClans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadClanActivityCounts(FOnDownloadClanActivityCounts(Z_Param_Out_Callback),Z_Param_SteamIDClans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execEnumerateFollowingList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateFollowingList(FOnEnumerateFollowingList(Z_Param_Out_Callback),Z_Param_StartIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetChatMemberByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_GET_PROPERTY(FIntProperty,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetChatMemberByIndex(Z_Param_SteamIDClan,Z_Param_User);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanActivityCounts)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Online);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InGame);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Chatting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::GetClanActivityCounts(Z_Param_SteamIDClan,Z_Param_Out_Online,Z_Param_Out_InGame,Z_Param_Out_Chatting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Clan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanByIndex(Z_Param_Clan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanChatMemberCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanChatMemberCount(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanChatMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDChatter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanChatMessage(Z_Param_SteamIDClanChat,Z_Param_MessageID,Z_Param_Out_Text,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType),Z_Param_Out_SteamIDChatter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanName)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetClanName(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOfficerByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_GET_PROPERTY(FIntProperty,Z_Param_Officer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanOfficerByIndex(Z_Param_SteamIDClan,Z_Param_Officer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOfficerCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanOfficerCount(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanOwner(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanTag)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetClanTag(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetCoplayFriend)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CoplayFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetCoplayFriend(Z_Param_CoplayFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetCoplayFriendCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetCoplayFriendCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFollowerCount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFollowerCount(FOnGetFollowerCount(Z_Param_Out_Callback),Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ifriend);
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetFriendByIndex(Z_Param_Ifriend,Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCoplayGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCoplayGame(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCoplayTime)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCoplayTime(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCount)
	{
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCount(Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCountFromSource)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCountFromSource(Z_Param_SteamIDSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendFromSourceByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_Ifriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetFriendFromSourceByIndex(Z_Param_SteamIDSource,Z_Param_Ifriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendGamePlayed)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_STRUCT_REF(FSteamGameID,Z_Param_Out_GameID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GameIP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ConnectionPort);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_QueryPort);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::GetFriendGamePlayed(Z_Param_SteamIDFriend,Z_Param_Out_GameID,Z_Param_Out_GameIP,Z_Param_Out_ConnectionPort,Z_Param_Out_QueryPort,Z_Param_Out_SteamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_MessageID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Text);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_ChatEntryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendMessage(Z_Param_SteamIDFriend,Z_Param_MessageID,Z_Param_Out_Text,(ESteamChatEntryType&)(Z_Param_Out_ChatEntryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaName)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendPersonaName(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaNameHistory)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_PersonaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendPersonaNameHistory(Z_Param_SteamIDFriend,Z_Param_PersonaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaState)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetFriendPersonaState(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRelationship)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamFriendRelationship*)Z_Param__Result=UFriends::GetFriendRelationship(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresence)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendRichPresence(Z_Param_SteamIDFriend,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresenceKeyByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendRichPresenceKeyByIndex(Z_Param_SteamIDFriend,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresenceKeyCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendRichPresenceKeyCount(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendsGroupCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupIDByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FriendGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamFriendsGroupID*)Z_Param__Result=UFriends::GetFriendsGroupIDByIndex(Z_Param_FriendGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupMembersCount)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendsGroupMembersCount(Z_Param_FriendsGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupMembersList)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
		P_GET_TARRAY_REF(FSteamID,Z_Param_Out_SteamIDMembers);
		P_GET_PROPERTY(FIntProperty,Z_Param_MembersCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::GetFriendsGroupMembersList(Z_Param_FriendsGroupID,Z_Param_Out_SteamIDMembers,Z_Param_MembersCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupName)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_FriendsGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendsGroupName(Z_Param_FriendsGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendSteamLevel)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendSteamLevel(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetLargeFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetLargeFriendAvatar(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetMediumFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetMediumFriendAvatar(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPersonaName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaName_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPersonaName_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetPersonaState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaState_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetPersonaState_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPlayerNickname)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPlayerNickname(Z_Param_SteamIDPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPlayerNickname_Pure)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPlayerNickname_Pure(Z_Param_SteamIDPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetSmallFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetSmallFriendAvatar(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetUserRestrictions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESteamUserRestriction>*)Z_Param__Result=UFriends::GetUserRestrictions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execHasFriend)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_Flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::HasFriend(Z_Param_SteamIDFriend,Z_Param_Flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execInviteUserToGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::InviteUserToGame(Z_Param_SteamIDFriend,Z_Param_ConnectString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanChatAdmin)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanChatAdmin(Z_Param_SteamIDClanChat,Z_Param_SteamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanChatWindowOpenInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanChatWindowOpenInSteam(Z_Param_SteamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanOfficialGameGroup)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanOfficialGameGroup(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanPublic)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanPublic(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsFollowing)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsFollowing(FOnIsFollowing(Z_Param_Out_Callback),Z_Param_SteamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsUserInSource)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsUserInSource(Z_Param_SteamIDUser,Z_Param_SteamIDSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execJoinClanChatRoom)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinClanChatRoom(FOnJoinClanChatRoom(Z_Param_Out_Callback),Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execLeaveClanChatRoom)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::LeaveClanChatRoom(Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execOpenClanChatWindowInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::OpenClanChatWindowInSteam(Z_Param_SteamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRegisterProtocolInOverlayBrowser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Protocol);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::RegisterProtocolInOverlayBrowser(Z_Param_Protocol);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execReplyToFriendMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_MsgToSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::ReplyToFriendMessage(Z_Param_SteamIDFriend,Z_Param_MsgToSend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestClanOfficerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestClanOfficerList(FOnRequestClanOfficerList(Z_Param_Out_Callback),Z_Param_SteamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestFriendRichPresence)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::RequestFriendRichPresence(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestUserInformation)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_UBOOL(Z_Param_bRequireNameOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::RequestUserInformation(Z_Param_SteamIDUser,Z_Param_bRequireNameOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSendClanChatMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDClanChat);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SendClanChatMessage(Z_Param_SteamIDClanChat,Z_Param_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetInGameVoiceSpeaking)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_UBOOL(Z_Param_bSpeaking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::SetInGameVoiceSpeaking(Z_Param_SteamIDUser,Z_Param_bSpeaking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetListenForFriendsMessages)
	{
		P_GET_UBOOL(Z_Param_bInterceptEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SetListenForFriendsMessages(Z_Param_bInterceptEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetPersonaName)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPersonaName(FOnSetPersonaName(Z_Param_Out_Callback),Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetPlayedWith)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUserPlayedWith);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::SetPlayedWith(Z_Param_SteamIDUserPlayedWith);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetRichPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SetRichPresence(Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	void UFriends::StaticRegisterNativesUFriends()
	{
		UClass* Class = UFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGameOverlay", &UFriends::execActivateGameOverlay },
			{ "ActivateGameOverlayInvitedialog", &UFriends::execActivateGameOverlayInvitedialog },
			{ "ActivateGameOverlayInviteDialogConnectString", &UFriends::execActivateGameOverlayInviteDialogConnectString },
			{ "ActivateGameOverlayToStore", &UFriends::execActivateGameOverlayToStore },
			{ "ActivateGameOverlayToUser", &UFriends::execActivateGameOverlayToUser },
			{ "ActivateGameOverlayToWebPage", &UFriends::execActivateGameOverlayToWebPage },
			{ "ClearRichPresence", &UFriends::execClearRichPresence },
			{ "CloseClanChatWindowInSteam", &UFriends::execCloseClanChatWindowInSteam },
			{ "DownloadClanActivityCounts", &UFriends::execDownloadClanActivityCounts },
			{ "EnumerateFollowingList", &UFriends::execEnumerateFollowingList },
			{ "GetChatMemberByIndex", &UFriends::execGetChatMemberByIndex },
			{ "GetClanActivityCounts", &UFriends::execGetClanActivityCounts },
			{ "GetClanByIndex", &UFriends::execGetClanByIndex },
			{ "GetClanChatMemberCount", &UFriends::execGetClanChatMemberCount },
			{ "GetClanChatMessage", &UFriends::execGetClanChatMessage },
			{ "GetClanCount", &UFriends::execGetClanCount },
			{ "GetClanName", &UFriends::execGetClanName },
			{ "GetClanOfficerByIndex", &UFriends::execGetClanOfficerByIndex },
			{ "GetClanOfficerCount", &UFriends::execGetClanOfficerCount },
			{ "GetClanOwner", &UFriends::execGetClanOwner },
			{ "GetClanTag", &UFriends::execGetClanTag },
			{ "GetCoplayFriend", &UFriends::execGetCoplayFriend },
			{ "GetCoplayFriendCount", &UFriends::execGetCoplayFriendCount },
			{ "GetFollowerCount", &UFriends::execGetFollowerCount },
			{ "GetFriendByIndex", &UFriends::execGetFriendByIndex },
			{ "GetFriendCoplayGame", &UFriends::execGetFriendCoplayGame },
			{ "GetFriendCoplayTime", &UFriends::execGetFriendCoplayTime },
			{ "GetFriendCount", &UFriends::execGetFriendCount },
			{ "GetFriendCountFromSource", &UFriends::execGetFriendCountFromSource },
			{ "GetFriendFromSourceByIndex", &UFriends::execGetFriendFromSourceByIndex },
			{ "GetFriendGamePlayed", &UFriends::execGetFriendGamePlayed },
			{ "GetFriendMessage", &UFriends::execGetFriendMessage },
			{ "GetFriendPersonaName", &UFriends::execGetFriendPersonaName },
			{ "GetFriendPersonaNameHistory", &UFriends::execGetFriendPersonaNameHistory },
			{ "GetFriendPersonaState", &UFriends::execGetFriendPersonaState },
			{ "GetFriendRelationship", &UFriends::execGetFriendRelationship },
			{ "GetFriendRichPresence", &UFriends::execGetFriendRichPresence },
			{ "GetFriendRichPresenceKeyByIndex", &UFriends::execGetFriendRichPresenceKeyByIndex },
			{ "GetFriendRichPresenceKeyCount", &UFriends::execGetFriendRichPresenceKeyCount },
			{ "GetFriendsGroupCount", &UFriends::execGetFriendsGroupCount },
			{ "GetFriendsGroupIDByIndex", &UFriends::execGetFriendsGroupIDByIndex },
			{ "GetFriendsGroupMembersCount", &UFriends::execGetFriendsGroupMembersCount },
			{ "GetFriendsGroupMembersList", &UFriends::execGetFriendsGroupMembersList },
			{ "GetFriendsGroupName", &UFriends::execGetFriendsGroupName },
			{ "GetFriendSteamLevel", &UFriends::execGetFriendSteamLevel },
			{ "GetLargeFriendAvatar", &UFriends::execGetLargeFriendAvatar },
			{ "GetMediumFriendAvatar", &UFriends::execGetMediumFriendAvatar },
			{ "GetPersonaName", &UFriends::execGetPersonaName },
			{ "GetPersonaName_Pure", &UFriends::execGetPersonaName_Pure },
			{ "GetPersonaState", &UFriends::execGetPersonaState },
			{ "GetPersonaState_Pure", &UFriends::execGetPersonaState_Pure },
			{ "GetPlayerNickname", &UFriends::execGetPlayerNickname },
			{ "GetPlayerNickname_Pure", &UFriends::execGetPlayerNickname_Pure },
			{ "GetSmallFriendAvatar", &UFriends::execGetSmallFriendAvatar },
			{ "GetUserRestrictions", &UFriends::execGetUserRestrictions },
			{ "HasFriend", &UFriends::execHasFriend },
			{ "InviteUserToGame", &UFriends::execInviteUserToGame },
			{ "IsClanChatAdmin", &UFriends::execIsClanChatAdmin },
			{ "IsClanChatWindowOpenInSteam", &UFriends::execIsClanChatWindowOpenInSteam },
			{ "IsClanOfficialGameGroup", &UFriends::execIsClanOfficialGameGroup },
			{ "IsClanPublic", &UFriends::execIsClanPublic },
			{ "IsFollowing", &UFriends::execIsFollowing },
			{ "IsUserInSource", &UFriends::execIsUserInSource },
			{ "JoinClanChatRoom", &UFriends::execJoinClanChatRoom },
			{ "LeaveClanChatRoom", &UFriends::execLeaveClanChatRoom },
			{ "OpenClanChatWindowInSteam", &UFriends::execOpenClanChatWindowInSteam },
			{ "RegisterProtocolInOverlayBrowser", &UFriends::execRegisterProtocolInOverlayBrowser },
			{ "ReplyToFriendMessage", &UFriends::execReplyToFriendMessage },
			{ "RequestClanOfficerList", &UFriends::execRequestClanOfficerList },
			{ "RequestFriendRichPresence", &UFriends::execRequestFriendRichPresence },
			{ "RequestUserInformation", &UFriends::execRequestUserInformation },
			{ "SendClanChatMessage", &UFriends::execSendClanChatMessage },
			{ "SetInGameVoiceSpeaking", &UFriends::execSetInGameVoiceSpeaking },
			{ "SetListenForFriendsMessages", &UFriends::execSetListenForFriendsMessages },
			{ "SetPersonaName", &UFriends::execSetPersonaName },
			{ "SetPlayedWith", &UFriends::execSetPlayedWith },
			{ "SetRichPresence", &UFriends::execSetRichPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics
	{
		struct Friends_eventActivateGameOverlay_Parms
		{
			FString Dialog;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_Dialog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlay_Parms, Dialog), METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_Dialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_Dialog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_Dialog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlay", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlay_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics
	{
		struct Friends_eventActivateGameOverlayInvitedialog_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayInvitedialog_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_SteamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayInvitedialog", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayInvitedialog_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics
	{
		struct Friends_eventActivateGameOverlayInviteDialogConnectString_Parms
		{
			FString ConnectString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayInviteDialogConnectString_Parms, ConnectString), METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::NewProp_ConnectString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayInviteDialogConnectString", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayInviteDialogConnectString_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics
	{
		struct Friends_eventActivateGameOverlayToStore_Parms
		{
			int32 AppID;
			ESteamOverlayToStoreFlag Flag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToStore_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToStore_Parms, Flag), Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToStore", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayToStore_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics
	{
		struct Friends_eventActivateGameOverlayToUser_Parms
		{
			FString Dialog;
			FSteamID SteamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dialog;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog = { "Dialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToUser_Parms, Dialog), METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToUser_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_Dialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToUser", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayToUser_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics
	{
		struct Friends_eventActivateGameOverlayToWebPage_Parms
		{
			FString URL;
			ESteamActivateGameOverlayToWebPageMode Mode;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToWebPage_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToWebPage_Parms, Mode), Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToWebPage", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayToWebPage_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ClearRichPresence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ClearRichPresence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ClearRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics
	{
		struct Friends_eventCloseClanChatWindowInSteam_Parms
		{
			FSteamID SteamIDClanChat;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventCloseClanChatWindowInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventCloseClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventCloseClanChatWindowInSteam_Parms), &Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "CloseClanChatWindowInSteam", nullptr, nullptr, sizeof(Friends_eventCloseClanChatWindowInSteam_Parms), Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics
	{
		struct Friends_eventDownloadClanActivityCounts_Parms
		{
			FScriptDelegate Callback;
			TArray<FSteamID> SteamIDClans;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClans_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamIDClans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventDownloadClanActivityCounts_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCounts__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans_Inner = { "SteamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans = { "SteamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventDownloadClanActivityCounts_Parms, SteamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_SteamIDClans,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "DownloadClanActivityCounts", nullptr, nullptr, sizeof(Friends_eventDownloadClanActivityCounts_Parms), Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_DownloadClanActivityCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics
	{
		struct Friends_eventEnumerateFollowingList_Parms
		{
			FScriptDelegate Callback;
			int32 StartIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventEnumerateFollowingList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventEnumerateFollowingList_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_StartIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "EnumerateFollowingList", nullptr, nullptr, sizeof(Friends_eventEnumerateFollowingList_Parms), Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_EnumerateFollowingList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics
	{
		struct Friends_eventGetChatMemberByIndex_Parms
		{
			FSteamID SteamIDClan;
			int32 User;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, User), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetChatMemberByIndex", nullptr, nullptr, sizeof(Friends_eventGetChatMemberByIndex_Parms), Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetChatMemberByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics
	{
		struct Friends_eventGetClanActivityCounts_Parms
		{
			FSteamID SteamIDClan;
			int32 Online;
			int32 InGame;
			int32 Chatting;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Online;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InGame;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Chatting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_Online = { "Online", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, Online), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, InGame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_Chatting = { "Chatting", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, Chatting), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventGetClanActivityCounts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventGetClanActivityCounts_Parms), &Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_Online,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_InGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_Chatting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanActivityCounts", nullptr, nullptr, sizeof(Friends_eventGetClanActivityCounts_Parms), Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanActivityCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanByIndex_Statics
	{
		struct Friends_eventGetClanByIndex_Parms
		{
			int32 Clan;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Clan;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_Clan = { "Clan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanByIndex_Parms, Clan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_Clan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanByIndex", nullptr, nullptr, sizeof(Friends_eventGetClanByIndex_Parms), Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics
	{
		struct Friends_eventGetClanChatMemberCount_Parms
		{
			FSteamID SteamIDClan;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMemberCount_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMemberCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanChatMemberCount", nullptr, nullptr, sizeof(Friends_eventGetClanChatMemberCount_Parms), Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanChatMemberCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics
	{
		struct Friends_eventGetClanChatMessage_Parms
		{
			FSteamID SteamIDClanChat;
			int32 MessageID;
			FString Text;
			ESteamChatEntryType ChatEntryType;
			FSteamID SteamIDChatter;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDChatter;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, MessageID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_SteamIDChatter = { "SteamIDChatter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, SteamIDChatter), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_MessageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ChatEntryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_SteamIDChatter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanChatMessage", nullptr, nullptr, sizeof(Friends_eventGetClanChatMessage_Parms), Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanCount_Statics
	{
		struct Friends_eventGetClanCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanCount", nullptr, nullptr, sizeof(Friends_eventGetClanCount_Parms), Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanName_Statics
	{
		struct Friends_eventGetClanName_Parms
		{
			FSteamID SteamIDClan;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanName_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanName", nullptr, nullptr, sizeof(Friends_eventGetClanName_Parms), Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics
	{
		struct Friends_eventGetClanOfficerByIndex_Parms
		{
			FSteamID SteamIDClan;
			int32 Officer;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Officer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_Officer = { "Officer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, Officer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_Officer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOfficerByIndex", nullptr, nullptr, sizeof(Friends_eventGetClanOfficerByIndex_Parms), Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOfficerByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics
	{
		struct Friends_eventGetClanOfficerCount_Parms
		{
			FSteamID SteamIDClan;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerCount_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOfficerCount", nullptr, nullptr, sizeof(Friends_eventGetClanOfficerCount_Parms), Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOfficerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOwner_Statics
	{
		struct Friends_eventGetClanOwner_Parms
		{
			FSteamID SteamIDClan;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOwner_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOwner", nullptr, nullptr, sizeof(Friends_eventGetClanOwner_Parms), Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanTag_Statics
	{
		struct Friends_eventGetClanTag_Parms
		{
			FSteamID SteamIDClan;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanTag_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanTag", nullptr, nullptr, sizeof(Friends_eventGetClanTag_Parms), Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics
	{
		struct Friends_eventGetCoplayFriend_Parms
		{
			int32 CoplayFriend;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CoplayFriend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_CoplayFriend = { "CoplayFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetCoplayFriend_Parms, CoplayFriend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetCoplayFriend_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_CoplayFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetCoplayFriend", nullptr, nullptr, sizeof(Friends_eventGetCoplayFriend_Parms), Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetCoplayFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics
	{
		struct Friends_eventGetCoplayFriendCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetCoplayFriendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetCoplayFriendCount", nullptr, nullptr, sizeof(Friends_eventGetCoplayFriendCount_Parms), Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetCoplayFriendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFollowerCount_Statics
	{
		struct Friends_eventGetFollowerCount_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFollowerCount_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCount__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFollowerCount_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFollowerCount", nullptr, nullptr, sizeof(Friends_eventGetFollowerCount_Parms), Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFollowerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics
	{
		struct Friends_eventGetFriendByIndex_Parms
		{
			int32 Ifriend;
			TArray<ESteamFriendFlags> Flags;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ifriend;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Ifriend = { "Ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, Ifriend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Ifriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendByIndex", nullptr, nullptr, sizeof(Friends_eventGetFriendByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics
	{
		struct Friends_eventGetFriendCoplayGame_Parms
		{
			FSteamID SteamIDFriend;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCoplayGame_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCoplayGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCoplayGame", nullptr, nullptr, sizeof(Friends_eventGetFriendCoplayGame_Parms), Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCoplayGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics
	{
		struct Friends_eventGetFriendCoplayTime_Parms
		{
			FSteamID SteamIDFriend;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCoplayTime_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCoplayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCoplayTime", nullptr, nullptr, sizeof(Friends_eventGetFriendCoplayTime_Parms), Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCoplayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCount_Statics
	{
		struct Friends_eventGetFriendCount_Parms
		{
			TArray<ESteamFriendFlags> Flags;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCount_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCount", nullptr, nullptr, sizeof(Friends_eventGetFriendCount_Parms), Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics
	{
		struct Friends_eventGetFriendCountFromSource_Parms
		{
			FSteamID SteamIDSource;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCountFromSource_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCountFromSource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_SteamIDSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCountFromSource", nullptr, nullptr, sizeof(Friends_eventGetFriendCountFromSource_Parms), Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCountFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics
	{
		struct Friends_eventGetFriendFromSourceByIndex_Parms
		{
			FSteamID SteamIDSource;
			int32 Ifriend;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ifriend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_Ifriend = { "Ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, Ifriend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_SteamIDSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_Ifriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendFromSourceByIndex", nullptr, nullptr, sizeof(Friends_eventGetFriendFromSourceByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics
	{
		struct Friends_eventGetFriendGamePlayed_Parms
		{
			FSteamID SteamIDFriend;
			FSteamGameID GameID;
			FString GameIP;
			int32 ConnectionPort;
			int32 QueryPort;
			FSteamID SteamIDLobby;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameIP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_GameIP = { "GameIP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, GameIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, ConnectionPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, QueryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventGetFriendGamePlayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventGetFriendGamePlayed_Parms), &Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_GameIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ConnectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendGamePlayed", nullptr, nullptr, sizeof(Friends_eventGetFriendGamePlayed_Parms), Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendGamePlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendMessage_Statics
	{
		struct Friends_eventGetFriendMessage_Parms
		{
			FSteamID SteamIDFriend;
			int32 MessageID;
			FString Text;
			ESteamChatEntryType ChatEntryType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_MessageID = { "MessageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, MessageID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_MessageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ChatEntryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ChatEntryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendMessage", nullptr, nullptr, sizeof(Friends_eventGetFriendMessage_Parms), Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics
	{
		struct Friends_eventGetFriendPersonaName_Parms
		{
			FSteamID SteamIDFriend;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaName_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaName", nullptr, nullptr, sizeof(Friends_eventGetFriendPersonaName_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics
	{
		struct Friends_eventGetFriendPersonaNameHistory_Parms
		{
			FSteamID SteamIDFriend;
			int32 PersonaName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PersonaName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_PersonaName = { "PersonaName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, PersonaName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_PersonaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaNameHistory", nullptr, nullptr, sizeof(Friends_eventGetFriendPersonaNameHistory_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics
	{
		struct Friends_eventGetFriendPersonaState_Parms
		{
			FSteamID SteamIDFriend;
			ESteamPersonaState ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaState_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaState", nullptr, nullptr, sizeof(Friends_eventGetFriendPersonaState_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics
	{
		struct Friends_eventGetFriendRelationship_Parms
		{
			FSteamID SteamIDFriend;
			ESteamFriendRelationship ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRelationship_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRelationship_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamFriendRelationship, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRelationship", nullptr, nullptr, sizeof(Friends_eventGetFriendRelationship_Parms), Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRelationship()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics
	{
		struct Friends_eventGetFriendRichPresence_Parms
		{
			FSteamID SteamIDFriend;
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresence", nullptr, nullptr, sizeof(Friends_eventGetFriendRichPresence_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics
	{
		struct Friends_eventGetFriendRichPresenceKeyByIndex_Parms
		{
			FSteamID SteamIDFriend;
			int32 Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresenceKeyByIndex", nullptr, nullptr, sizeof(Friends_eventGetFriendRichPresenceKeyByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics
	{
		struct Friends_eventGetFriendRichPresenceKeyCount_Parms
		{
			FSteamID SteamIDFriend;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyCount_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresenceKeyCount", nullptr, nullptr, sizeof(Friends_eventGetFriendRichPresenceKeyCount_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics
	{
		struct Friends_eventGetFriendsGroupCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupCount", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupCount_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics
	{
		struct Friends_eventGetFriendsGroupIDByIndex_Parms
		{
			int32 FriendGroup;
			FSteamFriendsGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FriendGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_FriendGroup = { "FriendGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupIDByIndex_Parms, FriendGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupIDByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_FriendGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupIDByIndex", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupIDByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics
	{
		struct Friends_eventGetFriendsGroupMembersCount_Parms
		{
			FSteamFriendsGroupID FriendsGroupID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersCount_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_FriendsGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupMembersCount", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupMembersCount_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics
	{
		struct Friends_eventGetFriendsGroupMembersList_Parms
		{
			FSteamFriendsGroupID FriendsGroupID;
			TArray<FSteamID> SteamIDMembers;
			int32 MembersCount;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDMembers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamIDMembers;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MembersCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers_Inner = { "SteamIDMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers = { "SteamIDMembers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, SteamIDMembers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_MembersCount = { "MembersCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, MembersCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_FriendsGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_SteamIDMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_MembersCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupMembersList", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupMembersList_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics
	{
		struct Friends_eventGetFriendsGroupName_Parms
		{
			FSteamFriendsGroupID FriendsGroupID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsGroupID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_FriendsGroupID = { "FriendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupName_Parms, FriendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_FriendsGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupName", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupName_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics
	{
		struct Friends_eventGetFriendSteamLevel_Parms
		{
			FSteamID SteamIDFriend;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendSteamLevel_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendSteamLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendSteamLevel", nullptr, nullptr, sizeof(Friends_eventGetFriendSteamLevel_Parms), Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics
	{
		struct Friends_eventGetLargeFriendAvatar_Parms
		{
			FSteamID SteamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetLargeFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetLargeFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetLargeFriendAvatar", nullptr, nullptr, sizeof(Friends_eventGetLargeFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetLargeFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics
	{
		struct Friends_eventGetMediumFriendAvatar_Parms
		{
			FSteamID SteamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetMediumFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetMediumFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetMediumFriendAvatar", nullptr, nullptr, sizeof(Friends_eventGetMediumFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetMediumFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaName_Statics
	{
		struct Friends_eventGetPersonaName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaName", nullptr, nullptr, sizeof(Friends_eventGetPersonaName_Parms), Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics
	{
		struct Friends_eventGetPersonaName_Pure_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPersonaName_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaName_Pure", nullptr, nullptr, sizeof(Friends_eventGetPersonaName_Pure_Parms), Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaName_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaState_Statics
	{
		struct Friends_eventGetPersonaState_Parms
		{
			ESteamPersonaState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaState", nullptr, nullptr, sizeof(Friends_eventGetPersonaState_Parms), Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics
	{
		struct Friends_eventGetPersonaState_Pure_Parms
		{
			ESteamPersonaState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPersonaState_Pure_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaState_Pure", nullptr, nullptr, sizeof(Friends_eventGetPersonaState_Pure_Parms), Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaState_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics
	{
		struct Friends_eventGetPlayerNickname_Parms
		{
			FSteamID SteamIDPlayer;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Parms, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_SteamIDPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPlayerNickname", nullptr, nullptr, sizeof(Friends_eventGetPlayerNickname_Parms), Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPlayerNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics
	{
		struct Friends_eventGetPlayerNickname_Pure_Parms
		{
			FSteamID SteamIDPlayer;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDPlayer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_SteamIDPlayer = { "SteamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Pure_Parms, SteamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_SteamIDPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPlayerNickname_Pure", nullptr, nullptr, sizeof(Friends_eventGetPlayerNickname_Pure_Parms), Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics
	{
		struct Friends_eventGetSmallFriendAvatar_Parms
		{
			FSteamID SteamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetSmallFriendAvatar_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetSmallFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetSmallFriendAvatar", nullptr, nullptr, sizeof(Friends_eventGetSmallFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetSmallFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics
	{
		struct Friends_eventGetUserRestrictions_Parms
		{
			TArray<ESteamUserRestriction> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamUserRestriction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetUserRestrictions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetUserRestrictions", nullptr, nullptr, sizeof(Friends_eventGetUserRestrictions_Parms), Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetUserRestrictions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_HasFriend_Statics
	{
		struct Friends_eventHasFriend_Parms
		{
			FSteamID SteamIDFriend;
			TArray<ESteamFriendFlags> Flags;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventHasFriend_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventHasFriend_Parms, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventHasFriend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventHasFriend_Parms), &Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_HasFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "HasFriend", nullptr, nullptr, sizeof(Friends_eventHasFriend_Parms), Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_HasFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_HasFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_InviteUserToGame_Statics
	{
		struct Friends_eventInviteUserToGame_Parms
		{
			FSteamID SteamIDFriend;
			FString ConnectString;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventInviteUserToGame_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ConnectString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ConnectString = { "ConnectString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventInviteUserToGame_Parms, ConnectString), METADATA_PARAMS(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ConnectString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ConnectString_MetaData)) };
	void Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventInviteUserToGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventInviteUserToGame_Parms), &Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ConnectString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "InviteUserToGame", nullptr, nullptr, sizeof(Friends_eventInviteUserToGame_Parms), Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_InviteUserToGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics
	{
		struct Friends_eventIsClanChatAdmin_Parms
		{
			FSteamID SteamIDClanChat;
			FSteamID SteamIDUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanChatAdmin_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanChatAdmin_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanChatAdmin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsClanChatAdmin_Parms), &Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanChatAdmin", nullptr, nullptr, sizeof(Friends_eventIsClanChatAdmin_Parms), Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanChatAdmin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics
	{
		struct Friends_eventIsClanChatWindowOpenInSteam_Parms
		{
			FSteamID SteamIDClanChat;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanChatWindowOpenInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanChatWindowOpenInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsClanChatWindowOpenInSteam_Parms), &Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanChatWindowOpenInSteam", nullptr, nullptr, sizeof(Friends_eventIsClanChatWindowOpenInSteam_Parms), Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics
	{
		struct Friends_eventIsClanOfficialGameGroup_Parms
		{
			FSteamID SteamIDClan;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanOfficialGameGroup_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanOfficialGameGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsClanOfficialGameGroup_Parms), &Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanOfficialGameGroup", nullptr, nullptr, sizeof(Friends_eventIsClanOfficialGameGroup_Parms), Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanPublic_Statics
	{
		struct Friends_eventIsClanPublic_Parms
		{
			FSteamID SteamIDClan;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanPublic_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanPublic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsClanPublic_Parms), &Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanPublic", nullptr, nullptr, sizeof(Friends_eventIsClanPublic_Parms), Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanPublic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsClanPublic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsFollowing_Statics
	{
		struct Friends_eventIsFollowing_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsFollowing_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnIsFollowing__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsFollowing_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_SteamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsFollowing", nullptr, nullptr, sizeof(Friends_eventIsFollowing_Parms), Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsUserInSource_Statics
	{
		struct Friends_eventIsUserInSource_Parms
		{
			FSteamID SteamIDUser;
			FSteamID SteamIDSource;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDSource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsUserInSource_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_SteamIDSource = { "SteamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsUserInSource_Parms, SteamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsUserInSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsUserInSource_Parms), &Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_SteamIDSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsUserInSource", nullptr, nullptr, sizeof(Friends_eventIsUserInSource_Parms), Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsUserInSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsUserInSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics
	{
		struct Friends_eventJoinClanChatRoom_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventJoinClanChatRoom_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoom__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventJoinClanChatRoom_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_SteamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "JoinClanChatRoom", nullptr, nullptr, sizeof(Friends_eventJoinClanChatRoom_Parms), Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_JoinClanChatRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics
	{
		struct Friends_eventLeaveClanChatRoom_Parms
		{
			FSteamID SteamIDClan;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventLeaveClanChatRoom_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventLeaveClanChatRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventLeaveClanChatRoom_Parms), &Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_SteamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "LeaveClanChatRoom", nullptr, nullptr, sizeof(Friends_eventLeaveClanChatRoom_Parms), Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_LeaveClanChatRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics
	{
		struct Friends_eventOpenClanChatWindowInSteam_Parms
		{
			FSteamID SteamIDClanChat;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventOpenClanChatWindowInSteam_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventOpenClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventOpenClanChatWindowInSteam_Parms), &Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "OpenClanChatWindowInSteam", nullptr, nullptr, sizeof(Friends_eventOpenClanChatWindowInSteam_Parms), Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics
	{
		struct Friends_eventRegisterProtocolInOverlayBrowser_Parms
		{
			FString Protocol;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Protocol;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRegisterProtocolInOverlayBrowser_Parms, Protocol), METADATA_PARAMS(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol_MetaData)) };
	void Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventRegisterProtocolInOverlayBrowser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventRegisterProtocolInOverlayBrowser_Parms), &Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_Protocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RegisterProtocolInOverlayBrowser", nullptr, nullptr, sizeof(Friends_eventRegisterProtocolInOverlayBrowser_Parms), Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics
	{
		struct Friends_eventReplyToFriendMessage_Parms
		{
			FSteamID SteamIDFriend;
			FString MsgToSend;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MsgToSend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MsgToSend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventReplyToFriendMessage_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend = { "MsgToSend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventReplyToFriendMessage_Parms, MsgToSend), METADATA_PARAMS(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend_MetaData)) };
	void Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventReplyToFriendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventReplyToFriendMessage_Parms), &Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_MsgToSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ReplyToFriendMessage", nullptr, nullptr, sizeof(Friends_eventReplyToFriendMessage_Parms), Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ReplyToFriendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics
	{
		struct Friends_eventRequestClanOfficerList_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRequestClanOfficerList_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRequestClanOfficerList_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_SteamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestClanOfficerList", nullptr, nullptr, sizeof(Friends_eventRequestClanOfficerList_Parms), Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestClanOfficerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics
	{
		struct Friends_eventRequestFriendRichPresence_Parms
		{
			FSteamID SteamIDFriend;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRequestFriendRichPresence_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::NewProp_SteamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestFriendRichPresence", nullptr, nullptr, sizeof(Friends_eventRequestFriendRichPresence_Parms), Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestFriendRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestUserInformation_Statics
	{
		struct Friends_eventRequestUserInformation_Parms
		{
			FSteamID SteamIDUser;
			bool bRequireNameOnly;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static void NewProp_bRequireNameOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRequestUserInformation_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
	{
		((Friends_eventRequestUserInformation_Parms*)Obj)->bRequireNameOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventRequestUserInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestUserInformation", nullptr, nullptr, sizeof(Friends_eventRequestUserInformation_Parms), Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestUserInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics
	{
		struct Friends_eventSendClanChatMessage_Parms
		{
			FSteamID SteamIDClanChat;
			FString Text;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDClanChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_SteamIDClanChat = { "SteamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSendClanChatMessage_Parms, SteamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSendClanChatMessage_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSendClanChatMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSendClanChatMessage_Parms), &Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_SteamIDClanChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SendClanChatMessage", nullptr, nullptr, sizeof(Friends_eventSendClanChatMessage_Parms), Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SendClanChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics
	{
		struct Friends_eventSetInGameVoiceSpeaking_Parms
		{
			FSteamID SteamIDUser;
			bool bSpeaking;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static void NewProp_bSpeaking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpeaking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetInGameVoiceSpeaking_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit(void* Obj)
	{
		((Friends_eventSetInGameVoiceSpeaking_Parms*)Obj)->bSpeaking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking = { "bSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSetInGameVoiceSpeaking_Parms), &Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetInGameVoiceSpeaking", nullptr, nullptr, sizeof(Friends_eventSetInGameVoiceSpeaking_Parms), Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics
	{
		struct Friends_eventSetListenForFriendsMessages_Parms
		{
			bool bInterceptEnabled;
			bool ReturnValue;
		};
		static void NewProp_bInterceptEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterceptEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit(void* Obj)
	{
		((Friends_eventSetListenForFriendsMessages_Parms*)Obj)->bInterceptEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled = { "bInterceptEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSetListenForFriendsMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetListenForFriendsMessages", nullptr, nullptr, sizeof(Friends_eventSetListenForFriendsMessages_Parms), Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetListenForFriendsMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetPersonaName_Statics
	{
		struct Friends_eventSetPersonaName_Parms
		{
			FScriptDelegate Callback;
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetPersonaName_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaName__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetPersonaName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetPersonaName", nullptr, nullptr, sizeof(Friends_eventSetPersonaName_Parms), Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetPlayedWith_Statics
	{
		struct Friends_eventSetPlayedWith_Parms
		{
			FSteamID SteamIDUserPlayedWith;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUserPlayedWith;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::NewProp_SteamIDUserPlayedWith = { "SteamIDUserPlayedWith", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetPlayedWith_Parms, SteamIDUserPlayedWith), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::NewProp_SteamIDUserPlayedWith,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetPlayedWith", nullptr, nullptr, sizeof(Friends_eventSetPlayedWith_Parms), Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetPlayedWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetRichPresence_Statics
	{
		struct Friends_eventSetRichPresence_Parms
		{
			FString Key;
			FString Value;
			bool ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetRichPresence_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetRichPresence_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSetRichPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSetRichPresence_Parms), &Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetRichPresence", nullptr, nullptr, sizeof(Friends_eventSetRichPresence_Parms), Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFriends_NoRegister()
	{
		return UFriends::StaticClass();
	}
	struct Z_Construct_UClass_UFriends_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarImageLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvatarImageLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendRichPresenceUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FriendRichPresenceUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatLeave_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatLeave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameConnectedClanChatMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedClanChatMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameConnectedFriendChatMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedFriendChatMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLobbyJoinRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameLobbyJoinRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverlayActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameOverlayActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameRichPresenceJoinRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameRichPresenceJoinRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerChangeRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameServerChangeRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonaStateChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PersonaStateChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetPersonaNameResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SetPersonaNameResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinClanChatRoomCompletionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinClanChatRoomCompletionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClanOfficerListResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClanOfficerListResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadClanActivityCountsResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadClanActivityCountsResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlay, "ActivateGameOverlay" }, // 2390497313
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog, "ActivateGameOverlayInvitedialog" }, // 2361764646
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayInviteDialogConnectString, "ActivateGameOverlayInviteDialogConnectString" }, // 1554642900
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore, "ActivateGameOverlayToStore" }, // 841348963
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser, "ActivateGameOverlayToUser" }, // 3882198438
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage, "ActivateGameOverlayToWebPage" }, // 796235773
		{ &Z_Construct_UFunction_UFriends_ClearRichPresence, "ClearRichPresence" }, // 541667669
		{ &Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam, "CloseClanChatWindowInSteam" }, // 2337808791
		{ &Z_Construct_UFunction_UFriends_DownloadClanActivityCounts, "DownloadClanActivityCounts" }, // 469282192
		{ &Z_Construct_UFunction_UFriends_EnumerateFollowingList, "EnumerateFollowingList" }, // 2435871741
		{ &Z_Construct_UFunction_UFriends_GetChatMemberByIndex, "GetChatMemberByIndex" }, // 3135732132
		{ &Z_Construct_UFunction_UFriends_GetClanActivityCounts, "GetClanActivityCounts" }, // 2665490898
		{ &Z_Construct_UFunction_UFriends_GetClanByIndex, "GetClanByIndex" }, // 3833288449
		{ &Z_Construct_UFunction_UFriends_GetClanChatMemberCount, "GetClanChatMemberCount" }, // 776859666
		{ &Z_Construct_UFunction_UFriends_GetClanChatMessage, "GetClanChatMessage" }, // 3791153987
		{ &Z_Construct_UFunction_UFriends_GetClanCount, "GetClanCount" }, // 323486535
		{ &Z_Construct_UFunction_UFriends_GetClanName, "GetClanName" }, // 3000463125
		{ &Z_Construct_UFunction_UFriends_GetClanOfficerByIndex, "GetClanOfficerByIndex" }, // 3929213098
		{ &Z_Construct_UFunction_UFriends_GetClanOfficerCount, "GetClanOfficerCount" }, // 1809319724
		{ &Z_Construct_UFunction_UFriends_GetClanOwner, "GetClanOwner" }, // 2889376594
		{ &Z_Construct_UFunction_UFriends_GetClanTag, "GetClanTag" }, // 3740623162
		{ &Z_Construct_UFunction_UFriends_GetCoplayFriend, "GetCoplayFriend" }, // 4089551137
		{ &Z_Construct_UFunction_UFriends_GetCoplayFriendCount, "GetCoplayFriendCount" }, // 2607868478
		{ &Z_Construct_UFunction_UFriends_GetFollowerCount, "GetFollowerCount" }, // 650148990
		{ &Z_Construct_UFunction_UFriends_GetFriendByIndex, "GetFriendByIndex" }, // 3404061618
		{ &Z_Construct_UFunction_UFriends_GetFriendCoplayGame, "GetFriendCoplayGame" }, // 3939588376
		{ &Z_Construct_UFunction_UFriends_GetFriendCoplayTime, "GetFriendCoplayTime" }, // 871404549
		{ &Z_Construct_UFunction_UFriends_GetFriendCount, "GetFriendCount" }, // 745497134
		{ &Z_Construct_UFunction_UFriends_GetFriendCountFromSource, "GetFriendCountFromSource" }, // 2718972668
		{ &Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex, "GetFriendFromSourceByIndex" }, // 3355124634
		{ &Z_Construct_UFunction_UFriends_GetFriendGamePlayed, "GetFriendGamePlayed" }, // 2026123077
		{ &Z_Construct_UFunction_UFriends_GetFriendMessage, "GetFriendMessage" }, // 2496712475
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaName, "GetFriendPersonaName" }, // 3687127462
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory, "GetFriendPersonaNameHistory" }, // 1783274117
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaState, "GetFriendPersonaState" }, // 2982178612
		{ &Z_Construct_UFunction_UFriends_GetFriendRelationship, "GetFriendRelationship" }, // 2067986394
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresence, "GetFriendRichPresence" }, // 1687434821
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex, "GetFriendRichPresenceKeyByIndex" }, // 1156018312
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount, "GetFriendRichPresenceKeyCount" }, // 3369532386
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupCount, "GetFriendsGroupCount" }, // 3250817488
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex, "GetFriendsGroupIDByIndex" }, // 2832090522
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount, "GetFriendsGroupMembersCount" }, // 3985790255
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList, "GetFriendsGroupMembersList" }, // 4178483688
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupName, "GetFriendsGroupName" }, // 2919973465
		{ &Z_Construct_UFunction_UFriends_GetFriendSteamLevel, "GetFriendSteamLevel" }, // 3466118579
		{ &Z_Construct_UFunction_UFriends_GetLargeFriendAvatar, "GetLargeFriendAvatar" }, // 3568138446
		{ &Z_Construct_UFunction_UFriends_GetMediumFriendAvatar, "GetMediumFriendAvatar" }, // 2308404223
		{ &Z_Construct_UFunction_UFriends_GetPersonaName, "GetPersonaName" }, // 576368218
		{ &Z_Construct_UFunction_UFriends_GetPersonaName_Pure, "GetPersonaName_Pure" }, // 264504875
		{ &Z_Construct_UFunction_UFriends_GetPersonaState, "GetPersonaState" }, // 682118351
		{ &Z_Construct_UFunction_UFriends_GetPersonaState_Pure, "GetPersonaState_Pure" }, // 694767665
		{ &Z_Construct_UFunction_UFriends_GetPlayerNickname, "GetPlayerNickname" }, // 2226426098
		{ &Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure, "GetPlayerNickname_Pure" }, // 3863549077
		{ &Z_Construct_UFunction_UFriends_GetSmallFriendAvatar, "GetSmallFriendAvatar" }, // 3820339825
		{ &Z_Construct_UFunction_UFriends_GetUserRestrictions, "GetUserRestrictions" }, // 664847103
		{ &Z_Construct_UFunction_UFriends_HasFriend, "HasFriend" }, // 173154341
		{ &Z_Construct_UFunction_UFriends_InviteUserToGame, "InviteUserToGame" }, // 3013018418
		{ &Z_Construct_UFunction_UFriends_IsClanChatAdmin, "IsClanChatAdmin" }, // 3620150399
		{ &Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam, "IsClanChatWindowOpenInSteam" }, // 4237711267
		{ &Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup, "IsClanOfficialGameGroup" }, // 2281553635
		{ &Z_Construct_UFunction_UFriends_IsClanPublic, "IsClanPublic" }, // 691826857
		{ &Z_Construct_UFunction_UFriends_IsFollowing, "IsFollowing" }, // 231773535
		{ &Z_Construct_UFunction_UFriends_IsUserInSource, "IsUserInSource" }, // 758235574
		{ &Z_Construct_UFunction_UFriends_JoinClanChatRoom, "JoinClanChatRoom" }, // 1392137534
		{ &Z_Construct_UFunction_UFriends_LeaveClanChatRoom, "LeaveClanChatRoom" }, // 1743318114
		{ &Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam, "OpenClanChatWindowInSteam" }, // 1244130802
		{ &Z_Construct_UFunction_UFriends_RegisterProtocolInOverlayBrowser, "RegisterProtocolInOverlayBrowser" }, // 4076720939
		{ &Z_Construct_UFunction_UFriends_ReplyToFriendMessage, "ReplyToFriendMessage" }, // 521865924
		{ &Z_Construct_UFunction_UFriends_RequestClanOfficerList, "RequestClanOfficerList" }, // 2154756534
		{ &Z_Construct_UFunction_UFriends_RequestFriendRichPresence, "RequestFriendRichPresence" }, // 4208963949
		{ &Z_Construct_UFunction_UFriends_RequestUserInformation, "RequestUserInformation" }, // 1263445557
		{ &Z_Construct_UFunction_UFriends_SendClanChatMessage, "SendClanChatMessage" }, // 1029648597
		{ &Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 601738140
		{ &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages, "SetListenForFriendsMessages" }, // 3590063069
		{ &Z_Construct_UFunction_UFriends_SetPersonaName, "SetPersonaName" }, // 1155537968
		{ &Z_Construct_UFunction_UFriends_SetPlayedWith, "SetPlayedWith" }, // 312543412
		{ &Z_Construct_UFunction_UFriends_SetRichPresence, "SetRichPresence" }, // 1837644767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Friends.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded = { "AvatarImageLoaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, AvatarImageLoaded), Z_Construct_UDelegateFunction_SteamCore_OnAvatarImageLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate = { "FriendRichPresenceUpdate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, FriendRichPresenceUpdate), Z_Construct_UDelegateFunction_SteamCore_OnFriendRichPresenceUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin = { "GameConnectedChatJoin", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameConnectedChatJoin), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatJoin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave = { "GameConnectedChatLeave", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameConnectedChatLeave), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatLeave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg = { "GameConnectedClanChatMsg", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameConnectedClanChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedClanChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg = { "GameConnectedFriendChatMsg", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameConnectedFriendChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedFriendChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested = { "GameLobbyJoinRequested", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameLobbyJoinRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameLobbyJoinRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated = { "GameOverlayActivated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameOverlayActivated), Z_Construct_UDelegateFunction_SteamCore_OnGameOverlayActivated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested = { "GameRichPresenceJoinRequested", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameRichPresenceJoinRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameRichPresenceJoinRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested = { "GameServerChangeRequested", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameServerChangeRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameServerChangeRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange = { "PersonaStateChange", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, PersonaStateChange), Z_Construct_UDelegateFunction_SteamCore_OnPersonaStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse = { "SetPersonaNameResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, SetPersonaNameResponse), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult = { "JoinClanChatRoomCompletionResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, JoinClanChatRoomCompletionResult), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomCompletionResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse = { "ClanOfficerListResponse", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, ClanOfficerListResponse), Z_Construct_UDelegateFunction_SteamCore_OnClanOfficerListResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Friends" },
		{ "ModuleRelativePath", "Public/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult = { "DownloadClanActivityCountsResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, DownloadClanActivityCountsResult), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriends>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriends_Statics::ClassParams = {
		&UFriends::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFriends_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriends()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriends_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriends, 2351492435);
	template<> STEAMCORE_API UClass* StaticClass<UFriends>()
	{
		return UFriends::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriends(Z_Construct_UClass_UFriends, &UFriends::StaticClass, TEXT("/Script/SteamCore"), TEXT("UFriends"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriends);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
