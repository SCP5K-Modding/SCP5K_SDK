// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/Nodes/FlowGraphNode_Reroute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraphNode_Reroute() {}
// Cross Module References
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode_Reroute_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode_Reroute();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphNode();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
// End Cross Module References
	void UFlowGraphNode_Reroute::StaticRegisterNativesUFlowGraphNode_Reroute()
	{
	}
	UClass* Z_Construct_UClass_UFlowGraphNode_Reroute_NoRegister()
	{
		return UFlowGraphNode_Reroute::StaticClass();
	}
	struct Z_Construct_UClass_UFlowGraphNode_Reroute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowGraphNode_Reroute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphNode_Reroute_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/FlowGraphNode_Reroute.h" },
		{ "ModuleRelativePath", "Public/Graph/Nodes/FlowGraphNode_Reroute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowGraphNode_Reroute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowGraphNode_Reroute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowGraphNode_Reroute_Statics::ClassParams = {
		&UFlowGraphNode_Reroute::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlowGraphNode_Reroute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphNode_Reroute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowGraphNode_Reroute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowGraphNode_Reroute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowGraphNode_Reroute, 1229785253);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowGraphNode_Reroute>()
	{
		return UFlowGraphNode_Reroute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowGraphNode_Reroute(Z_Construct_UClass_UFlowGraphNode_Reroute, &UFlowGraphNode_Reroute::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowGraphNode_Reroute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowGraphNode_Reroute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
