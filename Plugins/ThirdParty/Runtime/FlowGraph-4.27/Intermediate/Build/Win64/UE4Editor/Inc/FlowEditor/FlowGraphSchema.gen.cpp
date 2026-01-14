// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlowEditor/Public/Graph/FlowGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowGraphSchema() {}
// Cross Module References
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphSchema_NoRegister();
	FLOWEDITOR_API UClass* Z_Construct_UClass_UFlowGraphSchema();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_FlowEditor();
// End Cross Module References
	void UFlowGraphSchema::StaticRegisterNativesUFlowGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UFlowGraphSchema_NoRegister()
	{
		return UFlowGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UFlowGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_FlowEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/FlowGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Graph/FlowGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowGraphSchema_Statics::ClassParams = {
		&UFlowGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlowGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowGraphSchema, 2002212712);
	template<> FLOWEDITOR_API UClass* StaticClass<UFlowGraphSchema>()
	{
		return UFlowGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowGraphSchema(Z_Construct_UClass_UFlowGraphSchema, &UFlowGraphSchema::StaticClass, TEXT("/Script/FlowEditor"), TEXT("UFlowGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
