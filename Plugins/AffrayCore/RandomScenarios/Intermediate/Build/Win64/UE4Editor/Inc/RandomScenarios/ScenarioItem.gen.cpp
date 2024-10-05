// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomScenarios/Public/ScenarioItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScenarioItem() {}
// Cross Module References
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_UScenarioItem_NoRegister();
	RANDOMSCENARIOS_API UClass* Z_Construct_UClass_UScenarioItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_RandomScenarios();
// End Cross Module References
	DEFINE_FUNCTION(IScenarioItem::execScenarioEnabledChanged)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScenarioEnabledChanged_Implementation(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void IScenarioItem::ScenarioEnabledChanged(bool bEnabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ScenarioEnabledChanged instead.");
	}
	void UScenarioItem::StaticRegisterNativesUScenarioItem()
	{
		UClass* Class = UScenarioItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ScenarioEnabledChanged", &IScenarioItem::execScenarioEnabledChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics
	{
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ScenarioItem_eventScenarioEnabledChanged_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScenarioItem_eventScenarioEnabledChanged_Parms), &Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScenarioItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScenarioItem, nullptr, "ScenarioEnabledChanged", nullptr, nullptr, sizeof(ScenarioItem_eventScenarioEnabledChanged_Parms), Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScenarioItem_NoRegister()
	{
		return UScenarioItem::StaticClass();
	}
	struct Z_Construct_UClass_UScenarioItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScenarioItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomScenarios,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScenarioItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScenarioItem_ScenarioEnabledChanged, "ScenarioEnabledChanged" }, // 790683856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScenarioItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScenarioItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScenarioItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IScenarioItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScenarioItem_Statics::ClassParams = {
		&UScenarioItem::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UScenarioItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScenarioItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScenarioItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScenarioItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScenarioItem, 1207850211);
	template<> RANDOMSCENARIOS_API UClass* StaticClass<UScenarioItem>()
	{
		return UScenarioItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScenarioItem(Z_Construct_UClass_UScenarioItem, &UScenarioItem::StaticClass, TEXT("/Script/RandomScenarios"), TEXT("UScenarioItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScenarioItem);
	static FName NAME_UScenarioItem_ScenarioEnabledChanged = FName(TEXT("ScenarioEnabledChanged"));
	void IScenarioItem::Execute_ScenarioEnabledChanged(UObject* O, bool bEnabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UScenarioItem::StaticClass()));
		ScenarioItem_eventScenarioEnabledChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UScenarioItem_ScenarioEnabledChanged);
		if (Func)
		{
			Parms.bEnabled=bEnabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IScenarioItem*)(O->GetNativeInterfaceAddress(UScenarioItem::StaticClass())))
		{
			I->ScenarioEnabledChanged_Implementation(bEnabled);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
