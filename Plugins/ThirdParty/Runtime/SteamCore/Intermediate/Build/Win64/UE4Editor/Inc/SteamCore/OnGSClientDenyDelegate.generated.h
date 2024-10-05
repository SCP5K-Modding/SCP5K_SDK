// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSClientDeny;
#ifdef STEAMCORE_OnGSClientDenyDelegate_generated_h
#error "OnGSClientDenyDelegate.generated.h already included, missing '#pragma once' in OnGSClientDenyDelegate.h"
#endif
#define STEAMCORE_OnGSClientDenyDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSClientDenyDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGSClientDeny_Parms \
{ \
	FGSClientDeny Data; \
}; \
static inline void FOnGSClientDeny_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDeny, FGSClientDeny const& Data) \
{ \
	_Script_SteamCore_eventOnGSClientDeny_Parms Parms; \
	Parms.Data=Data; \
	OnGSClientDeny.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSClientDenyDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
