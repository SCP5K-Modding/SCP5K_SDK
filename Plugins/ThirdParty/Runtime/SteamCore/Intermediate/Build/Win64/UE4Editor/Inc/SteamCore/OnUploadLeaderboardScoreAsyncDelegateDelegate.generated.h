// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardScoreUploaded;
#ifdef STEAMCORE_OnUploadLeaderboardScoreAsyncDelegateDelegate_generated_h
#error "OnUploadLeaderboardScoreAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnUploadLeaderboardScoreAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnUploadLeaderboardScoreAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUploadLeaderboardScoreAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms \
{ \
	FLeaderboardScoreUploaded Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnUploadLeaderboardScoreAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUploadLeaderboardScoreAsyncDelegate, FLeaderboardScoreUploaded const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnUploadLeaderboardScoreAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnUploadLeaderboardScoreAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnUploadLeaderboardScoreAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
