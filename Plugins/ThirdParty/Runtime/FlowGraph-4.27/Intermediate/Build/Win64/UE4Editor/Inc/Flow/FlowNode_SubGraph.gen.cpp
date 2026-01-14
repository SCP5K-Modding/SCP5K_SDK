// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Route/FlowNode_SubGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_SubGraph() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_SubGraph_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_SubGraph();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UClass* Z_Construct_UClass_UFlowAsset_NoRegister();
// End Cross Module References
	void UFlowNode_SubGraph::StaticRegisterNativesUFlowNode_SubGraph()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_SubGraph_NoRegister()
	{
		return UFlowNode_SubGraph::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_SubGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanInstanceIdenticalAsset_MetaData[];
#endif
		static void NewProp_bCanInstanceIdenticalAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanInstanceIdenticalAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedAssetInstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavedAssetInstanceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_SubGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_SubGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Creates instance of provided Flow Asset and starts its execution\n */" },
		{ "DisplayName", "Sub Graph" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Route/FlowNode_SubGraph.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_SubGraph.h" },
		{ "ToolTip", "Creates instance of provided Flow Asset and starts its execution" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_SubGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_SubGraph, Asset), Z_Construct_UClass_UFlowAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_bCanInstanceIdenticalAsset_MetaData[] = {
		{ "Category", "Graph" },
		{ "Comment", "/*\n\x09 * Allow to create instance of the same Flow Asset as the asset containing this node\n\x09 * Enabling it may cause an infinite loop, if graph would keep creating copies of itself\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_SubGraph.h" },
		{ "ToolTip", "* Allow to create instance of the same Flow Asset as the asset containing this node\n* Enabling it may cause an infinite loop, if graph would keep creating copies of itself" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_bCanInstanceIdenticalAsset_SetBit(void* Obj)
	{
		((UFlowNode_SubGraph*)Obj)->bCanInstanceIdenticalAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_bCanInstanceIdenticalAsset = { "bCanInstanceIdenticalAsset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_SubGraph), &Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_bCanInstanceIdenticalAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_bCanInstanceIdenticalAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_bCanInstanceIdenticalAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_SavedAssetInstanceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_SubGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_SavedAssetInstanceName = { "SavedAssetInstanceName", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_SubGraph, SavedAssetInstanceName), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_SavedAssetInstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_SavedAssetInstanceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_SubGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_Asset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_bCanInstanceIdenticalAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_SubGraph_Statics::NewProp_SavedAssetInstanceName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_SubGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_SubGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_SubGraph_Statics::ClassParams = {
		&UFlowNode_SubGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_SubGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_SubGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_SubGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_SubGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_SubGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_SubGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_SubGraph, 3454652673);
	template<> FLOW_API UClass* StaticClass<UFlowNode_SubGraph>()
	{
		return UFlowNode_SubGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_SubGraph(Z_Construct_UClass_UFlowNode_SubGraph, &UFlowNode_SubGraph::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_SubGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_SubGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
