// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamFavoriteFlags : uint8;
struct FSteamID;
enum class ESteamLobbyDistanceFilter : uint8;
enum class ESteamLobbyComparison : uint8;
enum class ESteamLobbyType : uint8;
enum class ESteamChatEntryType : uint8;
#ifdef STEAMCORE_Matchmaking_generated_h
#error "Matchmaking.generated.h already included, missing '#pragma once' in Matchmaking.h"
#endif
#define STEAMCORE_Matchmaking_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddFavoriteGame); \
	DECLARE_FUNCTION(execAddRequestLobbyListCompatibleMembersFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListDistanceFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListFilterSlotsAvailable); \
	DECLARE_FUNCTION(execAddRequestLobbyListNearValueFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNumericalFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListResultCountFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListStringFilter); \
	DECLARE_FUNCTION(execCreateLobby); \
	DECLARE_FUNCTION(execDeleteLobbyData); \
	DECLARE_FUNCTION(execGetFavoriteGame); \
	DECLARE_FUNCTION(execGetFavoriteGameCount); \
	DECLARE_FUNCTION(execGetLobbyByIndex); \
	DECLARE_FUNCTION(execGetLobbyChatEntry); \
	DECLARE_FUNCTION(execGetLobbyData); \
	DECLARE_FUNCTION(execGetLobbyDataByIndex); \
	DECLARE_FUNCTION(execGetLobbyDataCount); \
	DECLARE_FUNCTION(execGetLobbyGameServer); \
	DECLARE_FUNCTION(execGetLobbyMemberByIndex); \
	DECLARE_FUNCTION(execGetLobbyMemberData); \
	DECLARE_FUNCTION(execGetLobbyMemberLimit); \
	DECLARE_FUNCTION(execGetLobbyOwner); \
	DECLARE_FUNCTION(execGetNumLobbyMembers); \
	DECLARE_FUNCTION(execInviteUserToLobby); \
	DECLARE_FUNCTION(execJoinLobby); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execRemoveFavoriteGame); \
	DECLARE_FUNCTION(execRequestLobbyData); \
	DECLARE_FUNCTION(execRequestLobbyList); \
	DECLARE_FUNCTION(execSendLobbyChatMsg); \
	DECLARE_FUNCTION(execSetLinkedLobby); \
	DECLARE_FUNCTION(execSetLobbyData); \
	DECLARE_FUNCTION(execSetLobbyGameServer); \
	DECLARE_FUNCTION(execSetLobbyJoinable); \
	DECLARE_FUNCTION(execSetLobbyMemberData); \
	DECLARE_FUNCTION(execSetLobbyMemberLimit); \
	DECLARE_FUNCTION(execSetLobbyOwner); \
	DECLARE_FUNCTION(execSetLobbyType);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddFavoriteGame); \
	DECLARE_FUNCTION(execAddRequestLobbyListCompatibleMembersFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListDistanceFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListFilterSlotsAvailable); \
	DECLARE_FUNCTION(execAddRequestLobbyListNearValueFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListNumericalFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListResultCountFilter); \
	DECLARE_FUNCTION(execAddRequestLobbyListStringFilter); \
	DECLARE_FUNCTION(execCreateLobby); \
	DECLARE_FUNCTION(execDeleteLobbyData); \
	DECLARE_FUNCTION(execGetFavoriteGame); \
	DECLARE_FUNCTION(execGetFavoriteGameCount); \
	DECLARE_FUNCTION(execGetLobbyByIndex); \
	DECLARE_FUNCTION(execGetLobbyChatEntry); \
	DECLARE_FUNCTION(execGetLobbyData); \
	DECLARE_FUNCTION(execGetLobbyDataByIndex); \
	DECLARE_FUNCTION(execGetLobbyDataCount); \
	DECLARE_FUNCTION(execGetLobbyGameServer); \
	DECLARE_FUNCTION(execGetLobbyMemberByIndex); \
	DECLARE_FUNCTION(execGetLobbyMemberData); \
	DECLARE_FUNCTION(execGetLobbyMemberLimit); \
	DECLARE_FUNCTION(execGetLobbyOwner); \
	DECLARE_FUNCTION(execGetNumLobbyMembers); \
	DECLARE_FUNCTION(execInviteUserToLobby); \
	DECLARE_FUNCTION(execJoinLobby); \
	DECLARE_FUNCTION(execLeaveLobby); \
	DECLARE_FUNCTION(execRemoveFavoriteGame); \
	DECLARE_FUNCTION(execRequestLobbyData); \
	DECLARE_FUNCTION(execRequestLobbyList); \
	DECLARE_FUNCTION(execSendLobbyChatMsg); \
	DECLARE_FUNCTION(execSetLinkedLobby); \
	DECLARE_FUNCTION(execSetLobbyData); \
	DECLARE_FUNCTION(execSetLobbyGameServer); \
	DECLARE_FUNCTION(execSetLobbyJoinable); \
	DECLARE_FUNCTION(execSetLobbyMemberData); \
	DECLARE_FUNCTION(execSetLobbyMemberLimit); \
	DECLARE_FUNCTION(execSetLobbyOwner); \
	DECLARE_FUNCTION(execSetLobbyType);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatchmaking(); \
	friend struct Z_Construct_UClass_UMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UMatchmaking, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UMatchmaking)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMatchmaking(); \
	friend struct Z_Construct_UClass_UMatchmaking_Statics; \
public: \
	DECLARE_CLASS(UMatchmaking, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UMatchmaking)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatchmaking(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatchmaking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchmaking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatchmaking(UMatchmaking&&); \
	NO_API UMatchmaking(const UMatchmaking&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatchmaking(UMatchmaking&&); \
	NO_API UMatchmaking(const UMatchmaking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatchmaking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchmaking); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMatchmaking)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_24_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UMatchmaking>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Matchmaking_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
