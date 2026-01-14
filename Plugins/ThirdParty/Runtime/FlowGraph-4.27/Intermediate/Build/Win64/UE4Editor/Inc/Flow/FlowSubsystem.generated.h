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
enum class EGameplayContainerMatchType : uint8;
class AActor;
class AActor; class UFlowComponent;
struct FGameplayTag;
class UFlowSaveGame;
class UFlowNode_SubGraph; class UFlowAsset;
class UObject;
class UFlowAsset;
class UObject; class UFlowAsset;
enum class EFlowFinishPolicy : uint8;
#ifdef FLOW_FlowSubsystem_generated_h
#error "FlowSubsystem.generated.h already included, missing '#pragma once' in FlowSubsystem.h"
#endif
#define FLOW_FlowSubsystem_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_18_DELEGATE \
struct _Script_Flow_eventTaggedFlowComponentEvent_Parms \
{ \
	UFlowComponent* Component; \
	FGameplayTagContainer Tags; \
}; \
static inline void FTaggedFlowComponentEvent_DelegateWrapper(const FMulticastScriptDelegate& TaggedFlowComponentEvent, UFlowComponent* Component, FGameplayTagContainer const& Tags) \
{ \
	_Script_Flow_eventTaggedFlowComponentEvent_Parms Parms; \
	Parms.Component=Component; \
	Parms.Tags=Tags; \
	TaggedFlowComponentEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_17_DELEGATE \
struct _Script_Flow_eventSimpleFlowComponentEvent_Parms \
{ \
	UFlowComponent* Component; \
}; \
static inline void FSimpleFlowComponentEvent_DelegateWrapper(const FMulticastScriptDelegate& SimpleFlowComponentEvent, UFlowComponent* Component) \
{ \
	_Script_Flow_eventSimpleFlowComponentEvent_Parms Parms; \
	Parms.Component=Component; \
	SimpleFlowComponentEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_16_DELEGATE \
static inline void FSimpleFlowEvent_DelegateWrapper(const FMulticastScriptDelegate& SimpleFlowEvent) \
{ \
	SimpleFlowEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFlowActorsAndComponentsByTags); \
	DECLARE_FUNCTION(execGetFlowActorsAndComponentsByTag); \
	DECLARE_FUNCTION(execGetFlowActorsByTags); \
	DECLARE_FUNCTION(execGetFlowActorsByTag); \
	DECLARE_FUNCTION(execGetFlowComponentsByTags); \
	DECLARE_FUNCTION(execGetFlowComponentsByTag); \
	DECLARE_FUNCTION(execGetLoadedSaveGame); \
	DECLARE_FUNCTION(execOnGameLoaded); \
	DECLARE_FUNCTION(execOnGameSaved); \
	DECLARE_FUNCTION(execGetInstancedSubFlows); \
	DECLARE_FUNCTION(execGetRootFlow); \
	DECLARE_FUNCTION(execGetRootInstancesByOwner); \
	DECLARE_FUNCTION(execGetRootInstances); \
	DECLARE_FUNCTION(execFinishAllRootFlows); \
	DECLARE_FUNCTION(execFinishRootFlow); \
	DECLARE_FUNCTION(execStartRootFlow);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFlowActorsAndComponentsByTags); \
	DECLARE_FUNCTION(execGetFlowActorsAndComponentsByTag); \
	DECLARE_FUNCTION(execGetFlowActorsByTags); \
	DECLARE_FUNCTION(execGetFlowActorsByTag); \
	DECLARE_FUNCTION(execGetFlowComponentsByTags); \
	DECLARE_FUNCTION(execGetFlowComponentsByTag); \
	DECLARE_FUNCTION(execGetLoadedSaveGame); \
	DECLARE_FUNCTION(execOnGameLoaded); \
	DECLARE_FUNCTION(execOnGameSaved); \
	DECLARE_FUNCTION(execGetInstancedSubFlows); \
	DECLARE_FUNCTION(execGetRootFlow); \
	DECLARE_FUNCTION(execGetRootInstancesByOwner); \
	DECLARE_FUNCTION(execGetRootInstances); \
	DECLARE_FUNCTION(execFinishAllRootFlows); \
	DECLARE_FUNCTION(execFinishRootFlow); \
	DECLARE_FUNCTION(execStartRootFlow);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowSubsystem(); \
	friend struct Z_Construct_UClass_UFlowSubsystem_Statics; \
public: \
	DECLARE_CLASS(UFlowSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowSubsystem)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUFlowSubsystem(); \
	friend struct Z_Construct_UClass_UFlowSubsystem_Statics; \
public: \
	DECLARE_CLASS(UFlowSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowSubsystem)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowSubsystem(UFlowSubsystem&&); \
	NO_API UFlowSubsystem(const UFlowSubsystem&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowSubsystem(UFlowSubsystem&&); \
	NO_API UFlowSubsystem(const UFlowSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlowSubsystem)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstancedTemplates() { return STRUCT_OFFSET(UFlowSubsystem, InstancedTemplates); } \
	FORCEINLINE static uint32 __PPO__RootInstances() { return STRUCT_OFFSET(UFlowSubsystem, RootInstances); } \
	FORCEINLINE static uint32 __PPO__InstancedSubFlows() { return STRUCT_OFFSET(UFlowSubsystem, InstancedSubFlows); } \
	FORCEINLINE static uint32 __PPO__LoadedSaveGame() { return STRUCT_OFFSET(UFlowSubsystem, LoadedSaveGame); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_26_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class UFlowSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
