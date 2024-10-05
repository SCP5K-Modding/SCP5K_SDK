// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAudioSetting : uint8;
#ifdef USERINTERFACE_AudioSettingsUpdatedDelegate_generated_h
#error "AudioSettingsUpdatedDelegate.generated.h already included, missing '#pragma once' in AudioSettingsUpdatedDelegate.h"
#endif
#define USERINTERFACE_AudioSettingsUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_AudioSettingsUpdatedDelegate_h_6_DELEGATE \
struct _Script_UserInterface_eventAudioSettingsUpdated_Parms \
{ \
	EAudioSetting Setting; \
}; \
static inline void FAudioSettingsUpdated_DelegateWrapper(const FMulticastScriptDelegate& AudioSettingsUpdated, EAudioSetting Setting) \
{ \
	_Script_UserInterface_eventAudioSettingsUpdated_Parms Parms; \
	Parms.Setting=Setting; \
	AudioSettingsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_AudioSettingsUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
