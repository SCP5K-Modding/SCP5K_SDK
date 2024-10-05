// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJournalEntry;
#ifdef USERINTERFACE_JournalEntryLoadedDelegate_generated_h
#error "JournalEntryLoadedDelegate.generated.h already included, missing '#pragma once' in JournalEntryLoadedDelegate.h"
#endif
#define USERINTERFACE_JournalEntryLoadedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalEntryLoadedDelegate_h_7_DELEGATE \
struct _Script_UserInterface_eventJournalEntryLoaded_Parms \
{ \
	UJournalEntry* JournalEntry; \
}; \
static inline void FJournalEntryLoaded_DelegateWrapper(const FMulticastScriptDelegate& JournalEntryLoaded, UJournalEntry* JournalEntry) \
{ \
	_Script_UserInterface_eventJournalEntryLoaded_Parms Parms; \
	Parms.JournalEntry=JournalEntry; \
	JournalEntryLoaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_JournalEntryLoadedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
