// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
struct FBallisticHitData;
class UAnimInstance;
class AFPSCharacterBase;
class UFPSRangedWeaponData;
class AFPSAttachment;
class UObject;
class UFPSItemData;
class AFPSItem;
class USkeletalMeshComponent;
struct FMeleeHitData;
struct FPrimaryAssetId;
struct FSimpleHitData;
class UFXSystemAsset;
class UFXSystemComponent;
struct FVector_NetQuantize;
struct FVector_NetQuantizeNormal;
class UPrimitiveComponent;
class AFPSItemPickup;
struct FFPSItemSlotData;
struct FTransform;
struct FConstantLerpDriver;
struct FLimitedSmoothLerpDriver;
struct FPhysicalLerpDriver;
struct FSmoothLerpDriver;
#ifdef FPSCONTROLLER_FPSControllerFunctionLibrary_generated_h
#error "FPSControllerFunctionLibrary.generated.h already included, missing '#pragma once' in FPSControllerFunctionLibrary.h"
#endif
#define FPSCONTROLLER_FPSControllerFunctionLibrary_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertRotationToItemSpace); \
	DECLARE_FUNCTION(execConvertVectorToItemSpace); \
	DECLARE_FUNCTION(execCubicInterpFloat); \
	DECLARE_FUNCTION(execCubicInterpVector); \
	DECLARE_FUNCTION(execGetBallisticBoneName); \
	DECLARE_FUNCTION(execGetBallisticDidDamage); \
	DECLARE_FUNCTION(execGetBallisticDidHit); \
	DECLARE_FUNCTION(execGetClosestSyncMarker); \
	DECLARE_FUNCTION(execGetControl); \
	DECLARE_FUNCTION(execGetItemDataSoftObject); \
	DECLARE_FUNCTION(execGetItemSoftClass); \
	DECLARE_FUNCTION(execGetLODLevel); \
	DECLARE_FUNCTION(execGetMeleeAttackDirection); \
	DECLARE_FUNCTION(execGetMeleeHit); \
	DECLARE_FUNCTION(execGetMeleeKicking); \
	DECLARE_FUNCTION(execGetNameFromPrimaryAssetID); \
	DECLARE_FUNCTION(execGetSimpleBoneName); \
	DECLARE_FUNCTION(execGetSimpleDamage); \
	DECLARE_FUNCTION(execGetUsingMelee); \
	DECLARE_FUNCTION(execIsNiagaraAsset); \
	DECLARE_FUNCTION(execIsNiagaraComponent); \
	DECLARE_FUNCTION(execMakeBallisticHitData); \
	DECLARE_FUNCTION(execMakeMeleeHitData); \
	DECLARE_FUNCTION(execMakeSimpleHitData); \
	DECLARE_FUNCTION(execSettleFloat); \
	DECLARE_FUNCTION(execSettleVector); \
	DECLARE_FUNCTION(execSmoothLerp); \
	DECLARE_FUNCTION(execSmoothLerpV); \
	DECLARE_FUNCTION(execSpawnEffectAsset); \
	DECLARE_FUNCTION(execSpawnPickup); \
	DECLARE_FUNCTION(execTickConstantLerpDriver); \
	DECLARE_FUNCTION(execTickLimitedSmoothLerpDriver); \
	DECLARE_FUNCTION(execTickPhysicalLerpDriver); \
	DECLARE_FUNCTION(execTickSmoothLerpDriver);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertRotationToItemSpace); \
	DECLARE_FUNCTION(execConvertVectorToItemSpace); \
	DECLARE_FUNCTION(execCubicInterpFloat); \
	DECLARE_FUNCTION(execCubicInterpVector); \
	DECLARE_FUNCTION(execGetBallisticBoneName); \
	DECLARE_FUNCTION(execGetBallisticDidDamage); \
	DECLARE_FUNCTION(execGetBallisticDidHit); \
	DECLARE_FUNCTION(execGetClosestSyncMarker); \
	DECLARE_FUNCTION(execGetControl); \
	DECLARE_FUNCTION(execGetItemDataSoftObject); \
	DECLARE_FUNCTION(execGetItemSoftClass); \
	DECLARE_FUNCTION(execGetLODLevel); \
	DECLARE_FUNCTION(execGetMeleeAttackDirection); \
	DECLARE_FUNCTION(execGetMeleeHit); \
	DECLARE_FUNCTION(execGetMeleeKicking); \
	DECLARE_FUNCTION(execGetNameFromPrimaryAssetID); \
	DECLARE_FUNCTION(execGetSimpleBoneName); \
	DECLARE_FUNCTION(execGetSimpleDamage); \
	DECLARE_FUNCTION(execGetUsingMelee); \
	DECLARE_FUNCTION(execIsNiagaraAsset); \
	DECLARE_FUNCTION(execIsNiagaraComponent); \
	DECLARE_FUNCTION(execMakeBallisticHitData); \
	DECLARE_FUNCTION(execMakeMeleeHitData); \
	DECLARE_FUNCTION(execMakeSimpleHitData); \
	DECLARE_FUNCTION(execSettleFloat); \
	DECLARE_FUNCTION(execSettleVector); \
	DECLARE_FUNCTION(execSmoothLerp); \
	DECLARE_FUNCTION(execSmoothLerpV); \
	DECLARE_FUNCTION(execSpawnEffectAsset); \
	DECLARE_FUNCTION(execSpawnPickup); \
	DECLARE_FUNCTION(execTickConstantLerpDriver); \
	DECLARE_FUNCTION(execTickLimitedSmoothLerpDriver); \
	DECLARE_FUNCTION(execTickPhysicalLerpDriver); \
	DECLARE_FUNCTION(execTickSmoothLerpDriver);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFPSControllerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFPSControllerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFPSControllerFunctionLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUFPSControllerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFPSControllerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFPSControllerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFPSControllerFunctionLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFPSControllerFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSControllerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSControllerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSControllerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSControllerFunctionLibrary(UFPSControllerFunctionLibrary&&); \
	NO_API UFPSControllerFunctionLibrary(const UFPSControllerFunctionLibrary&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFPSControllerFunctionLibrary(UFPSControllerFunctionLibrary&&); \
	NO_API UFPSControllerFunctionLibrary(const UFPSControllerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFPSControllerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSControllerFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFPSControllerFunctionLibrary)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_37_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UFPSControllerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSControllerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
