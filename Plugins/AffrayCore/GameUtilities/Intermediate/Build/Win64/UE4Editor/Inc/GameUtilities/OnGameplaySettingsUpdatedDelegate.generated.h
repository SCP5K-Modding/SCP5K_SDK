// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameplaySetting : uint8;
#ifdef GAMEUTILITIES_OnGameplaySettingsUpdatedDelegate_generated_h
#error "OnGameplaySettingsUpdatedDelegate.generated.h already included, missing '#pragma once' in OnGameplaySettingsUpdatedDelegate.h"
#endif
#define GAMEUTILITIES_OnGameplaySettingsUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_OnGameplaySettingsUpdatedDelegate_h_6_DELEGATE \
struct _Script_GameUtilities_eventOnGameplaySettingsUpdated_Parms \
{ \
	EGameplaySetting settings; \
}; \
static inline void FOnGameplaySettingsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnGameplaySettingsUpdated, EGameplaySetting settings) \
{ \
	_Script_GameUtilities_eventOnGameplaySettingsUpdated_Parms Parms; \
	Parms.settings=settings; \
	OnGameplaySettingsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_OnGameplaySettingsUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
