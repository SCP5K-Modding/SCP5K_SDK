// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordLobbyManager;
class UConnectLobbyProxy;
enum class EDiscordResult : uint8;
struct FDiscordLobby;
#ifdef DISCORDLOBBY_ConnectLobbyProxy_generated_h
#error "ConnectLobbyProxy.generated.h already included, missing '#pragma once' in ConnectLobbyProxy.h"
#endif
#define DISCORDLOBBY_ConnectLobbyProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnectLobby); \
	DECLARE_FUNCTION(execOnResult);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnectLobby); \
	DECLARE_FUNCTION(execOnResult);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConnectLobbyProxy(); \
	friend struct Z_Construct_UClass_UConnectLobbyProxy_Statics; \
public: \
	DECLARE_CLASS(UConnectLobbyProxy, UBaseLobbyAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(UConnectLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUConnectLobbyProxy(); \
	friend struct Z_Construct_UClass_UConnectLobbyProxy_Statics; \
public: \
	DECLARE_CLASS(UConnectLobbyProxy, UBaseLobbyAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(UConnectLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConnectLobbyProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectLobbyProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnectLobbyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectLobbyProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConnectLobbyProxy(UConnectLobbyProxy&&); \
	NO_API UConnectLobbyProxy(const UConnectLobbyProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConnectLobbyProxy(UConnectLobbyProxy&&); \
	NO_API UConnectLobbyProxy(const UConnectLobbyProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnectLobbyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectLobbyProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConnectLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDLOBBY_API UClass* StaticClass<class UConnectLobbyProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_ConnectLobbyProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
