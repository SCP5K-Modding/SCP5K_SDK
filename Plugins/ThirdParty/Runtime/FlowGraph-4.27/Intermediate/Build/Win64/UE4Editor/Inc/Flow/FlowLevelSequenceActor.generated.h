// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOW_FlowLevelSequenceActor_generated_h
#error "FlowLevelSequenceActor.generated.h already included, missing '#pragma once' in FlowLevelSequenceActor.h"
#endif
#define FLOW_FlowLevelSequenceActor_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_SPARSE_DATA
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedLevelSequenceAsset);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedLevelSequenceAsset);


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlowLevelSequenceActor(); \
	friend struct Z_Construct_UClass_AFlowLevelSequenceActor_Statics; \
public: \
	DECLARE_CLASS(AFlowLevelSequenceActor, ALevelSequenceActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(AFlowLevelSequenceActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedLevelSequenceAsset=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedLevelSequenceAsset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFlowLevelSequenceActor(); \
	friend struct Z_Construct_UClass_AFlowLevelSequenceActor_Statics; \
public: \
	DECLARE_CLASS(AFlowLevelSequenceActor, ALevelSequenceActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flow"), NO_API) \
	DECLARE_SERIALIZER(AFlowLevelSequenceActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedLevelSequenceAsset=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedLevelSequenceAsset	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlowLevelSequenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlowLevelSequenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowLevelSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowLevelSequenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowLevelSequenceActor(AFlowLevelSequenceActor&&); \
	NO_API AFlowLevelSequenceActor(const AFlowLevelSequenceActor&); \
public:


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlowLevelSequenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlowLevelSequenceActor(AFlowLevelSequenceActor&&); \
	NO_API AFlowLevelSequenceActor(const AFlowLevelSequenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlowLevelSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlowLevelSequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlowLevelSequenceActor)


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedLevelSequenceAsset() { return STRUCT_OFFSET(AFlowLevelSequenceActor, ReplicatedLevelSequenceAsset); }


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_11_PROLOG
#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_RPC_WRAPPERS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_INCLASS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_PRIVATE_PROPERTY_OFFSET \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_SPARSE_DATA \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_INCLASS_NO_PURE_DECLS \
	SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FlowLevelSequenceActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOW_API UClass* StaticClass<class AFlowLevelSequenceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_LevelSequence_FlowLevelSequenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
