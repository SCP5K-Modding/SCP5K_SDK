// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class UDLSSMode : uint8;
enum class UNISMode : uint8;
struct FLinearColor;
struct FHUDElementVisibility;
enum class EUpscalerMode : uint8;
enum class EUpscalerQuality : uint8;
class UPandemicGameUserSettings;
enum class ETextSize : uint8;
enum class ECustomReflexMode : uint8;
#ifdef GAMEUTILITIES_PandemicGameUserSettings_generated_h
#error "PandemicGameUserSettings.generated.h already included, missing '#pragma once' in PandemicGameUserSettings.h"
#endif
#define GAMEUTILITIES_PandemicGameUserSettings_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyAudioSettings); \
	DECLARE_FUNCTION(execApplyGameplaySettings); \
	DECLARE_FUNCTION(execApplyUISettings); \
	DECLARE_FUNCTION(execApplyVideoSettings); \
	DECLARE_FUNCTION(execGetAimingSensitivity); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execGetCenterViewOnAds); \
	DECLARE_FUNCTION(execGetCurrentUpscalerQualityForDLSS); \
	DECLARE_FUNCTION(execGetCurrentUpscalerQualityForNIS); \
	DECLARE_FUNCTION(execGetDeadzoneSensitivity); \
	DECLARE_FUNCTION(execGetDepthOfField); \
	DECLARE_FUNCTION(execGetFieldOfView); \
	DECLARE_FUNCTION(execGetGreenColor); \
	DECLARE_FUNCTION(execGetHeadBobIntensity); \
	DECLARE_FUNCTION(execGetHUDElementVisibility); \
	DECLARE_FUNCTION(execGetInputSensitivity); \
	DECLARE_FUNCTION(execGetInvertHorizontalInput); \
	DECLARE_FUNCTION(execGetInvertVerticalInput); \
	DECLARE_FUNCTION(execGetLanguage); \
	DECLARE_FUNCTION(execGetMasterVolume); \
	DECLARE_FUNCTION(execGetMotionBlur); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execGetNameOfUpscalerMode); \
	DECLARE_FUNCTION(execGetNameOfUpscalerQuality); \
	DECLARE_FUNCTION(execGetPandemicGameUserSettings); \
	DECLARE_FUNCTION(execGetPaniniProjection); \
	DECLARE_FUNCTION(execGetPaniniProjectionAmount); \
	DECLARE_FUNCTION(execGetRedColor); \
	DECLARE_FUNCTION(execGetSFXVolume); \
	DECLARE_FUNCTION(execGetSupportedUpscalerModes); \
	DECLARE_FUNCTION(execGetSupportedUpscalerQuality); \
	DECLARE_FUNCTION(execGetTextSize); \
	DECLARE_FUNCTION(execGetToggleAim); \
	DECLARE_FUNCTION(execGetToggleCrouch); \
	DECLARE_FUNCTION(execGetToggleLean); \
	DECLARE_FUNCTION(execGetToggleLowReady); \
	DECLARE_FUNCTION(execGetTogglePointShooting); \
	DECLARE_FUNCTION(execGetToggleSprint); \
	DECLARE_FUNCTION(execGetUIScale); \
	DECLARE_FUNCTION(execGetUIVolume); \
	DECLARE_FUNCTION(execGetUpscalerMode); \
	DECLARE_FUNCTION(execGetUpscalerModeNamesFromArray); \
	DECLARE_FUNCTION(execGetUpscalerQuality); \
	DECLARE_FUNCTION(execGetUpscalerQualityNamesFromArray); \
	DECLARE_FUNCTION(execGetVoiceVolume); \
	DECLARE_FUNCTION(execSetAimingSensitivity); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execSetCenterViewOnADS); \
	DECLARE_FUNCTION(execSetDeadzoneSensitivity); \
	DECLARE_FUNCTION(execSetEnableDepthOfField); \
	DECLARE_FUNCTION(execSetEnableMotionBlur); \
	DECLARE_FUNCTION(execSetEnablePaniniProjection); \
	DECLARE_FUNCTION(execSetFieldOfView); \
	DECLARE_FUNCTION(execSetGreenColor); \
	DECLARE_FUNCTION(execSetHeadBobIntensity); \
	DECLARE_FUNCTION(execSetHUDElementVisibility); \
	DECLARE_FUNCTION(execSetInputSensitivity); \
	DECLARE_FUNCTION(execSetInvertHorizontalInput); \
	DECLARE_FUNCTION(execSetInvertVerticalInput); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetMasterVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execSetPandemicResolutionScaleNormalized); \
	DECLARE_FUNCTION(execSetPaniniProjectionAmount); \
	DECLARE_FUNCTION(execSetRedColor); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execSetSFXVolume); \
	DECLARE_FUNCTION(execSetTextSize); \
	DECLARE_FUNCTION(execSetToggleAim); \
	DECLARE_FUNCTION(execSetToggleCrouch); \
	DECLARE_FUNCTION(execSetToggleLean); \
	DECLARE_FUNCTION(execSetToggleLowReady); \
	DECLARE_FUNCTION(execSetTogglePointShooting); \
	DECLARE_FUNCTION(execSetToggleSprint); \
	DECLARE_FUNCTION(execSetUIScale); \
	DECLARE_FUNCTION(execSetUIVolume); \
	DECLARE_FUNCTION(execSetUpscalerMode); \
	DECLARE_FUNCTION(execSetUpscalerQuality); \
	DECLARE_FUNCTION(execSetVoiceVolume);


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAudioSettings); \
	DECLARE_FUNCTION(execApplyGameplaySettings); \
	DECLARE_FUNCTION(execApplyUISettings); \
	DECLARE_FUNCTION(execApplyVideoSettings); \
	DECLARE_FUNCTION(execGetAimingSensitivity); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execGetCenterViewOnAds); \
	DECLARE_FUNCTION(execGetCurrentUpscalerQualityForDLSS); \
	DECLARE_FUNCTION(execGetCurrentUpscalerQualityForNIS); \
	DECLARE_FUNCTION(execGetDeadzoneSensitivity); \
	DECLARE_FUNCTION(execGetDepthOfField); \
	DECLARE_FUNCTION(execGetFieldOfView); \
	DECLARE_FUNCTION(execGetGreenColor); \
	DECLARE_FUNCTION(execGetHeadBobIntensity); \
	DECLARE_FUNCTION(execGetHUDElementVisibility); \
	DECLARE_FUNCTION(execGetInputSensitivity); \
	DECLARE_FUNCTION(execGetInvertHorizontalInput); \
	DECLARE_FUNCTION(execGetInvertVerticalInput); \
	DECLARE_FUNCTION(execGetLanguage); \
	DECLARE_FUNCTION(execGetMasterVolume); \
	DECLARE_FUNCTION(execGetMotionBlur); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execGetNameOfUpscalerMode); \
	DECLARE_FUNCTION(execGetNameOfUpscalerQuality); \
	DECLARE_FUNCTION(execGetPandemicGameUserSettings); \
	DECLARE_FUNCTION(execGetPaniniProjection); \
	DECLARE_FUNCTION(execGetPaniniProjectionAmount); \
	DECLARE_FUNCTION(execGetRedColor); \
	DECLARE_FUNCTION(execGetSFXVolume); \
	DECLARE_FUNCTION(execGetSupportedUpscalerModes); \
	DECLARE_FUNCTION(execGetSupportedUpscalerQuality); \
	DECLARE_FUNCTION(execGetTextSize); \
	DECLARE_FUNCTION(execGetToggleAim); \
	DECLARE_FUNCTION(execGetToggleCrouch); \
	DECLARE_FUNCTION(execGetToggleLean); \
	DECLARE_FUNCTION(execGetToggleLowReady); \
	DECLARE_FUNCTION(execGetTogglePointShooting); \
	DECLARE_FUNCTION(execGetToggleSprint); \
	DECLARE_FUNCTION(execGetUIScale); \
	DECLARE_FUNCTION(execGetUIVolume); \
	DECLARE_FUNCTION(execGetUpscalerMode); \
	DECLARE_FUNCTION(execGetUpscalerModeNamesFromArray); \
	DECLARE_FUNCTION(execGetUpscalerQuality); \
	DECLARE_FUNCTION(execGetUpscalerQualityNamesFromArray); \
	DECLARE_FUNCTION(execGetVoiceVolume); \
	DECLARE_FUNCTION(execSetAimingSensitivity); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execSetCenterViewOnADS); \
	DECLARE_FUNCTION(execSetDeadzoneSensitivity); \
	DECLARE_FUNCTION(execSetEnableDepthOfField); \
	DECLARE_FUNCTION(execSetEnableMotionBlur); \
	DECLARE_FUNCTION(execSetEnablePaniniProjection); \
	DECLARE_FUNCTION(execSetFieldOfView); \
	DECLARE_FUNCTION(execSetGreenColor); \
	DECLARE_FUNCTION(execSetHeadBobIntensity); \
	DECLARE_FUNCTION(execSetHUDElementVisibility); \
	DECLARE_FUNCTION(execSetInputSensitivity); \
	DECLARE_FUNCTION(execSetInvertHorizontalInput); \
	DECLARE_FUNCTION(execSetInvertVerticalInput); \
	DECLARE_FUNCTION(execSetLanguage); \
	DECLARE_FUNCTION(execSetMasterVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execSetPandemicResolutionScaleNormalized); \
	DECLARE_FUNCTION(execSetPaniniProjectionAmount); \
	DECLARE_FUNCTION(execSetRedColor); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execSetSFXVolume); \
	DECLARE_FUNCTION(execSetTextSize); \
	DECLARE_FUNCTION(execSetToggleAim); \
	DECLARE_FUNCTION(execSetToggleCrouch); \
	DECLARE_FUNCTION(execSetToggleLean); \
	DECLARE_FUNCTION(execSetToggleLowReady); \
	DECLARE_FUNCTION(execSetTogglePointShooting); \
	DECLARE_FUNCTION(execSetToggleSprint); \
	DECLARE_FUNCTION(execSetUIScale); \
	DECLARE_FUNCTION(execSetUIVolume); \
	DECLARE_FUNCTION(execSetUpscalerMode); \
	DECLARE_FUNCTION(execSetUpscalerQuality); \
	DECLARE_FUNCTION(execSetVoiceVolume);


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPandemicGameUserSettings(); \
	friend struct Z_Construct_UClass_UPandemicGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UPandemicGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtilities"), NO_API) \
	DECLARE_SERIALIZER(UPandemicGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPandemicGameUserSettings(); \
	friend struct Z_Construct_UClass_UPandemicGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UPandemicGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtilities"), NO_API) \
	DECLARE_SERIALIZER(UPandemicGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPandemicGameUserSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPandemicGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPandemicGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPandemicGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPandemicGameUserSettings(UPandemicGameUserSettings&&); \
	NO_API UPandemicGameUserSettings(const UPandemicGameUserSettings&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPandemicGameUserSettings(UPandemicGameUserSettings&&); \
	NO_API UPandemicGameUserSettings(const UPandemicGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPandemicGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPandemicGameUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPandemicGameUserSettings)


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bToggleCrouch() { return STRUCT_OFFSET(UPandemicGameUserSettings, bToggleCrouch); } \
	FORCEINLINE static uint32 __PPO__bToggleSprint() { return STRUCT_OFFSET(UPandemicGameUserSettings, bToggleSprint); } \
	FORCEINLINE static uint32 __PPO__bToggleAim() { return STRUCT_OFFSET(UPandemicGameUserSettings, bToggleAim); } \
	FORCEINLINE static uint32 __PPO__bToggleLean() { return STRUCT_OFFSET(UPandemicGameUserSettings, bToggleLean); } \
	FORCEINLINE static uint32 __PPO__bToggleLowReady() { return STRUCT_OFFSET(UPandemicGameUserSettings, bToggleLowReady); } \
	FORCEINLINE static uint32 __PPO__bTogglePointShooting() { return STRUCT_OFFSET(UPandemicGameUserSettings, bTogglePointShooting); } \
	FORCEINLINE static uint32 __PPO__bCenterViewOnADS() { return STRUCT_OFFSET(UPandemicGameUserSettings, bCenterViewOnADS); } \
	FORCEINLINE static uint32 __PPO__bInvertHorizontalInput() { return STRUCT_OFFSET(UPandemicGameUserSettings, bInvertHorizontalInput); } \
	FORCEINLINE static uint32 __PPO__bInvertVerticalInput() { return STRUCT_OFFSET(UPandemicGameUserSettings, bInvertVerticalInput); } \
	FORCEINLINE static uint32 __PPO__InputSensitivity() { return STRUCT_OFFSET(UPandemicGameUserSettings, InputSensitivity); } \
	FORCEINLINE static uint32 __PPO__AimingSensitivity() { return STRUCT_OFFSET(UPandemicGameUserSettings, AimingSensitivity); } \
	FORCEINLINE static uint32 __PPO__DeadzoneSensitivity() { return STRUCT_OFFSET(UPandemicGameUserSettings, DeadzoneSensitivity); } \
	FORCEINLINE static uint32 __PPO__HeadBobIntensity() { return STRUCT_OFFSET(UPandemicGameUserSettings, HeadBobIntensity); } \
	FORCEINLINE static uint32 __PPO__ReflexMode() { return STRUCT_OFFSET(UPandemicGameUserSettings, ReflexMode); } \
	FORCEINLINE static uint32 __PPO__UpscalerMode() { return STRUCT_OFFSET(UPandemicGameUserSettings, UpscalerMode); } \
	FORCEINLINE static uint32 __PPO__UpscalerQuality() { return STRUCT_OFFSET(UPandemicGameUserSettings, UpscalerQuality); } \
	FORCEINLINE static uint32 __PPO__bEnableDepthOfField() { return STRUCT_OFFSET(UPandemicGameUserSettings, bEnableDepthOfField); } \
	FORCEINLINE static uint32 __PPO__bEnableMotionBlur() { return STRUCT_OFFSET(UPandemicGameUserSettings, bEnableMotionBlur); } \
	FORCEINLINE static uint32 __PPO__bEnablePaniniProjection() { return STRUCT_OFFSET(UPandemicGameUserSettings, bEnablePaniniProjection); } \
	FORCEINLINE static uint32 __PPO__PaniniProjectionAmount() { return STRUCT_OFFSET(UPandemicGameUserSettings, PaniniProjectionAmount); } \
	FORCEINLINE static uint32 __PPO__Brightness() { return STRUCT_OFFSET(UPandemicGameUserSettings, Brightness); } \
	FORCEINLINE static uint32 __PPO__FieldOfView() { return STRUCT_OFFSET(UPandemicGameUserSettings, FieldOfView); } \
	FORCEINLINE static uint32 __PPO__Language() { return STRUCT_OFFSET(UPandemicGameUserSettings, Language); } \
	FORCEINLINE static uint32 __PPO__TextSize() { return STRUCT_OFFSET(UPandemicGameUserSettings, TextSize); } \
	FORCEINLINE static uint32 __PPO__RedColor() { return STRUCT_OFFSET(UPandemicGameUserSettings, RedColor); } \
	FORCEINLINE static uint32 __PPO__GreenColor() { return STRUCT_OFFSET(UPandemicGameUserSettings, GreenColor); } \
	FORCEINLINE static uint32 __PPO__UIScale() { return STRUCT_OFFSET(UPandemicGameUserSettings, UIScale); } \
	FORCEINLINE static uint32 __PPO__HUDElementVisibility() { return STRUCT_OFFSET(UPandemicGameUserSettings, HUDElementVisibility); } \
	FORCEINLINE static uint32 __PPO__DisplayTimeScale() { return STRUCT_OFFSET(UPandemicGameUserSettings, DisplayTimeScale); } \
	FORCEINLINE static uint32 __PPO__MasterVolume() { return STRUCT_OFFSET(UPandemicGameUserSettings, MasterVolume); } \
	FORCEINLINE static uint32 __PPO__MusicVolume() { return STRUCT_OFFSET(UPandemicGameUserSettings, MusicVolume); } \
	FORCEINLINE static uint32 __PPO__SFXVolume() { return STRUCT_OFFSET(UPandemicGameUserSettings, SFXVolume); } \
	FORCEINLINE static uint32 __PPO__UIVolume() { return STRUCT_OFFSET(UPandemicGameUserSettings, UIVolume); } \
	FORCEINLINE static uint32 __PPO__VoiceVolume() { return STRUCT_OFFSET(UPandemicGameUserSettings, VoiceVolume); }


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_22_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUTILITIES_API UClass* StaticClass<class UPandemicGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PandemicGameUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
