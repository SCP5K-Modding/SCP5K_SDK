// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSetUserItemVoteResult;
#ifdef STEAMCORE_OnSetUserItemVoteAsyncDelegateDelegate_generated_h
#error "OnSetUserItemVoteAsyncDelegateDelegate.generated.h already included, missing '#pragma once' in OnSetUserItemVoteAsyncDelegateDelegate.h"
#endif
#define STEAMCORE_OnSetUserItemVoteAsyncDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSetUserItemVoteAsyncDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSetUserItemVoteAsyncDelegate_Parms \
{ \
	FSetUserItemVoteResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSetUserItemVoteAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteAsyncDelegate, FSetUserItemVoteResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSetUserItemVoteAsyncDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSetUserItemVoteAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSetUserItemVoteAsyncDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
