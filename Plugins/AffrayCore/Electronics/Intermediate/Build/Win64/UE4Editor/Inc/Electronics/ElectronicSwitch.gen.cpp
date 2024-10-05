// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ElectronicSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicSwitch() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicSwitch_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicSwitch();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AElectronicSwitch::execConnectedSwitchUpdated)
	{
		P_GET_OBJECT(AElectronicSwitch,Z_Param_SWITCH);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectedSwitchUpdated_Implementation(Z_Param_SWITCH);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicSwitch::execDisableConnectedElectronic)
	{
		P_GET_OBJECT(AElectronic,Z_Param_Electronic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableConnectedElectronic_Implementation(Z_Param_Electronic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicSwitch::execEnableConnectedElectronic)
	{
		P_GET_OBJECT(AElectronic,Z_Param_Electronic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableConnectedElectronic_Implementation(Z_Param_Electronic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AElectronicSwitch::execFinishDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishDelay();
		P_NATIVE_END;
	}
	static FName NAME_AElectronicSwitch_ConnectedSwitchUpdated = FName(TEXT("ConnectedSwitchUpdated"));
	void AElectronicSwitch::ConnectedSwitchUpdated(AElectronicSwitch* SWITCH)
	{
		ElectronicSwitch_eventConnectedSwitchUpdated_Parms Parms;
		Parms.SWITCH=SWITCH;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicSwitch_ConnectedSwitchUpdated),&Parms);
	}
	static FName NAME_AElectronicSwitch_DisableConnectedElectronic = FName(TEXT("DisableConnectedElectronic"));
	void AElectronicSwitch::DisableConnectedElectronic(AElectronic* Electronic)
	{
		ElectronicSwitch_eventDisableConnectedElectronic_Parms Parms;
		Parms.Electronic=Electronic;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicSwitch_DisableConnectedElectronic),&Parms);
	}
	static FName NAME_AElectronicSwitch_EnableConnectedElectronic = FName(TEXT("EnableConnectedElectronic"));
	void AElectronicSwitch::EnableConnectedElectronic(AElectronic* Electronic)
	{
		ElectronicSwitch_eventEnableConnectedElectronic_Parms Parms;
		Parms.Electronic=Electronic;
		ProcessEvent(FindFunctionChecked(NAME_AElectronicSwitch_EnableConnectedElectronic),&Parms);
	}
	void AElectronicSwitch::StaticRegisterNativesAElectronicSwitch()
	{
		UClass* Class = AElectronicSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectedSwitchUpdated", &AElectronicSwitch::execConnectedSwitchUpdated },
			{ "DisableConnectedElectronic", &AElectronicSwitch::execDisableConnectedElectronic },
			{ "EnableConnectedElectronic", &AElectronicSwitch::execEnableConnectedElectronic },
			{ "FinishDelay", &AElectronicSwitch::execFinishDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SWITCH;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::NewProp_SWITCH = { "SWITCH", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicSwitch_eventConnectedSwitchUpdated_Parms, SWITCH), Z_Construct_UClass_AElectronicSwitch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::NewProp_SWITCH,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicSwitch, nullptr, "ConnectedSwitchUpdated", nullptr, nullptr, sizeof(ElectronicSwitch_eventConnectedSwitchUpdated_Parms), Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Electronic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::NewProp_Electronic = { "Electronic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicSwitch_eventDisableConnectedElectronic_Parms, Electronic), Z_Construct_UClass_AElectronic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::NewProp_Electronic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicSwitch, nullptr, "DisableConnectedElectronic", nullptr, nullptr, sizeof(ElectronicSwitch_eventDisableConnectedElectronic_Parms), Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Electronic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::NewProp_Electronic = { "Electronic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicSwitch_eventEnableConnectedElectronic_Parms, Electronic), Z_Construct_UClass_AElectronic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::NewProp_Electronic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicSwitch, nullptr, "EnableConnectedElectronic", nullptr, nullptr, sizeof(ElectronicSwitch_eventEnableConnectedElectronic_Parms), Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AElectronicSwitch_FinishDelay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicSwitch_FinishDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicSwitch_FinishDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicSwitch, nullptr, "FinishDelay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicSwitch_FinishDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicSwitch_FinishDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicSwitch_FinishDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicSwitch_FinishDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AElectronicSwitch_NoRegister()
	{
		return AElectronicSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AElectronicSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedElectronics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedElectronics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectedElectronics;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedSwitches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedSwitches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectedSwitches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedActivatables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedActivatables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectedActivatables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPowerSwitches_MetaData[];
#endif
		static void NewProp_bPowerSwitches_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPowerSwitches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivationDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElectronicSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronic,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElectronicSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElectronicSwitch_ConnectedSwitchUpdated, "ConnectedSwitchUpdated" }, // 3358235552
		{ &Z_Construct_UFunction_AElectronicSwitch_DisableConnectedElectronic, "DisableConnectedElectronic" }, // 1382511960
		{ &Z_Construct_UFunction_AElectronicSwitch_EnableConnectedElectronic, "EnableConnectedElectronic" }, // 4019459315
		{ &Z_Construct_UFunction_AElectronicSwitch_FinishDelay, "FinishDelay" }, // 3350636630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicSwitch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ElectronicSwitch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedElectronics_Inner = { "ConnectedElectronics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AElectronic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedElectronics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicSwitch" },
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedElectronics = { "ConnectedElectronics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicSwitch, ConnectedElectronics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedElectronics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedElectronics_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedSwitches_Inner = { "ConnectedSwitches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AElectronicSwitch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedSwitches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicSwitch" },
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedSwitches = { "ConnectedSwitches", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicSwitch, ConnectedSwitches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedSwitches_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedActivatables_Inner = { "ConnectedActivatables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedActivatables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicSwitch" },
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedActivatables = { "ConnectedActivatables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicSwitch, ConnectedActivatables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedActivatables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedActivatables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bPowerSwitches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicSwitch" },
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bPowerSwitches_SetBit(void* Obj)
	{
		((AElectronicSwitch*)Obj)->bPowerSwitches = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bPowerSwitches = { "bPowerSwitches", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicSwitch), &Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bPowerSwitches_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bPowerSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bPowerSwitches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bInvert_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicSwitch" },
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	void Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((AElectronicSwitch*)Obj)->bInvert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AElectronicSwitch), &Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bInvert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ActivationDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicSwitch" },
		{ "ModuleRelativePath", "Public/ElectronicSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ActivationDelay = { "ActivationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicSwitch, ActivationDelay), METADATA_PARAMS(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ActivationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ActivationDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectronicSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedElectronics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedElectronics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedSwitches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedSwitches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedActivatables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ConnectedActivatables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bPowerSwitches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_bInvert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicSwitch_Statics::NewProp_ActivationDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElectronicSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectronicSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElectronicSwitch_Statics::ClassParams = {
		&AElectronicSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AElectronicSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElectronicSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElectronicSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElectronicSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElectronicSwitch, 1719398247);
	template<> ELECTRONICS_API UClass* StaticClass<AElectronicSwitch>()
	{
		return AElectronicSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElectronicSwitch(Z_Construct_UClass_AElectronicSwitch, &AElectronicSwitch::StaticClass, TEXT("/Script/Electronics"), TEXT("AElectronicSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElectronicSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
