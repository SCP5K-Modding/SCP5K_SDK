// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObjectPoolComponent;
#ifdef FPSCONTROLLER_Poolable_generated_h
#error "Poolable.generated.h already included, missing '#pragma once' in Poolable.h"
#endif
#define FPSCONTROLLER_Poolable_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_RPC_WRAPPERS \
	virtual void AddedToPool_Implementation(UObjectPoolComponent* Pool) {}; \
	virtual void FinishReleasedFromPool_Implementation() {}; \
	virtual void ReturnedToPool_Implementation() {}; \
	virtual void StartReleasedFromPool_Implementation() {}; \
 \
	DECLARE_FUNCTION(execAddedToPool); \
	DECLARE_FUNCTION(execFinishReleasedFromPool); \
	DECLARE_FUNCTION(execReturnedToPool); \
	DECLARE_FUNCTION(execStartReleasedFromPool);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddedToPool_Implementation(UObjectPoolComponent* Pool) {}; \
	virtual void FinishReleasedFromPool_Implementation() {}; \
	virtual void ReturnedToPool_Implementation() {}; \
	virtual void StartReleasedFromPool_Implementation() {}; \
 \
	DECLARE_FUNCTION(execAddedToPool); \
	DECLARE_FUNCTION(execFinishReleasedFromPool); \
	DECLARE_FUNCTION(execReturnedToPool); \
	DECLARE_FUNCTION(execStartReleasedFromPool);


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_EVENT_PARMS \
	struct Poolable_eventAddedToPool_Parms \
	{ \
		UObjectPoolComponent* Pool; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoolable(UPoolable&&); \
	NO_API UPoolable(const UPoolable&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoolable(UPoolable&&); \
	NO_API UPoolable(const UPoolable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolable)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPoolable(); \
	friend struct Z_Construct_UClass_UPoolable_Statics; \
public: \
	DECLARE_CLASS(UPoolable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSController"), NO_API) \
	DECLARE_SERIALIZER(UPoolable)


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPoolable() {} \
public: \
	typedef UPoolable UClassType; \
	typedef IPoolable ThisClass; \
	static void Execute_AddedToPool(UObject* O, UObjectPoolComponent* Pool); \
	static void Execute_FinishReleasedFromPool(UObject* O); \
	static void Execute_ReturnedToPool(UObject* O); \
	static void Execute_StartReleasedFromPool(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IPoolable() {} \
public: \
	typedef UPoolable UClassType; \
	typedef IPoolable ThisClass; \
	static void Execute_AddedToPool(UObject* O, UObjectPoolComponent* Pool); \
	static void Execute_FinishReleasedFromPool(UObject* O); \
	static void Execute_ReturnedToPool(UObject* O); \
	static void Execute_StartReleasedFromPool(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_8_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCONTROLLER_API UClass* StaticClass<class UPoolable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_FPSController_Source_FPSController_Public_Poolable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
