// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/Nodes/FlowGraphNode_ExecutionSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraphNode_ExecutionSequence() {}
// Cross Module References
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode_ExecutionSequence();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
// End Cross Module References
	void UFlowGraphNode_ExecutionSequence::StaticRegisterNativesUFlowGraphNode_ExecutionSequence()
	{
	}
	UClass* Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_NoRegister()
	{
		return UFlowGraphNode_ExecutionSequence::StaticClass();
	}
	struct Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/FlowGraphNode_ExecutionSequence.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode_ExecutionSequence.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowGraphNode_ExecutionSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_Statics::ClassParams = {
		&UFlowGraphNode_ExecutionSequence::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowGraphNode_ExecutionSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowGraphNode_ExecutionSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowGraphNode_ExecutionSequence, 2285586937);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowGraphNode_ExecutionSequence>()
	{
		return UFlowGraphNode_ExecutionSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowGraphNode_ExecutionSequence(Z_Construct_UClass_UFlowGraphNode_ExecutionSequence, &UFlowGraphNode_ExecutionSequence::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowGraphNode_ExecutionSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowGraphNode_ExecutionSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
