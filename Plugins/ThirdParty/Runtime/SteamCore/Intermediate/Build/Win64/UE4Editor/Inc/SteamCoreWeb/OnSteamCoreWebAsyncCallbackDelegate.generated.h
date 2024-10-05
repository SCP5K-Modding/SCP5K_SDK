// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREWEB_OnSteamCoreWebAsyncCallbackDelegate_generated_h
#error "OnSteamCoreWebAsyncCallbackDelegate.generated.h already included, missing '#pragma once' in OnSteamCoreWebAsyncCallbackDelegate.h"
#endif
#define STEAMCOREWEB_OnSteamCoreWebAsyncCallbackDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_OnSteamCoreWebAsyncCallbackDelegate_h_5_DELEGATE \
struct _Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms \
{ \
	FString Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSteamCoreWebAsyncCallback_DelegateWrapper(const FMulticastScriptDelegate& OnSteamCoreWebAsyncCallback, const FString& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCoreWeb_eventOnSteamCoreWebAsyncCallback_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSteamCoreWebAsyncCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCoreWeb_Public_OnSteamCoreWebAsyncCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
