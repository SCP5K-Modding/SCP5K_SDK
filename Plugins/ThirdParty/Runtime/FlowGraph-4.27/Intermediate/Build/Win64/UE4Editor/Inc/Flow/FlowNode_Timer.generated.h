// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOW_FlowNode_Timer_generated_h
#error "FlowNode_Timer.generated.h already included, missing '#pragma once' in FlowNode_Timer.h"
#endif
#define FLOW_FlowNode_Timer_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompletion); \
	DECLARE_FUNCTION(execOnStep);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompletion); \
	DECLARE_FUNCTION(execOnStep);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowNode_Timer(); \
	friend struct Z_Construct_UClass_UFlowNode_Timer_Statics; \
public: \
	DECLARE_CLASS(UFlowNode_Timer, UFlowNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowNode_Timer)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFlowNode_Timer(); \
	friend struct Z_Construct_UClass_UFlowNode_Timer_Statics; \
public: \
	DECLARE_CLASS(UFlowNode_Timer, UFlowNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowNode_Timer)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowNode_Timer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowNode_Timer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowNode_Timer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowNode_Timer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowNode_Timer(UFlowNode_Timer&&); \
	NO_API UFlowNode_Timer(const UFlowNode_Timer&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowNode_Timer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowNode_Timer(UFlowNode_Timer&&); \
	NO_API UFlowNode_Timer(const UFlowNode_Timer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowNode_Timer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowNode_Timer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowNode_Timer)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CompletionTime() { return STRUCT_OFFSET(UFlowNode_Timer, CompletionTime); } \
	FORCEINLINE static uint32 __PPO__StepTime() { return STRUCT_OFFSET(UFlowNode_Timer, StepTime); } \
	FORCEINLINE static uint32 __PPO__SumOfSteps() { return STRUCT_OFFSET(UFlowNode_Timer, SumOfSteps); } \
	FORCEINLINE static uint32 __PPO__RemainingCompletionTime() { return STRUCT_OFFSET(UFlowNode_Timer, RemainingCompletionTime); } \
	FORCEINLINE static uint32 __PPO__RemainingStepTime() { return STRUCT_OFFSET(UFlowNode_Timer, RemainingStepTime); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_12_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlowNode_Timer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class UFlowNode_Timer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_Route_FlowNode_Timer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
