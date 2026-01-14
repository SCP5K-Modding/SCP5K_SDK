// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLOWEDITOR_FlowGraphConnectionDrawingPolicy_generated_h
#error "FlowGraphConnectionDrawingPolicy.generated.h already included, missing '#pragma once' in FlowGraphConnectionDrawingPolicy.h"
#endif
#define FLOWEDITOR_FlowGraphConnectionDrawingPolicy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SCP5K_SDK_Plugins_ThirdParty_Runtime_FlowGraph_4_27_Source_FlowEditor_Public_Graph_FlowGraphConnectionDrawingPolicy_h


#define FOREACH_ENUM_EFLOWCONNECTIONDRAWTYPE(op) \
	op(EFlowConnectionDrawType::Default) \
	op(EFlowConnectionDrawType::Circuit) 

enum class EFlowConnectionDrawType : uint8;
template<> FLOWEDITOR_API UEnum* StaticEnum<EFlowConnectionDrawType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
