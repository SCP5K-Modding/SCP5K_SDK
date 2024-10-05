// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAddAppDependencyResult;
#ifdef STEAMCORE_OnAddAppDependencyResultAsyncDelegateDelegate_generated_h
#error "OnAddAppDependencyResultAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnAddAppDependencyResultAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnAddAppDependencyResultAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAddAppDependencyResultAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnAddAppDependencyResultAsyncDelegate_Parms \
{ \
	FAddAppDependencyResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnAddAppDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddAppDependencyResultAsyncDelegate, FAddAppDependencyResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnAddAppDependencyResultAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnAddAppDependencyResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnAddAppDependencyResultAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
