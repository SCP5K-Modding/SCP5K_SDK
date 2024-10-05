// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordLobby;
struct FDiscordLobbyTransaction;
class UDiscordCore;
class UDiscordLobbyManager;
struct FDiscordLobbyMemberTransaction;
struct FDiscordUser;
struct FDiscordLobbySearchQuery;
#ifdef DISCORDLOBBY_DiscordLobbyManager_generated_h
#error "DiscordLobbyManager.generated.h already included, missing '#pragma once' in DiscordLobbyManager.h"
#endif
#define DISCORDLOBBY_DiscordLobbyManager_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnectNetwork); \
	DECLARE_FUNCTION(execDisconnectNetwork); \
	DECLARE_FUNCTION(execFlushNetwork); \
	DECLARE_FUNCTION(execGetLobby); \
	DECLARE_FUNCTION(execGetLobbyActivitySecret); \
	DECLARE_FUNCTION(execGetLobbyCreateTransaction); \
	DECLARE_FUNCTION(execGetLobbyId); \
	DECLARE_FUNCTION(execGetLobbyManager); \
	DECLARE_FUNCTION(execGetLobbyMetadataKey); \
	DECLARE_FUNCTION(execGetLobbyMetadataValue); \
	DECLARE_FUNCTION(execGetLobbyUpdateTransaction); \
	DECLARE_FUNCTION(execGetMemberMetadataKey); \
	DECLARE_FUNCTION(execGetMemberMetadataValue); \
	DECLARE_FUNCTION(execGetMemberUpdateTransaction); \
	DECLARE_FUNCTION(execGetMemberUser); \
	DECLARE_FUNCTION(execGetMemberUserId); \
	DECLARE_FUNCTION(execGetSearchQuery); \
	DECLARE_FUNCTION(execLobbyCount); \
	DECLARE_FUNCTION(execLobbyMetadataCount); \
	DECLARE_FUNCTION(execMemberCount); \
	DECLARE_FUNCTION(execMemberMetadataCount); \
	DECLARE_FUNCTION(execOpenNetworkChannel); \
	DECLARE_FUNCTION(execSendNetworkMessage);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnectNetwork); \
	DECLARE_FUNCTION(execDisconnectNetwork); \
	DECLARE_FUNCTION(execFlushNetwork); \
	DECLARE_FUNCTION(execGetLobby); \
	DECLARE_FUNCTION(execGetLobbyActivitySecret); \
	DECLARE_FUNCTION(execGetLobbyCreateTransaction); \
	DECLARE_FUNCTION(execGetLobbyId); \
	DECLARE_FUNCTION(execGetLobbyManager); \
	DECLARE_FUNCTION(execGetLobbyMetadataKey); \
	DECLARE_FUNCTION(execGetLobbyMetadataValue); \
	DECLARE_FUNCTION(execGetLobbyUpdateTransaction); \
	DECLARE_FUNCTION(execGetMemberMetadataKey); \
	DECLARE_FUNCTION(execGetMemberMetadataValue); \
	DECLARE_FUNCTION(execGetMemberUpdateTransaction); \
	DECLARE_FUNCTION(execGetMemberUser); \
	DECLARE_FUNCTION(execGetMemberUserId); \
	DECLARE_FUNCTION(execGetSearchQuery); \
	DECLARE_FUNCTION(execLobbyCount); \
	DECLARE_FUNCTION(execLobbyMetadataCount); \
	DECLARE_FUNCTION(execMemberCount); \
	DECLARE_FUNCTION(execMemberMetadataCount); \
	DECLARE_FUNCTION(execOpenNetworkChannel); \
	DECLARE_FUNCTION(execSendNetworkMessage);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordLobbyManager(); \
	friend struct Z_Construct_UClass_UDiscordLobbyManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordLobbyManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(UDiscordLobbyManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordLobbyManager(); \
	friend struct Z_Construct_UClass_UDiscordLobbyManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordLobbyManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(UDiscordLobbyManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordLobbyManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordLobbyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordLobbyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordLobbyManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordLobbyManager(UDiscordLobbyManager&&); \
	NO_API UDiscordLobbyManager(const UDiscordLobbyManager&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordLobbyManager(UDiscordLobbyManager&&); \
	NO_API UDiscordLobbyManager(const UDiscordLobbyManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordLobbyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordLobbyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordLobbyManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_20_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDLOBBY_API UClass* StaticClass<class UDiscordLobbyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_DiscordLobbyManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
