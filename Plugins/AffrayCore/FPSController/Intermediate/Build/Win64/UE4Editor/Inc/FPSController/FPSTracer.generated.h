// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FBallisticHitData;
class UFPSRangedWeaponData;
class AFPSCharacterBase;
#ifdef FPSCONTROLLER_FPSTracer_generated_h
#error "FPSTracer.generated.h already included, missing '#pragma once' in FPSTracer.h"
#endif
#define FPSCONTROLLER_FPSTracer_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_RPC_WRAPPERS \
	virtual void Finished_Implementation(); \
	virtual void FollowPath_Implementation(); \
	virtual void PlayCrack_Implementation(); \
 \
	DECLARE_FUNCTION(execFinished); \
	DECLARE_FUNCTION(execFollowPath); \
	DECLARE_FUNCTION(execPlayCrack); \
	DECLARE_FUNCTION(execStart);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Finished_Implementation(); \
	virtual void FollowPath_Implementation(); \
	virtual void PlayCrack_Implementation(); \
 \
	DECLARE_FUNCTION(execFinished); \
	DECLARE_FUNCTION(execFollowPath); \
	DECLARE_FUNCTION(execPlayCrack); \
	DECLARE_FUNCTION(execStart);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_EVENT_PARMS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSTracer(); \
	friend struct Z_Construct_UClass_AFPSTracer_Statics; \
public: \
	DECLARE_CLASS(AFPSTracer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSTracer) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSTracer*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSTracer(); \
	friend struct Z_Construct_UClass_AFPSTracer_Statics; \
public: \
	DECLARE_CLASS(AFPSTracer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSTracer) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSTracer*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSTracer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSTracer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSTracer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSTracer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSTracer(AFPSTracer&&); \
	NO_API AFPSTracer(const AFPSTracer&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSTracer(AFPSTracer&&); \
	NO_API AFPSTracer(const AFPSTracer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSTracer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSTracer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSTracer)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_13_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSTracer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSTracer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
