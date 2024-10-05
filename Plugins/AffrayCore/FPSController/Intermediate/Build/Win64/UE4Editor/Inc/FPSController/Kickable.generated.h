// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFPSCharacterBase;
#ifdef FPSCONTROLLER_Kickable_generated_h
#error "Kickable.generated.h already included, missing '#pragma once' in Kickable.h"
#endif
#define FPSCONTROLLER_Kickable_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_RPC_WRAPPERS \
	virtual bool CanBeKicked_Implementation(AFPSCharacterBase* Kicker) { return false; }; \
	virtual void Kick_Implementation(AFPSCharacterBase* Kicker) {}; \
 \
	DECLARE_FUNCTION(execCanBeKicked); \
	DECLARE_FUNCTION(execKick);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanBeKicked_Implementation(AFPSCharacterBase* Kicker) { return false; }; \
	virtual void Kick_Implementation(AFPSCharacterBase* Kicker) {}; \
 \
	DECLARE_FUNCTION(execCanBeKicked); \
	DECLARE_FUNCTION(execKick);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_EVENT_PARMS \
	struct Kickable_eventCanBeKicked_Parms \
	{ \
		AFPSCharacterBase* Kicker; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Kickable_eventCanBeKicked_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Kickable_eventKick_Parms \
	{ \
		AFPSCharacterBase* Kicker; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKickable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKickable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKickable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKickable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKickable(UKickable&&); \
	NO_API UKickable(const UKickable&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKickable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKickable(UKickable&&); \
	NO_API UKickable(const UKickable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKickable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKickable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKickable)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUKickable(); \
	friend struct Z_Construct_UClass_UKickable_Statics; \
public: \
	DECLARE_CLASS(UKickable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UKickable)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IKickable() {} \
public: \
	typedef UKickable UClassType; \
	typedef IKickable ThisClass; \
	static bool Execute_CanBeKicked(UObject* O, AFPSCharacterBase* Kicker); \
	static void Execute_Kick(UObject* O, AFPSCharacterBase* Kicker); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IKickable() {} \
public: \
	typedef UKickable UClassType; \
	typedef IKickable ThisClass; \
	static bool Execute_CanBeKicked(UObject* O, AFPSCharacterBase* Kicker); \
	static void Execute_Kick(UObject* O, AFPSCharacterBase* Kicker); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_8_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UKickable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Kickable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
