// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomScenarios/Public/RandomScenarioManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomScenarioManager() {}
// Cross Module References
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_ARandomScenarioManager_NoRegister();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_ARandomScenarioManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RandomScenarios();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_UScenarioManagerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARandomScenarioManager::execSelectNextScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNextScenario();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARandomScenarioManager::execSelectRandomScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectRandomScenario();
		P_NATIVE_END;
	}
	void ARandomScenarioManager::StaticRegisterNativesARandomScenarioManager()
	{
		UClass* Class = ARandomScenarioManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectNextScenario", &ARandomScenarioManager::execSelectNextScenario },
			{ "SelectRandomScenario", &ARandomScenarioManager::execSelectRandomScenario },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARandomScenarioManager_SelectNextScenario_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARandomScenarioManager_SelectNextScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RandomScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARandomScenarioManager_SelectNextScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARandomScenarioManager, nullptr, "SelectNextScenario", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARandomScenarioManager_SelectNextScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARandomScenarioManager_SelectNextScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARandomScenarioManager_SelectNextScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARandomScenarioManager_SelectNextScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARandomScenarioManager_SelectRandomScenario_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARandomScenarioManager_SelectRandomScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RandomScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARandomScenarioManager_SelectRandomScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARandomScenarioManager, nullptr, "SelectRandomScenario", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARandomScenarioManager_SelectRandomScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARandomScenarioManager_SelectRandomScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARandomScenarioManager_SelectRandomScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARandomScenarioManager_SelectRandomScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARandomScenarioManager_NoRegister()
	{
		return ARandomScenarioManager::StaticClass();
	}
	struct Z_Construct_UClass_ARandomScenarioManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioManagerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScenarioManagerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomScenarioManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomScenarios,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARandomScenarioManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARandomScenarioManager_SelectNextScenario, "SelectNextScenario" }, // 692848531
		{ &Z_Construct_UFunction_ARandomScenarioManager_SelectRandomScenario, "SelectRandomScenario" }, // 2671518516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomScenarioManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RandomScenarioManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RandomScenarioManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomScenarioManager_Statics::NewProp_ScenarioManagerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomScenarioManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RandomScenarioManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomScenarioManager_Statics::NewProp_ScenarioManagerComponent = { "ScenarioManagerComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomScenarioManager, ScenarioManagerComponent), Z_Construct_UClass_UScenarioManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARandomScenarioManager_Statics::NewProp_ScenarioManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomScenarioManager_Statics::NewProp_ScenarioManagerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomScenarioManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomScenarioManager_Statics::NewProp_ScenarioManagerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomScenarioManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomScenarioManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARandomScenarioManager_Statics::ClassParams = {
		&ARandomScenarioManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARandomScenarioManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARandomScenarioManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARandomScenarioManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomScenarioManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomScenarioManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARandomScenarioManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARandomScenarioManager, 3505215801);
	template<> RANDOMSCENARIOS_API UClass* StaticClass<ARandomScenarioManager>()
	{
		return ARandomScenarioManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARandomScenarioManager(Z_Construct_UClass_ARandomScenarioManager, &ARandomScenarioManager::StaticClass, TEXT("/Script/RandomScenarios"), TEXT("ARandomScenarioManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomScenarioManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
