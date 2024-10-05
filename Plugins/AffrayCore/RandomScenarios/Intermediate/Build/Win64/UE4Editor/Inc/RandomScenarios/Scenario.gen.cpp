// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomScenarios/Public/Scenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScenario() {}
// Cross Module References
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_AScenario_NoRegister();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_AScenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RandomScenarios();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_UScenarioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AScenario::execGetScenarioComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScenarioComponent**)Z_Param__Result=P_THIS->GetScenarioComponent();
		P_NATIVE_END;
	}
	void AScenario::StaticRegisterNativesAScenario()
	{
		UClass* Class = AScenario::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScenarioComponent", &AScenario::execGetScenarioComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics
	{
		struct Scenario_eventGetScenarioComponent_Parms
		{
			UScenarioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Scenario_eventGetScenarioComponent_Parms, ReturnValue), Z_Construct_UClass_UScenarioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Scenario.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScenario, nullptr, "GetScenarioComponent", nullptr, nullptr, sizeof(Scenario_eventGetScenarioComponent_Parms), Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AScenario_GetScenarioComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AScenario_GetScenarioComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AScenario_NoRegister()
	{
		return AScenario::StaticClass();
	}
	struct Z_Construct_UClass_AScenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScenarioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomScenarios,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AScenario_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScenario_GetScenarioComponent, "GetScenarioComponent" }, // 1242652209
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scenario.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Scenario.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScenario_Statics::NewProp_ScenarioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Scenario" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Scenario.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScenario_Statics::NewProp_ScenarioComponent = { "ScenarioComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScenario, ScenarioComponent), Z_Construct_UClass_UScenarioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScenario_Statics::NewProp_ScenarioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario_Statics::NewProp_ScenarioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScenario_Statics::NewProp_ScenarioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScenario_Statics::ClassParams = {
		&AScenario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScenario_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AScenario_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScenario, 4251138500);
	template<> RANDOMSCENARIOS_API UClass* StaticClass<AScenario>()
	{
		return AScenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScenario(Z_Construct_UClass_AScenario, &AScenario::StaticClass, TEXT("/Script/RandomScenarios"), TEXT("AScenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
