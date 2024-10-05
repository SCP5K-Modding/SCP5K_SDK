// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_SAIPatrolPoint_generated_h
#error "SAIPatrolPoint.generated.h already included, missing '#pragma once' in SAIPatrolPoint.h"
#endif
#define AISENTIENCE_SAIPatrolPoint_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPatrolWaitTime);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPatrolWaitTime);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAIPatrolPoint(); \
	friend struct Z_Construct_UClass_ASAIPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(ASAIPatrolPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIPatrolPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASAIPatrolPoint(); \
	friend struct Z_Construct_UClass_ASAIPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(ASAIPatrolPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIPatrolPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAIPatrolPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIPatrolPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIPatrolPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIPatrolPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIPatrolPoint(ASAIPatrolPoint&&); \
	NO_API ASAIPatrolPoint(const ASAIPatrolPoint&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIPatrolPoint(ASAIPatrolPoint&&); \
	NO_API ASAIPatrolPoint(const ASAIPatrolPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIPatrolPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIPatrolPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIPatrolPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PatrolWaitTime() { return STRUCT_OFFSET(ASAIPatrolPoint, PatrolWaitTime); } \
	FORCEINLINE static uint32 __PPO__PatrolPoint() { return STRUCT_OFFSET(ASAIPatrolPoint, PatrolPoint); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class ASAIPatrolPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIPatrolPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
