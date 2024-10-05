// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPUniqueNetId;
#ifdef ADVANCEDSESSIONS_AdvancedVoiceLibrary_generated_h
#error "AdvancedVoiceLibrary.generated.h already included, missing '#pragma once' in AdvancedVoiceLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedVoiceLibrary_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumLocalTalkers); \
	DECLARE_FUNCTION(execIsHeadsetPresent); \
	DECLARE_FUNCTION(execIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execIsRemotePlayerTalking); \
	DECLARE_FUNCTION(execMuteRemoteTalker); \
	DECLARE_FUNCTION(execRegisterAllLocalTalkers); \
	DECLARE_FUNCTION(execRegisterLocalTalker); \
	DECLARE_FUNCTION(execRegisterRemoteTalker); \
	DECLARE_FUNCTION(execRemoveAllRemoteTalkers); \
	DECLARE_FUNCTION(execStartNetworkedVoice); \
	DECLARE_FUNCTION(execStopNetworkedVoice); \
	DECLARE_FUNCTION(execUnMuteRemoteTalker); \
	DECLARE_FUNCTION(execUnRegisterAllLocalTalkers); \
	DECLARE_FUNCTION(execUnRegisterLocalTalker); \
	DECLARE_FUNCTION(execUnRegisterRemoteTalker);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumLocalTalkers); \
	DECLARE_FUNCTION(execIsHeadsetPresent); \
	DECLARE_FUNCTION(execIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execIsRemotePlayerTalking); \
	DECLARE_FUNCTION(execMuteRemoteTalker); \
	DECLARE_FUNCTION(execRegisterAllLocalTalkers); \
	DECLARE_FUNCTION(execRegisterLocalTalker); \
	DECLARE_FUNCTION(execRegisterRemoteTalker); \
	DECLARE_FUNCTION(execRemoveAllRemoteTalkers); \
	DECLARE_FUNCTION(execStartNetworkedVoice); \
	DECLARE_FUNCTION(execStopNetworkedVoice); \
	DECLARE_FUNCTION(execUnMuteRemoteTalker); \
	DECLARE_FUNCTION(execUnRegisterAllLocalTalkers); \
	DECLARE_FUNCTION(execUnRegisterLocalTalker); \
	DECLARE_FUNCTION(execUnRegisterRemoteTalker);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedVoiceLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedVoiceLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedVoiceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedVoiceLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedVoiceLibrary(); \
	friend struct Z_Construct_UClass_UAdvancedVoiceLibrary_Statics; \
public: \
	DECLARE_CLASS(UAdvancedVoiceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedVoiceLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedVoiceLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedVoiceLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedVoiceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedVoiceLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedVoiceLibrary(UAdvancedVoiceLibrary&&); \
	NO_API UAdvancedVoiceLibrary(const UAdvancedVoiceLibrary&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedVoiceLibrary(UAdvancedVoiceLibrary&&); \
	NO_API UAdvancedVoiceLibrary(const UAdvancedVoiceLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedVoiceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedVoiceLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdvancedVoiceLibrary)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_7_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedVoiceLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_AdvancedSessions_Source_AdvancedSessions_Public_AdvancedVoiceLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
