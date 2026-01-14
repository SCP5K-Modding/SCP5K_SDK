// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Route/FlowNode_Reroute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_Reroute() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Reroute_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Reroute();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_Reroute::StaticRegisterNativesUFlowNode_Reroute()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_Reroute_NoRegister()
	{
		return UFlowNode_Reroute::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_Reroute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_Reroute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Reroute_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Reroute\n */" },
		{ "DisplayName", "Reroute" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Route/FlowNode_Reroute.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Reroute.h" },
		{ "ToolTip", "Reroute" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_Reroute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_Reroute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_Reroute_Statics::ClassParams = {
		&UFlowNode_Reroute::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Reroute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Reroute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_Reroute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_Reroute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_Reroute, 2522347628);
	template<> FLOW_API UClass* StaticClass<UFlowNode_Reroute>()
	{
		return UFlowNode_Reroute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_Reroute(Z_Construct_UClass_UFlowNode_Reroute, &UFlowNode_Reroute::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_Reroute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_Reroute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
