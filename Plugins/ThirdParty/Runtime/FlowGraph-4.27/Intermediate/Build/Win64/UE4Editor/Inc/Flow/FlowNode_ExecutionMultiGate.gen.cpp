// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Route/FlowNode_ExecutionMultiGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_ExecutionMultiGate() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_ExecutionMultiGate_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_ExecutionMultiGate();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	void UFlowNode_ExecutionMultiGate::StaticRegisterNativesUFlowNode_ExecutionMultiGate()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_ExecutionMultiGate_NoRegister()
	{
		return UFlowNode_ExecutionMultiGate::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandom_MetaData[];
#endif
		static void NewProp_bRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextOutput;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Completed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Executes a series of pins in order\n */" },
		{ "DisplayName", "Multi Gate" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Route/FlowNode_ExecutionMultiGate.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_ExecutionMultiGate.h" },
		{ "ToolTip", "Executes a series of pins in order" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bRandom_MetaData[] = {
		{ "Category", "MultiGate" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_ExecutionMultiGate.h" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bRandom_SetBit(void* Obj)
	{
		((UFlowNode_ExecutionMultiGate*)Obj)->bRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bRandom = { "bRandom", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_ExecutionMultiGate), &Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bRandom_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "MultiGate" },
		{ "Comment", "// Allow executing output pins again, without triggering Reset pin\n// If set to False, every output pin can be triggered only once\n" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_ExecutionMultiGate.h" },
		{ "ToolTip", "Allow executing output pins again, without triggering Reset pin\nIf set to False, every output pin can be triggered only once" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UFlowNode_ExecutionMultiGate*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_ExecutionMultiGate), &Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_StartIndex_MetaData[] = {
		{ "Category", "MultiGate" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_ExecutionMultiGate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_ExecutionMultiGate, StartIndex), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_StartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_StartIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_NextOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_ExecutionMultiGate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_NextOutput = { "NextOutput", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_ExecutionMultiGate, NextOutput), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_NextOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_NextOutput_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_Completed_Inner = { "Completed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_ExecutionMultiGate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_ExecutionMultiGate, Completed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_NextOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_Completed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_ExecutionMultiGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::ClassParams = {
		&UFlowNode_ExecutionMultiGate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_ExecutionMultiGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_ExecutionMultiGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_ExecutionMultiGate, 2305225048);
	template<> FLOW_API UClass* StaticClass<UFlowNode_ExecutionMultiGate>()
	{
		return UFlowNode_ExecutionMultiGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_ExecutionMultiGate(Z_Construct_UClass_UFlowNode_ExecutionMultiGate, &UFlowNode_ExecutionMultiGate::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_ExecutionMultiGate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_ExecutionMultiGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
