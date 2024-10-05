// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UDamageType;
#ifdef FPSCONTROLLER_Damageable_generated_h
#error "Damageable.generated.h already included, missing '#pragma once' in Damageable.h"
#endif
#define FPSCONTROLLER_Damageable_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_RPC_WRAPPERS \
	virtual void ApplyCosmeticDamage_Implementation(float Amount, APawn* InstigatorPawn, TSubclassOf<UDamageType>  DamageClass) {}; \
	virtual float GetHealth_Implementation() const { return 0; }; \
	virtual bool GetIsDead_Implementation() const { return false; }; \
	virtual float GetMaxHealth_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execApplyCosmeticDamage); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetIsDead); \
	DECLARE_FUNCTION(execGetMaxHealth);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ApplyCosmeticDamage_Implementation(float Amount, APawn* InstigatorPawn, TSubclassOf<UDamageType>  DamageClass) {}; \
	virtual float GetHealth_Implementation() const { return 0; }; \
	virtual bool GetIsDead_Implementation() const { return false; }; \
	virtual float GetMaxHealth_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execApplyCosmeticDamage); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetIsDead); \
	DECLARE_FUNCTION(execGetMaxHealth);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_EVENT_PARMS \
	struct Damageable_eventApplyCosmeticDamage_Parms \
	{ \
		float Amount; \
		APawn* InstigatorPawn; \
		TSubclassOf<UDamageType>  DamageClass; \
	}; \
	struct Damageable_eventGetHealth_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Damageable_eventGetHealth_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Damageable_eventGetIsDead_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Damageable_eventGetIsDead_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Damageable_eventGetMaxHealth_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Damageable_eventGetMaxHealth_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPSCONTROLLER_API UDamageable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSCONTROLLER_API, UDamageable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPSCONTROLLER_API UDamageable(UDamageable&&); \
	FPSCONTROLLER_API UDamageable(const UDamageable&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPSCONTROLLER_API UDamageable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPSCONTROLLER_API UDamageable(UDamageable&&); \
	FPSCONTROLLER_API UDamageable(const UDamageable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSCONTROLLER_API, UDamageable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageable)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageable(); \
	friend struct Z_Construct_UClass_UDamageable_Statics; \
public: \
	DECLARE_CLASS(UDamageable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSController"), FPSCONTROLLER_API) \
	DECLARE_SERIALIZER(UDamageable)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageable() {} \
public: \
	typedef UDamageable UClassType; \
	typedef IDamageable ThisClass; \
	static void Execute_ApplyCosmeticDamage(UObject* O, float Amount, APawn* InstigatorPawn, TSubclassOf<UDamageType>  DamageClass); \
	static float Execute_GetHealth(const UObject* O); \
	static bool Execute_GetIsDead(const UObject* O); \
	static float Execute_GetMaxHealth(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageable() {} \
public: \
	typedef UDamageable UClassType; \
	typedef IDamageable ThisClass; \
	static void Execute_ApplyCosmeticDamage(UObject* O, float Amount, APawn* InstigatorPawn, TSubclassOf<UDamageType>  DamageClass); \
	static float Execute_GetHealth(const UObject* O); \
	static bool Execute_GetIsDead(const UObject* O); \
	static float Execute_GetMaxHealth(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_10_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UDamageable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Damageable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
