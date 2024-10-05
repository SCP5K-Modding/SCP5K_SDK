// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_AddChatMessageDelegate_generated_h
#error "AddChatMessageDelegate.generated.h already included, missing '#pragma once' in AddChatMessageDelegate.h"
#endif
#define USERINTERFACE_AddChatMessageDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_AddChatMessageDelegate_h_5_DELEGATE \
struct _Script_UserInterface_eventAddChatMessage_Parms \
{ \
	FString Name; \
	FString Message; \
}; \
static inline void FAddChatMessage_DelegateWrapper(const FMulticastScriptDelegate& AddChatMessage, const FString& Name, const FString& Message) \
{ \
	_Script_UserInterface_eventAddChatMessage_Parms Parms; \
	Parms.Name=Name; \
	Parms.Message=Message; \
	AddChatMessage.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_AddChatMessageDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
