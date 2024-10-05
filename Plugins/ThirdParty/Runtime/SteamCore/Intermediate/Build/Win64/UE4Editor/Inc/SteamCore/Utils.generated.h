// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamUniverse : uint8;
enum class ESteamNotificationPosition : uint8;
enum class ESteamGamepadTextInputMode : uint8;
enum class ESteamGamepadTextInputLineMode : uint8;
#ifdef STEAMCORE_Utils_generated_h
#error "Utils.generated.h already included, missing '#pragma once' in Utils.h"
#endif
#define STEAMCORE_Utils_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBOverlayNeedsPresent); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execGetAppID_Pure); \
	DECLARE_FUNCTION(execGetConnectedUniverse); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execStartVRDashboard);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBOverlayNeedsPresent); \
	DECLARE_FUNCTION(execGetAppID); \
	DECLARE_FUNCTION(execGetAppID_Pure); \
	DECLARE_FUNCTION(execGetConnectedUniverse); \
	DECLARE_FUNCTION(execGetCurrentBatteryPower); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextInput); \
	DECLARE_FUNCTION(execGetEnteredGamepadTextLength); \
	DECLARE_FUNCTION(execGetImageRGBA); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execGetIPCCallCount); \
	DECLARE_FUNCTION(execGetIPCountry); \
	DECLARE_FUNCTION(execGetSecondsSinceAppActive); \
	DECLARE_FUNCTION(execGetSecondsSinceComputerActive); \
	DECLARE_FUNCTION(execGetServerRealTime); \
	DECLARE_FUNCTION(execGetSteamUILanguage); \
	DECLARE_FUNCTION(execInitFilterText); \
	DECLARE_FUNCTION(execIsOverlayEnabled); \
	DECLARE_FUNCTION(execIsSteamChinaLauncher); \
	DECLARE_FUNCTION(execIsSteamInBigPictureMode); \
	DECLARE_FUNCTION(execIsSteamRunningInVR); \
	DECLARE_FUNCTION(execIsVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execSetOverlayNotificationInset); \
	DECLARE_FUNCTION(execSetOverlayNotificationPosition); \
	DECLARE_FUNCTION(execSetVRHeadsetStreamingEnabled); \
	DECLARE_FUNCTION(execShowGamepadTextInput); \
	DECLARE_FUNCTION(execStartVRDashboard);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtils(); \
	friend struct Z_Construct_UClass_UUtils_Statics; \
public: \
	DECLARE_CLASS(UUtils, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUtils)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUtils(); \
	friend struct Z_Construct_UClass_UUtils_Statics; \
public: \
	DECLARE_CLASS(UUtils, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUtils)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtils(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtils(UUtils&&); \
	NO_API UUtils(const UUtils&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtils(UUtils&&); \
	NO_API UUtils(const UUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtils); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUtils)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_15_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Utils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
