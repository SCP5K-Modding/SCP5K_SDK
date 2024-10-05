// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_ESteamCoreInputType_generated_h
#error "ESteamCoreInputType.generated.h already included, missing '#pragma once' in ESteamCoreInputType.h"
#endif
#define STEAMCORE_ESteamCoreInputType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_ESteamCoreInputType_h


#define FOREACH_ENUM_ESTEAMCOREINPUTTYPE(op) \
	op(ESteamCoreInputType::Unknown) \
	op(ESteamCoreInputType::SteamController) \
	op(ESteamCoreInputType::XBox360Controller) \
	op(ESteamCoreInputType::XBoxOneController) \
	op(ESteamCoreInputType::GenericGamepad) \
	op(ESteamCoreInputType::PS4Controller) \
	op(ESteamCoreInputType::AppleMFiController) \
	op(ESteamCoreInputType::AndroidController) \
	op(ESteamCoreInputType::SwitchJoyConPair) \
	op(ESteamCoreInputType::SwitchJoyConSingle) \
	op(ESteamCoreInputType::SwitchProController) \
	op(ESteamCoreInputType::MobileTouch) \
	op(ESteamCoreInputType::PS3Controller) \
	op(ESteamCoreInputType::Count) \
	op(ESteamCoreInputType::MaximumPossibleValue) 

enum class ESteamCoreInputType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
