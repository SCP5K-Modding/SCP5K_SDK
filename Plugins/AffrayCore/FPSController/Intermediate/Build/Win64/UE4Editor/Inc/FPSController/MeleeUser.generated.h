// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FPSCONTROLLER_MeleeUser_generated_h
#error "MeleeUser.generated.h already included, missing '#pragma once' in MeleeUser.h"
#endif
#define FPSCONTROLLER_MeleeUser_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_RPC_WRAPPERS \
	virtual void Cancel_Implementation() {}; \
	virtual EMeleeAttackDirection GetAttackDirection_Implementation() { return TEnumAsByte<EMeleeAttackDirection>(0); }; \
	virtual FVector GetAttackVector_Implementation(TEnumAsByte<EMeleeAttackDirection> const& Direction) { return FVector(ForceInit); }; \
	virtual bool IsBlocking_Implementation(TEnumAsByte<EMeleeAttackDirection> const& Direction) { return false; }; \
 \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execGetAttackDirection); \
	DECLARE_FUNCTION(execGetAttackVector); \
	DECLARE_FUNCTION(execIsBlocking);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Cancel_Implementation() {}; \
	virtual EMeleeAttackDirection GetAttackDirection_Implementation() { return TEnumAsByte<EMeleeAttackDirection>(0); }; \
	virtual FVector GetAttackVector_Implementation(TEnumAsByte<EMeleeAttackDirection> const& Direction) { return FVector(ForceInit); }; \
	virtual bool IsBlocking_Implementation(TEnumAsByte<EMeleeAttackDirection> const& Direction) { return false; }; \
 \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execGetAttackDirection); \
	DECLARE_FUNCTION(execGetAttackVector); \
	DECLARE_FUNCTION(execIsBlocking);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_EVENT_PARMS \
	struct MeleeUser_eventGetAttackDirection_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeleeUser_eventGetAttackDirection_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct MeleeUser_eventGetAttackVector_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> Direction; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeleeUser_eventGetAttackVector_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct MeleeUser_eventIsBlocking_Parms \
	{ \
		TEnumAsByte<EMeleeAttackDirection> Direction; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MeleeUser_eventIsBlocking_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeleeUser(UMeleeUser&&); \
	NO_API UMeleeUser(const UMeleeUser&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeleeUser(UMeleeUser&&); \
	NO_API UMeleeUser(const UMeleeUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeUser); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeUser)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMeleeUser(); \
	friend struct Z_Construct_UClass_UMeleeUser_Statics; \
public: \
	DECLARE_CLASS(UMeleeUser, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UMeleeUser)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMeleeUser() {} \
public: \
	typedef UMeleeUser UClassType; \
	typedef IMeleeUser ThisClass; \
	static void Execute_Cancel(UObject* O); \
	static EMeleeAttackDirection Execute_GetAttackDirection(UObject* O); \
	static FVector Execute_GetAttackVector(UObject* O, TEnumAsByte<EMeleeAttackDirection> const& Direction); \
	static bool Execute_IsBlocking(UObject* O, TEnumAsByte<EMeleeAttackDirection> const& Direction); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IMeleeUser() {} \
public: \
	typedef UMeleeUser UClassType; \
	typedef IMeleeUser ThisClass; \
	static void Execute_Cancel(UObject* O); \
	static EMeleeAttackDirection Execute_GetAttackDirection(UObject* O); \
	static FVector Execute_GetAttackVector(UObject* O, TEnumAsByte<EMeleeAttackDirection> const& Direction); \
	static bool Execute_IsBlocking(UObject* O, TEnumAsByte<EMeleeAttackDirection> const& Direction); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_8_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UMeleeUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_MeleeUser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
