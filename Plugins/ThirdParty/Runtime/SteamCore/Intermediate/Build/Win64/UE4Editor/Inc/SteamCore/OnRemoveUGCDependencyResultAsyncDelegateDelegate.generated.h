// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoveUGCDependencyResult;
#ifdef STEAMCORE_OnRemoveUGCDependencyResultAsyncDelegateDelegate_generated_h
#error "OnRemoveUGCDependencyResultAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRemoveUGCDependencyResultAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRemoveUGCDependencyResultAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveUGCDependencyResultAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRemoveUGCDependencyResultAsyncDelegate_Parms \
{ \
	FRemoveUGCDependencyResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRemoveUGCDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveUGCDependencyResultAsyncDelegate, FRemoveUGCDependencyResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRemoveUGCDependencyResultAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRemoveUGCDependencyResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRemoveUGCDependencyResultAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
