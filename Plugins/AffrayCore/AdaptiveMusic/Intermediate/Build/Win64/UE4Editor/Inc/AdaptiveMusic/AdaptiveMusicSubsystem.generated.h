// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFMODEvent;
class AAdaptiveMusicVolume;
class APlayerController;
#ifdef ADAPTIVEMUSIC_AdaptiveMusicSubsystem_generated_h
#error "AdaptiveMusicSubsystem.generated.h already included, missing '#pragma once' in AdaptiveMusicSubsystem.h"
#endif
#define ADAPTIVEMUSIC_AdaptiveMusicSubsystem_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_RPC_WRAPPERS \
	virtual float GetDangerLevel_Implementation() const; \
	virtual float GetEnemyProximity_Implementation() const; \
	virtual float GetHealth_Implementation() const; \
	virtual float GetIntensityLevel_Implementation() const; \
	virtual TArray<uint8> GetSurroundingEnemyTypes_Implementation() const; \
	virtual float GetTeamProximity_Implementation() const; \
 \
	DECLARE_FUNCTION(execBeginEncounter); \
	DECLARE_FUNCTION(execEndEncounter); \
	DECLARE_FUNCTION(execEnterArea); \
	DECLARE_FUNCTION(execExitArea); \
	DECLARE_FUNCTION(execGetDangerLevel); \
	DECLARE_FUNCTION(execGetEnemyProximity); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetIntensityLevel); \
	DECLARE_FUNCTION(execGetSurroundingEnemyTypes); \
	DECLARE_FUNCTION(execGetTeamProximity); \
	DECLARE_FUNCTION(execPlayAreaTrack); \
	DECLARE_FUNCTION(execPlayTrack); \
	DECLARE_FUNCTION(execRegisterMusicPlayerController); \
	DECLARE_FUNCTION(execStopTrack);


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetDangerLevel_Implementation() const; \
	virtual float GetEnemyProximity_Implementation() const; \
	virtual float GetHealth_Implementation() const; \
	virtual float GetIntensityLevel_Implementation() const; \
	virtual TArray<uint8> GetSurroundingEnemyTypes_Implementation() const; \
	virtual float GetTeamProximity_Implementation() const; \
 \
	DECLARE_FUNCTION(execBeginEncounter); \
	DECLARE_FUNCTION(execEndEncounter); \
	DECLARE_FUNCTION(execEnterArea); \
	DECLARE_FUNCTION(execExitArea); \
	DECLARE_FUNCTION(execGetDangerLevel); \
	DECLARE_FUNCTION(execGetEnemyProximity); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetIntensityLevel); \
	DECLARE_FUNCTION(execGetSurroundingEnemyTypes); \
	DECLARE_FUNCTION(execGetTeamProximity); \
	DECLARE_FUNCTION(execPlayAreaTrack); \
	DECLARE_FUNCTION(execPlayTrack); \
	DECLARE_FUNCTION(execRegisterMusicPlayerController); \
	DECLARE_FUNCTION(execStopTrack);


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_EVENT_PARMS \
	struct AdaptiveMusicSubsystem_eventGetDangerLevel_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdaptiveMusicSubsystem_eventGetDangerLevel_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdaptiveMusicSubsystem_eventGetEnemyProximity_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdaptiveMusicSubsystem_eventGetEnemyProximity_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdaptiveMusicSubsystem_eventGetHealth_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdaptiveMusicSubsystem_eventGetHealth_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdaptiveMusicSubsystem_eventGetIntensityLevel_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdaptiveMusicSubsystem_eventGetIntensityLevel_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct AdaptiveMusicSubsystem_eventGetSurroundingEnemyTypes_Parms \
	{ \
		TArray<uint8> ReturnValue; \
	}; \
	struct AdaptiveMusicSubsystem_eventGetTeamProximity_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AdaptiveMusicSubsystem_eventGetTeamProximity_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdaptiveMusicSubsystem(); \
	friend struct Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAdaptiveMusicSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdaptiveMusic"), NO_API) \
	DECLARE_SERIALIZER(UAdaptiveMusicSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAdaptiveMusicSubsystem(); \
	friend struct Z_Construct_UClass_UAdaptiveMusicSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAdaptiveMusicSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdaptiveMusic"), NO_API) \
	DECLARE_SERIALIZER(UAdaptiveMusicSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdaptiveMusicSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdaptiveMusicSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdaptiveMusicSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdaptiveMusicSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdaptiveMusicSubsystem(UAdaptiveMusicSubsystem&&); \
	NO_API UAdaptiveMusicSubsystem(const UAdaptiveMusicSubsystem&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdaptiveMusicSubsystem(UAdaptiveMusicSubsystem&&); \
	NO_API UAdaptiveMusicSubsystem(const UAdaptiveMusicSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdaptiveMusicSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdaptiveMusicSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAdaptiveMusicSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UpdateDelay() { return STRUCT_OFFSET(UAdaptiveMusicSubsystem, UpdateDelay); } \
	FORCEINLINE static uint32 __PPO__TraceTypes() { return STRUCT_OFFSET(UAdaptiveMusicSubsystem, TraceTypes); }


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_11_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTIVEMUSIC_API UClass* StaticClass<class UAdaptiveMusicSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AdaptiveMusic_Source_AdaptiveMusic_Public_AdaptiveMusicSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
