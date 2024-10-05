// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
struct FVector;
struct FRotator;
enum class EPlayerAnalyticsEventType : uint8;
struct FPlayerAnalyticsSession;
struct FPlayerAnalyticsPlayer;
struct FColor;
#ifdef PLAYERANALYTICS_PlayerAnalyticsSubsystem_generated_h
#error "PlayerAnalyticsSubsystem.generated.h already included, missing '#pragma once' in PlayerAnalyticsSubsystem.h"
#endif
#define PLAYERANALYTICS_PlayerAnalyticsSubsystem_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAnalyticsEvent); \
	DECLARE_FUNCTION(execAddGlobalAnalyticsEvent); \
	DECLARE_FUNCTION(execCalculateAverageTimeBetweenObjectives); \
	DECLARE_FUNCTION(execCalculateTimeBetweenObjectives); \
	DECLARE_FUNCTION(execDebugPlayerAnalytics); \
	DECLARE_FUNCTION(execGetAnalyticsFileName); \
	DECLARE_FUNCTION(execGetAverageTimeBetweenDeathsForPlayer); \
	DECLARE_FUNCTION(execGetCurrentSession); \
	DECLARE_FUNCTION(execGetIsRecording); \
	DECLARE_FUNCTION(execGetLastEventTime); \
	DECLARE_FUNCTION(execGetPlayerColor); \
	DECLARE_FUNCTION(execGetPlayerLastKnownLocation); \
	DECLARE_FUNCTION(execGetTotalDeathsForPlayer); \
	DECLARE_FUNCTION(execInitializeSession); \
	DECLARE_FUNCTION(execInitializeSessionColors); \
	DECLARE_FUNCTION(execLoadCurrentSession); \
	DECLARE_FUNCTION(execLoadMultipleSessions); \
	DECLARE_FUNCTION(execLoadSession); \
	DECLARE_FUNCTION(execSaveCurrentSession); \
	DECLARE_FUNCTION(execSaveSession);


#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAnalyticsEvent); \
	DECLARE_FUNCTION(execAddGlobalAnalyticsEvent); \
	DECLARE_FUNCTION(execCalculateAverageTimeBetweenObjectives); \
	DECLARE_FUNCTION(execCalculateTimeBetweenObjectives); \
	DECLARE_FUNCTION(execDebugPlayerAnalytics); \
	DECLARE_FUNCTION(execGetAnalyticsFileName); \
	DECLARE_FUNCTION(execGetAverageTimeBetweenDeathsForPlayer); \
	DECLARE_FUNCTION(execGetCurrentSession); \
	DECLARE_FUNCTION(execGetIsRecording); \
	DECLARE_FUNCTION(execGetLastEventTime); \
	DECLARE_FUNCTION(execGetPlayerColor); \
	DECLARE_FUNCTION(execGetPlayerLastKnownLocation); \
	DECLARE_FUNCTION(execGetTotalDeathsForPlayer); \
	DECLARE_FUNCTION(execInitializeSession); \
	DECLARE_FUNCTION(execInitializeSessionColors); \
	DECLARE_FUNCTION(execLoadCurrentSession); \
	DECLARE_FUNCTION(execLoadMultipleSessions); \
	DECLARE_FUNCTION(execLoadSession); \
	DECLARE_FUNCTION(execSaveCurrentSession); \
	DECLARE_FUNCTION(execSaveSession);


#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnalyticsSubsystem(); \
	friend struct Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnalyticsSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayerAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnalyticsSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAnalyticsSubsystem(); \
	friend struct Z_Construct_UClass_UPlayerAnalyticsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnalyticsSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayerAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnalyticsSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnalyticsSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnalyticsSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnalyticsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnalyticsSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnalyticsSubsystem(UPlayerAnalyticsSubsystem&&); \
	NO_API UPlayerAnalyticsSubsystem(const UPlayerAnalyticsSubsystem&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnalyticsSubsystem(UPlayerAnalyticsSubsystem&&); \
	NO_API UPlayerAnalyticsSubsystem(const UPlayerAnalyticsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnalyticsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnalyticsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAnalyticsSubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnalyticsMask() { return STRUCT_OFFSET(UPlayerAnalyticsSubsystem, AnalyticsMask); }


#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_14_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYERANALYTICS_API UClass* StaticClass<class UPlayerAnalyticsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_PlayerAnalytics_Source_PlayerAnalytics_Public_PlayerAnalyticsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
