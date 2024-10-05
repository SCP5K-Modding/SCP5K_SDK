// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDiscordGatewaySocket;
#ifdef DISCORDGATEWAY_DiscordGatewaySocketEventDelegate_generated_h
#error "DiscordGatewaySocketEventDelegate.generated.h already included, missing '#pragma once' in DiscordGatewaySocketEventDelegate.h"
#endif
#define DISCORDGATEWAY_DiscordGatewaySocketEventDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordGateway_Public_DiscordGatewaySocketEventDelegate_h_7_DELEGATE \
struct _Script_DiscordGateway_eventDiscordGatewaySocketEvent_Parms \
{ \
	UDiscordGatewaySocket* Socket; \
	int32 OpCode; \
	FString Data; \
	int32 Sequence; \
	FString EventName; \
}; \
static inline void FDiscordGatewaySocketEvent_DelegateWrapper(const FMulticastScriptDelegate& DiscordGatewaySocketEvent, UDiscordGatewaySocket* Socket, const int32 OpCode, const FString& Data, const int32 Sequence, const FString& EventName) \
{ \
	_Script_DiscordGateway_eventDiscordGatewaySocketEvent_Parms Parms; \
	Parms.Socket=Socket; \
	Parms.OpCode=OpCode; \
	Parms.Data=Data; \
	Parms.Sequence=Sequence; \
	Parms.EventName=EventName; \
	DiscordGatewaySocketEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_DiscordFeatures_Source_DiscordGateway_Public_DiscordGatewaySocketEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
