// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSGrip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGrip() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSGrip_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSGrip();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSAttachment();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSGripData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSGrip::execGetGripData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFPSGripData**)Z_Param__Result=P_THIS->GetGripData();
		P_NATIVE_END;
	}
	void AFPSGrip::StaticRegisterNativesAFPSGrip()
	{
		UClass* Class = AFPSGrip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGripData", &AFPSGrip::execGetGripData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSGrip_GetGripData_Statics
	{
		struct FPSGrip_eventGetGripData_Parms
		{
			UFPSGripData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGrip_eventGetGripData_Parms, ReturnValue), Z_Construct_UClass_UFPSGripData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGrip, nullptr, "GetGripData", nullptr, nullptr, sizeof(FPSGrip_eventGetGripData_Parms), Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGrip_GetGripData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGrip_GetGripData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSGrip_NoRegister()
	{
		return AFPSGrip::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGrip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGrip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGrip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGrip_GetGripData, "GetGripData" }, // 4067666897
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGrip_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSGrip.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSGrip.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGrip_Statics::NewProp_GripData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGrip" },
		{ "ModuleRelativePath", "Public/FPSGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSGrip_Statics::NewProp_GripData = { "GripData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSGrip, GripData), Z_Construct_UClass_UFPSGripData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSGrip_Statics::NewProp_GripData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGrip_Statics::NewProp_GripData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSGrip_Statics::NewProp_GripData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGrip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGrip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSGrip_Statics::ClassParams = {
		&AFPSGrip::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSGrip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGrip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSGrip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGrip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSGrip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSGrip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSGrip, 2048293082);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSGrip>()
	{
		return AFPSGrip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSGrip(Z_Construct_UClass_AFPSGrip, &AFPSGrip::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSGrip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGrip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
