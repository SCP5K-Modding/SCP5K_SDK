// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AISENTIENCE_SAIInterestPoint_generated_h
#error "SAIInterestPoint.generated.h already included, missing '#pragma once' in SAIInterestPoint.h"
#endif
#define AISENTIENCE_SAIInterestPoint_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPriority);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPriority);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAIInterestPoint(); \
	friend struct Z_Construct_UClass_ASAIInterestPoint_Statics; \
public: \
	DECLARE_CLASS(ASAIInterestPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIInterestPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASAIInterestPoint(); \
	friend struct Z_Construct_UClass_ASAIInterestPoint_Statics; \
public: \
	DECLARE_CLASS(ASAIInterestPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIInterestPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAIInterestPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIInterestPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIInterestPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIInterestPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIInterestPoint(ASAIInterestPoint&&); \
	NO_API ASAIInterestPoint(const ASAIInterestPoint&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIInterestPoint(ASAIInterestPoint&&); \
	NO_API ASAIInterestPoint(const ASAIInterestPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIInterestPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIInterestPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIInterestPoint)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InterestRoot() { return STRUCT_OFFSET(ASAIInterestPoint, InterestRoot); } \
	FORCEINLINE static uint32 __PPO__InterestPriority() { return STRUCT_OFFSET(ASAIInterestPoint, InterestPriority); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class ASAIInterestPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIInterestPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
