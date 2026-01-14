// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFlowComponent;
struct FGameplayTagContainer;
#ifdef FLOW_FlowNode_ComponentObserver_generated_h
#error "FlowNode_ComponentObserver.generated.h already included, missing '#pragma once' in FlowNode_ComponentObserver.h"
#endif
#define FLOW_FlowNode_ComponentObserver_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEventReceived); \
	DECLARE_FUNCTION(execOnComponentUnregistered); \
	DECLARE_FUNCTION(execOnComponentTagRemoved); \
	DECLARE_FUNCTION(execOnComponentTagAdded); \
	DECLARE_FUNCTION(execOnComponentRegistered);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEventReceived); \
	DECLARE_FUNCTION(execOnComponentUnregistered); \
	DECLARE_FUNCTION(execOnComponentTagRemoved); \
	DECLARE_FUNCTION(execOnComponentTagAdded); \
	DECLARE_FUNCTION(execOnComponentRegistered);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowNode_ComponentObserver(); \
	friend struct Z_Construct_UClass_UFlowNode_ComponentObserver_Statics; \
public: \
	DECLARE_CLASS(UFlowNode_ComponentObserver, UFlowNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowNode_ComponentObserver)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFlowNode_ComponentObserver(); \
	friend struct Z_Construct_UClass_UFlowNode_ComponentObserver_Statics; \
public: \
	DECLARE_CLASS(UFlowNode_ComponentObserver, UFlowNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowNode_ComponentObserver)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowNode_ComponentObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowNode_ComponentObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowNode_ComponentObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowNode_ComponentObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowNode_ComponentObserver(UFlowNode_ComponentObserver&&); \
	NO_API UFlowNode_ComponentObserver(const UFlowNode_ComponentObserver&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowNode_ComponentObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowNode_ComponentObserver(UFlowNode_ComponentObserver&&); \
	NO_API UFlowNode_ComponentObserver(const UFlowNode_ComponentObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowNode_ComponentObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowNode_ComponentObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowNode_ComponentObserver)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IdentityTags() { return STRUCT_OFFSET(UFlowNode_ComponentObserver, IdentityTags); } \
	FORCEINLINE static uint32 __PPO__IdentityMatchType() { return STRUCT_OFFSET(UFlowNode_ComponentObserver, IdentityMatchType); } \
	FORCEINLINE static uint32 __PPO__SuccessLimit() { return STRUCT_OFFSET(UFlowNode_ComponentObserver, SuccessLimit); } \
	FORCEINLINE static uint32 __PPO__SuccessCount() { return STRUCT_OFFSET(UFlowNode_ComponentObserver, SuccessCount); } \
	FORCEINLINE static uint32 __PPO__IdentityTag_DEPRECATED() { return STRUCT_OFFSET(UFlowNode_ComponentObserver, IdentityTag_DEPRECATED); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_16_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlowNode_ComponentObserver."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class UFlowNode_ComponentObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_ComponentObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
