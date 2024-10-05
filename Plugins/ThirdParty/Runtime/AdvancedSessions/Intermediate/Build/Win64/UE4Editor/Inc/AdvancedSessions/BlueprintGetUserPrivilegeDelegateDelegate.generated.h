// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPUserPrivileges : uint8;
#ifdef ADVANCEDSESSIONS_BlueprintGetUserPrivilegeDelegateDelegate_generated_h
#error "BlueprintGetUserPrivilegeDelegateDelegate.generated.h already included, missing '#pragma once' in BlueprintGetUserPrivilegeDelegateDelegate.h"
#endif
#define ADVANCEDSESSIONS_BlueprintGetUserPrivilegeDelegateDelegate_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_BlueprintGetUserPrivilegeDelegateDelegate_h_6_DELEGATE \
struct _Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms \
{ \
	EBPUserPrivileges QueriedPrivilege; \
	bool HadPrivilege; \
}; \
static inline void FBlueprintGetUserPrivilegeDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGetUserPrivilegeDelegate, EBPUserPrivileges QueriedPrivilege, bool HadPrivilege) \
{ \
	_Script_AdvancedSessions_eventBlueprintGetUserPrivilegeDelegate_Parms Parms; \
	Parms.QueriedPrivilege=QueriedPrivilege; \
	Parms.HadPrivilege=HadPrivilege ? true : false; \
	BlueprintGetUserPrivilegeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_BlueprintGetUserPrivilegeDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
