// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_AddNotifierDelegate_generated_h
#error "AddNotifierDelegate.generated.h already included, missing '#pragma once' in AddNotifierDelegate.h"
#endif
#define USERINTERFACE_AddNotifierDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_AddNotifierDelegate_h_5_DELEGATE \
struct _Script_UserInterface_eventAddNotifier_Parms \
{ \
	FText Notifier; \
}; \
static inline void FAddNotifier_DelegateWrapper(const FMulticastScriptDelegate& AddNotifier, FText const& Notifier) \
{ \
	_Script_UserInterface_eventAddNotifier_Parms Parms; \
	Parms.Notifier=Notifier; \
	AddNotifier.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_AddNotifierDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
