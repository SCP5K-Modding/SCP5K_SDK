// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AElectronicSwitch;
class AElectronic;
#ifdef ELECTRONICS_ElectronicSwitch_generated_h
#error "ElectronicSwitch.generated.h already included, missing '#pragma once' in ElectronicSwitch.h"
#endif
#define ELECTRONICS_ElectronicSwitch_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_RPC_WRAPPERS \
	virtual void ConnectedSwitchUpdated_Implementation(AElectronicSwitch* SWITCH); \
	virtual void DisableConnectedElectronic_Implementation(AElectronic* Electronic); \
	virtual void EnableConnectedElectronic_Implementation(AElectronic* Electronic); \
 \
	DECLARE_FUNCTION(execConnectedSwitchUpdated); \
	DECLARE_FUNCTION(execDisableConnectedElectronic); \
	DECLARE_FUNCTION(execEnableConnectedElectronic); \
	DECLARE_FUNCTION(execFinishDelay);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ConnectedSwitchUpdated_Implementation(AElectronicSwitch* SWITCH); \
	virtual void DisableConnectedElectronic_Implementation(AElectronic* Electronic); \
	virtual void EnableConnectedElectronic_Implementation(AElectronic* Electronic); \
 \
	DECLARE_FUNCTION(execConnectedSwitchUpdated); \
	DECLARE_FUNCTION(execDisableConnectedElectronic); \
	DECLARE_FUNCTION(execEnableConnectedElectronic); \
	DECLARE_FUNCTION(execFinishDelay);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_EVENT_PARMS \
	struct ElectronicSwitch_eventConnectedSwitchUpdated_Parms \
	{ \
		AElectronicSwitch* SWITCH; \
	}; \
	struct ElectronicSwitch_eventDisableConnectedElectronic_Parms \
	{ \
		AElectronic* Electronic; \
	}; \
	struct ElectronicSwitch_eventEnableConnectedElectronic_Parms \
	{ \
		AElectronic* Electronic; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElectronicSwitch(); \
	friend struct Z_Construct_UClass_AElectronicSwitch_Statics; \
public: \
	DECLARE_CLASS(AElectronicSwitch, AElectronic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicSwitch)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAElectronicSwitch(); \
	friend struct Z_Construct_UClass_AElectronicSwitch_Statics; \
public: \
	DECLARE_CLASS(AElectronicSwitch, AElectronic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicSwitch)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElectronicSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicSwitch(AElectronicSwitch&&); \
	NO_API AElectronicSwitch(const AElectronicSwitch&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicSwitch(AElectronicSwitch&&); \
	NO_API AElectronicSwitch(const AElectronicSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicSwitch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicSwitch)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_PRIVATE_PROPERTY_OFFSET
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_9_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class AElectronicSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
