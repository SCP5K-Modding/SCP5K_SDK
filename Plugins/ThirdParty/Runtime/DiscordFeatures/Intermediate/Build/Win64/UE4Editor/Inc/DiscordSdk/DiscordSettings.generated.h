// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDSDK_DiscordSettings_generated_h
#error "DiscordSettings.generated.h already included, missing '#pragma once' in DiscordSettings.h"
#endif
#define DISCORDSDK_DiscordSettings_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToString);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToString);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordSettings(); \
	friend struct Z_Construct_UClass_UDiscordSettings_Statics; \
public: \
	DECLARE_CLASS(UDiscordSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DiscordSdk"), NO_API) \
	DECLARE_SERIALIZER(UDiscordSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordSettings(); \
	friend struct Z_Construct_UClass_UDiscordSettings_Statics; \
public: \
	DECLARE_CLASS(UDiscordSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DiscordSdk"), NO_API) \
	DECLARE_SERIALIZER(UDiscordSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordSettings(UDiscordSettings&&); \
	NO_API UDiscordSettings(const UDiscordSettings&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordSettings(UDiscordSettings&&); \
	NO_API UDiscordSettings(const UDiscordSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiscordSettings)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DiscordSdkVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordSdkVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordApplicationManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordApplicationManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordUserManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordUserManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordImageManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordImageManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordActivityManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordActivityManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordRelationShipManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordRelationShipManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordLobbyManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordLobbyManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordNetworkManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordNetworkManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordOverlayManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordOverlayManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordStorageManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordStorageManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordStoreManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordStoreManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordVoiceManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordVoiceManagerVersion); } \
	FORCEINLINE static uint32 __PPO__DiscordAchievementManagerVersion() { return STRUCT_OFFSET(UDiscordSettings, DiscordAchievementManagerVersion); } \
	FORCEINLINE static uint32 __PPO__ClientId() { return STRUCT_OFFSET(UDiscordSettings, ClientId); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_6_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDSDK_API UClass* StaticClass<class UDiscordSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordSdk_Public_DiscordSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
