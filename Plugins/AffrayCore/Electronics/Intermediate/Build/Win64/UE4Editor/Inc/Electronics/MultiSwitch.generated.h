// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELECTRONICS_MultiSwitch_generated_h
#error "MultiSwitch.generated.h already included, missing '#pragma once' in MultiSwitch.h"
#endif
#define ELECTRONICS_MultiSwitch_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckInputs); \
	DECLARE_FUNCTION(execClearInputs); \
	DECLARE_FUNCTION(execGetTimeTillReset); \
	DECLARE_FUNCTION(execSetTimer);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckInputs); \
	DECLARE_FUNCTION(execClearInputs); \
	DECLARE_FUNCTION(execGetTimeTillReset); \
	DECLARE_FUNCTION(execSetTimer);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiSwitch(); \
	friend struct Z_Construct_UClass_AMultiSwitch_Statics; \
public: \
	DECLARE_CLASS(AMultiSwitch, AElectronicSwitch, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AMultiSwitch)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAMultiSwitch(); \
	friend struct Z_Construct_UClass_AMultiSwitch_Statics; \
public: \
	DECLARE_CLASS(AMultiSwitch, AElectronicSwitch, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AMultiSwitch)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiSwitch(AMultiSwitch&&); \
	NO_API AMultiSwitch(const AMultiSwitch&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiSwitch(AMultiSwitch&&); \
	NO_API AMultiSwitch(const AMultiSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiSwitch)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_9_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class AMultiSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_MultiSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
