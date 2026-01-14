// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/Nodes/FlowGraphNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraphNode() {}
// Cross Module References
	FLOWEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFlowBreakpoint();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
// End Cross Module References
class UScriptStruct* FFlowBreakpoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FLOWEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FFlowBreakpoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowBreakpoint, Z_Construct_UPackage__Script_FlowEditor(), TEXT("FlowBreakpoint"), sizeof(FFlowBreakpoint), Get_Z_Construct_UScriptStruct_FFlowBreakpoint_Hash());
	}
	return Singleton;
}
template<> FLOWEDITOR_API UScriptStruct* StaticStruct<FFlowBreakpoint>()
{
	return FFlowBreakpoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFlowBreakpoint(FFlowBreakpoint::StaticStruct, TEXT("/Script/FlowEditor"), TEXT("FlowBreakpoint"), false, nullptr, nullptr);
static struct FScriptStruct_FlowEditor_StaticRegisterNativesFFlowBreakpoint
{
	FScriptStruct_FlowEditor_StaticRegisterNativesFFlowBreakpoint()
	{
		UScriptStruct::DeferCppStructOps<FFlowBreakpoint>(FName(TEXT("FlowBreakpoint")));
	}
} ScriptStruct_FlowEditor_StaticRegisterNativesFFlowBreakpoint;
	struct Z_Construct_UScriptStruct_FFlowBreakpoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBreakpoint_MetaData[];
#endif
		static void NewProp_bHasBreakpoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBreakpoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowBreakpoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::NewProp_bHasBreakpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::NewProp_bHasBreakpoint_SetBit(void* Obj)
	{
		((FFlowBreakpoint*)Obj)->bHasBreakpoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::NewProp_bHasBreakpoint = { "bHasBreakpoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFlowBreakpoint), &Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::NewProp_bHasBreakpoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::NewProp_bHasBreakpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::NewProp_bHasBreakpoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::NewProp_bHasBreakpoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
		nullptr,
		&NewStructOps,
		"FlowBreakpoint",
		sizeof(FFlowBreakpoint),
		alignof(FFlowBreakpoint),
		Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlowBreakpoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFlowBreakpoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FlowEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FlowBreakpoint"), sizeof(FFlowBreakpoint), Get_Z_Construct_UScriptStruct_FFlowBreakpoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFlowBreakpoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFlowBreakpoint_Hash() { return 472705913U; }
	void UFlowGraphNode::StaticRegisterNativesUFlowGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UFlowGraphNode_NoRegister()
	{
		return UFlowGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UFlowGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowNode;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AssignedNodeClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssignedNodeClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssignedNodeClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeBreakpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeBreakpoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinBreakpoints_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinBreakpoints_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinBreakpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PinBreakpoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Graph representation of the Flow Node\n */" },
		{ "IncludePath", "Graph/Nodes/FlowGraphNode.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode.h" },
		{ "ToolTip", "Graph representation of the Flow Node" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_FlowNode_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_FlowNode = { "FlowNode", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphNode, FlowNode), Z_Construct_UClass_UFlowNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_FlowNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_FlowNode_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_AssignedNodeClasses_Inner = { "AssignedNodeClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_AssignedNodeClasses_MetaData[] = {
		{ "Comment", "// It would be intuitive to assign a custom Graph Node class in Flow Node class\n// However, we shouldn't assign class from editor module to runtime module class\n" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode.h" },
		{ "ToolTip", "It would be intuitive to assign a custom Graph Node class in Flow Node class\nHowever, we shouldn't assign class from editor module to runtime module class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_AssignedNodeClasses = { "AssignedNodeClasses", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphNode, AssignedNodeClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_AssignedNodeClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_AssignedNodeClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_NodeBreakpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_NodeBreakpoint = { "NodeBreakpoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphNode, NodeBreakpoint), Z_Construct_UScriptStruct_FFlowBreakpoint, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_NodeBreakpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_NodeBreakpoint_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints_ValueProp = { "PinBreakpoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFlowBreakpoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints_Key_KeyProp = { "PinBreakpoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints = { "PinBreakpoints", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowGraphNode, PinBreakpoints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_FlowNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_AssignedNodeClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_AssignedNodeClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_NodeBreakpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowGraphNode_Statics::NewProp_PinBreakpoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowGraphNode_Statics::ClassParams = {
		&UFlowGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowGraphNode, 3961649975);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowGraphNode>()
	{
		return UFlowGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowGraphNode(Z_Construct_UClass_UFlowGraphNode, &UFlowGraphNode::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowGraphNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
