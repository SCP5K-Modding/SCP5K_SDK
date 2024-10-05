// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamCheckFileSignature_generated_h
#error "ESteamCheckFileSignature.generated.h already included, missing '#pragma once' in ESteamCheckFileSignature.h"
#endif
#define STEAMCORE_ESteamCheckFileSignature_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamCheckFileSignature_h


#define FOREACH_ENUM_ESTEAMCHECKFILESIGNATURE(op) \
	op(ESteamCheckFileSignature::InvalidSignature) \
	op(ESteamCheckFileSignature::ValidSignature) \
	op(ESteamCheckFileSignature::FileNotFound) \
	op(ESteamCheckFileSignature::NoSignaturesFoundForThisApp) \
	op(ESteamCheckFileSignature::NoSignaturesFoundForThisFile) 

enum class ESteamCheckFileSignature : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCheckFileSignature>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
