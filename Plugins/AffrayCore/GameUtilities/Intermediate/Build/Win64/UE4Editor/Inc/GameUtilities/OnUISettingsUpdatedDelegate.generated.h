// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUISetting : uint8;
#ifdef GAMEUTILITIES_OnUISettingsUpdatedDelegate_generated_h
#error "OnUISettingsUpdatedDelegate.generated.h already included, missing '#pragma once' in OnUISettingsUpdatedDelegate.h"
#endif
#define GAMEUTILITIES_OnUISettingsUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_OnUISettingsUpdatedDelegate_h_6_DELEGATE \
struct _Script_GameUtilities_eventOnUISettingsUpdated_Parms \
{ \
	EUISetting settings; \
}; \
static inline void FOnUISettingsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnUISettingsUpdated, EUISetting settings) \
{ \
	_Script_GameUtilities_eventOnUISettingsUpdated_Parms Parms; \
	Parms.settings=settings; \
	OnUISettingsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_OnUISettingsUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
