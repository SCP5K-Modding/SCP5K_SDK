// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOW_FlowWorldSettings_generated_h
#error "FlowWorldSettings.generated.h already included, missing '#pragma once' in FlowWorldSettings.h"
#endif
#define FLOW_FlowWorldSettings_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_RPC_WRAPPERS
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlowWorldSettings(); \
	friend struct Z_Construct_UClass_AFlowWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AFlowWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(AFlowWorldSettings)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFlowWorldSettings(); \
	friend struct Z_Construct_UClass_AFlowWorldSettings_Statics; \
public: \
	DECLARE_CLASS(AFlowWorldSettings, AWorldSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(AFlowWorldSettings)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlowWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlowWorldSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowWorldSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowWorldSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowWorldSettings(AFlowWorldSettings&&); \
	NO_API AFlowWorldSettings(const AFlowWorldSettings&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlowWorldSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowWorldSettings(AFlowWorldSettings&&); \
	NO_API AFlowWorldSettings(const AFlowWorldSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowWorldSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowWorldSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlowWorldSettings)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FlowComponent() { return STRUCT_OFFSET(AFlowWorldSettings, FlowComponent); } \
	FORCEINLINE static uint32 __PPO__FlowAsset_DEPRECATED() { return STRUCT_OFFSET(AFlowWorldSettings, FlowAsset_DEPRECATED); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_13_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlowWorldSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class AFlowWorldSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowWorldSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
