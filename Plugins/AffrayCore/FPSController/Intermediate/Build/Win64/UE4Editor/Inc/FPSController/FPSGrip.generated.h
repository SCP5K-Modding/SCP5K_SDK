// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFPSGripData;
#ifdef FPSCONTROLLER_FPSGrip_generated_h
#error "FPSGrip.generated.h already included, missing '#pragma once' in FPSGrip.h"
#endif
#define FPSCONTROLLER_FPSGrip_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGripData);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGripData);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGrip(); \
	friend struct Z_Construct_UClass_AFPSGrip_Statics; \
public: \
	DECLARE_CLASS(AFPSGrip, AFPSAttachment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSGrip)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGrip(); \
	friend struct Z_Construct_UClass_AFPSGrip_Statics; \
public: \
	DECLARE_CLASS(AFPSGrip, AFPSAttachment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSGrip)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGrip(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGrip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGrip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGrip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGrip(AFPSGrip&&); \
	NO_API AFPSGrip(const AFPSGrip&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGrip(AFPSGrip&&); \
	NO_API AFPSGrip(const AFPSGrip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGrip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGrip); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGrip)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GripData() { return STRUCT_OFFSET(AFPSGrip, GripData); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSGrip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSGrip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
