// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordInputMode;
class UDiscordCore;
class UDiscordVoiceManager;
#ifdef DISCORDVOICE_DiscordVoiceManager_generated_h
#error "DiscordVoiceManager.generated.h already included, missing '#pragma once' in DiscordVoiceManager.h"
#endif
#define DISCORDVOICE_DiscordVoiceManager_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputMode); \
	DECLARE_FUNCTION(execGetLocalVolume); \
	DECLARE_FUNCTION(execGetVoiceManager); \
	DECLARE_FUNCTION(execIsLocalMute); \
	DECLARE_FUNCTION(execIsSelfDeaf); \
	DECLARE_FUNCTION(execIsSelfMute); \
	DECLARE_FUNCTION(execOnVoiceSettingsUpdateInternal); \
	DECLARE_FUNCTION(execSetLocalMute); \
	DECLARE_FUNCTION(execSetLocalVolume); \
	DECLARE_FUNCTION(execSetSelfDeaf); \
	DECLARE_FUNCTION(execSetSelfMute);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputMode); \
	DECLARE_FUNCTION(execGetLocalVolume); \
	DECLARE_FUNCTION(execGetVoiceManager); \
	DECLARE_FUNCTION(execIsLocalMute); \
	DECLARE_FUNCTION(execIsSelfDeaf); \
	DECLARE_FUNCTION(execIsSelfMute); \
	DECLARE_FUNCTION(execOnVoiceSettingsUpdateInternal); \
	DECLARE_FUNCTION(execSetLocalMute); \
	DECLARE_FUNCTION(execSetLocalVolume); \
	DECLARE_FUNCTION(execSetSelfDeaf); \
	DECLARE_FUNCTION(execSetSelfMute);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordVoiceManager(); \
	friend struct Z_Construct_UClass_UDiscordVoiceManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordVoiceManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordVoice"), NO_API) \
	DECLARE_SERIALIZER(UDiscordVoiceManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordVoiceManager(); \
	friend struct Z_Construct_UClass_UDiscordVoiceManager_Statics; \
public: \
	DECLARE_CLASS(UDiscordVoiceManager, UDiscordManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordVoice"), NO_API) \
	DECLARE_SERIALIZER(UDiscordVoiceManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordVoiceManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordVoiceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordVoiceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordVoiceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordVoiceManager(UDiscordVoiceManager&&); \
	NO_API UDiscordVoiceManager(const UDiscordVoiceManager&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordVoiceManager(UDiscordVoiceManager&&); \
	NO_API UDiscordVoiceManager(const UDiscordVoiceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordVoiceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordVoiceManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordVoiceManager)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_11_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDVOICE_API UClass* StaticClass<class UDiscordVoiceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordVoice_Public_DiscordVoiceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
