// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOW_FlowTypes_generated_h
#error "FlowTypes.generated.h already included, missing '#pragma once' in FlowTypes.h"
#endif
#define FLOW_FlowTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_FlowTypes_h


#define FOREACH_ENUM_EFLOWONSCREENMESSAGETYPE(op) \
	op(EFlowOnScreenMessageType::Temporary) \
	op(EFlowOnScreenMessageType::Permanent) 

enum class EFlowOnScreenMessageType : uint8;
template<> FLOW_API UEnum* StaticEnum<EFlowOnScreenMessageType>();

#define FOREACH_ENUM_EFLOWTAGCONTAINERMATCHTYPE(op) \
	op(EFlowTagContainerMatchType::HasAny) \
	op(EFlowTagContainerMatchType::HasAnyExact) \
	op(EFlowTagContainerMatchType::HasAll) \
	op(EFlowTagContainerMatchType::HasAllExact) 

enum class EFlowTagContainerMatchType : uint8;
template<> FLOW_API UEnum* StaticEnum<EFlowTagContainerMatchType>();

#define FOREACH_ENUM_EFLOWNETMODE(op) \
	op(EFlowNetMode::Any) \
	op(EFlowNetMode::Authority) \
	op(EFlowNetMode::ClientOnly) \
	op(EFlowNetMode::ServerOnly) \
	op(EFlowNetMode::SinglePlayerOnly) 

enum class EFlowNetMode : uint8;
template<> FLOW_API UEnum* StaticEnum<EFlowNetMode>();

#define FOREACH_ENUM_EFLOWSIGNALMODE(op) \
	op(EFlowSignalMode::Enabled) \
	op(EFlowSignalMode::Disabled) \
	op(EFlowSignalMode::PassThrough) 

enum class EFlowSignalMode : uint8;
template<> FLOW_API UEnum* StaticEnum<EFlowSignalMode>();

#define FOREACH_ENUM_EFLOWFINISHPOLICY(op) \
	op(EFlowFinishPolicy::Keep) \
	op(EFlowFinishPolicy::Abort) 

enum class EFlowFinishPolicy : uint8;
template<> FLOW_API UEnum* StaticEnum<EFlowFinishPolicy>();

#define FOREACH_ENUM_EFLOWNODESTATE(op) \
	op(EFlowNodeState::NeverActivated) \
	op(EFlowNodeState::Active) \
	op(EFlowNodeState::Completed) \
	op(EFlowNodeState::Aborted) 

enum class EFlowNodeState : uint8;
template<> FLOW_API UEnum* StaticEnum<EFlowNodeState>();

#define FOREACH_ENUM_EFLOWNODESTYLE(op) \
	op(EFlowNodeStyle::Condition) \
	op(EFlowNodeStyle::Default) \
	op(EFlowNodeStyle::InOut) \
	op(EFlowNodeStyle::Latent) \
	op(EFlowNodeStyle::Logic) \
	op(EFlowNodeStyle::SubGraph) 

enum class EFlowNodeStyle : uint8;
template<> FLOW_API UEnum* StaticEnum<EFlowNodeStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
