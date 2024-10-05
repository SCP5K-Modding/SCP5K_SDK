// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArrowComponent;
class UFPSSightData;
#ifdef FPSCONTROLLER_FPSSight_generated_h
#error "FPSSight.generated.h already included, missing '#pragma once' in FPSSight.h"
#endif
#define FPSCONTROLLER_FPSSight_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_RPC_WRAPPERS \
	virtual void UpdateEffects_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSight); \
	DECLARE_FUNCTION(execGetSightData); \
	DECLARE_FUNCTION(execUpdateEffects);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateEffects_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSight); \
	DECLARE_FUNCTION(execGetSightData); \
	DECLARE_FUNCTION(execUpdateEffects);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_EVENT_PARMS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSSight(); \
	friend struct Z_Construct_UClass_AFPSSight_Statics; \
public: \
	DECLARE_CLASS(AFPSSight, AFPSAttachment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSSight)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPSSight(); \
	friend struct Z_Construct_UClass_AFPSSight_Statics; \
public: \
	DECLARE_CLASS(AFPSSight, AFPSAttachment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSSight)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSSight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSSight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSSight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSSight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSSight(AFPSSight&&); \
	NO_API AFPSSight(const AFPSSight&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSSight(AFPSSight&&); \
	NO_API AFPSSight(const AFPSSight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSSight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSSight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSSight)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SightData() { return STRUCT_OFFSET(AFPSSight, SightData); } \
	FORCEINLINE static uint32 __PPO__bVisualsEnabled() { return STRUCT_OFFSET(AFPSSight, bVisualsEnabled); } \
	FORCEINLINE static uint32 __PPO__ParameterCollection() { return STRUCT_OFFSET(AFPSSight, ParameterCollection); } \
	FORCEINLINE static uint32 __PPO__SightDirection() { return STRUCT_OFFSET(AFPSSight, SightDirection); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_10_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSSight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSSight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
