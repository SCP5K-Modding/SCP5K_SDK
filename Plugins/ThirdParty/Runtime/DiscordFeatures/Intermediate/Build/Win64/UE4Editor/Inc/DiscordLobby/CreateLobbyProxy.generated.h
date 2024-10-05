// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordLobbyManager;
struct FDiscordLobbyTransaction;
class UCreateLobbyProxy;
enum class EDiscordResult : uint8;
struct FDiscordLobby;
#ifdef DISCORDLOBBY_CreateLobbyProxy_generated_h
#error "CreateLobbyProxy.generated.h already included, missing '#pragma once' in CreateLobbyProxy.h"
#endif
#define DISCORDLOBBY_CreateLobbyProxy_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateLobby); \
	DECLARE_FUNCTION(execOnResult);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateLobby); \
	DECLARE_FUNCTION(execOnResult);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateLobbyProxy(); \
	friend struct Z_Construct_UClass_UCreateLobbyProxy_Statics; \
public: \
	DECLARE_CLASS(UCreateLobbyProxy, UBaseLobbyAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(UCreateLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCreateLobbyProxy(); \
	friend struct Z_Construct_UClass_UCreateLobbyProxy_Statics; \
public: \
	DECLARE_CLASS(UCreateLobbyProxy, UBaseLobbyAsyncProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordLobby"), NO_API) \
	DECLARE_SERIALIZER(UCreateLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateLobbyProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateLobbyProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateLobbyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateLobbyProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateLobbyProxy(UCreateLobbyProxy&&); \
	NO_API UCreateLobbyProxy(const UCreateLobbyProxy&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateLobbyProxy(UCreateLobbyProxy&&); \
	NO_API UCreateLobbyProxy(const UCreateLobbyProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateLobbyProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateLobbyProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCreateLobbyProxy)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_13_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDLOBBY_API UClass* StaticClass<class UCreateLobbyProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordLobby_Public_CreateLobbyProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
