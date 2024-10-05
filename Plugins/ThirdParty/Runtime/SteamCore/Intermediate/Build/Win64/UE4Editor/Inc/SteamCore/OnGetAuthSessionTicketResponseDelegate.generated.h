// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetAuthSessionTicketResponse;
#ifdef STEAMCORE_OnGetAuthSessionTicketResponseDelegate_generated_h
#error "OnGetAuthSessionTicketResponseDelegate.generated.h already included, missing '#pragma once' in OnGetAuthSessionTicketResponseDelegate.h"
#endif
#define STEAMCORE_OnGetAuthSessionTicketResponseDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetAuthSessionTicketResponseDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms \
{ \
	FGetAuthSessionTicketResponse Data; \
}; \
static inline void FOnGetAuthSessionTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetAuthSessionTicketResponse, FGetAuthSessionTicketResponse const& Data) \
{ \
	_Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms Parms; \
	Parms.Data=Data; \
	OnGetAuthSessionTicketResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGetAuthSessionTicketResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
