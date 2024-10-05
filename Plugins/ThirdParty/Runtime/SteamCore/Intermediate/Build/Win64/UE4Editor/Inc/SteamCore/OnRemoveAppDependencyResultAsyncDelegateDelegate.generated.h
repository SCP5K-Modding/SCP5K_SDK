// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoveAppDependencyResult;
#ifdef STEAMCORE_OnRemoveAppDependencyResultAsyncDelegateDelegate_generated_h
#error "OnRemoveAppDependencyResultAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRemoveAppDependencyResultAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRemoveAppDependencyResultAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveAppDependencyResultAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoveAppDependencyResultAsyncDelegate_Parms \
{ \
	FRemoveAppDependencyResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRemoveAppDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveAppDependencyResultAsyncDelegate, FRemoveAppDependencyResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRemoveAppDependencyResultAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRemoveAppDependencyResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveAppDependencyResultAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
