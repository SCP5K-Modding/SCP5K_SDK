// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
class UDiscordLobbyManager;
class USendLobbyMessageProxy;
#ifdef DISCORDLOBBY_SendLobbyMessageProxy_generated_h
#error "SendLobbyMessageProxy.generated.h already included, missing '#pragma once' in SendLobbyMessageProxy.h"
#endif
#define DISCORDLOBBY_SendLobbyMessageProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnResult); \
	DECLARE_FUNCTION(execSendLobbyMessage);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnResult); \
	DECLARE_FUNCTION(execSendLobbyMessage);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSendLobbyMessageProxy(); \
	friend struct Z_Construct_UClass_USendLobbyMessageProxy_Statics; \
public: \
	DECLARE_CLASS(USendLobbyMessageProxy, UBaseLobbyAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(USendLobbyMessageProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSendLobbyMessageProxy(); \
	friend struct Z_Construct_UClass_USendLobbyMessageProxy_Statics; \
public: \
	DECLARE_CLASS(USendLobbyMessageProxy, UBaseLobbyAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(USendLobbyMessageProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendLobbyMessageProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendLobbyMessageProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendLobbyMessageProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendLobbyMessageProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendLobbyMessageProxy(USendLobbyMessageProxy&&); \
	NO_API USendLobbyMessageProxy(const USendLobbyMessageProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendLobbyMessageProxy(USendLobbyMessageProxy&&); \
	NO_API USendLobbyMessageProxy(const USendLobbyMessageProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendLobbyMessageProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendLobbyMessageProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USendLobbyMessageProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_11_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDLOBBY_API UClass* StaticClass<class USendLobbyMessageProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SendLobbyMessageProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
