// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Utils/FlowNode_Checkpoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_Checkpoint() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Checkpoint_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Checkpoint();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_Checkpoint::StaticRegisterNativesUFlowNode_Checkpoint()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_Checkpoint_NoRegister()
	{
		return UFlowNode_Checkpoint::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_Checkpoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_Checkpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Checkpoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Save the state of the game to the save file\n * It's recommended to replace this with game-specific variant and this node to UFlowGraphSettings::HiddenNodes\n */" },
		{ "DisplayName", "Checkpoint" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Utils/FlowNode_Checkpoint.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Utils/FlowNode_Checkpoint.h" },
		{ "ToolTip", "Save the state of the game to the save file\nIt's recommended to replace this with game-specific variant and this node to UFlowGraphSettings::HiddenNodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_Checkpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_Checkpoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_Checkpoint_Statics::ClassParams = {
		&UFlowNode_Checkpoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Checkpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Checkpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_Checkpoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_Checkpoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_Checkpoint, 26871277);
	template<> FLOW_API UClass* StaticClass<UFlowNode_Checkpoint>()
	{
		return UFlowNode_Checkpoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_Checkpoint(Z_Construct_UClass_UFlowNode_Checkpoint, &UFlowNode_Checkpoint::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_Checkpoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_Checkpoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
