// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHordeAgent;
class APawn;
class AActor;
struct FAIStimulus;
#ifdef AIHORDES_HordeAgentController_generated_h
#error "HordeAgentController.generated.h already included, missing '#pragma once' in HordeAgentController.h"
#endif
#define AIHORDES_HordeAgentController_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHordeAgent); \
	DECLARE_FUNCTION(execGetSeenTargets); \
	DECLARE_FUNCTION(execOnVisibleTargetUpdated);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHordeAgent); \
	DECLARE_FUNCTION(execGetSeenTargets); \
	DECLARE_FUNCTION(execOnVisibleTargetUpdated);


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHordeAgentController(); \
	friend struct Z_Construct_UClass_AHordeAgentController_Statics; \
public: \
	DECLARE_CLASS(AHordeAgentController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHordeAgentController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAHordeAgentController(); \
	friend struct Z_Construct_UClass_AHordeAgentController_Statics; \
public: \
	DECLARE_CLASS(AHordeAgentController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIHordes"), NO_API) \
	DECLARE_SERIALIZER(AHordeAgentController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHordeAgentController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHordeAgentController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHordeAgentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHordeAgentController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHordeAgentController(AHordeAgentController&&); \
	NO_API AHordeAgentController(const AHordeAgentController&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHordeAgentController(AHordeAgentController&&); \
	NO_API AHordeAgentController(const AHordeAgentController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHordeAgentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHordeAgentController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHordeAgentController)


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TeamID() { return STRUCT_OFFSET(AHordeAgentController, TeamID); } \
	FORCEINLINE static uint32 __PPO__SeenTargets() { return STRUCT_OFFSET(AHordeAgentController, SeenTargets); } \
	FORCEINLINE static uint32 __PPO__bEnableCrowdSeparation() { return STRUCT_OFFSET(AHordeAgentController, bEnableCrowdSeparation); } \
	FORCEINLINE static uint32 __PPO__bEnableCrowdObstacleAvoidance() { return STRUCT_OFFSET(AHordeAgentController, bEnableCrowdObstacleAvoidance); } \
	FORCEINLINE static uint32 __PPO__bEnableCrowdAnticipateTurns() { return STRUCT_OFFSET(AHordeAgentController, bEnableCrowdAnticipateTurns); } \
	FORCEINLINE static uint32 __PPO__bEnableCrowdOptimizeVisibility() { return STRUCT_OFFSET(AHordeAgentController, bEnableCrowdOptimizeVisibility); } \
	FORCEINLINE static uint32 __PPO__bEnableCrowdPathOffset() { return STRUCT_OFFSET(AHordeAgentController, bEnableCrowdPathOffset); } \
	FORCEINLINE static uint32 __PPO__CrowdSeparationWeight() { return STRUCT_OFFSET(AHordeAgentController, CrowdSeparationWeight); }


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_12_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIHORDES_API UClass* StaticClass<class AHordeAgentController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_AIHordes_Source_AIHordes_Public_HordeAgentController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
