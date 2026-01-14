// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Operators/FlowNode_LogicalAND.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_LogicalAND() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_LogicalAND_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_LogicalAND();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_LogicalAND::StaticRegisterNativesUFlowNode_LogicalAND()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_LogicalAND_NoRegister()
	{
		return UFlowNode_LogicalAND::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_LogicalAND_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExecutedInputNames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutedInputNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ExecutedInputNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_LogicalAND_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_LogicalAND_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Logical AND\n * Output will be triggered only once\n */" },
		{ "DisplayName", "AND" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Operators/FlowNode_LogicalAND.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Operators/FlowNode_LogicalAND.h" },
		{ "ToolTip", "Logical AND\nOutput will be triggered only once" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFlowNode_LogicalAND_Statics::NewProp_ExecutedInputNames_ElementProp = { "ExecutedInputNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_LogicalAND_Statics::NewProp_ExecutedInputNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Operators/FlowNode_LogicalAND.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UFlowNode_LogicalAND_Statics::NewProp_ExecutedInputNames = { "ExecutedInputNames", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_LogicalAND, ExecutedInputNames), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_LogicalAND_Statics::NewProp_ExecutedInputNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_LogicalAND_Statics::NewProp_ExecutedInputNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_LogicalAND_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_LogicalAND_Statics::NewProp_ExecutedInputNames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_LogicalAND_Statics::NewProp_ExecutedInputNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_LogicalAND_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_LogicalAND>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_LogicalAND_Statics::ClassParams = {
		&UFlowNode_LogicalAND::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_LogicalAND_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_LogicalAND_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_LogicalAND_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_LogicalAND_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_LogicalAND()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_LogicalAND_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_LogicalAND, 1269423573);
	template<> FLOW_API UClass* StaticClass<UFlowNode_LogicalAND>()
	{
		return UFlowNode_LogicalAND::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_LogicalAND(Z_Construct_UClass_UFlowNode_LogicalAND, &UFlowNode_LogicalAND::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_LogicalAND"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_LogicalAND);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
