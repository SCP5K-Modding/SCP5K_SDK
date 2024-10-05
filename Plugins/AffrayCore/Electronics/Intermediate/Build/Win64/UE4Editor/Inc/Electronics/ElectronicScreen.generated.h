// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
#ifdef ELECTRONICS_ElectronicScreen_generated_h
#error "ElectronicScreen.generated.h already included, missing '#pragma once' in ElectronicScreen.h"
#endif
#define ELECTRONICS_ElectronicScreen_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssetLoaded); \
	DECLARE_FUNCTION(execIsBeingViewed); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execUpdateTexture);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssetLoaded); \
	DECLARE_FUNCTION(execIsBeingViewed); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execUpdateTexture);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElectronicScreen(); \
	friend struct Z_Construct_UClass_AElectronicScreen_Statics; \
public: \
	DECLARE_CLASS(AElectronicScreen, AElectronicLight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicScreen)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAElectronicScreen(); \
	friend struct Z_Construct_UClass_AElectronicScreen_Statics; \
public: \
	DECLARE_CLASS(AElectronicScreen, AElectronicLight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicScreen)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElectronicScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicScreen(AElectronicScreen&&); \
	NO_API AElectronicScreen(const AElectronicScreen&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicScreen(AElectronicScreen&&); \
	NO_API AElectronicScreen(const AElectronicScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicScreen)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_8_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class AElectronicScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
