// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAudioSetting : uint8;
#ifdef GAMEUTILITIES_OnAudioSettingsUpdatedDelegate_generated_h
#error "OnAudioSettingsUpdatedDelegate.generated.h already included, missing '#pragma once' in OnAudioSettingsUpdatedDelegate.h"
#endif
#define GAMEUTILITIES_OnAudioSettingsUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_OnAudioSettingsUpdatedDelegate_h_6_DELEGATE \
struct _Script_GameUtilities_eventOnAudioSettingsUpdated_Parms \
{ \
	EAudioSetting settings; \
}; \
static inline void FOnAudioSettingsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSettingsUpdated, EAudioSetting settings) \
{ \
	_Script_GameUtilities_eventOnAudioSettingsUpdated_Parms Parms; \
	Parms.settings=settings; \
	OnAudioSettingsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_OnAudioSettingsUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
