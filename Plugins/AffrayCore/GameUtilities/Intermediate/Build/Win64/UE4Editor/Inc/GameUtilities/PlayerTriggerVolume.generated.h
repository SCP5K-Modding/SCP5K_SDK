// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
#ifdef GAMEUTILITIES_PlayerTriggerVolume_generated_h
#error "PlayerTriggerVolume.generated.h already included, missing '#pragma once' in PlayerTriggerVolume.h"
#endif
#define GAMEUTILITIES_PlayerTriggerVolume_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_RPC_WRAPPERS \
	virtual void TriggerEntered_Implementation(APawn* Pawn); \
	virtual void TriggerLeft_Implementation(APawn* Pawn); \
 \
	DECLARE_FUNCTION(execCanTrigger); \
	DECLARE_FUNCTION(execTriggerEntered); \
	DECLARE_FUNCTION(execTriggerLeft);


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TriggerEntered_Implementation(APawn* Pawn); \
	virtual void TriggerLeft_Implementation(APawn* Pawn); \
 \
	DECLARE_FUNCTION(execCanTrigger); \
	DECLARE_FUNCTION(execTriggerEntered); \
	DECLARE_FUNCTION(execTriggerLeft);


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_EVENT_PARMS \
	struct PlayerTriggerVolume_eventTriggerEntered_Parms \
	{ \
		APawn* Pawn; \
	}; \
	struct PlayerTriggerVolume_eventTriggerLeft_Parms \
	{ \
		APawn* Pawn; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerTriggerVolume(); \
	friend struct Z_Construct_UClass_APlayerTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(APlayerTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtilities"), NO_API) \
	DECLARE_SERIALIZER(APlayerTriggerVolume)


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerTriggerVolume(); \
	friend struct Z_Construct_UClass_APlayerTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(APlayerTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameUtilities"), NO_API) \
	DECLARE_SERIALIZER(APlayerTriggerVolume)


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerTriggerVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerTriggerVolume(APlayerTriggerVolume&&); \
	NO_API APlayerTriggerVolume(const APlayerTriggerVolume&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerTriggerVolume(APlayerTriggerVolume&&); \
	NO_API APlayerTriggerVolume(const APlayerTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerTriggerVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerTriggerVolume)


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_9_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEUTILITIES_API UClass* StaticClass<class APlayerTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_GameUtilities_Source_GameUtilities_Public_PlayerTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
