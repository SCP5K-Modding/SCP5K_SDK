// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLicensesUpdated;
#ifdef STEAMCORE_OnLicensesUpdatedDelegate_generated_h
#error "OnLicensesUpdatedDelegate.generated.h already included, missing '#pragma once' in OnLicensesUpdatedDelegate.h"
#endif
#define STEAMCORE_OnLicensesUpdatedDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLicensesUpdatedDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnLicensesUpdated_Parms \
{ \
	FLicensesUpdated Data; \
}; \
static inline void FOnLicensesUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLicensesUpdated, FLicensesUpdated const& Data) \
{ \
	_Script_SteamCore_eventOnLicensesUpdated_Parms Parms; \
	Parms.Data=Data; \
	OnLicensesUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnLicensesUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
