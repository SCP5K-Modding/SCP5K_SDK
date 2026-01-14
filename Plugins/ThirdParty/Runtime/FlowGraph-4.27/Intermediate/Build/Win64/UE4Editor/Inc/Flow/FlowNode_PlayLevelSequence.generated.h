// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOW_FlowNode_PlayLevelSequence_generated_h
#error "FlowNode_PlayLevelSequence.generated.h already included, missing '#pragma once' in FlowNode_PlayLevelSequence.h"
#endif
#define FLOW_FlowNode_PlayLevelSequence_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlaybackFinished);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlaybackFinished);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowNode_PlayLevelSequence(); \
	friend struct Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics; \
public: \
	DECLARE_CLASS(UFlowNode_PlayLevelSequence, UFlowNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowNode_PlayLevelSequence)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUFlowNode_PlayLevelSequence(); \
	friend struct Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics; \
public: \
	DECLARE_CLASS(UFlowNode_PlayLevelSequence, UFlowNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowNode_PlayLevelSequence)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowNode_PlayLevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowNode_PlayLevelSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowNode_PlayLevelSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowNode_PlayLevelSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowNode_PlayLevelSequence(UFlowNode_PlayLevelSequence&&); \
	NO_API UFlowNode_PlayLevelSequence(const UFlowNode_PlayLevelSequence&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowNode_PlayLevelSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowNode_PlayLevelSequence(UFlowNode_PlayLevelSequence&&); \
	NO_API UFlowNode_PlayLevelSequence(const UFlowNode_PlayLevelSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowNode_PlayLevelSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowNode_PlayLevelSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowNode_PlayLevelSequence)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadedSequence() { return STRUCT_OFFSET(UFlowNode_PlayLevelSequence, LoadedSequence); } \
	FORCEINLINE static uint32 __PPO__SequencePlayer() { return STRUCT_OFFSET(UFlowNode_PlayLevelSequence, SequencePlayer); } \
	FORCEINLINE static uint32 __PPO__StartTime() { return STRUCT_OFFSET(UFlowNode_PlayLevelSequence, StartTime); } \
	FORCEINLINE static uint32 __PPO__ElapsedTime() { return STRUCT_OFFSET(UFlowNode_PlayLevelSequence, ElapsedTime); } \
	FORCEINLINE static uint32 __PPO__TimeDilation() { return STRUCT_OFFSET(UFlowNode_PlayLevelSequence, TimeDilation); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_23_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlowNode_PlayLevelSequence."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class UFlowNode_PlayLevelSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_World_FlowNode_PlayLevelSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
