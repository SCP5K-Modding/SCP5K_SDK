// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClanOfficerListResponse;
#ifdef STEAMCORE_OnRequestClanOfficerListAsyncDelegateDelegate_generated_h
#error "OnRequestClanOfficerListAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnRequestClanOfficerListAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnRequestClanOfficerListAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestClanOfficerListAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms \
{ \
	FClanOfficerListResponse Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestClanOfficerListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerListAsyncDelegate, FClanOfficerListResponse const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestClanOfficerListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestClanOfficerListAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
