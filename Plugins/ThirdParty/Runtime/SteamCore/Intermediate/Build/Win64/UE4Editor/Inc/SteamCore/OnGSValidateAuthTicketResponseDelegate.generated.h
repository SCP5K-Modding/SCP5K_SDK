// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FValidateAuthTicketResponse;
#ifdef STEAMCORE_OnGSValidateAuthTicketResponseDelegate_generated_h
#error "OnGSValidateAuthTicketResponseDelegate.generated.h already included, missing '#pragma once' in OnGSValidateAuthTicketResponseDelegate.h"
#endif
#define STEAMCORE_OnGSValidateAuthTicketResponseDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSValidateAuthTicketResponseDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms \
{ \
	FValidateAuthTicketResponse Data; \
}; \
static inline void FOnGSValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data) \
{ \
	_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms Parms; \
	Parms.Data=Data; \
	OnGSValidateAuthTicketResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnGSValidateAuthTicketResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
