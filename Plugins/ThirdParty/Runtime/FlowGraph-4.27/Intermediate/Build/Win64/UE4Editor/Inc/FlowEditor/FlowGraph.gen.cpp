// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/FlowGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraph() {}
// Cross Module References
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraph_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraph();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
// End Cross Module References
	void UFlowGraph::StaticRegisterNativesUFlowGraph()
	{
	}
	UClass* Z_Construct_UClass_UFlowGraph_NoRegister()
	{
		return UFlowGraph::StaticClass();
	}
	struct Z_Construct_UClass_UFlowGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/FlowGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowGraph_Statics::ClassParams = {
		&UFlowGraph::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowGraph, 1751261671);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowGraph>()
	{
		return UFlowGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowGraph(Z_Construct_UClass_UFlowGraph, &UFlowGraph::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
