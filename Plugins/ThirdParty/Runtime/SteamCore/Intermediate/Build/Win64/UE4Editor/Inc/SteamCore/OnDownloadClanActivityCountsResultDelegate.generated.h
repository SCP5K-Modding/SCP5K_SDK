// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDownloadClanActivityCountsResult;
#ifdef STEAMCORE_OnDownloadClanActivityCountsResultDelegate_generated_h
#error "OnDownloadClanActivityCountsResultDelegate.generated.h already included, missing '#pragma once' in OnDownloadClanActivityCountsResultDelegate.h"
#endif
#define STEAMCORE_OnDownloadClanActivityCountsResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadClanActivityCountsResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDownloadClanActivityCountsResult_Parms \
{ \
	FDownloadClanActivityCountsResult Data; \
}; \
static inline void FOnDownloadClanActivityCountsResult_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsResult, FDownloadClanActivityCountsResult const& Data) \
{ \
	_Script_SteamCore_eventOnDownloadClanActivityCountsResult_Parms Parms; \
	Parms.Data=Data; \
	OnDownloadClanActivityCountsResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadClanActivityCountsResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
