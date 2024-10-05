// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFileDetailsResult;
#ifdef STEAMCORE_OnFileDetailsResultAsyncDelegateDelegate_generated_h
#error "OnFileDetailsResultAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnFileDetailsResultAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnFileDetailsResultAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileDetailsResultAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnFileDetailsResultAsyncDelegate_Parms \
{ \
	FFileDetailsResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileDetailsResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultAsyncDelegate, FFileDetailsResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileDetailsResultAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileDetailsResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnFileDetailsResultAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
