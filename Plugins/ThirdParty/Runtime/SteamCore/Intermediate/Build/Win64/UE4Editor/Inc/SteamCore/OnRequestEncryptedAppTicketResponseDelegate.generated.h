// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEncryptedAppTicketResponse;
#ifdef STEAMCORE_OnRequestEncryptedAppTicketResponseDelegate_generated_h
#error "OnRequestEncryptedAppTicketResponseDelegate.generated.h already included, missing '#pragma once' in OnRequestEncryptedAppTicketResponseDelegate.h"
#endif
#define STEAMCORE_OnRequestEncryptedAppTicketResponseDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestEncryptedAppTicketResponseDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms \
{ \
	FEncryptedAppTicketResponse Data; \
}; \
static inline void FOnRequestEncryptedAppTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEncryptedAppTicketResponse, FEncryptedAppTicketResponse const& Data) \
{ \
	_Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms Parms; \
	Parms.Data=Data; \
	OnRequestEncryptedAppTicketResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnRequestEncryptedAppTicketResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
