// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_EPlayerActionReturn_generated_h
#error "EPlayerActionReturn.generated.h already included, missing '#pragma once' in EPlayerActionReturn.h"
#endif
#define USERINTERFACE_EPlayerActionReturn_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_EPlayerActionReturn_h


#define FOREACH_ENUM_EPLAYERACTIONRETURN(op) \
	op(EPlayerActionReturn::Blocked) \
	op(EPlayerActionReturn::Unblocked) \
	op(EPlayerActionReturn::AlreadyBlocked) \
	op(EPlayerActionReturn::AlreadyUnblocked) 

enum class EPlayerActionReturn : uint8;
template<> USERINTERFACE_API UEnum* StaticEnum<EPlayerActionReturn>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
