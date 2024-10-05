// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RANDOMSCENARIOS_ScenarioItem_generated_h
#error "ScenarioItem.generated.h already included, missing '#pragma once' in ScenarioItem.h"
#endif
#define RANDOMSCENARIOS_ScenarioItem_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_RPC_WRAPPERS \
	virtual void ScenarioEnabledChanged_Implementation(bool bEnabled) {}; \
 \
	DECLARE_FUNCTION(execScenarioEnabledChanged);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ScenarioEnabledChanged_Implementation(bool bEnabled) {}; \
 \
	DECLARE_FUNCTION(execScenarioEnabledChanged);


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_EVENT_PARMS \
	struct ScenarioItem_eventScenarioEnabledChanged_Parms \
	{ \
		bool bEnabled; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScenarioItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScenarioItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScenarioItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScenarioItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScenarioItem(UScenarioItem&&); \
	NO_API UScenarioItem(const UScenarioItem&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScenarioItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScenarioItem(UScenarioItem&&); \
	NO_API UScenarioItem(const UScenarioItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScenarioItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScenarioItem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScenarioItem)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUScenarioItem(); \
	friend struct Z_Construct_UClass_UScenarioItem_Statics; \
public: \
	DECLARE_CLASS(UScenarioItem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RandomScenarios"), NO_API) \
	DECLARE_SERIALIZER(UScenarioItem)


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_GENERATED_UINTERFACE_BODY() \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IScenarioItem() {} \
public: \
	typedef UScenarioItem UClassType; \
	typedef IScenarioItem ThisClass; \
	static void Execute_ScenarioEnabledChanged(UObject* O, bool bEnabled); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IScenarioItem() {} \
public: \
	typedef UScenarioItem UClassType; \
	typedef IScenarioItem ThisClass; \
	static void Execute_ScenarioEnabledChanged(UObject* O, bool bEnabled); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_6_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RANDOMSCENARIOS_API UClass* StaticClass<class UScenarioItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_RandomScenarios_Source_RandomScenarios_Public_ScenarioItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
