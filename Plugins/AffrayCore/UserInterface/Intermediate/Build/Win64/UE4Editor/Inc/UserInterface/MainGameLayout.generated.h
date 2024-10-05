// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UActivatableWidget;
class UActivatableWidgetContainerStack;
#ifdef USERINTERFACE_MainGameLayout_generated_h
#error "MainGameLayout.generated.h already included, missing '#pragma once' in MainGameLayout.h"
#endif
#define USERINTERFACE_MainGameLayout_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddWidgetToLayer); \
	DECLARE_FUNCTION(execGetLayerWidget); \
	DECLARE_FUNCTION(execRegisterLayer);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddWidgetToLayer); \
	DECLARE_FUNCTION(execGetLayerWidget); \
	DECLARE_FUNCTION(execRegisterLayer);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainGameLayout(); \
	friend struct Z_Construct_UClass_UMainGameLayout_Statics; \
public: \
	DECLARE_CLASS(UMainGameLayout, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UMainGameLayout)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMainGameLayout(); \
	friend struct Z_Construct_UClass_UMainGameLayout_Statics; \
public: \
	DECLARE_CLASS(UMainGameLayout, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UMainGameLayout)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainGameLayout(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainGameLayout) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainGameLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainGameLayout); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainGameLayout(UMainGameLayout&&); \
	NO_API UMainGameLayout(const UMainGameLayout&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainGameLayout(UMainGameLayout&&); \
	NO_API UMainGameLayout(const UMainGameLayout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainGameLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainGameLayout); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMainGameLayout)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Layers() { return STRUCT_OFFSET(UMainGameLayout, Layers); }


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_11_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERINTERFACE_API UClass* StaticClass<class UMainGameLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_MainGameLayout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
