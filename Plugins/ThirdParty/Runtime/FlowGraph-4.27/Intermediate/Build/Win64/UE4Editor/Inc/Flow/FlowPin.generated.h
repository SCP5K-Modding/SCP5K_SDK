// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOW_FlowPin_generated_h
#error "FlowPin.generated.h already included, missing '#pragma once' in FlowPin.h"
#endif
#define FLOW_FlowPin_generated_h

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowPin_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConnectedPin_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FLOW_API UScriptStruct* StaticStruct<struct FConnectedPin>();

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowPin_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowOutputPinHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFlowPinHandle Super;


template<> FLOW_API UScriptStruct* StaticStruct<struct FFlowOutputPinHandle>();

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowPin_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowInputPinHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFlowPinHandle Super;


template<> FLOW_API UScriptStruct* StaticStruct<struct FFlowInputPinHandle>();

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowPin_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowPinHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FLOW_API UScriptStruct* StaticStruct<struct FFlowPinHandle>();

#define SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowPin_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowPin_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FLOW_API UScriptStruct* StaticStruct<struct FFlowPin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_Flow_Public_Nodes_FlowPin_h


#define FOREACH_ENUM_EFLOWPINACTIVATIONTYPE(op) \
	op(EFlowPinActivationType::Default) \
	op(EFlowPinActivationType::Forced) \
	op(EFlowPinActivationType::PassThrough) 

enum class EFlowPinActivationType : uint8;
template<> FLOW_API UEnum* StaticEnum<EFlowPinActivationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
