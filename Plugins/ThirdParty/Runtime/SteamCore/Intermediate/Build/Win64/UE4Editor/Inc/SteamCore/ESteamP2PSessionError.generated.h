// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamP2PSessionError_generated_h
#error "ESteamP2PSessionError.generated.h already included, missing '#pragma once' in ESteamP2PSessionError.h"
#endif
#define STEAMCORE_ESteamP2PSessionError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamP2PSessionError_h


#define FOREACH_ENUM_ESTEAMP2PSESSIONERROR(op) \
	op(ESteamP2PSessionError::None) \
	op(ESteamP2PSessionError::NotRunningApp) \
	op(ESteamP2PSessionError::NoRightsToApp) \
	op(ESteamP2PSessionError::DestinationNotLoggedIn) \
	op(ESteamP2PSessionError::Timeout) \
	op(ESteamP2PSessionError::Max) 

enum class ESteamP2PSessionError : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSessionError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
