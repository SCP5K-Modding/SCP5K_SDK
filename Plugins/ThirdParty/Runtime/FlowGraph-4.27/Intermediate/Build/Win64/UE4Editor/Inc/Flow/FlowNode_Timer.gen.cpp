// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/Route/FlowNode_Timer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_Timer() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Timer_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_Timer();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
// End Cross Module References
	DEFINE_FUNCTION(UFlowNode_Timer::execOnCompletion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompletion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlowNode_Timer::execOnStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStep();
		P_NATIVE_END;
	}
	void UFlowNode_Timer::StaticRegisterNativesUFlowNode_Timer()
	{
		UClass* Class = UFlowNode_Timer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompletion", &UFlowNode_Timer::execOnCompletion },
			{ "OnStep", &UFlowNode_Timer::execOnStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlowNode_Timer_OnCompletion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_Timer_OnCompletion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Timer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_Timer_OnCompletion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode_Timer, nullptr, "OnCompletion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_Timer_OnCompletion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_Timer_OnCompletion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_Timer_OnCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_Timer_OnCompletion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlowNode_Timer_OnStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_Timer_OnStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Timer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_Timer_OnStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode_Timer, nullptr, "OnStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_Timer_OnStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_Timer_OnStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_Timer_OnStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_Timer_OnStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlowNode_Timer_NoRegister()
	{
		return UFlowNode_Timer::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_Timer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompletionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SumOfSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SumOfSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingCompletionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingCompletionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingStepTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingStepTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_Timer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlowNode_Timer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowNode_Timer_OnCompletion, "OnCompletion" }, // 3265305216
		{ &Z_Construct_UFunction_UFlowNode_Timer_OnStep, "OnStep" }, // 3426454080
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Timer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers outputs after time elapsed\n */" },
		{ "DisplayName", "Timer" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/Route/FlowNode_Timer.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Timer.h" },
		{ "ToolTip", "Triggers outputs after time elapsed" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_CompletionTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Timer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_CompletionTime = { "CompletionTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Timer, CompletionTime), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_CompletionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_CompletionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_StepTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// this allows to trigger other nodes multiple times before completing the Timer\n" },
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Timer.h" },
		{ "ToolTip", "this allows to trigger other nodes multiple times before completing the Timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_StepTime = { "StepTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Timer, StepTime), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_StepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_StepTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_SumOfSteps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Timer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_SumOfSteps = { "SumOfSteps", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Timer, SumOfSteps), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_SumOfSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_SumOfSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingCompletionTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Timer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingCompletionTime = { "RemainingCompletionTime", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Timer, RemainingCompletionTime), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingCompletionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingCompletionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingStepTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/Route/FlowNode_Timer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingStepTime = { "RemainingStepTime", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_Timer, RemainingStepTime), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingStepTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingStepTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_Timer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_CompletionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_StepTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_SumOfSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingCompletionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_Timer_Statics::NewProp_RemainingStepTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_Timer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_Timer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_Timer_Statics::ClassParams = {
		&UFlowNode_Timer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlowNode_Timer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Timer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_Timer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_Timer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_Timer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_Timer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_Timer, 2003994504);
	template<> FLOW_API UClass* StaticClass<UFlowNode_Timer>()
	{
		return UFlowNode_Timer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_Timer(Z_Construct_UClass_UFlowNode_Timer, &UFlowNode_Timer::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_Timer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_Timer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
