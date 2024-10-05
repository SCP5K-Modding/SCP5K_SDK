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
struct FDiscordLobbySearchQuery;
class USearchLobbyProxy;
#ifdef DISCORDLOBBY_SearchLobbyProxy_generated_h
#error "SearchLobbyProxy.generated.h already included, missing '#pragma once' in SearchLobbyProxy.h"
#endif
#define DISCORDLOBBY_SearchLobbyProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnResult); \
	DECLARE_FUNCTION(execSearch);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnResult); \
	DECLARE_FUNCTION(execSearch);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSearchLobbyProxy(); \
	friend struct Z_Construct_UClass_USearchLobbyProxy_Statics; \
public: \
	DECLARE_CLASS(USearchLobbyProxy, UBaseLobbyAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(USearchLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSearchLobbyProxy(); \
	friend struct Z_Construct_UClass_USearchLobbyProxy_Statics; \
public: \
	DECLARE_CLASS(USearchLobbyProxy, UBaseLobbyAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(USearchLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USearchLobbyProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USearchLobbyProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USearchLobbyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USearchLobbyProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USearchLobbyProxy(USearchLobbyProxy&&); \
	NO_API USearchLobbyProxy(const USearchLobbyProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USearchLobbyProxy(USearchLobbyProxy&&); \
	NO_API USearchLobbyProxy(const USearchLobbyProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USearchLobbyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USearchLobbyProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USearchLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDLOBBY_API UClass* StaticClass<class USearchLobbyProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_SearchLobbyProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
