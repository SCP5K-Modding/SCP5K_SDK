// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FVector;
#ifdef LIGHTSENSING_LightManager_generated_h
#error "LightManager.generated.h already included, missing '#pragma once' in LightManager.h"
#endif
#define LIGHTSENSING_LightManager_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddEventToHandle); \
	DECLARE_FUNCTION(execGetLightIntensity); \
	DECLARE_FUNCTION(execGetLightIntensityByHandle); \
	DECLARE_FUNCTION(execRemoveEventFromHandle); \
	DECLARE_FUNCTION(execRemoveUserFromHandle);


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddEventToHandle); \
	DECLARE_FUNCTION(execGetLightIntensity); \
	DECLARE_FUNCTION(execGetLightIntensityByHandle); \
	DECLARE_FUNCTION(execRemoveEventFromHandle); \
	DECLARE_FUNCTION(execRemoveUserFromHandle);


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightManager(); \
	friend struct Z_Construct_UClass_ALightManager_Statics; \
public: \
	DECLARE_CLASS(ALightManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightSensing"), NO_API) \
	DECLARE_SERIALIZER(ALightManager)


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALightManager(); \
	friend struct Z_Construct_UClass_ALightManager_Statics; \
public: \
	DECLARE_CLASS(ALightManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightSensing"), NO_API) \
	DECLARE_SERIALIZER(ALightManager)


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightManager(ALightManager&&); \
	NO_API ALightManager(const ALightManager&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightManager(ALightManager&&); \
	NO_API ALightManager(const ALightManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightManager)


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_12_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTSENSING_API UClass* StaticClass<class ALightManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_LightSensing_Source_LightSensing_Public_LightManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
