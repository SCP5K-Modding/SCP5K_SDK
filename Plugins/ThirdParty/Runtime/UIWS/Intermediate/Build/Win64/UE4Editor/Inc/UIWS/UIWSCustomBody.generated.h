// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UIWS_UIWSCustomBody_generated_h
#error "UIWSCustomBody.generated.h already included, missing '#pragma once' in UIWSCustomBody.h"
#endif
#define UIWS_UIWSCustomBody_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_RPC_WRAPPERS
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIWSCustomBody(); \
	friend struct Z_Construct_UClass_AUIWSCustomBody_Statics; \
public: \
	DECLARE_CLASS(AUIWSCustomBody, AUIWSWaterBody, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSCustomBody)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUIWSCustomBody(); \
	friend struct Z_Construct_UClass_AUIWSCustomBody_Statics; \
public: \
	DECLARE_CLASS(AUIWSCustomBody, AUIWSWaterBody, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSCustomBody)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIWSCustomBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIWSCustomBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSCustomBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSCustomBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSCustomBody(AUIWSCustomBody&&); \
	NO_API AUIWSCustomBody(const AUIWSCustomBody&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSCustomBody(AUIWSCustomBody&&); \
	NO_API AUIWSCustomBody(const AUIWSCustomBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSCustomBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSCustomBody); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIWSCustomBody)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CustomWaterVolume() { return STRUCT_OFFSET(AUIWSCustomBody, CustomWaterVolume); } \
	FORCEINLINE static uint32 __PPO__AllowCameraUnder() { return STRUCT_OFFSET(AUIWSCustomBody, AllowCameraUnder); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_10_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIWS_API UClass* StaticClass<class AUIWSCustomBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_UIWS_Source_UIWS_Public_UIWSCustomBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
