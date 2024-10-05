// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScreenshotReady;
#ifdef STEAMCORE_OnScreenshotReadyDelegate_generated_h
#error "OnScreenshotReadyDelegate.generated.h already included, missing '#pragma once' in OnScreenshotReadyDelegate.h"
#endif
#define STEAMCORE_OnScreenshotReadyDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnScreenshotReadyDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnScreenshotReady_Parms \
{ \
	FScreenshotReady Data; \
}; \
static inline void FOnScreenshotReady_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotReady, FScreenshotReady const& Data) \
{ \
	_Script_SteamCore_eventOnScreenshotReady_Parms Parms; \
	Parms.Data=Data; \
	OnScreenshotReady.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnScreenshotReadyDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
