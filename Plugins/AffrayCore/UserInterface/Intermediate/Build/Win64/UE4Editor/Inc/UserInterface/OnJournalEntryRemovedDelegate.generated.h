// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJournal;
#ifdef USERINTERFACE_OnJournalEntryRemovedDelegate_generated_h
#error "OnJournalEntryRemovedDelegate.generated.h already included, missing '#pragma once' in OnJournalEntryRemovedDelegate.h"
#endif
#define USERINTERFACE_OnJournalEntryRemovedDelegate_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_OnJournalEntryRemovedDelegate_h_6_DELEGATE \
struct _Script_UserInterface_eventOnJournalEntryRemoved_Parms \
{ \
	FJournal JournalEntry; \
}; \
static inline void FOnJournalEntryRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnJournalEntryRemoved, FJournal JournalEntry) \
{ \
	_Script_UserInterface_eventOnJournalEntryRemoved_Parms Parms; \
	Parms.JournalEntry=JournalEntry; \
	OnJournalEntryRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_OnJournalEntryRemovedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
