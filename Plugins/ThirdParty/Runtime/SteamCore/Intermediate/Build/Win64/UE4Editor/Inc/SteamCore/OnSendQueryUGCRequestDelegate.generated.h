// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamUGCQueryCompleted;
#ifdef STEAMCORE_OnSendQueryUGCRequestDelegate_generated_h
#error "OnSendQueryUGCRequestDelegate.generated.h already included, missing '#pragma once' in OnSendQueryUGCRequestDelegate.h"
#endif
#define STEAMCORE_OnSendQueryUGCRequestDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSendQueryUGCRequestDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSendQueryUGCRequest_Parms \
{ \
	FSteamUGCQueryCompleted Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSendQueryUGCRequest_DelegateWrapper(const FScriptDelegate& OnSendQueryUGCRequest, FSteamUGCQueryCompleted const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSendQueryUGCRequest_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSendQueryUGCRequest.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSendQueryUGCRequestDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
