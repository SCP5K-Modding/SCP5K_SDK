// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYCONSOLE_MessageDelegateDelegate_generated_h
#error "MessageDelegateDelegate.generated.h already included, missing '#pragma once' in MessageDelegateDelegate.h"
#endif
#define GAMEPLAYCONSOLE_MessageDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_MessageDelegateDelegate_h_6_DELEGATE \
struct _Script_GameplayConsole_eventMessageDelegate_Parms \
{ \
	FString Text; \
	TEnumAsByte<EMessageType> MessageType; \
	FString Tooltip; \
}; \
static inline void FMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& MessageDelegate, const FString& Text, EMessageType MessageType, const FString& Tooltip) \
{ \
	_Script_GameplayConsole_eventMessageDelegate_Parms Parms; \
	Parms.Text=Text; \
	Parms.MessageType=MessageType; \
	Parms.Tooltip=Tooltip; \
	MessageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameplayConsole_Source_GameplayConsole_Public_MessageDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
