// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameWebCallback;
#ifdef STEAMCORE_OnGameWebCallbackDelegate_generated_h
#error "OnGameWebCallbackDelegate.generated.h already included, missing '#pragma once' in OnGameWebCallbackDelegate.h"
#endif
#define STEAMCORE_OnGameWebCallbackDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameWebCallbackDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGameWebCallback_Parms \
{ \
	FGameWebCallback Data; \
}; \
static inline void FOnGameWebCallback_DelegateWrapper(const FMulticastScriptDelegate& OnGameWebCallback, FGameWebCallback const& Data) \
{ \
	_Script_SteamCore_eventOnGameWebCallback_Parms Parms; \
	Parms.Data=Data; \
	OnGameWebCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGameWebCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
