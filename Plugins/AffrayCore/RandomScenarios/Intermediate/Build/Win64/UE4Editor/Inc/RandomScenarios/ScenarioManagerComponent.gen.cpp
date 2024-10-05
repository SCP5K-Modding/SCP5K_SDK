// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomScenarios/Public/ScenarioManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScenarioManagerComponent() {}
// Cross Module References
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_UScenarioManagerComponent_NoRegister();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_UScenarioManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_RandomScenarios();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_AScenario_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScenarioManagerComponent::execSelectNextScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNextScenario();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScenarioManagerComponent::execSelectRandomScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectRandomScenario();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScenarioManagerComponent::execSetCurrentScenario)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Scenario);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentScenario(Z_Param_Scenario);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScenarioManagerComponent::execSetCurrentScenarios)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_NewScenarios);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentScenarios(Z_Param_Out_NewScenarios);
		P_NATIVE_END;
	}
	void UScenarioManagerComponent::StaticRegisterNativesUScenarioManagerComponent()
	{
		UClass* Class = UScenarioManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectNextScenario", &UScenarioManagerComponent::execSelectNextScenario },
			{ "SelectRandomScenario", &UScenarioManagerComponent::execSelectRandomScenario },
			{ "SetCurrentScenario", &UScenarioManagerComponent::execSetCurrentScenario },
			{ "SetCurrentScenarios", &UScenarioManagerComponent::execSetCurrentScenarios },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScenarioManagerComponent_SelectNextScenario_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioManagerComponent_SelectNextScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScenarioManagerComponent_SelectNextScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScenarioManagerComponent, nullptr, "SelectNextScenario", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScenarioManagerComponent_SelectNextScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioManagerComponent_SelectNextScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScenarioManagerComponent_SelectNextScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScenarioManagerComponent_SelectNextScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScenarioManagerComponent_SelectRandomScenario_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioManagerComponent_SelectRandomScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScenarioManagerComponent_SelectRandomScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScenarioManagerComponent, nullptr, "SelectRandomScenario", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScenarioManagerComponent_SelectRandomScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioManagerComponent_SelectRandomScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScenarioManagerComponent_SelectRandomScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScenarioManagerComponent_SelectRandomScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics
	{
		struct ScenarioManagerComponent_eventSetCurrentScenario_Parms
		{
			int32 Scenario;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Scenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::NewProp_Scenario = { "Scenario", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScenarioManagerComponent_eventSetCurrentScenario_Parms, Scenario), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::NewProp_Scenario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScenarioManagerComponent, nullptr, "SetCurrentScenario", nullptr, nullptr, sizeof(ScenarioManagerComponent_eventSetCurrentScenario_Parms), Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics
	{
		struct ScenarioManagerComponent_eventSetCurrentScenarios_Parms
		{
			TArray<int32> NewScenarios;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewScenarios_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewScenarios_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewScenarios;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::NewProp_NewScenarios_Inner = { "NewScenarios", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::NewProp_NewScenarios_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::NewProp_NewScenarios = { "NewScenarios", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScenarioManagerComponent_eventSetCurrentScenarios_Parms, NewScenarios), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::NewProp_NewScenarios_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::NewProp_NewScenarios_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::NewProp_NewScenarios_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::NewProp_NewScenarios,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScenarioManagerComponent, nullptr, "SetCurrentScenarios", nullptr, nullptr, sizeof(ScenarioManagerComponent_eventSetCurrentScenarios_Parms), Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScenarioManagerComponent_NoRegister()
	{
		return UScenarioManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScenarioManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentScenarios_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScenarios_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentScenarios;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfScenariosToSelect_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfScenariosToSelect;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scenarios_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scenarios_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Scenarios;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectRandomScenario_MetaData[];
#endif
		static void NewProp_bSelectRandomScenario_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectRandomScenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScenarioManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomScenarios,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScenarioManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScenarioManagerComponent_SelectNextScenario, "SelectNextScenario" }, // 2867720826
		{ &Z_Construct_UFunction_UScenarioManagerComponent_SelectRandomScenario, "SelectRandomScenario" }, // 532778659
		{ &Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenario, "SetCurrentScenario" }, // 3481946689
		{ &Z_Construct_UFunction_UScenarioManagerComponent_SetCurrentScenarios, "SetCurrentScenarios" }, // 3510752731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ScenarioManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_CurrentScenarios_Inner = { "CurrentScenarios", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_CurrentScenarios_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioManagerComponent" },
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_CurrentScenarios = { "CurrentScenarios", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScenarioManagerComponent, CurrentScenarios), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_CurrentScenarios_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_CurrentScenarios_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_NumberOfScenariosToSelect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioManagerComponent" },
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_NumberOfScenariosToSelect = { "NumberOfScenariosToSelect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScenarioManagerComponent, NumberOfScenariosToSelect), METADATA_PARAMS(Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_NumberOfScenariosToSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_NumberOfScenariosToSelect_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_Scenarios_Inner = { "Scenarios", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AScenario_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_Scenarios_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioManagerComponent" },
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_Scenarios = { "Scenarios", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScenarioManagerComponent, Scenarios), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_Scenarios_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_Scenarios_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_bSelectRandomScenario_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScenarioManagerComponent" },
		{ "ModuleRelativePath", "Public/ScenarioManagerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_bSelectRandomScenario_SetBit(void* Obj)
	{
		((UScenarioManagerComponent*)Obj)->bSelectRandomScenario = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_bSelectRandomScenario = { "bSelectRandomScenario", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UScenarioManagerComponent), &Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_bSelectRandomScenario_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_bSelectRandomScenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_bSelectRandomScenario_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScenarioManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_CurrentScenarios_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_CurrentScenarios,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_NumberOfScenariosToSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_Scenarios_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_Scenarios,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScenarioManagerComponent_Statics::NewProp_bSelectRandomScenario,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScenarioManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScenarioManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScenarioManagerComponent_Statics::ClassParams = {
		&UScenarioManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScenarioManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScenarioManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScenarioManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScenarioManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScenarioManagerComponent, 3150597147);
	template<> RANDOMSCENARIOS_API UClass* StaticClass<UScenarioManagerComponent>()
	{
		return UScenarioManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScenarioManagerComponent(Z_Construct_UClass_UScenarioManagerComponent, &UScenarioManagerComponent::StaticClass, TEXT("/Script/RandomScenarios"), TEXT("UScenarioManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScenarioManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
