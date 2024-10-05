// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef USERINTERFACE_ActivatableWidget_generated_h
#error "ActivatableWidget.generated.h already included, missing '#pragma once' in ActivatableWidget.h"
#endif
#define USERINTERFACE_ActivatableWidget_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateWidget); \
	DECLARE_FUNCTION(execDeactivateWidget); \
	DECLARE_FUNCTION(execGetDesiredFocusTarget); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execUpdateInput);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateWidget); \
	DECLARE_FUNCTION(execDeactivateWidget); \
	DECLARE_FUNCTION(execGetDesiredFocusTarget); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execUpdateInput);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_EVENT_PARMS \
	struct ActivatableWidget_eventBP_GetDesiredFocusTarget_Parms \
	{ \
		UWidget* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ActivatableWidget_eventBP_GetDesiredFocusTarget_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ActivatableWidget_eventBP_OnHandleBackAction_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ActivatableWidget_eventBP_OnHandleBackAction_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivatableWidget(); \
	friend struct Z_Construct_UClass_UActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UActivatableWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UActivatableWidget)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActivatableWidget(); \
	friend struct Z_Construct_UClass_UActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UActivatableWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UActivatableWidget)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatableWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatableWidget(UActivatableWidget&&); \
	NO_API UActivatableWidget(const UActivatableWidget&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatableWidget(UActivatableWidget&&); \
	NO_API UActivatableWidget(const UActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatableWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActivatableWidget)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputMode() { return STRUCT_OFFSET(UActivatableWidget, InputMode); } \
	FORCEINLINE static uint32 __PPO__GameMouseCaptureMode() { return STRUCT_OFFSET(UActivatableWidget, GameMouseCaptureMode); } \
	FORCEINLINE static uint32 __PPO__ActionMappings() { return STRUCT_OFFSET(UActivatableWidget, ActionMappings); } \
	FORCEINLINE static uint32 __PPO__bSupportsBackAction() { return STRUCT_OFFSET(UActivatableWidget, bSupportsBackAction); } \
	FORCEINLINE static uint32 __PPO__bAutoActivate() { return STRUCT_OFFSET(UActivatableWidget, bAutoActivate); } \
	FORCEINLINE static uint32 __PPO__bSupportsActivationFocus() { return STRUCT_OFFSET(UActivatableWidget, bSupportsActivationFocus); } \
	FORCEINLINE static uint32 __PPO__bIsDialogue() { return STRUCT_OFFSET(UActivatableWidget, bIsDialogue); } \
	FORCEINLINE static uint32 __PPO__bAutoRestoreFocus() { return STRUCT_OFFSET(UActivatableWidget, bAutoRestoreFocus); } \
	FORCEINLINE static uint32 __PPO__BP_OnWidgetActivated() { return STRUCT_OFFSET(UActivatableWidget, BP_OnWidgetActivated); } \
	FORCEINLINE static uint32 __PPO__BP_OnWidgetDeactivated() { return STRUCT_OFFSET(UActivatableWidget, BP_OnWidgetDeactivated); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(UActivatableWidget, bIsActive); } \
	FORCEINLINE static uint32 __PPO__bSetVisibilityOnActivated() { return STRUCT_OFFSET(UActivatableWidget, bSetVisibilityOnActivated); } \
	FORCEINLINE static uint32 __PPO__ActivatedVisibility() { return STRUCT_OFFSET(UActivatableWidget, ActivatedVisibility); } \
	FORCEINLINE static uint32 __PPO__bSetVisibilityOnDeactivated() { return STRUCT_OFFSET(UActivatableWidget, bSetVisibilityOnDeactivated); } \
	FORCEINLINE static uint32 __PPO__DeactivatedVisibility() { return STRUCT_OFFSET(UActivatableWidget, DeactivatedVisibility); }


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_12_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERINTERFACE_API UClass* StaticClass<class UActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_ActivatableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
