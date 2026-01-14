// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/FlowNodeBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNodeBlueprint() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNodeBlueprint_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNodeBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNodeBlueprint::StaticRegisterNativesUFlowNodeBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UFlowNodeBlueprint_NoRegister()
	{
		return UFlowNodeBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNodeBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNodeBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNodeBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A specialized blueprint class required for customizing Asset Type Actions\n */" },
		{ "IncludePath", "Nodes/FlowNodeBlueprint.h" },
		{ "ModuleRelativePath", "Public/Nodes/FlowNodeBlueprint.h" },
		{ "ToolTip", "A specialized blueprint class required for customizing Asset Type Actions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNodeBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNodeBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNodeBlueprint_Statics::ClassParams = {
		&UFlowNodeBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNodeBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNodeBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNodeBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNodeBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNodeBlueprint, 288055290);
	template<> FLOW_API UClass* StaticClass<UFlowNodeBlueprint>()
	{
		return UFlowNodeBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNodeBlueprint(Z_Construct_UClass_UFlowNodeBlueprint, &UFlowNodeBlueprint::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNodeBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNodeBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
