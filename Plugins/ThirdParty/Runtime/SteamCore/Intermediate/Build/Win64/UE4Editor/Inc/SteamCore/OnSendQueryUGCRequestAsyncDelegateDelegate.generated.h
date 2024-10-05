// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamUGCQueryCompleted;
#ifdef STEAMCORE_OnSendQueryUGCRequestAsyncDelegateDelegate_generated_h
#error "OnSendQueryUGCRequestAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnSendQueryUGCRequestAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnSendQueryUGCRequestAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSendQueryUGCRequestAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSendQueryUGCRequestAsyncDelegate_Parms \
{ \
	FSteamUGCQueryCompleted Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSendQueryUGCRequestAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSendQueryUGCRequestAsyncDelegate, FSteamUGCQueryCompleted const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSendQueryUGCRequestAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSendQueryUGCRequestAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSendQueryUGCRequestAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
