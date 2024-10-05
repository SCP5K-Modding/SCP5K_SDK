// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSBarrel() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSBarrel_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSBarrel();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSBarrelData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSBarrel::execGetBarrel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UArrowComponent**)Z_Param__Result=P_THIS->GetBarrel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSBarrel::execGetBarrelData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFPSBarrelData**)Z_Param__Result=P_THIS->GetBarrelData();
		P_NATIVE_END;
	}
	void AFPSBarrel::StaticRegisterNativesAFPSBarrel()
	{
		UClass* Class = AFPSBarrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBarrel", &AFPSBarrel::execGetBarrel },
			{ "GetBarrelData", &AFPSBarrel::execGetBarrelData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics
	{
		struct FPSBarrel_eventGetBarrel_Parms
		{
			UArrowComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBarrel_eventGetBarrel_Parms, ReturnValue), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSBarrel, nullptr, "GetBarrel", nullptr, nullptr, sizeof(FPSBarrel_eventGetBarrel_Parms), Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSBarrel_GetBarrel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSBarrel_GetBarrel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics
	{
		struct FPSBarrel_eventGetBarrelData_Parms
		{
			UFPSBarrelData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSBarrel_eventGetBarrelData_Parms, ReturnValue), Z_Construct_UClass_UFPSBarrelData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSBarrel, nullptr, "GetBarrelData", nullptr, nullptr, sizeof(FPSBarrel_eventGetBarrelData_Parms), Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSBarrel_GetBarrelData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSBarrel_GetBarrelData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSBarrel_NoRegister()
	{
		return AFPSBarrel::StaticClass();
	}
	struct Z_Construct_UClass_AFPSBarrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSBarrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSBarrel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSBarrel_GetBarrel, "GetBarrel" }, // 2636325607
		{ &Z_Construct_UFunction_AFPSBarrel_GetBarrelData, "GetBarrelData" }, // 387020982
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBarrel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSBarrel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSBarrel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSBarrel" },
		{ "ModuleRelativePath", "Public/FPSBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelData = { "BarrelData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSBarrel, BarrelData), Z_Construct_UClass_UFPSBarrelData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSBarrel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelEnd = { "BarrelEnd", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSBarrel, BarrelEnd), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSBarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSBarrel_Statics::NewProp_BarrelEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSBarrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSBarrel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSBarrel_Statics::ClassParams = {
		&AFPSBarrel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSBarrel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSBarrel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSBarrel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSBarrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSBarrel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSBarrel, 1453359991);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSBarrel>()
	{
		return AFPSBarrel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSBarrel(Z_Construct_UClass_AFPSBarrel, &AFPSBarrel::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
