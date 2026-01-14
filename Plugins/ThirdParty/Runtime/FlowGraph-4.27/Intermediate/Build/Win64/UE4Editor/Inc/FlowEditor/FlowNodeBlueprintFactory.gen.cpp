// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Nodes/FlowNodeBlueprintFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNodeBlueprintFactory() {}
// Cross Module References
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowNodeBlueprintFactory_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowNodeBlueprintFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_NoRegister();
// End Cross Module References
	void UFlowNodeBlueprintFactory::StaticRegisterNativesUFlowNodeBlueprintFactory()
	{
	}
	UClass* Z_Construct_UClass_UFlowNodeBlueprintFactory_NoRegister()
	{
		return UFlowNodeBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/FlowNodeBlueprintFactory.h" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNodeBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "FlowNodeBlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNodeBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNodeBlueprintFactory, ParentClass), Z_Construct_UClass_UFlowNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNodeBlueprintFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::ClassParams = {
		&UFlowNodeBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNodeBlueprintFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNodeBlueprintFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNodeBlueprintFactory, 2600581948);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowNodeBlueprintFactory>()
	{
		return UFlowNodeBlueprintFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNodeBlueprintFactory(Z_Construct_UClass_UFlowNodeBlueprintFactory, &UFlowNodeBlueprintFactory::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowNodeBlueprintFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNodeBlueprintFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
