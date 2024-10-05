// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USAIPointOfInterest;
struct FGuid;
class USAISquadComponent;
struct FVector;
class AActor;
#ifdef AISENTIENCE_SAISubsystem_generated_h
#error "SAISubsystem.generated.h already included, missing '#pragma once' in SAISubsystem.h"
#endif
#define AISENTIENCE_SAISubsystem_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPointOfInterest); \
	DECLARE_FUNCTION(execGetLeader); \
	DECLARE_FUNCTION(execGetRelevantPointOfInterest); \
	DECLARE_FUNCTION(execRemovePointOfInterest);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPointOfInterest); \
	DECLARE_FUNCTION(execGetLeader); \
	DECLARE_FUNCTION(execGetRelevantPointOfInterest); \
	DECLARE_FUNCTION(execRemovePointOfInterest);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAISubsystem(); \
	friend struct Z_Construct_UClass_USAISubsystem_Statics; \
public: \
	DECLARE_CLASS(USAISubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(USAISubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSAISubsystem(); \
	friend struct Z_Construct_UClass_USAISubsystem_Statics; \
public: \
	DECLARE_CLASS(USAISubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(USAISubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAISubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAISubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAISubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAISubsystem(USAISubsystem&&); \
	NO_API USAISubsystem(const USAISubsystem&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAISubsystem(USAISubsystem&&); \
	NO_API USAISubsystem(const USAISubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USAISubsystem)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_13_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class USAISubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAISubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
