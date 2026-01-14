// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFlowComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FFlowComponentSaveData;
struct FFlowAssetSaveData;
class UFlowAsset;
class UObject;
enum class EFlowFinishPolicy : uint8;
enum class EFlowNetMode : uint8;
enum class EFlowOnScreenMessageType : uint8;
#ifdef FLOW_FlowComponent_generated_h
#error "FlowComponent.generated.h already included, missing '#pragma once' in FlowComponent.h"
#endif
#define FLOW_FlowComponent_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNotifyTagReplication_Statics; \
	FLOW_API static class UScriptStruct* StaticStruct();


template<> FLOW_API UScriptStruct* StaticStruct<struct FNotifyTagReplication>();

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_38_DELEGATE \
struct _Script_Flow_eventFlowComponentDynamicNotify_Parms \
{ \
	UFlowComponent* FlowComponent; \
	FGameplayTag NotifyTag; \
}; \
static inline void FFlowComponentDynamicNotify_DelegateWrapper(const FMulticastScriptDelegate& FlowComponentDynamicNotify, UFlowComponent* FlowComponent, FGameplayTag const& NotifyTag) \
{ \
	_Script_Flow_eventFlowComponentDynamicNotify_Parms Parms; \
	Parms.FlowComponent=FlowComponent; \
	Parms.NotifyTag=NotifyTag; \
	FlowComponentDynamicNotify.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_35_DELEGATE \
struct _Script_Flow_eventFlowComponentTagsReplicated_Parms \
{ \
	UFlowComponent* FlowComponent; \
	FGameplayTagContainer CurrentTags; \
}; \
static inline void FFlowComponentTagsReplicated_DelegateWrapper(const FMulticastScriptDelegate& FlowComponentTagsReplicated, UFlowComponent* FlowComponent, FGameplayTagContainer const& CurrentTags) \
{ \
	_Script_Flow_eventFlowComponentTagsReplicated_Parms Parms; \
	Parms.FlowComponent=FlowComponent; \
	Parms.CurrentTags=CurrentTags; \
	FlowComponentTagsReplicated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_RPC_WRAPPERS \
	virtual void OnLoad_Implementation(); \
	virtual void OnSave_Implementation(); \
 \
	DECLARE_FUNCTION(execOnLoad); \
	DECLARE_FUNCTION(execOnSave); \
	DECLARE_FUNCTION(execLoadInstance); \
	DECLARE_FUNCTION(execSaveInstance); \
	DECLARE_FUNCTION(execLoadRootFlow); \
	DECLARE_FUNCTION(execSaveRootFlow); \
	DECLARE_FUNCTION(execGetRootFlowInstance); \
	DECLARE_FUNCTION(execGetRootInstances); \
	DECLARE_FUNCTION(execFinishRootFlow); \
	DECLARE_FUNCTION(execStartRootFlow); \
	DECLARE_FUNCTION(execOnRep_NotifyTagsFromAnotherComponent); \
	DECLARE_FUNCTION(execNotifyActor); \
	DECLARE_FUNCTION(execOnRep_NotifyTagsFromGraph); \
	DECLARE_FUNCTION(execOnRep_SentNotifyTags); \
	DECLARE_FUNCTION(execBulkNotifyGraph); \
	DECLARE_FUNCTION(execNotifyGraph); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execOnRep_RemovedIdentityTags); \
	DECLARE_FUNCTION(execOnRep_AddedIdentityTags); \
	DECLARE_FUNCTION(execRemoveIdentityTags); \
	DECLARE_FUNCTION(execRemoveIdentityTag); \
	DECLARE_FUNCTION(execAddIdentityTags); \
	DECLARE_FUNCTION(execAddIdentityTag);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnLoad_Implementation(); \
	virtual void OnSave_Implementation(); \
 \
	DECLARE_FUNCTION(execOnLoad); \
	DECLARE_FUNCTION(execOnSave); \
	DECLARE_FUNCTION(execLoadInstance); \
	DECLARE_FUNCTION(execSaveInstance); \
	DECLARE_FUNCTION(execLoadRootFlow); \
	DECLARE_FUNCTION(execSaveRootFlow); \
	DECLARE_FUNCTION(execGetRootFlowInstance); \
	DECLARE_FUNCTION(execGetRootInstances); \
	DECLARE_FUNCTION(execFinishRootFlow); \
	DECLARE_FUNCTION(execStartRootFlow); \
	DECLARE_FUNCTION(execOnRep_NotifyTagsFromAnotherComponent); \
	DECLARE_FUNCTION(execNotifyActor); \
	DECLARE_FUNCTION(execOnRep_NotifyTagsFromGraph); \
	DECLARE_FUNCTION(execOnRep_SentNotifyTags); \
	DECLARE_FUNCTION(execBulkNotifyGraph); \
	DECLARE_FUNCTION(execNotifyGraph); \
	DECLARE_FUNCTION(execLogError); \
	DECLARE_FUNCTION(execOnRep_RemovedIdentityTags); \
	DECLARE_FUNCTION(execOnRep_AddedIdentityTags); \
	DECLARE_FUNCTION(execRemoveIdentityTags); \
	DECLARE_FUNCTION(execRemoveIdentityTag); \
	DECLARE_FUNCTION(execAddIdentityTags); \
	DECLARE_FUNCTION(execAddIdentityTag);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_EVENT_PARMS
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_CALLBACK_WRAPPERS
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlowComponent(); \
	friend struct Z_Construct_UClass_UFlowComponent_Statics; \
public: \
	DECLARE_CLASS(UFlowComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AddedIdentityTags=NETFIELD_REP_START, \
		RemovedIdentityTags, \
		RecentlySentNotifyTags, \
		NotifyTagsFromGraph, \
		NotifyTagsFromAnotherComponent, \
		NETFIELD_REP_END=NotifyTagsFromAnotherComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUFlowComponent(); \
	friend struct Z_Construct_UClass_UFlowComponent_Statics; \
public: \
	DECLARE_CLASS(UFlowComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(UFlowComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AddedIdentityTags=NETFIELD_REP_START, \
		RemovedIdentityTags, \
		RecentlySentNotifyTags, \
		NotifyTagsFromGraph, \
		NotifyTagsFromAnotherComponent, \
		NETFIELD_REP_END=NotifyTagsFromAnotherComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowComponent(UFlowComponent&&); \
	NO_API UFlowComponent(const UFlowComponent&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlowComponent(UFlowComponent&&); \
	NO_API UFlowComponent(const UFlowComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowComponent)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AddedIdentityTags() { return STRUCT_OFFSET(UFlowComponent, AddedIdentityTags); } \
	FORCEINLINE static uint32 __PPO__RemovedIdentityTags() { return STRUCT_OFFSET(UFlowComponent, RemovedIdentityTags); } \
	FORCEINLINE static uint32 __PPO__RecentlySentNotifyTags() { return STRUCT_OFFSET(UFlowComponent, RecentlySentNotifyTags); } \
	FORCEINLINE static uint32 __PPO__NotifyTagsFromGraph() { return STRUCT_OFFSET(UFlowComponent, NotifyTagsFromGraph); } \
	FORCEINLINE static uint32 __PPO__NotifyTagsFromAnotherComponent() { return STRUCT_OFFSET(UFlowComponent, NotifyTagsFromAnotherComponent); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_43_PROLOG \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_EVENT_PARMS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_CALLBACK_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlowComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class UFlowComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
