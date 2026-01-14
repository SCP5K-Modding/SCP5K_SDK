// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Route/FlowNode_Counter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_Counter() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Counter_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Counter();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_Counter::StaticRegisterNativesUFlowNode_Counter()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_Counter_NoRegister()
	{
		return UFlowNode_Counter::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_Counter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Goal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_Counter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Counter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Counts how many times signal entered this node\n */" },
		{ "DisplayName", "Counter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Route/FlowNode_Counter.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Counter.h" },
		{ "ToolTip", "Counts how many times signal entered this node" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_Goal_MetaData[] = {
		{ "Category", "Counter" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Counter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Counter, Goal), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_Goal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_Goal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_CurrentSum_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Counter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_CurrentSum = { "CurrentSum", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Counter, CurrentSum), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_CurrentSum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_CurrentSum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_Counter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Counter_Statics::NewProp_CurrentSum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_Counter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_Counter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_Counter_Statics::ClassParams = {
		&UFlowNode_Counter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_Counter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Counter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Counter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Counter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_Counter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_Counter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_Counter, 1880995920);
	template<> FLOW_API UClass* StaticClass<UFlowNode_Counter>()
	{
		return UFlowNode_Counter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_Counter(Z_Construct_UClass_UFlowNode_Counter, &UFlowNode_Counter::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_Counter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_Counter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
