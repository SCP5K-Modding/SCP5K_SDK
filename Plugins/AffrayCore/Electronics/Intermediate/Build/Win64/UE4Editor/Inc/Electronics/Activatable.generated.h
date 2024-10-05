// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELECTRONICS_Activatable_generated_h
#error "Activatable.generated.h already included, missing '#pragma once' in Activatable.h"
#endif
#define ELECTRONICS_Activatable_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_RPC_WRAPPERS \
	virtual void Disable_Implementation() {}; \
	virtual void Enable_Implementation() {}; \
 \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Disable_Implementation() {}; \
	virtual void Enable_Implementation() {}; \
 \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_EVENT_PARMS
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatable(UActivatable&&); \
	NO_API UActivatable(const UActivatable&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatable(UActivatable&&); \
	NO_API UActivatable(const UActivatable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatable)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActivatable(); \
	friend struct Z_Construct_UClass_UActivatable_Statics; \
public: \
	DECLARE_CLASS(UActivatable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(UActivatable)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActivatable() {} \
public: \
	typedef UActivatable UClassType; \
	typedef IActivatable ThisClass; \
	static void Execute_Disable(UObject* O); \
	static void Execute_Enable(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IActivatable() {} \
public: \
	typedef UActivatable UClassType; \
	typedef IActivatable ThisClass; \
	static void Execute_Disable(UObject* O); \
	static void Execute_Enable(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_6_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class UActivatable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_Activatable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
