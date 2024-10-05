// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActivatableWidget;
#ifdef USERINTERFACE_ActivatableWidgetContainerStack_generated_h
#error "ActivatableWidgetContainerStack.generated.h already included, missing '#pragma once' in ActivatableWidgetContainerStack.h"
#endif
#define USERINTERFACE_ActivatableWidgetContainerStack_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_AddWidget); \
	DECLARE_FUNCTION(execBP_AddWidgetList); \
	DECLARE_FUNCTION(execClearWidgets); \
	DECLARE_FUNCTION(execGetActiveWidget); \
	DECLARE_FUNCTION(execIsWidgetClassAlreadyPresent); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execSetRootWidget);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_AddWidget); \
	DECLARE_FUNCTION(execBP_AddWidgetList); \
	DECLARE_FUNCTION(execClearWidgets); \
	DECLARE_FUNCTION(execGetActiveWidget); \
	DECLARE_FUNCTION(execIsWidgetClassAlreadyPresent); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execSetRootWidget);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivatableWidgetContainerStack(); \
	friend struct Z_Construct_UClass_UActivatableWidgetContainerStack_Statics; \
public: \
	DECLARE_CLASS(UActivatableWidgetContainerStack, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UActivatableWidgetContainerStack)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUActivatableWidgetContainerStack(); \
	friend struct Z_Construct_UClass_UActivatableWidgetContainerStack_Statics; \
public: \
	DECLARE_CLASS(UActivatableWidgetContainerStack, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UActivatableWidgetContainerStack)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatableWidgetContainerStack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatableWidgetContainerStack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatableWidgetContainerStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatableWidgetContainerStack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatableWidgetContainerStack(UActivatableWidgetContainerStack&&); \
	NO_API UActivatableWidgetContainerStack(const UActivatableWidgetContainerStack&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatableWidgetContainerStack(UActivatableWidgetContainerStack&&); \
	NO_API UActivatableWidgetContainerStack(const UActivatableWidgetContainerStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatableWidgetContainerStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatableWidgetContainerStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActivatableWidgetContainerStack)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WidgetList() { return STRUCT_OFFSET(UActivatableWidgetContainerStack, WidgetList); } \
	FORCEINLINE static uint32 __PPO__DisplayedWidget() { return STRUCT_OFFSET(UActivatableWidgetContainerStack, DisplayedWidget); } \
	FORCEINLINE static uint32 __PPO__GeneratedWidgetsPool() { return STRUCT_OFFSET(UActivatableWidgetContainerStack, GeneratedWidgetsPool); } \
	FORCEINLINE static uint32 __PPO__RootWidgetClass() { return STRUCT_OFFSET(UActivatableWidgetContainerStack, RootWidgetClass); } \
	FORCEINLINE static uint32 __PPO__RootWidget() { return STRUCT_OFFSET(UActivatableWidgetContainerStack, RootWidget); }


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_10_PROLOG
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERINTERFACE_API UClass* StaticClass<class UActivatableWidgetContainerStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidgetContainerStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
