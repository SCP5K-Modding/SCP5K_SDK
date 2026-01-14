// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Route/FlowNode_Start.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_Start() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Start_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Start();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_Start::StaticRegisterNativesUFlowNode_Start()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_Start_NoRegister()
	{
		return UFlowNode_Start::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_Start_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_Start_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Start_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Execution of the graph always starts from this node\n */" },
		{ "DisplayName", "Start" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Route/FlowNode_Start.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Start.h" },
		{ "ToolTip", "Execution of the graph always starts from this node" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_Start_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_Start>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_Start_Statics::ClassParams = {
		&UFlowNode_Start::StaticClass,
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
		0x001002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Start_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Start_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_Start()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_Start_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_Start, 2432425652);
	template<> FLOW_API UClass* StaticClass<UFlowNode_Start>()
	{
		return UFlowNode_Start::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_Start(Z_Construct_UClass_UFlowNode_Start, &UFlowNode_Start::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_Start"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_Start);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
