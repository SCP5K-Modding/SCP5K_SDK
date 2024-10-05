// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSetUserItemVoteResult;
#ifdef STEAMCORE_OnSetUserItemVoteDelegate_generated_h
#error "OnSetUserItemVoteDelegate.generated.h already included, missing '#pragma once' in OnSetUserItemVoteDelegate.h"
#endif
#define STEAMCORE_OnSetUserItemVoteDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSetUserItemVoteDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSetUserItemVote_Parms \
{ \
	FSetUserItemVoteResult Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnSetUserItemVote_DelegateWrapper(const FScriptDelegate& OnSetUserItemVote, FSetUserItemVoteResult const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnSetUserItemVote_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnSetUserItemVote.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSetUserItemVoteDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
