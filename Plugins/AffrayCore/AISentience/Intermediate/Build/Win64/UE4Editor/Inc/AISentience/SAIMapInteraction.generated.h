// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIInteractionAnimations;
#ifdef AISENTIENCE_SAIMapInteraction_generated_h
#error "SAIMapInteraction.generated.h already included, missing '#pragma once' in SAIMapInteraction.h"
#endif
#define AISENTIENCE_SAIMapInteraction_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChanceToInteract); \
	DECLARE_FUNCTION(execGetInteractionAnims); \
	DECLARE_FUNCTION(execIsLooping);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChanceToInteract); \
	DECLARE_FUNCTION(execGetInteractionAnims); \
	DECLARE_FUNCTION(execIsLooping);


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAIMapInteraction(); \
	friend struct Z_Construct_UClass_ASAIMapInteraction_Statics; \
public: \
	DECLARE_CLASS(ASAIMapInteraction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIMapInteraction)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASAIMapInteraction(); \
	friend struct Z_Construct_UClass_ASAIMapInteraction_Statics; \
public: \
	DECLARE_CLASS(ASAIMapInteraction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AISentience"), NO_API) \
	DECLARE_SERIALIZER(ASAIMapInteraction)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAIMapInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIMapInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIMapInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIMapInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIMapInteraction(ASAIMapInteraction&&); \
	NO_API ASAIMapInteraction(const ASAIMapInteraction&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAIMapInteraction(ASAIMapInteraction&&); \
	NO_API ASAIMapInteraction(const ASAIMapInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIMapInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIMapInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIMapInteraction)


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MapInteraction() { return STRUCT_OFFSET(ASAIMapInteraction, MapInteraction); } \
	FORCEINLINE static uint32 __PPO__InteractionRange() { return STRUCT_OFFSET(ASAIMapInteraction, InteractionRange); } \
	FORCEINLINE static uint32 __PPO__ChanceToInteract() { return STRUCT_OFFSET(ASAIMapInteraction, ChanceToInteract); } \
	FORCEINLINE static uint32 __PPO__bShouldLoop() { return STRUCT_OFFSET(ASAIMapInteraction, bShouldLoop); } \
	FORCEINLINE static uint32 __PPO__InteractionAnims() { return STRUCT_OFFSET(ASAIMapInteraction, InteractionAnims); }


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_10_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AISENTIENCE_API UClass* StaticClass<class ASAIMapInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AISentience_Source_AISentience_Public_SAIMapInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
