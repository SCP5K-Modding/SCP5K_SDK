// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetUserItemVoteResult;
#ifdef STEAMCORE_OnGetUserItemVoteAsyncDelegateDelegate_generated_h
#error "OnGetUserItemVoteAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnGetUserItemVoteAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnGetUserItemVoteAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetUserItemVoteAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetUserItemVoteAsyncDelegate_Parms \
{ \
	FGetUserItemVoteResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnGetUserItemVoteAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserItemVoteAsyncDelegate, FGetUserItemVoteResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnGetUserItemVoteAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnGetUserItemVoteAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetUserItemVoteAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
