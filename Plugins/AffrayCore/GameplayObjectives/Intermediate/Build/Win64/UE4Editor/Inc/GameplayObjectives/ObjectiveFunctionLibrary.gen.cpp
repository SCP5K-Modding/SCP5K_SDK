// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ObjectiveFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveFunctionLibrary() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjectiveFunctionLibrary_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjectiveFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective_NoRegister();
	GAMEPLAYOBJECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleObjectiveData();
// End Cross Module References
	DEFINE_FUNCTION(UObjectiveFunctionLibrary::execMakeSimpleObjectiveData)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleObjectiveData*)Z_Param__Result=P_THIS->MakeSimpleObjectiveData(Z_Param_Objective);
		P_NATIVE_END;
	}
	void UObjectiveFunctionLibrary::StaticRegisterNativesUObjectiveFunctionLibrary()
	{
		UClass* Class = UObjectiveFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeSimpleObjectiveData", &UObjectiveFunctionLibrary::execMakeSimpleObjectiveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics
	{
		struct ObjectiveFunctionLibrary_eventMakeSimpleObjectiveData_Parms
		{
			UObjective* Objective;
			FSimpleObjectiveData ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveFunctionLibrary_eventMakeSimpleObjectiveData_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveFunctionLibrary_eventMakeSimpleObjectiveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleObjectiveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveFunctionLibrary, nullptr, "MakeSimpleObjectiveData", nullptr, nullptr, sizeof(ObjectiveFunctionLibrary_eventMakeSimpleObjectiveData_Parms), Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectiveFunctionLibrary_NoRegister()
	{
		return UObjectiveFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectiveFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveFunctionLibrary_MakeSimpleObjectiveData, "MakeSimpleObjectiveData" }, // 94310729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ObjectiveFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveFunctionLibrary_Statics::ClassParams = {
		&UObjectiveFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectiveFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectiveFunctionLibrary, 3912909699);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<UObjectiveFunctionLibrary>()
	{
		return UObjectiveFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectiveFunctionLibrary(Z_Construct_UClass_UObjectiveFunctionLibrary, &UObjectiveFunctionLibrary::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("UObjectiveFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
