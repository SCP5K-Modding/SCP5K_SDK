// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUGCDeleteItemResult;
#ifdef STEAMCORE_OnDeleteItemResultAsyncDelegateDelegate_generated_h
#error "OnDeleteItemResultAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnDeleteItemResultAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnDeleteItemResultAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDeleteItemResultAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDeleteItemResultAsyncDelegate_Parms \
{ \
	FUGCDeleteItemResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnDeleteItemResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteItemResultAsyncDelegate, FUGCDeleteItemResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnDeleteItemResultAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnDeleteItemResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDeleteItemResultAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
