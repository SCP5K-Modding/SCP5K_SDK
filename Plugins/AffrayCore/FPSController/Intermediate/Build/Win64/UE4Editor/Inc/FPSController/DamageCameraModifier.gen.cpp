// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/DamageCameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageCameraModifier() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UDamageCameraModifier_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UDamageCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FPSController();
// End Cross Module References
	DEFINE_FUNCTION(UDamageCameraModifier::execGetAlpha)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAlpha();
		P_NATIVE_END;
	}
	void UDamageCameraModifier::StaticRegisterNativesUDamageCameraModifier()
	{
		UClass* Class = UDamageCameraModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlpha", &UDamageCameraModifier::execGetAlpha },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics
	{
		struct DamageCameraModifier_eventGetAlpha_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageCameraModifier_eventGetAlpha_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DamageCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDamageCameraModifier, nullptr, "GetAlpha", nullptr, nullptr, sizeof(DamageCameraModifier_eventGetAlpha_Parms), Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDamageCameraModifier_GetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDamageCameraModifier_GetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDamageCameraModifier_NoRegister()
	{
		return UDamageCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UDamageCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VignetteAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AberrationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AberrationAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDamageCameraModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageCameraModifier_GetAlpha, "GetAlpha" }, // 750633608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DamageCameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DamageCameraModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_VignetteAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DamageCameraModifier" },
		{ "ModuleRelativePath", "Public/DamageCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_VignetteAmount = { "VignetteAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageCameraModifier, VignetteAmount), METADATA_PARAMS(Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_VignetteAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_VignetteAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_AberrationAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DamageCameraModifier" },
		{ "ModuleRelativePath", "Public/DamageCameraModifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_AberrationAmount = { "AberrationAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageCameraModifier, AberrationAmount), METADATA_PARAMS(Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_AberrationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_AberrationAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_VignetteAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageCameraModifier_Statics::NewProp_AberrationAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageCameraModifier_Statics::ClassParams = {
		&UDamageCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDamageCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDamageCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageCameraModifier, 1465188429);
	template<> FPSCONTROLLER_API UClass* StaticClass<UDamageCameraModifier>()
	{
		return UDamageCameraModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageCameraModifier(Z_Construct_UClass_UDamageCameraModifier, &UDamageCameraModifier::StaticClass, TEXT("/Script/FPSController"), TEXT("UDamageCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
