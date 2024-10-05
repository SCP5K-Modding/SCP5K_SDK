// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FBallisticProjectileData;
class UDamageType;
struct FRandomStream;
struct FVector;
struct FHitResult;
struct FProjectileData;
class UBallisticPhysicsMaterial;
struct FBallisticHitData;
class UStaticMesh;
#ifdef FPSCONTROLLER_FPSBallistics_generated_h
#error "FPSBallistics.generated.h already included, missing '#pragma once' in FPSBallistics.h"
#endif
#define FPSCONTROLLER_FPSBallistics_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyBallisticDamage); \
	DECLARE_FUNCTION(execCalculateBallistics); \
	DECLARE_FUNCTION(execCalculateSpread); \
	DECLARE_FUNCTION(execConvertFromByte); \
	DECLARE_FUNCTION(execConvertToByte); \
	DECLARE_FUNCTION(execDidHitSurface); \
	DECLARE_FUNCTION(execGetBallisticDamage); \
	DECLARE_FUNCTION(execGetResultingImpactVelocity); \
	DECLARE_FUNCTION(execSimulateBallistics); \
	DECLARE_FUNCTION(execSpawnBallisticEffects); \
	DECLARE_FUNCTION(execVerifyBallistics);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyBallisticDamage); \
	DECLARE_FUNCTION(execCalculateBallistics); \
	DECLARE_FUNCTION(execCalculateSpread); \
	DECLARE_FUNCTION(execConvertFromByte); \
	DECLARE_FUNCTION(execConvertToByte); \
	DECLARE_FUNCTION(execDidHitSurface); \
	DECLARE_FUNCTION(execGetBallisticDamage); \
	DECLARE_FUNCTION(execGetResultingImpactVelocity); \
	DECLARE_FUNCTION(execSimulateBallistics); \
	DECLARE_FUNCTION(execSpawnBallisticEffects); \
	DECLARE_FUNCTION(execVerifyBallistics);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSBallistics(); \
	friend struct Z_Construct_UClass_UFPSBallistics_Statics; \
public: \
	DECLARE_CLASS(UFPSBallistics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFPSBallistics)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFPSBallistics(); \
	friend struct Z_Construct_UClass_UFPSBallistics_Statics; \
public: \
	DECLARE_CLASS(UFPSBallistics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFPSBallistics)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSBallistics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSBallistics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSBallistics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSBallistics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSBallistics(UFPSBallistics&&); \
	NO_API UFPSBallistics(const UFPSBallistics&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSBallistics(UFPSBallistics&&); \
	NO_API UFPSBallistics(const UFPSBallistics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSBallistics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSBallistics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFPSBallistics)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_18_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UFPSBallistics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBallistics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
