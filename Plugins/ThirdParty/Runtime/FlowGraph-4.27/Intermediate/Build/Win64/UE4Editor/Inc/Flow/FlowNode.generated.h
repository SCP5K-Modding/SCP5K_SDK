// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFlowNodeSaveData;
enum class EFlowOnScreenMessageType : uint8;
class UObject;
struct FGameplayTagContainer;
struct FGameplayTag;
struct FFlowOutputPinHandle;
enum class EFlowPinActivationType : uint8;
class UFlowSubsystem;
class UFlowAsset;
class AActor;
struct FLinearColor;
#ifdef FLOW_FlowNode_generated_h
#error "FlowNode.generated.h already included, missing '#pragma once' in FlowNode.h"
#endif
#define FLOW_FlowNode_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_RPC_WRAPPERS \
	virtual void OnPassThrough_Implementation(); \
	virtual void OnLoad_Implementation(); \
	virtual void OnSave_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPassThrough); \
	DECLARE_FUNCTION(execOnLoad); \
	DECLARE_FUNCTION(execOnSave); \
	DECLARE_FUNCTION(execLoadInstance); \
	DECLARE_FUNCTION(execSaveInstance); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execGetProgressAsString); \
	DECLARE_FUNCTION(execGetClassDescription); \
	DECLARE_FUNCTION(execGetNotifyTagsDescription); \
	DECLARE_FUNCTION(execGetIdentityTagsDescription); \
	DECLARE_FUNCTION(execGetIdentityTagDescription); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execTriggerOutputPin); \
	DECLARE_FUNCTION(execTriggerOutput); \
	DECLARE_FUNCTION(execTriggerFirstOutput); \
	DECLARE_FUNCTION(execGetFlowSubsystem); \
	DECLARE_FUNCTION(execIsOutputConnected); \
	DECLARE_FUNCTION(execIsInputConnected); \
	DECLARE_FUNCTION(execGetOutputNames); \
	DECLARE_FUNCTION(execGetInputNames); \
	DECLARE_FUNCTION(execGetFlowAsset);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPassThrough_Implementation(); \
	virtual void OnLoad_Implementation(); \
	virtual void OnSave_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPassThrough); \
	DECLARE_FUNCTION(execOnLoad); \
	DECLARE_FUNCTION(execOnSave); \
	DECLARE_FUNCTION(execLoadInstance); \
	DECLARE_FUNCTION(execSaveInstance); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execGetProgressAsString); \
	DECLARE_FUNCTION(execGetClassDescription); \
	DECLARE_FUNCTION(execGetNotifyTagsDescription); \
	DECLARE_FUNCTION(execGetIdentityTagsDescription); \
	DECLARE_FUNCTION(execGetIdentityTagDescription); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execTriggerOutputPin); \
	DECLARE_FUNCTION(execTriggerOutput); \
	DECLARE_FUNCTION(execTriggerFirstOutput); \
	DECLARE_FUNCTION(execGetFlowSubsystem); \
	DECLARE_FUNCTION(execIsOutputConnected); \
	DECLARE_FUNCTION(execIsInputConnected); \
	DECLARE_FUNCTION(execGetOutputNames); \
	DECLARE_FUNCTION(execGetInputNames); \
	DECLARE_FUNCTION(execGetFlowAsset);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_EVENT_PARMS \
	struct FlowNode_eventK2_CanUserAddInput_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FlowNode_eventK2_CanUserAddInput_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FlowNode_eventK2_CanUserAddOutput_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FlowNode_eventK2_CanUserAddOutput_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FlowNode_eventK2_ExecuteInput_Parms \
	{ \
		FName PinName; \
	}; \
	struct FlowNode_eventK2_GetActorToFocus_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FlowNode_eventK2_GetActorToFocus_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FlowNode_eventK2_GetAssetPath_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct FlowNode_eventK2_GetAssetToEdit_Parms \
	{ \
		UObject* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FlowNode_eventK2_GetAssetToEdit_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FlowNode_eventK2_GetNodeDescription_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct FlowNode_eventK2_GetStatusBackgroundColor_Parms \
	{ \
		FLinearColor OutColor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FlowNode_eventK2_GetStatusBackgroundColor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FlowNode_eventK2_GetStatusString_Parms \
	{ \
		FString ReturnValue; \
	};


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowNode(); \
	friend struct Z_Construct_UClass_UFlowNode_Statics; \
public: \
	DECLARE_CLASS(UFlowNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowNode) \
	virtual UObject* _getUObject() const override { return const_cast<UFlowNode*>(this); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUFlowNode(); \
	friend struct Z_Construct_UClass_UFlowNode_Statics; \
public: \
	DECLARE_CLASS(UFlowNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowNode) \
	virtual UObject* _getUObject() const override { return const_cast<UFlowNode*>(this); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowNode(UFlowNode&&); \
	NO_API UFlowNode(const UFlowNode&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowNode(UFlowNode&&); \
	NO_API UFlowNode(const UFlowNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowNode)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GraphNode() { return STRUCT_OFFSET(UFlowNode, GraphNode); } \
	FORCEINLINE static uint32 __PPO__NodeGuid() { return STRUCT_OFFSET(UFlowNode, NodeGuid); } \
	FORCEINLINE static uint32 __PPO__AllowedSignalModes() { return STRUCT_OFFSET(UFlowNode, AllowedSignalModes); } \
	FORCEINLINE static uint32 __PPO__SignalMode() { return STRUCT_OFFSET(UFlowNode, SignalMode); } \
	FORCEINLINE static uint32 __PPO__InputPins() { return STRUCT_OFFSET(UFlowNode, InputPins); } \
	FORCEINLINE static uint32 __PPO__OutputPins() { return STRUCT_OFFSET(UFlowNode, OutputPins); } \
	FORCEINLINE static uint32 __PPO__Connections() { return STRUCT_OFFSET(UFlowNode, Connections); } \
	FORCEINLINE static uint32 __PPO__ActivationState() { return STRUCT_OFFSET(UFlowNode, ActivationState); } \
	FORCEINLINE static uint32 __PPO__InputNames_DEPRECATED() { return STRUCT_OFFSET(UFlowNode, InputNames_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__OutputNames_DEPRECATED() { return STRUCT_OFFSET(UFlowNode, OutputNames_DEPRECATED); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_24_PROLOG \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_EVENT_PARMS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlowNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class UFlowNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
