// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Operators/FlowNode_LogicalOR.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_LogicalOR() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_LogicalOR_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_LogicalOR();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_LogicalOR::StaticRegisterNativesUFlowNode_LogicalOR()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_LogicalOR_NoRegister()
	{
		return UFlowNode_LogicalOR::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_LogicalOR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecutionLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecutionCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_LogicalOR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_LogicalOR_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Logical OR\n * Output will be triggered only once\n */" },
		{ "DisplayName", "OR" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Operators/FlowNode_LogicalOR.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Operators/FlowNode_LogicalOR.h" },
		{ "ToolTip", "Logical OR\nOutput will be triggered only once" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Lifetime" },
		{ "ModuleRelativePath", "Public/Nodes/Operators/FlowNode_LogicalOR.h" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UFlowNode_LogicalOR*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080001000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_LogicalOR), &Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionLimit_MetaData[] = {
		{ "Category", "Lifetime" },
		{ "ClampMin", "0" },
		{ "Comment", "// This node will become Blocked (not executed any more), if Execution Limit > 0 and Execution Count reaches this limit\n// Set this to zero, if you'd like fire output indefinitely\n" },
		{ "ModuleRelativePath", "Public/Nodes/Operators/FlowNode_LogicalOR.h" },
		{ "ToolTip", "This node will become Blocked (not executed any more), if Execution Limit > 0 and Execution Count reaches this limit\nSet this to zero, if you'd like fire output indefinitely" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionLimit = { "ExecutionLimit", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_LogicalOR, ExecutionLimit), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionCount_MetaData[] = {
		{ "Category", "Lifetime" },
		{ "Comment", "// This node will become Blocked (not executed any more), if Execution Limit > 0 and Execution Count reaches this limit\n" },
		{ "ModuleRelativePath", "Public/Nodes/Operators/FlowNode_LogicalOR.h" },
		{ "ToolTip", "This node will become Blocked (not executed any more), if Execution Limit > 0 and Execution Count reaches this limit" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionCount = { "ExecutionCount", nullptr, (EPropertyFlags)0x0020080001020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_LogicalOR, ExecutionCount), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_LogicalOR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_LogicalOR_Statics::NewProp_ExecutionCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_LogicalOR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_LogicalOR>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_LogicalOR_Statics::ClassParams = {
		&UFlowNode_LogicalOR::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_LogicalOR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_LogicalOR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_LogicalOR()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_LogicalOR_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_LogicalOR, 3817694882);
	template<> FLOW_API UClass* StaticClass<UFlowNode_LogicalOR>()
	{
		return UFlowNode_LogicalOR::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_LogicalOR(Z_Construct_UClass_UFlowNode_LogicalOR, &UFlowNode_LogicalOR::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_LogicalOR"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_LogicalOR);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
