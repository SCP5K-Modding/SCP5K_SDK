// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ElectronicMonitorSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicMonitorSwitch() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicMonitorSwitch_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicMonitorSwitch();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicSwitch();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AElectronicMonitorSwitch::execElectronicEnabledUpdated)
	{
		P_GET_OBJECT(AElectronic,Z_Param_Electronic);
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ElectronicEnabledUpdated(Z_Param_Electronic,Z_Param_bInEnabled);
		P_NATIVE_END;
	}
	void AElectronicMonitorSwitch::StaticRegisterNativesAElectronicMonitorSwitch()
	{
		UClass* Class = AElectronicMonitorSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ElectronicEnabledUpdated", &AElectronicMonitorSwitch::execElectronicEnabledUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics
	{
		struct ElectronicMonitorSwitch_eventElectronicEnabledUpdated_Parms
		{
			AElectronic* Electronic;
			bool bInEnabled;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Electronic;
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::NewProp_Electronic = { "Electronic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElectronicMonitorSwitch_eventElectronicEnabledUpdated_Parms, Electronic), Z_Construct_UClass_AElectronic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((ElectronicMonitorSwitch_eventElectronicEnabledUpdated_Parms*)Obj)->bInEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElectronicMonitorSwitch_eventElectronicEnabledUpdated_Parms), &Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::NewProp_Electronic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::NewProp_bInEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElectronicMonitorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElectronicMonitorSwitch, nullptr, "ElectronicEnabledUpdated", nullptr, nullptr, sizeof(ElectronicMonitorSwitch_eventElectronicEnabledUpdated_Parms), Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AElectronicMonitorSwitch_NoRegister()
	{
		return AElectronicMonitorSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AElectronicMonitorSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElectronicToMonitor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ElectronicToMonitor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElectronicMonitorSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronicSwitch,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElectronicMonitorSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElectronicMonitorSwitch_ElectronicEnabledUpdated, "ElectronicEnabledUpdated" }, // 2184834227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicMonitorSwitch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ElectronicMonitorSwitch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ElectronicMonitorSwitch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicMonitorSwitch_Statics::NewProp_ElectronicToMonitor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicMonitorSwitch" },
		{ "ModuleRelativePath", "Public/ElectronicMonitorSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElectronicMonitorSwitch_Statics::NewProp_ElectronicToMonitor = { "ElectronicToMonitor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicMonitorSwitch, ElectronicToMonitor), Z_Construct_UClass_AElectronic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AElectronicMonitorSwitch_Statics::NewProp_ElectronicToMonitor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicMonitorSwitch_Statics::NewProp_ElectronicToMonitor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectronicMonitorSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicMonitorSwitch_Statics::NewProp_ElectronicToMonitor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElectronicMonitorSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectronicMonitorSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElectronicMonitorSwitch_Statics::ClassParams = {
		&AElectronicMonitorSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AElectronicMonitorSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicMonitorSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElectronicMonitorSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicMonitorSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElectronicMonitorSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElectronicMonitorSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElectronicMonitorSwitch, 2491586337);
	template<> ELECTRONICS_API UClass* StaticClass<AElectronicMonitorSwitch>()
	{
		return AElectronicMonitorSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElectronicMonitorSwitch(Z_Construct_UClass_AElectronicMonitorSwitch, &AElectronicMonitorSwitch::StaticClass, TEXT("/Script/Electronics"), TEXT("AElectronicMonitorSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElectronicMonitorSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
