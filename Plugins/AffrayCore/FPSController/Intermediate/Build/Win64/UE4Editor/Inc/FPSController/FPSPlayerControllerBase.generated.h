// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFPSCosmetic;
class ASpectatorPawn;
#ifdef FPSCONTROLLER_FPSPlayerControllerBase_generated_h
#error "FPSPlayerControllerBase.generated.h already included, missing '#pragma once' in FPSPlayerControllerBase.h"
#endif
#define FPSCONTROLLER_FPSPlayerControllerBase_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_RPC_WRAPPERS \
	virtual bool CanUseCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic); \
	virtual void PlayerStateUpdated_Implementation(); \
	virtual void ServerSetLookX_Implementation(uint8 InLookX); \
	virtual void ServerSetLookY_Implementation(uint8 InLookY); \
 \
	DECLARE_FUNCTION(execCanUseCosmetic); \
	DECLARE_FUNCTION(execGetHorizontalSensitivity); \
	DECLARE_FUNCTION(execGetLookX); \
	DECLARE_FUNCTION(execGetLookY); \
	DECLARE_FUNCTION(execGetVerticalSensitivity); \
	DECLARE_FUNCTION(execPlayerStateUpdated); \
	DECLARE_FUNCTION(execServerSetLookX); \
	DECLARE_FUNCTION(execServerSetLookY); \
	DECLARE_FUNCTION(execSetLookX); \
	DECLARE_FUNCTION(execSetLookY); \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execSpectate);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanUseCosmetic_Implementation(int32 Index, FFPSCosmetic Cosmetic); \
	virtual void PlayerStateUpdated_Implementation(); \
	virtual void ServerSetLookX_Implementation(uint8 InLookX); \
	virtual void ServerSetLookY_Implementation(uint8 InLookY); \
 \
	DECLARE_FUNCTION(execCanUseCosmetic); \
	DECLARE_FUNCTION(execGetHorizontalSensitivity); \
	DECLARE_FUNCTION(execGetLookX); \
	DECLARE_FUNCTION(execGetLookY); \
	DECLARE_FUNCTION(execGetVerticalSensitivity); \
	DECLARE_FUNCTION(execPlayerStateUpdated); \
	DECLARE_FUNCTION(execServerSetLookX); \
	DECLARE_FUNCTION(execServerSetLookY); \
	DECLARE_FUNCTION(execSetLookX); \
	DECLARE_FUNCTION(execSetLookY); \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execSpectate);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_EVENT_PARMS \
	struct FPSPlayerControllerBase_eventCanUseCosmetic_Parms \
	{ \
		int32 Index; \
		FFPSCosmetic Cosmetic; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FPSPlayerControllerBase_eventCanUseCosmetic_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FPSPlayerControllerBase_eventReceiveClientWasKicked_Parms \
	{ \
		FText KickReason; \
	}; \
	struct FPSPlayerControllerBase_eventReceiveReturnToMainMenu_Parms \
	{ \
		FText ReturnReason; \
	}; \
	struct FPSPlayerControllerBase_eventServerSetLookX_Parms \
	{ \
		uint8 InLookX; \
	}; \
	struct FPSPlayerControllerBase_eventServerSetLookY_Parms \
	{ \
		uint8 InLookY; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSPlayerControllerBase(); \
	friend struct Z_Construct_UClass_AFPSPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerControllerBase) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSPlayerControllerBase*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFPSPlayerControllerBase(); \
	friend struct Z_Construct_UClass_AFPSPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AFPSPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(AFPSPlayerControllerBase) \
	virtual UObject* _getUObject() const override { return const_cast<AFPSPlayerControllerBase*>(this); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSPlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerControllerBase(AFPSPlayerControllerBase&&); \
	NO_API AFPSPlayerControllerBase(const AFPSPlayerControllerBase&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSPlayerControllerBase(AFPSPlayerControllerBase&&); \
	NO_API AFPSPlayerControllerBase(const AFPSPlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSPlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSPlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSPlayerControllerBase)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FPSCharacterBase() { return STRUCT_OFFSET(AFPSPlayerControllerBase, FPSCharacterBase); }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_11_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class AFPSPlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_FPSPlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
