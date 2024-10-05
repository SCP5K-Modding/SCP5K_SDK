// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSClientGroupStatus;
#ifdef STEAMCORE_OnGSClientGroupStatusDelegate_generated_h
#error "OnGSClientGroupStatusDelegate.generated.h already included, missing '#pragma once' in OnGSClientGroupStatusDelegate.h"
#endif
#define STEAMCORE_OnGSClientGroupStatusDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSClientGroupStatusDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGSClientGroupStatus_Parms \
{ \
	FGSClientGroupStatus Data; \
}; \
static inline void FOnGSClientGroupStatus_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatus, FGSClientGroupStatus const& Data) \
{ \
	_Script_SteamCore_eventOnGSClientGroupStatus_Parms Parms; \
	Parms.Data=Data; \
	OnGSClientGroupStatus.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSClientGroupStatusDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
