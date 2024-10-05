// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
enum class ESteamOverlayToStoreFlag : uint8;
enum class ESteamActivateGameOverlayToWebPageMode : uint8;
enum class ESteamChatEntryType : uint8;
enum class ESteamFriendFlags : uint8;
struct FSteamGameID;
enum class ESteamPersonaState : uint8;
enum class ESteamFriendRelationship : uint8;
struct FSteamFriendsGroupID;
class UTexture2D;
enum class ESteamUserRestriction : uint8;
#ifdef STEAMCORE_Friends_generated_h
#error "Friends.generated.h already included, missing '#pragma once' in Friends.h"
#endif
#define STEAMCORE_Friends_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateGameOverlay); \
	DECLARE_FUNCTION(execActivateGameOverlayInvitedialog); \
	DECLARE_FUNCTION(execActivateGameOverlayInviteDialogConnectString); \
	DECLARE_FUNCTION(execActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execClearRichPresence); \
	DECLARE_FUNCTION(execCloseClanChatWindowInSteam); \
	DECLARE_FUNCTION(execDownloadClanActivityCounts); \
	DECLARE_FUNCTION(execEnumerateFollowingList); \
	DECLARE_FUNCTION(execGetChatMemberByIndex); \
	DECLARE_FUNCTION(execGetClanActivityCounts); \
	DECLARE_FUNCTION(execGetClanByIndex); \
	DECLARE_FUNCTION(execGetClanChatMemberCount); \
	DECLARE_FUNCTION(execGetClanChatMessage); \
	DECLARE_FUNCTION(execGetClanCount); \
	DECLARE_FUNCTION(execGetClanName); \
	DECLARE_FUNCTION(execGetClanOfficerByIndex); \
	DECLARE_FUNCTION(execGetClanOfficerCount); \
	DECLARE_FUNCTION(execGetClanOwner); \
	DECLARE_FUNCTION(execGetClanTag); \
	DECLARE_FUNCTION(execGetCoplayFriend); \
	DECLARE_FUNCTION(execGetCoplayFriendCount); \
	DECLARE_FUNCTION(execGetFollowerCount); \
	DECLARE_FUNCTION(execGetFriendByIndex); \
	DECLARE_FUNCTION(execGetFriendCoplayGame); \
	DECLARE_FUNCTION(execGetFriendCoplayTime); \
	DECLARE_FUNCTION(execGetFriendCount); \
	DECLARE_FUNCTION(execGetFriendCountFromSource); \
	DECLARE_FUNCTION(execGetFriendFromSourceByIndex); \
	DECLARE_FUNCTION(execGetFriendGamePlayed); \
	DECLARE_FUNCTION(execGetFriendMessage); \
	DECLARE_FUNCTION(execGetFriendPersonaName); \
	DECLARE_FUNCTION(execGetFriendPersonaNameHistory); \
	DECLARE_FUNCTION(execGetFriendPersonaState); \
	DECLARE_FUNCTION(execGetFriendRelationship); \
	DECLARE_FUNCTION(execGetFriendRichPresence); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyByIndex); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyCount); \
	DECLARE_FUNCTION(execGetFriendsGroupCount); \
	DECLARE_FUNCTION(execGetFriendsGroupIDByIndex); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersCount); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersList); \
	DECLARE_FUNCTION(execGetFriendsGroupName); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execGetLargeFriendAvatar); \
	DECLARE_FUNCTION(execGetMediumFriendAvatar); \
	DECLARE_FUNCTION(execGetPersonaName); \
	DECLARE_FUNCTION(execGetPersonaName_Pure); \
	DECLARE_FUNCTION(execGetPersonaState); \
	DECLARE_FUNCTION(execGetPersonaState_Pure); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execGetPlayerNickname_Pure); \
	DECLARE_FUNCTION(execGetSmallFriendAvatar); \
	DECLARE_FUNCTION(execGetUserRestrictions); \
	DECLARE_FUNCTION(execHasFriend); \
	DECLARE_FUNCTION(execInviteUserToGame); \
	DECLARE_FUNCTION(execIsClanChatAdmin); \
	DECLARE_FUNCTION(execIsClanChatWindowOpenInSteam); \
	DECLARE_FUNCTION(execIsClanOfficialGameGroup); \
	DECLARE_FUNCTION(execIsClanPublic); \
	DECLARE_FUNCTION(execIsFollowing); \
	DECLARE_FUNCTION(execIsUserInSource); \
	DECLARE_FUNCTION(execJoinClanChatRoom); \
	DECLARE_FUNCTION(execLeaveClanChatRoom); \
	DECLARE_FUNCTION(execOpenClanChatWindowInSteam); \
	DECLARE_FUNCTION(execRegisterProtocolInOverlayBrowser); \
	DECLARE_FUNCTION(execReplyToFriendMessage); \
	DECLARE_FUNCTION(execRequestClanOfficerList); \
	DECLARE_FUNCTION(execRequestFriendRichPresence); \
	DECLARE_FUNCTION(execRequestUserInformation); \
	DECLARE_FUNCTION(execSendClanChatMessage); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execSetListenForFriendsMessages); \
	DECLARE_FUNCTION(execSetPersonaName); \
	DECLARE_FUNCTION(execSetPlayedWith); \
	DECLARE_FUNCTION(execSetRichPresence);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateGameOverlay); \
	DECLARE_FUNCTION(execActivateGameOverlayInvitedialog); \
	DECLARE_FUNCTION(execActivateGameOverlayInviteDialogConnectString); \
	DECLARE_FUNCTION(execActivateGameOverlayToStore); \
	DECLARE_FUNCTION(execActivateGameOverlayToUser); \
	DECLARE_FUNCTION(execActivateGameOverlayToWebPage); \
	DECLARE_FUNCTION(execClearRichPresence); \
	DECLARE_FUNCTION(execCloseClanChatWindowInSteam); \
	DECLARE_FUNCTION(execDownloadClanActivityCounts); \
	DECLARE_FUNCTION(execEnumerateFollowingList); \
	DECLARE_FUNCTION(execGetChatMemberByIndex); \
	DECLARE_FUNCTION(execGetClanActivityCounts); \
	DECLARE_FUNCTION(execGetClanByIndex); \
	DECLARE_FUNCTION(execGetClanChatMemberCount); \
	DECLARE_FUNCTION(execGetClanChatMessage); \
	DECLARE_FUNCTION(execGetClanCount); \
	DECLARE_FUNCTION(execGetClanName); \
	DECLARE_FUNCTION(execGetClanOfficerByIndex); \
	DECLARE_FUNCTION(execGetClanOfficerCount); \
	DECLARE_FUNCTION(execGetClanOwner); \
	DECLARE_FUNCTION(execGetClanTag); \
	DECLARE_FUNCTION(execGetCoplayFriend); \
	DECLARE_FUNCTION(execGetCoplayFriendCount); \
	DECLARE_FUNCTION(execGetFollowerCount); \
	DECLARE_FUNCTION(execGetFriendByIndex); \
	DECLARE_FUNCTION(execGetFriendCoplayGame); \
	DECLARE_FUNCTION(execGetFriendCoplayTime); \
	DECLARE_FUNCTION(execGetFriendCount); \
	DECLARE_FUNCTION(execGetFriendCountFromSource); \
	DECLARE_FUNCTION(execGetFriendFromSourceByIndex); \
	DECLARE_FUNCTION(execGetFriendGamePlayed); \
	DECLARE_FUNCTION(execGetFriendMessage); \
	DECLARE_FUNCTION(execGetFriendPersonaName); \
	DECLARE_FUNCTION(execGetFriendPersonaNameHistory); \
	DECLARE_FUNCTION(execGetFriendPersonaState); \
	DECLARE_FUNCTION(execGetFriendRelationship); \
	DECLARE_FUNCTION(execGetFriendRichPresence); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyByIndex); \
	DECLARE_FUNCTION(execGetFriendRichPresenceKeyCount); \
	DECLARE_FUNCTION(execGetFriendsGroupCount); \
	DECLARE_FUNCTION(execGetFriendsGroupIDByIndex); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersCount); \
	DECLARE_FUNCTION(execGetFriendsGroupMembersList); \
	DECLARE_FUNCTION(execGetFriendsGroupName); \
	DECLARE_FUNCTION(execGetFriendSteamLevel); \
	DECLARE_FUNCTION(execGetLargeFriendAvatar); \
	DECLARE_FUNCTION(execGetMediumFriendAvatar); \
	DECLARE_FUNCTION(execGetPersonaName); \
	DECLARE_FUNCTION(execGetPersonaName_Pure); \
	DECLARE_FUNCTION(execGetPersonaState); \
	DECLARE_FUNCTION(execGetPersonaState_Pure); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execGetPlayerNickname_Pure); \
	DECLARE_FUNCTION(execGetSmallFriendAvatar); \
	DECLARE_FUNCTION(execGetUserRestrictions); \
	DECLARE_FUNCTION(execHasFriend); \
	DECLARE_FUNCTION(execInviteUserToGame); \
	DECLARE_FUNCTION(execIsClanChatAdmin); \
	DECLARE_FUNCTION(execIsClanChatWindowOpenInSteam); \
	DECLARE_FUNCTION(execIsClanOfficialGameGroup); \
	DECLARE_FUNCTION(execIsClanPublic); \
	DECLARE_FUNCTION(execIsFollowing); \
	DECLARE_FUNCTION(execIsUserInSource); \
	DECLARE_FUNCTION(execJoinClanChatRoom); \
	DECLARE_FUNCTION(execLeaveClanChatRoom); \
	DECLARE_FUNCTION(execOpenClanChatWindowInSteam); \
	DECLARE_FUNCTION(execRegisterProtocolInOverlayBrowser); \
	DECLARE_FUNCTION(execReplyToFriendMessage); \
	DECLARE_FUNCTION(execRequestClanOfficerList); \
	DECLARE_FUNCTION(execRequestFriendRichPresence); \
	DECLARE_FUNCTION(execRequestUserInformation); \
	DECLARE_FUNCTION(execSendClanChatMessage); \
	DECLARE_FUNCTION(execSetInGameVoiceSpeaking); \
	DECLARE_FUNCTION(execSetListenForFriendsMessages); \
	DECLARE_FUNCTION(execSetPersonaName); \
	DECLARE_FUNCTION(execSetPlayedWith); \
	DECLARE_FUNCTION(execSetRichPresence);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFriends(); \
	friend struct Z_Construct_UClass_UFriends_Statics; \
public: \
	DECLARE_CLASS(UFriends, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UFriends)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUFriends(); \
	friend struct Z_Construct_UClass_UFriends_Statics; \
public: \
	DECLARE_CLASS(UFriends, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UFriends)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFriends(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFriends) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFriends); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFriends); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFriends(UFriends&&); \
	NO_API UFriends(const UFriends&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFriends(UFriends&&); \
	NO_API UFriends(const UFriends&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFriends); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFriends); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFriends)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_40_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UFriends>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Friends_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
