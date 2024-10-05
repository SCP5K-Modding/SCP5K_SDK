// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamP2PSessionState_generated_h
#error "SteamP2PSessionState.generated.h already included, missing '#pragma once' in SteamP2PSessionState.h"
#endif
#define STEAMCORE_SteamP2PSessionState_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamP2PSessionState_h_8_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__bConnectionActive() { return STRUCT_OFFSET(FSteamP2PSessionState, bConnectionActive); } \
	FORCEINLINE static uint32 __PPO__bConnecting() { return STRUCT_OFFSET(FSteamP2PSessionState, bConnecting); } \
	FORCEINLINE static uint32 __PPO__P2PSessionError() { return STRUCT_OFFSET(FSteamP2PSessionState, P2PSessionError); } \
	FORCEINLINE static uint32 __PPO__bUsingRelay() { return STRUCT_OFFSET(FSteamP2PSessionState, bUsingRelay); } \
	FORCEINLINE static uint32 __PPO__BytesQueuedForSend() { return STRUCT_OFFSET(FSteamP2PSessionState, BytesQueuedForSend); } \
	FORCEINLINE static uint32 __PPO__PacketsQueuedForSend() { return STRUCT_OFFSET(FSteamP2PSessionState, PacketsQueuedForSend); } \
	FORCEINLINE static uint32 __PPO__RemoteIP() { return STRUCT_OFFSET(FSteamP2PSessionState, RemoteIP); } \
	FORCEINLINE static uint32 __PPO__RemotePort() { return STRUCT_OFFSET(FSteamP2PSessionState, RemotePort); }


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamP2PSessionState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_SteamCore_Source_SteamCore_Public_SteamP2PSessionState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
