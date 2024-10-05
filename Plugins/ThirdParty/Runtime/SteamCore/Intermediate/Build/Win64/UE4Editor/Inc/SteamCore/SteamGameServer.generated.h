// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
enum class ESteamBeginAuthSessionResult : uint8;
struct FSteamTicketHandle;
enum class ESteamUserHasLicenseForAppResult : uint8;
#ifdef STEAMCORE_SteamGameServer_generated_h
#error "SteamGameServer.generated.h already included, missing '#pragma once' in SteamGameServer.h"
#endif
#define STEAMCORE_SteamGameServer_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssociateWithClan); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBSecure); \
	DECLARE_FUNCTION(execBUpdateUserData); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execComputeNewPlayerCompatibility); \
	DECLARE_FUNCTION(execCreateUnauthenticatedUserConnection); \
	DECLARE_FUNCTION(execEnableHeartbeats); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execForceHeartbeat); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execGetServerPublicIP); \
	DECLARE_FUNCTION(execGetServerPublicIP_Pure); \
	DECLARE_FUNCTION(execGetServerPublicIP_PureCompact); \
	DECLARE_FUNCTION(execGetServerSteamID); \
	DECLARE_FUNCTION(execGetServerSteamID_Pure); \
	DECLARE_FUNCTION(execGetServerSteamID_PureCompact); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetHeartbeatInterval); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execWasRestartRequested);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssociateWithClan); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBSecure); \
	DECLARE_FUNCTION(execBUpdateUserData); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execClearAllKeyValues); \
	DECLARE_FUNCTION(execComputeNewPlayerCompatibility); \
	DECLARE_FUNCTION(execCreateUnauthenticatedUserConnection); \
	DECLARE_FUNCTION(execEnableHeartbeats); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execForceHeartbeat); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execGetServerPublicIP); \
	DECLARE_FUNCTION(execGetServerPublicIP_Pure); \
	DECLARE_FUNCTION(execGetServerPublicIP_PureCompact); \
	DECLARE_FUNCTION(execGetServerSteamID); \
	DECLARE_FUNCTION(execGetServerSteamID_Pure); \
	DECLARE_FUNCTION(execGetServerSteamID_PureCompact); \
	DECLARE_FUNCTION(execLogOff); \
	DECLARE_FUNCTION(execLogOn); \
	DECLARE_FUNCTION(execLogOnAnonymous); \
	DECLARE_FUNCTION(execRequestUserGroupStatus); \
	DECLARE_FUNCTION(execSetBotPlayerCount); \
	DECLARE_FUNCTION(execSetDedicatedServer); \
	DECLARE_FUNCTION(execSetGameData); \
	DECLARE_FUNCTION(execSetGameDescription); \
	DECLARE_FUNCTION(execSetGameTags); \
	DECLARE_FUNCTION(execSetHeartbeatInterval); \
	DECLARE_FUNCTION(execSetKeyValue); \
	DECLARE_FUNCTION(execSetMapName); \
	DECLARE_FUNCTION(execSetMaxPlayerCount); \
	DECLARE_FUNCTION(execSetModDir); \
	DECLARE_FUNCTION(execSetPasswordProtected); \
	DECLARE_FUNCTION(execSetProduct); \
	DECLARE_FUNCTION(execSetRegion); \
	DECLARE_FUNCTION(execSetServerName); \
	DECLARE_FUNCTION(execSetSpectatorPort); \
	DECLARE_FUNCTION(execSetSpectatorServerName); \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execWasRestartRequested);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamGameServer(); \
	friend struct Z_Construct_UClass_USteamGameServer_Statics; \
public: \
	DECLARE_CLASS(USteamGameServer, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamGameServer)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSteamGameServer(); \
	friend struct Z_Construct_UClass_USteamGameServer_Statics; \
public: \
	DECLARE_CLASS(USteamGameServer, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamGameServer)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamGameServer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamGameServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamGameServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamGameServer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamGameServer(USteamGameServer&&); \
	NO_API USteamGameServer(const USteamGameServer&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamGameServer(USteamGameServer&&); \
	NO_API USteamGameServer(const USteamGameServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamGameServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamGameServer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamGameServer)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_17_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamGameServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamGameServer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
