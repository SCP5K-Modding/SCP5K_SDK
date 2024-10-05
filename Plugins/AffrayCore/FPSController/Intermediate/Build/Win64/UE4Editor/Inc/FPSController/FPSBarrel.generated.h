// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UArrowComponent;
class UFPSBarrelData;
#ifdef FPSCONTROLLER_FPSBarrel_generated_h
#error "FPSBarrel.generated.h already included, missing '#pragma once' in FPSBarrel.h"
#endif
#define FPSCONTROLLER_FPSBarrel_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBarrel); \
	DECLARE_FUNCTION(execGetBarrelData);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBarrel); \
	DECLARE_FUNCTION(execGetBarrelData);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSBarrel(); \
	friend struct Z_Construct_UClass_AFPSBarrel_Statics; \
public: \
	DECLARE_CLASS(AFPSBarrel, AFPSAttachment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSBarrel)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAFPSBarrel(); \
	friend struct Z_Construct_UClass_AFPSBarrel_Statics; \
public: \
	DECLARE_CLASS(AFPSBarrel, AFPSAttachment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSBarrel)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSBarrel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBarrel(AFPSBarrel&&); \
	NO_API AFPSBarrel(const AFPSBarrel&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSBarrel(AFPSBarrel&&); \
	NO_API AFPSBarrel(const AFPSBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSBarrel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSBarrel)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BarrelData() { return STRUCT_OFFSET(AFPSBarrel, BarrelData); } \
	FORCEINLINE static uint32 __PPO__BarrelEnd() { return STRUCT_OFFSET(AFPSBarrel, BarrelEnd); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_9_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
