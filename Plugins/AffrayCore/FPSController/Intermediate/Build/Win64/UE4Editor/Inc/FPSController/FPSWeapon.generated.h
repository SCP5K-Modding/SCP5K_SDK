// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFPSWeaponData;
#ifdef FPSCONTROLLER_FPSWeapon_generated_h
#error "FPSWeapon.generated.h already included, missing '#pragma once' in FPSWeapon.h"
#endif
#define FPSCONTROLLER_FPSWeapon_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execGetWeaponData);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDamage); \
	DECLARE_FUNCTION(execGetWeaponData);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSWeapon, AFPSItem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAFPSWeapon(); \
	friend struct Z_Construct_UClass_AFPSWeapon_Statics; \
public: \
	DECLARE_CLASS(AFPSWeapon, AFPSItem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSWeapon)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSWeapon(AFPSWeapon&&); \
	NO_API AFPSWeapon(const AFPSWeapon&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSWeapon(AFPSWeapon&&); \
	NO_API AFPSWeapon(const AFPSWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSWeapon); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSWeapon)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponData() { return STRUCT_OFFSET(AFPSWeapon, WeaponData); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
