// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetAppDependenciesResult;
#ifdef STEAMCORE_OnGetAppDependenciesResultAsyncDelegateDelegate_generated_h
#error "OnGetAppDependenciesResultAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnGetAppDependenciesResultAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnGetAppDependenciesResultAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetAppDependenciesResultAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetAppDependenciesResultAsyncDelegate_Parms \
{ \
	FGetAppDependenciesResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnGetAppDependenciesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetAppDependenciesResultAsyncDelegate, FGetAppDependenciesResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnGetAppDependenciesResultAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGetAppDependenciesResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetAppDependenciesResultAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
