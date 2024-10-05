// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEncryptedAppTicketResponse;
#ifdef STEAMCORE_OnRequestEncryptedAppTicketDelegate_generated_h
#error "OnRequestEncryptedAppTicketDelegate.generated.h already included, missing '#pragma once' in OnRequestEncryptedAppTicketDelegate.h"
#endif
#define STEAMCORE_OnRequestEncryptedAppTicketDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestEncryptedAppTicketDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms \
{ \
	FEncryptedAppTicketResponse Data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestEncryptedAppTicket_DelegateWrapper(const FScriptDelegate& OnRequestEncryptedAppTicket, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestEncryptedAppTicket.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestEncryptedAppTicketDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
