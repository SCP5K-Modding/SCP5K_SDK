// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSWeapon() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSWeapon_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSWeapon();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSWeaponData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSWeapon::execGetDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSWeapon::execGetWeaponData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFPSWeaponData**)Z_Param__Result=P_THIS->GetWeaponData();
		P_NATIVE_END;
	}
	void AFPSWeapon::StaticRegisterNativesAFPSWeapon()
	{
		UClass* Class = AFPSWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamage", &AFPSWeapon::execGetDamage },
			{ "GetWeaponData", &AFPSWeapon::execGetWeaponData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics
	{
		struct FPSWeapon_eventGetDamage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSWeapon_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "GetDamage", nullptr, nullptr, sizeof(FPSWeapon_eventGetDamage_Parms), Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics
	{
		struct FPSWeapon_eventGetWeaponData_Parms
		{
			UFPSWeaponData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSWeapon_eventGetWeaponData_Parms, ReturnValue), Z_Construct_UClass_UFPSWeaponData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSWeapon, nullptr, "GetWeaponData", nullptr, nullptr, sizeof(FPSWeapon_eventGetWeaponData_Parms), Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSWeapon_GetWeaponData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSWeapon_GetWeaponData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSWeapon_NoRegister()
	{
		return AFPSWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFPSWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFPSItem,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSWeapon_GetDamage, "GetDamage" }, // 1959422074
		{ &Z_Construct_UFunction_AFPSWeapon_GetWeaponData, "GetWeaponData" }, // 2358231680
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSWeapon_Statics::NewProp_WeaponData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSWeapon" },
		{ "ModuleRelativePath", "Public/FPSWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSWeapon_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSWeapon, WeaponData), Z_Construct_UClass_UFPSWeaponData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::NewProp_WeaponData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSWeapon_Statics::NewProp_WeaponData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSWeapon_Statics::ClassParams = {
		&AFPSWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSWeapon, 2729155809);
	template<> FPSCONTROLLER_API UClass* StaticClass<AFPSWeapon>()
	{
		return AFPSWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSWeapon(Z_Construct_UClass_AFPSWeapon, &AFPSWeapon::StaticClass, TEXT("/Script/FPSController"), TEXT("AFPSWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
