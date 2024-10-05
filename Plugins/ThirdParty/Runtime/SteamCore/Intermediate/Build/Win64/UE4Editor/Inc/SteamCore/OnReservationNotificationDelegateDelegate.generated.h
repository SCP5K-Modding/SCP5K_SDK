// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FReservationNotificationData;
#ifdef STEAMCORE_OnReservationNotificationDelegateDelegate_generated_h
#error "OnReservationNotificationDelegateDelegate.generated.h already included, missing '#pragma once' in OnReservationNotificationDelegateDelegate.h"
#endif
#define STEAMCORE_OnReservationNotificationDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnReservationNotificationDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnReservationNotificationDelegate_Parms \
{ \
	FReservationNotificationData Data; \
}; \
static inline void FOnReservationNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnReservationNotificationDelegate, FReservationNotificationData const& Data) \
{ \
	_Script_SteamCore_eventOnReservationNotificationDelegate_Parms Parms; \
	Parms.Data=Data; \
	OnReservationNotificationDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnReservationNotificationDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
