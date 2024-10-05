// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USAIPointOfInterest;
struct FVector;
class AActor;
class USAIComponent;
class ASAIPatrolPath;
class ACharacter;
#ifdef AISENTIENCE_SAIManager_generated_h
#error "SAIManager.generated.h already included, missing '#pragma once' in SAIManager.h"
#endif
#define AISENTIENCE_SAIManager_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPointOfInterest); \
	DECLARE_FUNCTION(execGetInterestPoints); \
	DECLARE_FUNCTION(execGetRelevantPointOfInterest); \
	DECLARE_FUNCTION(execInitializeAI); \
	DECLARE_FUNCTION(execInitializePatrol); \
	DECLARE_FUNCTION(execInitializeSquad); \
	DECLARE_FUNCTION(execRemovePointOfInterest);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPointOfInterest); \
	DECLARE_FUNCTION(execGetInterestPoints); \
	DECLARE_FUNCTION(execGetRelevantPointOfInterest); \
	DECLARE_FUNCTION(execInitializeAI); \
	DECLARE_FUNCTION(execInitializePatrol); \
	DECLARE_FUNCTION(execInitializeSquad); \
	DECLARE_FUNCTION(execRemovePointOfInterest);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAIManager(); \
	friend struct Z_Construct_UClass_ASAIManager_Statics; \
public: \
	DECLARE_CLASS(ASAIManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIManager)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASAIManager(); \
	friend struct Z_Construct_UClass_ASAIManager_Statics; \
public: \
	DECLARE_CLASS(ASAIManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIManager)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAIManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIManager(ASAIManager&&); \
	NO_API ASAIManager(const ASAIManager&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIManager(ASAIManager&&); \
	NO_API ASAIManager(const ASAIManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIManager)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EditorIcon() { return STRUCT_OFFSET(ASAIManager, EditorIcon); } \
	FORCEINLINE static uint32 __PPO__AllInterestPoints() { return STRUCT_OFFSET(ASAIManager, AllInterestPoints); } \
	FORCEINLINE static uint32 __PPO__AllPatrols() { return STRUCT_OFFSET(ASAIManager, AllPatrols); } \
	FORCEINLINE static uint32 __PPO__AllSquads() { return STRUCT_OFFSET(ASAIManager, AllSquads); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_14_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class ASAIManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
