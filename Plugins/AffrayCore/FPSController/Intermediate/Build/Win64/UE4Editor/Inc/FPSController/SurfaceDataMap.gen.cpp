// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/SurfaceDataMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurfaceDataMap() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USurfaceDataMap_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_USurfaceDataMap();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleSurfaceData();
// End Cross Module References
	DEFINE_FUNCTION(USurfaceDataMap::execGetSurfaceData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_SurfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleSurfaceData*)Z_Param__Result=P_THIS->GetSurfaceData(EPhysicalSurface(Z_Param_SurfaceType));
		P_NATIVE_END;
	}
	void USurfaceDataMap::StaticRegisterNativesUSurfaceDataMap()
	{
		UClass* Class = USurfaceDataMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSurfaceData", &USurfaceDataMap::execGetSurfaceData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics
	{
		struct SurfaceDataMap_eventGetSurfaceData_Parms
		{
			TEnumAsByte<EPhysicalSurface> SurfaceType;
			FSimpleSurfaceData ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurfaceDataMap_eventGetSurfaceData_Parms, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurfaceDataMap_eventGetSurfaceData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleSurfaceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurfaceDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurfaceDataMap, nullptr, "GetSurfaceData", nullptr, nullptr, sizeof(SurfaceDataMap_eventGetSurfaceData_Parms), Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurfaceDataMap_NoRegister()
	{
		return USurfaceDataMap::StaticClass();
	}
	struct Z_Construct_UClass_USurfaceDataMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Surfaces_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Surfaces_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Surfaces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurfaceDataMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurfaceDataMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurfaceDataMap_GetSurfaceData, "GetSurfaceData" }, // 3040982701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceDataMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SurfaceDataMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SurfaceDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces_ValueProp = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSimpleSurfaceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces_Key_KeyProp = { "Surfaces_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDataMap" },
		{ "ModuleRelativePath", "Public/SurfaceDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceDataMap, Surfaces), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Default_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SurfaceDataMap" },
		{ "ModuleRelativePath", "Public/SurfaceDataMap.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurfaceDataMap, Default), Z_Construct_UScriptStruct_FSimpleSurfaceData, METADATA_PARAMS(Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Default_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurfaceDataMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Surfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurfaceDataMap_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurfaceDataMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurfaceDataMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurfaceDataMap_Statics::ClassParams = {
		&USurfaceDataMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurfaceDataMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceDataMap_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USurfaceDataMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurfaceDataMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurfaceDataMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurfaceDataMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurfaceDataMap, 3747495827);
	template<> FPSCONTROLLER_API UClass* StaticClass<USurfaceDataMap>()
	{
		return USurfaceDataMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurfaceDataMap(Z_Construct_UClass_USurfaceDataMap, &USurfaceDataMap::StaticClass, TEXT("/Script/FPSController"), TEXT("USurfaceDataMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurfaceDataMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
