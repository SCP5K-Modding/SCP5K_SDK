// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDownloadItemResult;
#ifdef STEAMCORE_OnDownloadItemResultDelegate_generated_h
#error "OnDownloadItemResultDelegate.generated.h already included, missing '#pragma once' in OnDownloadItemResultDelegate.h"
#endif
#define STEAMCORE_OnDownloadItemResultDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadItemResultDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnDownloadItemResult_Parms \
{ \
	FDownloadItemResult Data; \
}; \
static inline void FOnDownloadItemResult_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadItemResult, FDownloadItemResult const& Data) \
{ \
	_Script_SteamCore_eventOnDownloadItemResult_Parms Parms; \
	Parms.Data=Data; \
	OnDownloadItemResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnDownloadItemResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
