// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Route/FlowNode_CustomInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_CustomInput() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_CustomInput_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_CustomInput();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_CustomInput::StaticRegisterNativesUFlowNode_CustomInput()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_CustomInput_NoRegister()
	{
		return UFlowNode_CustomInput::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_CustomInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_CustomInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_CustomInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers output upon activation of Input (matching this EventName) on the SubGraph node containing this graph\n */" },
		{ "DisplayName", "Custom Input" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Route/FlowNode_CustomInput.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_CustomInput.h" },
		{ "ToolTip", "Triggers output upon activation of Input (matching this EventName) on the SubGraph node containing this graph" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_CustomInput_Statics::NewProp_EventName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_CustomInput.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFlowNode_CustomInput_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_CustomInput, EventName), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_CustomInput_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_CustomInput_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_CustomInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_CustomInput_Statics::NewProp_EventName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_CustomInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_CustomInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_CustomInput_Statics::ClassParams = {
		&UFlowNode_CustomInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_CustomInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_CustomInput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_CustomInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_CustomInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_CustomInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_CustomInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_CustomInput, 3838034119);
	template<> FLOW_API UClass* StaticClass<UFlowNode_CustomInput>()
	{
		return UFlowNode_CustomInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_CustomInput(Z_Construct_UClass_UFlowNode_CustomInput, &UFlowNode_CustomInput::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_CustomInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_CustomInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
