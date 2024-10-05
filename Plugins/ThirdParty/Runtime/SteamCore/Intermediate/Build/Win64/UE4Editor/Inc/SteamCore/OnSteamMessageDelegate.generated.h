// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamMessageType : uint8;
#ifdef STEAMCORE_OnSteamMessageDelegate_generated_h
#error "OnSteamMessageDelegate.generated.h already included, missing '#pragma once' in OnSteamMessageDelegate.h"
#endif
#define STEAMCORE_OnSteamMessageDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamMessageDelegate_h_6_DELEGATE \
struct _Script_SteamCore_eventOnSteamMessage_Parms \
{ \
	ESteamMessageType Type; \
	FString Message; \
}; \
static inline void FOnSteamMessage_DelegateWrapper(const FScriptDelegate& OnSteamMessage, ESteamMessageType Type, const FString& Message) \
{ \
	_Script_SteamCore_eventOnSteamMessage_Parms Parms; \
	Parms.Type=Type; \
	Parms.Message=Message; \
	OnSteamMessage.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_OnSteamMessageDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
