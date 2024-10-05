// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ELECTRONICS_ElectronicLight_generated_h
#error "ElectronicLight.generated.h already included, missing '#pragma once' in ElectronicLight.h"
#endif
#define ELECTRONICS_ElectronicLight_generated_h

#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_SPARSE_DATA
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_RPC_WRAPPERS \
	virtual void SetColor_Implementation(FLinearColor NewColor); \
 \
	DECLARE_FUNCTION(execSetColor);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetColor_Implementation(FLinearColor NewColor); \
 \
	DECLARE_FUNCTION(execSetColor);


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_EVENT_PARMS \
	struct ElectronicLight_eventSetColor_Parms \
	{ \
		FLinearColor NewColor; \
	};


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElectronicLight(); \
	friend struct Z_Construct_UClass_AElectronicLight_Statics; \
public: \
	DECLARE_CLASS(AElectronicLight, AElectronic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicLight)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAElectronicLight(); \
	friend struct Z_Construct_UClass_AElectronicLight_Statics; \
public: \
	DECLARE_CLASS(AElectronicLight, AElectronic, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Electronics"), NO_API) \
	DECLARE_SERIALIZER(AElectronicLight)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElectronicLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicLight(AElectronicLight&&); \
	NO_API AElectronicLight(const AElectronicLight&); \
public:


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElectronicLight(AElectronicLight&&); \
	NO_API AElectronicLight(const AElectronicLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElectronicLight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElectronicLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElectronicLight)


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(AElectronicLight, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__Lights() { return STRUCT_OFFSET(AElectronicLight, Lights); } \
	FORCEINLINE static uint32 __PPO__PrimaryLight() { return STRUCT_OFFSET(AElectronicLight, PrimaryLight); }


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_11_PROLOG \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_EVENT_PARMS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_INCLASS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_SPARSE_DATA \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICS_API UClass* StaticClass<class AElectronicLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_AffrayCore_Electronics_Source_Electronics_Public_ElectronicLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
