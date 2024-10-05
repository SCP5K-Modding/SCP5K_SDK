// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/MultiSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiSwitch() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AMultiSwitch_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AMultiSwitch();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicSwitch();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ELECTRONICS_API UEnum* Z_Construct_UEnum_Electronics_ESwitchResetMode();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMultiSwitch::execCheckInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiSwitch::execClearInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiSwitch::execGetTimeTillReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeTillReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMultiSwitch::execSetTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimer();
		P_NATIVE_END;
	}
	void AMultiSwitch::StaticRegisterNativesAMultiSwitch()
	{
		UClass* Class = AMultiSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckInputs", &AMultiSwitch::execCheckInputs },
			{ "ClearInputs", &AMultiSwitch::execClearInputs },
			{ "GetTimeTillReset", &AMultiSwitch::execGetTimeTillReset },
			{ "SetTimer", &AMultiSwitch::execSetTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMultiSwitch_CheckInputs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiSwitch_CheckInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiSwitch_CheckInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiSwitch, nullptr, "CheckInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiSwitch_CheckInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiSwitch_CheckInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiSwitch_CheckInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiSwitch_CheckInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiSwitch_ClearInputs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiSwitch_ClearInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiSwitch_ClearInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiSwitch, nullptr, "ClearInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiSwitch_ClearInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiSwitch_ClearInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiSwitch_ClearInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiSwitch_ClearInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics
	{
		struct MultiSwitch_eventGetTimeTillReset_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiSwitch_eventGetTimeTillReset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiSwitch, nullptr, "GetTimeTillReset", nullptr, nullptr, sizeof(MultiSwitch_eventGetTimeTillReset_Parms), Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMultiSwitch_SetTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMultiSwitch_SetTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMultiSwitch_SetTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMultiSwitch, nullptr, "SetTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMultiSwitch_SetTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMultiSwitch_SetTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMultiSwitch_SetTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMultiSwitch_SetTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMultiSwitch_NoRegister()
	{
		return AMultiSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AMultiSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequiredInputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReset_MetaData[];
#endif
		static void NewProp_bAutoReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResetMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetSwitchesOnClear_MetaData[];
#endif
		static void NewProp_bResetSwitchesOnClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetSwitchesOnClear;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtraSwitchesToClear_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraSwitchesToClear_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraSwitchesToClear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTimerOnEnable_MetaData[];
#endif
		static void NewProp_bDisableTimerOnEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTimerOnEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inputs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Inputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMultiSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronicSwitch,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMultiSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMultiSwitch_CheckInputs, "CheckInputs" }, // 230481424
		{ &Z_Construct_UFunction_AMultiSwitch_ClearInputs, "ClearInputs" }, // 2698410059
		{ &Z_Construct_UFunction_AMultiSwitch_GetTimeTillReset, "GetTimeTillReset" }, // 3931090207
		{ &Z_Construct_UFunction_AMultiSwitch_SetTimer, "SetTimer" }, // 2863436240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MultiSwitch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::NewProp_RequiredInputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiSwitch" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_RequiredInputs = { "RequiredInputs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiSwitch, RequiredInputs), METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_RequiredInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_RequiredInputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bAutoReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiSwitch" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bAutoReset_SetBit(void* Obj)
	{
		((AMultiSwitch*)Obj)->bAutoReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bAutoReset = { "bAutoReset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMultiSwitch), &Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bAutoReset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bAutoReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bAutoReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiSwitch" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetMode = { "ResetMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiSwitch, ResetMode), Z_Construct_UEnum_Electronics_ESwitchResetMode, METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bResetSwitchesOnClear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiSwitch" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bResetSwitchesOnClear_SetBit(void* Obj)
	{
		((AMultiSwitch*)Obj)->bResetSwitchesOnClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bResetSwitchesOnClear = { "bResetSwitchesOnClear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMultiSwitch), &Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bResetSwitchesOnClear_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bResetSwitchesOnClear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bResetSwitchesOnClear_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ExtraSwitchesToClear_Inner = { "ExtraSwitchesToClear", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AElectronicSwitch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ExtraSwitchesToClear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiSwitch" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ExtraSwitchesToClear = { "ExtraSwitchesToClear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiSwitch, ExtraSwitchesToClear), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ExtraSwitchesToClear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ExtraSwitchesToClear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bDisableTimerOnEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiSwitch" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bDisableTimerOnEnable_SetBit(void* Obj)
	{
		((AMultiSwitch*)Obj)->bDisableTimerOnEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bDisableTimerOnEnable = { "bDisableTimerOnEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMultiSwitch), &Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bDisableTimerOnEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bDisableTimerOnEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bDisableTimerOnEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiSwitch" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetTime = { "ResetTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiSwitch, ResetTime), METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_Inputs_ElementProp = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMultiSwitch_Statics::NewProp_Inputs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiSwitch" },
		{ "ModuleRelativePath", "Public/MultiSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMultiSwitch_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMultiSwitch, Inputs), METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::NewProp_Inputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMultiSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_RequiredInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bAutoReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bResetSwitchesOnClear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ExtraSwitchesToClear_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ExtraSwitchesToClear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_bDisableTimerOnEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_ResetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_Inputs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMultiSwitch_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMultiSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMultiSwitch_Statics::ClassParams = {
		&AMultiSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMultiSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMultiSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMultiSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMultiSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMultiSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiSwitch, 234868655);
	template<> ELECTRONICS_API UClass* StaticClass<AMultiSwitch>()
	{
		return AMultiSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiSwitch(Z_Construct_UClass_AMultiSwitch, &AMultiSwitch::StaticClass, TEXT("/Script/Electronics"), TEXT("AMultiSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
