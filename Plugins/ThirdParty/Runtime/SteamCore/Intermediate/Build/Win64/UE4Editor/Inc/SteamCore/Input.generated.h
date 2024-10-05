// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputHandle;
struct FInputActionSetHandle;
enum class ESteamCoreXboxOrigin : uint8;
enum class ESteamCoreInputActionOrigin : uint8;
struct FInputAnalogActionHandle;
struct FInputAnalogActionData;
struct FInputDigitalActionHandle;
struct FInputDigitalActionData;
enum class ESteamCoreInputType : uint8;
struct FInputMotionData;
enum class ESteamCoreInputLEDFlag : uint8;
enum class ESteamCoreControllerPad : uint8;
#ifdef STEAMCORE_Input_generated_h
#error "Input.generated.h already included, missing '#pragma once' in Input.h"
#endif
#define STEAMCORE_Input_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateActionSet); \
	DECLARE_FUNCTION(execActivateActionSetLayer); \
	DECLARE_FUNCTION(execDeactivateActionSetLayer); \
	DECLARE_FUNCTION(execDeactivateAllActionSetLayers); \
	DECLARE_FUNCTION(execGetActionOriginFromXboxOrigin); \
	DECLARE_FUNCTION(execGetActionSetHandle); \
	DECLARE_FUNCTION(execGetActiveActionSetLayers); \
	DECLARE_FUNCTION(execGetAnalogActionData); \
	DECLARE_FUNCTION(execGetAnalogActionHandle); \
	DECLARE_FUNCTION(execGetAnalogActionOrigins); \
	DECLARE_FUNCTION(execGetControllerForGamepadIndex); \
	DECLARE_FUNCTION(execGetCurrentActionSet); \
	DECLARE_FUNCTION(execGetDeviceBindingRevision); \
	DECLARE_FUNCTION(execGetDigitalActionData); \
	DECLARE_FUNCTION(execGetDigitalActionHandle); \
	DECLARE_FUNCTION(execGetDigitalActionOrigins); \
	DECLARE_FUNCTION(execGetGamepadIndexForController); \
	DECLARE_FUNCTION(execGetGlyphForActionOrigin); \
	DECLARE_FUNCTION(execGetGlyphForXboxOrigin); \
	DECLARE_FUNCTION(execGetInputTypeForHandle); \
	DECLARE_FUNCTION(execGetMotionData); \
	DECLARE_FUNCTION(execGetRemotePlaySessionID); \
	DECLARE_FUNCTION(execGetStringForActionOrigin); \
	DECLARE_FUNCTION(execGetStringForXboxOrigin); \
	DECLARE_FUNCTION(execSetLEDColor); \
	DECLARE_FUNCTION(execShowBindingPanel); \
	DECLARE_FUNCTION(execStopAnalogActionMomentum); \
	DECLARE_FUNCTION(execTranslateActionOrigin); \
	DECLARE_FUNCTION(execTriggerHapticPulse); \
	DECLARE_FUNCTION(execTriggerRepeatedHapticPulse); \
	DECLARE_FUNCTION(execTriggerVibration);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateActionSet); \
	DECLARE_FUNCTION(execActivateActionSetLayer); \
	DECLARE_FUNCTION(execDeactivateActionSetLayer); \
	DECLARE_FUNCTION(execDeactivateAllActionSetLayers); \
	DECLARE_FUNCTION(execGetActionOriginFromXboxOrigin); \
	DECLARE_FUNCTION(execGetActionSetHandle); \
	DECLARE_FUNCTION(execGetActiveActionSetLayers); \
	DECLARE_FUNCTION(execGetAnalogActionData); \
	DECLARE_FUNCTION(execGetAnalogActionHandle); \
	DECLARE_FUNCTION(execGetAnalogActionOrigins); \
	DECLARE_FUNCTION(execGetControllerForGamepadIndex); \
	DECLARE_FUNCTION(execGetCurrentActionSet); \
	DECLARE_FUNCTION(execGetDeviceBindingRevision); \
	DECLARE_FUNCTION(execGetDigitalActionData); \
	DECLARE_FUNCTION(execGetDigitalActionHandle); \
	DECLARE_FUNCTION(execGetDigitalActionOrigins); \
	DECLARE_FUNCTION(execGetGamepadIndexForController); \
	DECLARE_FUNCTION(execGetGlyphForActionOrigin); \
	DECLARE_FUNCTION(execGetGlyphForXboxOrigin); \
	DECLARE_FUNCTION(execGetInputTypeForHandle); \
	DECLARE_FUNCTION(execGetMotionData); \
	DECLARE_FUNCTION(execGetRemotePlaySessionID); \
	DECLARE_FUNCTION(execGetStringForActionOrigin); \
	DECLARE_FUNCTION(execGetStringForXboxOrigin); \
	DECLARE_FUNCTION(execSetLEDColor); \
	DECLARE_FUNCTION(execShowBindingPanel); \
	DECLARE_FUNCTION(execStopAnalogActionMomentum); \
	DECLARE_FUNCTION(execTranslateActionOrigin); \
	DECLARE_FUNCTION(execTriggerHapticPulse); \
	DECLARE_FUNCTION(execTriggerRepeatedHapticPulse); \
	DECLARE_FUNCTION(execTriggerVibration);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInput(); \
	friend struct Z_Construct_UClass_UInput_Statics; \
public: \
	DECLARE_CLASS(UInput, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UInput)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUInput(); \
	friend struct Z_Construct_UClass_UInput_Statics; \
public: \
	DECLARE_CLASS(UInput, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UInput)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInput(UInput&&); \
	NO_API UInput(const UInput&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInput(UInput&&); \
	NO_API UInput(const UInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInput)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_18_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_Input_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
