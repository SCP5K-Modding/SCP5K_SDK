// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/Nodes/FlowGraphNode_SubGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraphNode_SubGraph() {}
// Cross Module References
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode_SubGraph_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode_SubGraph();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
// End Cross Module References
	void UFlowGraphNode_SubGraph::StaticRegisterNativesUFlowGraphNode_SubGraph()
	{
	}
	UClass* Z_Construct_UClass_UFlowGraphNode_SubGraph_NoRegister()
	{
		return UFlowGraphNode_SubGraph::StaticClass();
	}
	struct Z_Construct_UClass_UFlowGraphNode_SubGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowGraphNode_SubGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphNode_SubGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/FlowGraphNode_SubGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode_SubGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowGraphNode_SubGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowGraphNode_SubGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowGraphNode_SubGraph_Statics::ClassParams = {
		&UFlowGraphNode_SubGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowGraphNode_SubGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_SubGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowGraphNode_SubGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowGraphNode_SubGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowGraphNode_SubGraph, 973876904);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowGraphNode_SubGraph>()
	{
		return UFlowGraphNode_SubGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowGraphNode_SubGraph(Z_Construct_UClass_UFlowGraphNode_SubGraph, &UFlowGraphNode_SubGraph::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowGraphNode_SubGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowGraphNode_SubGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
