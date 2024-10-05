// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERINTERFACE_UISettings_generated_h
#error "UISettings.generated.h already included, missing '#pragma once' in UISettings.h"
#endif
#define USERINTERFACE_UISettings_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_RPC_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_EVENT_PARMS
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUISettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUISettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUISettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUISettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUISettings(UUISettings&&); \
	NO_API UUISettings(const UUISettings&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUISettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUISettings(UUISettings&&); \
	NO_API UUISettings(const UUISettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUISettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUISettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUISettings)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUISettings(); \
	friend struct Z_Construct_UClass_UUISettings_Statics; \
public: \
	DECLARE_CLASS(UUISettings, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UserInterface"), NO_API) \
	DECLARE_SERIALIZER(UUISettings)


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUISettings() {} \
public: \
	typedef UUISettings UClassType; \
	typedef IUISettings ThisClass; \
	static void Execute_UIHUDElementUpdated(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IUISettings() {} \
public: \
	typedef UUISettings UClassType; \
	typedef IUISettings ThisClass; \
	static void Execute_UIHUDElementUpdated(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_6_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERINTERFACE_API UClass* StaticClass<class UUISettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_UserInterface_Source_UserInterface_Public_UISettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
