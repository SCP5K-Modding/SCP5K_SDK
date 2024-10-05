// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSetPersonaNameResponse;
#ifdef STEAMCORE_OnSetPersonaNameAsyncDelegateDelegate_generated_h
#error "OnSetPersonaNameAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnSetPersonaNameAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnSetPersonaNameAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSetPersonaNameAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms \
{ \
	FSetPersonaNameResponse Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSetPersonaNameAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameAsyncDelegate, FSetPersonaNameResponse const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSetPersonaNameAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSetPersonaNameAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
