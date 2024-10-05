// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
#ifdef GAMEACTIONS_GameAction_generated_h
#error "GameAction.generated.h already included, missing '#pragma once' in GameAction.h"
#endif
#define GAMEACTIONS_GameAction_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_RPC_WRAPPERS \
	virtual bool OnExecute_Implementation(UObject* WorldContextObject, AActor* Subject, AActor* Instigator); \
 \
	DECLARE_FUNCTION(execExecute); \
	DECLARE_FUNCTION(execExecuteDelayed); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execOnExecute);


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnExecute_Implementation(UObject* WorldContextObject, AActor* Subject, AActor* Instigator); \
 \
	DECLARE_FUNCTION(execExecute); \
	DECLARE_FUNCTION(execExecuteDelayed); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execOnExecute);


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_EVENT_PARMS \
	struct GameAction_eventOnExecute_Parms \
	{ \
		UObject* WorldContextObject; \
		AActor* Subject; \
		AActor* Instigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameAction_eventOnExecute_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameAction(); \
	friend struct Z_Construct_UClass_UGameAction_Statics; \
public: \
	DECLARE_CLASS(UGameAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameActions"), NO_API) \
	DECLARE_SERIALIZER(UGameAction)


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUGameAction(); \
	friend struct Z_Construct_UClass_UGameAction_Statics; \
public: \
	DECLARE_CLASS(UGameAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/GameActions"), NO_API) \
	DECLARE_SERIALIZER(UGameAction)


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAction(UGameAction&&); \
	NO_API UGameAction(const UGameAction&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAction(UGameAction&&); \
	NO_API UGameAction(const UGameAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAction); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameAction)


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_8_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEACTIONS_API UClass* StaticClass<class UGameAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameActions_Source_GameActions_Public_GameAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
