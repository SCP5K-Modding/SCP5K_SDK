// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActivatableWidget;
struct FGameplayTag;
class APlayerState;
enum class EPlayerActionReturn : uint8;
class UWidget;
#ifdef USERINTERFACE_UIHUD_generated_h
#error "UIHUD.generated.h already included, missing '#pragma once' in UIHUD.h"
#endif
#define USERINTERFACE_UIHUD_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddNotifier); \
	DECLARE_FUNCTION(execAddWidgetToLayer); \
	DECLARE_FUNCTION(execBlockPlayer); \
	DECLARE_FUNCTION(execGetHUDVisibility); \
	DECLARE_FUNCTION(execIsPlayerBlocked); \
	DECLARE_FUNCTION(execPushPostGameUI); \
	DECLARE_FUNCTION(execPushUI); \
	DECLARE_FUNCTION(execSetChatWidget); \
	DECLARE_FUNCTION(execSetHUDVisibility); \
	DECLARE_FUNCTION(execToggleHUD); \
	DECLARE_FUNCTION(execUnblockPlayer);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddNotifier); \
	DECLARE_FUNCTION(execAddWidgetToLayer); \
	DECLARE_FUNCTION(execBlockPlayer); \
	DECLARE_FUNCTION(execGetHUDVisibility); \
	DECLARE_FUNCTION(execIsPlayerBlocked); \
	DECLARE_FUNCTION(execPushPostGameUI); \
	DECLARE_FUNCTION(execPushUI); \
	DECLARE_FUNCTION(execSetChatWidget); \
	DECLARE_FUNCTION(execSetHUDVisibility); \
	DECLARE_FUNCTION(execToggleHUD); \
	DECLARE_FUNCTION(execUnblockPlayer);


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_EVENT_PARMS \
	struct UIHUD_eventAddChatMessage_Parms \
	{ \
		FString Name; \
		FString Message; \
	}; \
	struct UIHUD_eventDisplayKilledByUI_Parms \
	{ \
		APlayerState* PlayerState; \
	}; \
	struct UIHUD_eventShowChatWindow_Parms \
	{ \
		bool bIsUsingCommand; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIHUD(); \
	friend struct Z_Construct_UClass_AUIHUD_Statics; \
public: \
	DECLARE_CLASS(AUIHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(AUIHUD)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAUIHUD(); \
	friend struct Z_Construct_UClass_AUIHUD_Statics; \
public: \
	DECLARE_CLASS(AUIHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(AUIHUD)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIHUD(AUIHUD&&); \
	NO_API AUIHUD(const AUIHUD&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIHUD(AUIHUD&&); \
	NO_API AUIHUD(const AUIHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIHUD)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MainUIWidgetClass() { return STRUCT_OFFSET(AUIHUD, MainUIWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ChatWidget() { return STRUCT_OFFSET(AUIHUD, ChatWidget); } \
	FORCEINLINE static uint32 __PPO__MainUILayout() { return STRUCT_OFFSET(AUIHUD, MainUILayout); } \
	FORCEINLINE static uint32 __PPO__PushGameUILayer() { return STRUCT_OFFSET(AUIHUD, PushGameUILayer); } \
	FORCEINLINE static uint32 __PPO__DynamicContainerWidget() { return STRUCT_OFFSET(AUIHUD, DynamicContainerWidget); }


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_20_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERINTERFACE_API UClass* StaticClass<class AUIHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UIHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
