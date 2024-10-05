// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamP2PSend_generated_h
#error "ESteamP2PSend.generated.h already included, missing '#pragma once' in ESteamP2PSend.h"
#endif
#define STEAMCORE_ESteamP2PSend_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamP2PSend_h


#define FOREACH_ENUM_ESTEAMP2PSEND(op) \
	op(ESteamP2PSend::Unreliable) \
	op(ESteamP2PSend::UnreliableNoDelay) \
	op(ESteamP2PSend::Reliable) \
	op(ESteamP2PSend::ReliableWithBuffering) 

enum class ESteamP2PSend : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSend>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
