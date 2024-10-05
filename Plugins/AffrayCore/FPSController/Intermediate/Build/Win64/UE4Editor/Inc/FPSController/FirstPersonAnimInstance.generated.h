// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class UFPSGripData;
class AFPSRangedWeapon;
#ifdef FPSCONTROLLER_FirstPersonAnimInstance_generated_h
#error "FirstPersonAnimInstance.generated.h already included, missing '#pragma once' in FirstPersonAnimInstance.h"
#endif
#define FPSCONTROLLER_FirstPersonAnimInstance_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_RPC_WRAPPERS \
	virtual UAnimSequence* GetGripPose_Implementation(UFPSGripData* GripData, TSubclassOf<AFPSRangedWeapon>  WeaponClass); \
 \
	DECLARE_FUNCTION(execGetGripPose); \
	DECLARE_FUNCTION(execSetSwayMultiplier); \
	DECLARE_FUNCTION(execUpdateGrabPoint); \
	DECLARE_FUNCTION(execUpdateGripAlpha); \
	DECLARE_FUNCTION(execUpdateGripPosition);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UAnimSequence* GetGripPose_Implementation(UFPSGripData* GripData, TSubclassOf<AFPSRangedWeapon>  WeaponClass); \
 \
	DECLARE_FUNCTION(execGetGripPose); \
	DECLARE_FUNCTION(execSetSwayMultiplier); \
	DECLARE_FUNCTION(execUpdateGrabPoint); \
	DECLARE_FUNCTION(execUpdateGripAlpha); \
	DECLARE_FUNCTION(execUpdateGripPosition);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_EVENT_PARMS \
	struct FirstPersonAnimInstance_eventGetGripPose_Parms \
	{ \
		UFPSGripData* GripData; \
		TSubclassOf<AFPSRangedWeapon>  WeaponClass; \
		UAnimSequence* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FirstPersonAnimInstance_eventGetGripPose_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirstPersonAnimInstance(); \
	friend struct Z_Construct_UClass_UFirstPersonAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UFirstPersonAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFirstPersonAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UFirstPersonAnimInstance*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUFirstPersonAnimInstance(); \
	friend struct Z_Construct_UClass_UFirstPersonAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UFirstPersonAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UFirstPersonAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UFirstPersonAnimInstance*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirstPersonAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirstPersonAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirstPersonAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirstPersonAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirstPersonAnimInstance(UFirstPersonAnimInstance&&); \
	NO_API UFirstPersonAnimInstance(const UFirstPersonAnimInstance&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirstPersonAnimInstance(UFirstPersonAnimInstance&&); \
	NO_API UFirstPersonAnimInstance(const UFirstPersonAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirstPersonAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirstPersonAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirstPersonAnimInstance)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_24_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UFirstPersonAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FirstPersonAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
