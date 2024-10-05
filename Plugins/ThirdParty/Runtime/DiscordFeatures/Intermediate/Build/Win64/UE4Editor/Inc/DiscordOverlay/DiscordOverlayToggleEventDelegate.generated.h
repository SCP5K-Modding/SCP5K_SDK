// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISCORDOVERLAY_DiscordOverlayToggleEventDelegate_generated_h
#error "DiscordOverlayToggleEventDelegate.generated.h already included, missing '#pragma once' in DiscordOverlayToggleEventDelegate.h"
#endif
#define DISCORDOVERLAY_DiscordOverlayToggleEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordOverlay_Public_DiscordOverlayToggleEventDelegate_h_5_DELEGATE \
struct _Script_DiscordOverlay_eventDiscordOverlayToggleEvent_Parms \
{ \
	bool bLocked; \
}; \
static inline void FDiscordOverlayToggleEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordOverlayToggleEvent, bool bLocked) \
{ \
	_Script_DiscordOverlay_eventDiscordOverlayToggleEvent_Parms Parms; \
	Parms.bLocked=bLocked ? true : false; \
	DiscordOverlayToggleEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordOverlay_Public_DiscordOverlayToggleEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
