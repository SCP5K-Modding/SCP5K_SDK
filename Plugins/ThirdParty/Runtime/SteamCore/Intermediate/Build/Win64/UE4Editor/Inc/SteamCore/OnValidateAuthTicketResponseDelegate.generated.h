// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FValidateAuthTicketResponse;
#ifdef STEAMCORE_OnValidateAuthTicketResponseDelegate_generated_h
#error "OnValidateAuthTicketResponseDelegate.generated.h already included, missing '#pragma once' in OnValidateAuthTicketResponseDelegate.h"
#endif
#define STEAMCORE_OnValidateAuthTicketResponseDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnValidateAuthTicketResponseDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnValidateAuthTicketResponse_Parms \
{ \
	FValidateAuthTicketResponse Data; \
}; \
static inline void FOnValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data) \
{ \
	_Script_SteamCore_eventOnValidateAuthTicketResponse_Parms Parms; \
	Parms.Data=Data; \
	OnValidateAuthTicketResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnValidateAuthTicketResponseDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
