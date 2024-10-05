// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCreateItemResult;
#ifdef STEAMCORE_OnCreateItemAsyncDelegateDelegate_generated_h
#error "OnCreateItemAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnCreateItemAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnCreateItemAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateItemAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnCreateItemAsyncDelegate_Parms \
{ \
	FCreateItemResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateItemAsyncDelegate, FCreateItemResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateItemAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateItemAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnCreateItemAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
