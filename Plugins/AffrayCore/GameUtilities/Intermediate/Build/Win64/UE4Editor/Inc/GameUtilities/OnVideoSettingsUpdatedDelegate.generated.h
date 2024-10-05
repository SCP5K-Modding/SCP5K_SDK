// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVideoSetting : uint8;
#ifdef GAMEUTILITIES_OnVideoSettingsUpdatedDelegate_generated_h
#error "OnVideoSettingsUpdatedDelegate.generated.h already included, missing '#pragma once' in OnVideoSettingsUpdatedDelegate.h"
#endif
#define GAMEUTILITIES_OnVideoSettingsUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_OnVideoSettingsUpdatedDelegate_h_6_DELEGATE \
struct _Script_GameUtilities_eventOnVideoSettingsUpdated_Parms \
{ \
	EVideoSetting settings; \
}; \
static inline void FOnVideoSettingsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnVideoSettingsUpdated, EVideoSetting settings) \
{ \
	_Script_GameUtilities_eventOnVideoSettingsUpdated_Parms Parms; \
	Parms.settings=settings; \
	OnVideoSettingsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_OnVideoSettingsUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
