// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Route/FlowNode_ExecutionSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_ExecutionSequence() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_ExecutionSequence_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_ExecutionSequence();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_ExecutionSequence::StaticRegisterNativesUFlowNode_ExecutionSequence()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_ExecutionSequence_NoRegister()
	{
		return UFlowNode_ExecutionSequence::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_ExecutionSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_ExecutionSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ExecutionSequence_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Executes all outputs sequentially\n */" },
		{ "DisplayName", "Sequence" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Route/FlowNode_ExecutionSequence.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_ExecutionSequence.h" },
		{ "ToolTip", "Executes all outputs sequentially" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_ExecutionSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_ExecutionSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_ExecutionSequence_Statics::ClassParams = {
		&UFlowNode_ExecutionSequence::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ExecutionSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ExecutionSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_ExecutionSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_ExecutionSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_ExecutionSequence, 994758751);
	template<> FLOW_API UClass* StaticClass<UFlowNode_ExecutionSequence>()
	{
		return UFlowNode_ExecutionSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_ExecutionSequence(Z_Construct_UClass_UFlowNode_ExecutionSequence, &UFlowNode_ExecutionSequence::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_ExecutionSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_ExecutionSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
