// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordCore;
class UDiscordActivityManager;
#ifdef DISCORDACTIVITY_DiscordActivityManager_generated_h
#error "DiscordActivityManager.generated.h already included, missing '#pragma once' in DiscordActivityManager.h"
#endif
#define DISCORDACTIVITY_DiscordActivityManager_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActivityManager); \
	DECLARE_FUNCTION(execRegisterCommand); \
	DECLARE_FUNCTION(execRegisterSteam);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActivityManager); \
	DECLARE_FUNCTION(execRegisterCommand); \
	DECLARE_FUNCTION(execRegisterSteam);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordActivityManager(); \
	friend struct Z_Construct_UClass_UDiscordActivityManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordActivityManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(UDiscordActivityManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordActivityManager(); \
	friend struct Z_Construct_UClass_UDiscordActivityManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordActivityManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordActivity"), NO_API) \
	DECLARE_SERIALIZER(UDiscordActivityManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordActivityManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordActivityManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordActivityManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordActivityManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordActivityManager(UDiscordActivityManager&&); \
	NO_API UDiscordActivityManager(const UDiscordActivityManager&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordActivityManager(UDiscordActivityManager&&); \
	NO_API UDiscordActivityManager(const UDiscordActivityManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordActivityManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordActivityManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordActivityManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_13_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDACTIVITY_API UClass* StaticClass<class UDiscordActivityManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordActivity_Public_DiscordActivityManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
