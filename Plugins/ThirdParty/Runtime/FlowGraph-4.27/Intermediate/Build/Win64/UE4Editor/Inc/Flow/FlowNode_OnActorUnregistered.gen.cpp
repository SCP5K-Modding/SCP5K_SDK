// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/World/FlowNode_OnActorUnregistered.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_OnActorUnregistered() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_OnActorUnregistered_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_OnActorUnregistered();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_ComponentObserver();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_OnActorUnregistered::StaticRegisterNativesUFlowNode_OnActorUnregistered()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_OnActorUnregistered_NoRegister()
	{
		return UFlowNode_OnActorUnregistered::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_OnActorUnregistered_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_OnActorUnregistered_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode_ComponentObserver,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_OnActorUnregistered_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers output when Flow Component with matching Identity Tag disappears from the world\n */" },
		{ "DisplayName", "On Actor Unregistered" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/World/FlowNode_OnActorUnregistered.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_OnActorUnregistered.h" },
		{ "ToolTip", "Triggers output when Flow Component with matching Identity Tag disappears from the world" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_OnActorUnregistered_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_OnActorUnregistered>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_OnActorUnregistered_Statics::ClassParams = {
		&UFlowNode_OnActorUnregistered::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_OnActorUnregistered_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_OnActorUnregistered_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_OnActorUnregistered()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_OnActorUnregistered_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_OnActorUnregistered, 1299544327);
	template<> FLOW_API UClass* StaticClass<UFlowNode_OnActorUnregistered>()
	{
		return UFlowNode_OnActorUnregistered::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_OnActorUnregistered(Z_Construct_UClass_UFlowNode_OnActorUnregistered, &UFlowNode_OnActorUnregistered::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_OnActorUnregistered"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_OnActorUnregistered);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
