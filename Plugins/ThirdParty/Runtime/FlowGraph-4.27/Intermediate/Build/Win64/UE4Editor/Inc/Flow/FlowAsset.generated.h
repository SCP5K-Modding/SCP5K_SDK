// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFlowAssetSaveData;
class UFlowNode;
class UObject;
#ifdef FLOW_FlowAsset_generated_h
#error "FlowAsset.generated.h already included, missing '#pragma once' in FlowAsset.h"
#endif
#define FLOW_FlowAsset_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_RPC_WRAPPERS \
	virtual bool IsBoundToWorld_Implementation(); \
	virtual void OnLoad_Implementation(); \
	virtual void OnSave_Implementation(); \
 \
	DECLARE_FUNCTION(execIsBoundToWorld); \
	DECLARE_FUNCTION(execOnLoad); \
	DECLARE_FUNCTION(execOnSave); \
	DECLARE_FUNCTION(execLoadInstance); \
	DECLARE_FUNCTION(execSaveInstance); \
	DECLARE_FUNCTION(execGetRecordedNodes); \
	DECLARE_FUNCTION(execGetActiveNodes); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetOwner);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsBoundToWorld_Implementation(); \
	virtual void OnLoad_Implementation(); \
	virtual void OnSave_Implementation(); \
 \
	DECLARE_FUNCTION(execIsBoundToWorld); \
	DECLARE_FUNCTION(execOnLoad); \
	DECLARE_FUNCTION(execOnSave); \
	DECLARE_FUNCTION(execLoadInstance); \
	DECLARE_FUNCTION(execSaveInstance); \
	DECLARE_FUNCTION(execGetRecordedNodes); \
	DECLARE_FUNCTION(execGetActiveNodes); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetOwner);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_EVENT_PARMS \
	struct FlowAsset_eventIsBoundToWorld_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FlowAsset_eventIsBoundToWorld_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowAsset(); \
	friend struct Z_Construct_UClass_UFlowAsset_Statics; \
public: \
	DECLARE_CLASS(UFlowAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowAsset)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUFlowAsset(); \
	friend struct Z_Construct_UClass_UFlowAsset_Statics; \
public: \
	DECLARE_CLASS(UFlowAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowAsset)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowAsset(UFlowAsset&&); \
	NO_API UFlowAsset(const UFlowAsset&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowAsset(UFlowAsset&&); \
	NO_API UFlowAsset(const UFlowAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowAsset)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Nodes() { return STRUCT_OFFSET(UFlowAsset, Nodes); } \
	FORCEINLINE static uint32 __PPO__CustomInputs() { return STRUCT_OFFSET(UFlowAsset, CustomInputs); } \
	FORCEINLINE static uint32 __PPO__CustomOutputs() { return STRUCT_OFFSET(UFlowAsset, CustomOutputs); } \
	FORCEINLINE static uint32 __PPO__ActiveInstances() { return STRUCT_OFFSET(UFlowAsset, ActiveInstances); } \
	FORCEINLINE static uint32 __PPO__TemplateAsset() { return STRUCT_OFFSET(UFlowAsset, TemplateAsset); } \
	FORCEINLINE static uint32 __PPO__StartNode() { return STRUCT_OFFSET(UFlowAsset, StartNode); } \
	FORCEINLINE static uint32 __PPO__CustomInputNodes() { return STRUCT_OFFSET(UFlowAsset, CustomInputNodes); } \
	FORCEINLINE static uint32 __PPO__PreloadedNodes() { return STRUCT_OFFSET(UFlowAsset, PreloadedNodes); } \
	FORCEINLINE static uint32 __PPO__ActiveNodes() { return STRUCT_OFFSET(UFlowAsset, ActiveNodes); } \
	FORCEINLINE static uint32 __PPO__RecordedNodes() { return STRUCT_OFFSET(UFlowAsset, RecordedNodes); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_38_PROLOG \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_EVENT_PARMS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlowAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class UFlowAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
