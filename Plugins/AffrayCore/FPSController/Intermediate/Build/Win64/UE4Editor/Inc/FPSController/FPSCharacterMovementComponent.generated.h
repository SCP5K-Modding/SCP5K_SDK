// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClimbableComponent;
struct FTransform;
class UAnimMontage;
#ifdef FPSCONTROLLER_FPSCharacterMovementComponent_generated_h
#error "FPSCharacterMovementComponent.generated.h already included, missing '#pragma once' in FPSCharacterMovementComponent.h"
#endif
#define FPSCONTROLLER_FPSCharacterMovementComponent_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnterClimb); \
	DECLARE_FUNCTION(execExitClimb); \
	DECLARE_FUNCTION(execGetCurrentClimbable); \
	DECLARE_FUNCTION(execIsCustomMovementMode); \
	DECLARE_FUNCTION(execStartSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execTransitionToPoint);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnterClimb); \
	DECLARE_FUNCTION(execExitClimb); \
	DECLARE_FUNCTION(execGetCurrentClimbable); \
	DECLARE_FUNCTION(execIsCustomMovementMode); \
	DECLARE_FUNCTION(execStartSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execTransitionToPoint);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UFPSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFPSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFPSCharacterMovementComponent)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFPSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UFPSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFPSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFPSCharacterMovementComponent)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSCharacterMovementComponent(UFPSCharacterMovementComponent&&); \
	NO_API UFPSCharacterMovementComponent(const UFPSCharacterMovementComponent&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSCharacterMovementComponent(UFPSCharacterMovementComponent&&); \
	NO_API UFPSCharacterMovementComponent(const UFPSCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSCharacterMovementComponent)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FPSCharacterOwner() { return STRUCT_OFFSET(UFPSCharacterMovementComponent, FPSCharacterOwner); } \
	FORCEINLINE static uint32 __PPO__bWantsSprint() { return STRUCT_OFFSET(UFPSCharacterMovementComponent, bWantsSprint); } \
	FORCEINLINE static uint32 __PPO__bWantsProne() { return STRUCT_OFFSET(UFPSCharacterMovementComponent, bWantsProne); } \
	FORCEINLINE static uint32 __PPO__bWantsAiming() { return STRUCT_OFFSET(UFPSCharacterMovementComponent, bWantsAiming); } \
	FORCEINLINE static uint32 __PPO__bWantsClimb() { return STRUCT_OFFSET(UFPSCharacterMovementComponent, bWantsClimb); } \
	FORCEINLINE static uint32 __PPO__MovementSpeedMultiplier() { return STRUCT_OFFSET(UFPSCharacterMovementComponent, MovementSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__ItemIndex() { return STRUCT_OFFSET(UFPSCharacterMovementComponent, ItemIndex); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_12_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UFPSCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
