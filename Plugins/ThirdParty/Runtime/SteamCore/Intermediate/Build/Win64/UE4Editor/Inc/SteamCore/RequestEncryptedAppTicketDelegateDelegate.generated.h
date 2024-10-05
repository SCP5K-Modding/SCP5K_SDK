// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEncryptedAppTicketResponse;
#ifdef STEAMCORE_RequestEncryptedAppTicketDelegateDelegate_generated_h
#error "RequestEncryptedAppTicketDelegateDelegate.generated.h already included, missing '#pragma once' in RequestEncryptedAppTicketDelegateDelegate.h"
#endif
#define STEAMCORE_RequestEncryptedAppTicketDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RequestEncryptedAppTicketDelegateDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms \
{ \
	FEncryptedAppTicketResponse Data; \
	bool bWasSuccessful; \
}; \
static inline void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& Data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms Parms; \
	Parms.Data=Data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	RequestEncryptedAppTicketDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_RequestEncryptedAppTicketDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
