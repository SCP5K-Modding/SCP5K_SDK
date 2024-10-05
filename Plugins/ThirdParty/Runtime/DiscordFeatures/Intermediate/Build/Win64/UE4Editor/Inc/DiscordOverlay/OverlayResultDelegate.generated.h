// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDiscordResult : uint8;
#ifdef DISCORDOVERLAY_OverlayResultDelegate_generated_h
#error "OverlayResultDelegate.generated.h already included, missing '#pragma once' in OverlayResultDelegate.h"
#endif
#define DISCORDOVERLAY_OverlayResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordOverlay_Public_OverlayResultDelegate_h_6_DELEGATE \
struct _Script_DiscordOverlay_eventOverlayResult_Parms \
{ \
	EDiscordResult Result; \
}; \
static inline void FOverlayResult_DelegateWrapper(const FMulticastScriptDelegate& OverlayResult, const EDiscordResult Result) \
{ \
	_Script_DiscordOverlay_eventOverlayResult_Parms Parms; \
	Parms.Result=Result; \
	OverlayResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordOverlay_Public_OverlayResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
