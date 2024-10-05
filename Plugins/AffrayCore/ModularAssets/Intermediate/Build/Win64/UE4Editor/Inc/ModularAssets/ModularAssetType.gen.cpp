// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/ModularAssetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAssetType() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_UModularAssetType_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_UModularAssetType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
// End Cross Module References
	DEFINE_FUNCTION(IModularAssetType::execRefreshAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAsset();
		P_NATIVE_END;
	}
	void UModularAssetType::StaticRegisterNativesUModularAssetType()
	{
		UClass* Class = UModularAssetType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshAsset", &IModularAssetType::execRefreshAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModularAssetType_RefreshAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularAssetType_RefreshAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularAssetType.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularAssetType_RefreshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularAssetType, nullptr, "RefreshAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModularAssetType_RefreshAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularAssetType_RefreshAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModularAssetType_RefreshAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModularAssetType_RefreshAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModularAssetType_NoRegister()
	{
		return UModularAssetType::StaticClass();
	}
	struct Z_Construct_UClass_UModularAssetType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModularAssetType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModularAssetType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularAssetType_RefreshAsset, "RefreshAsset" }, // 47139017
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularAssetType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/ModularAssetType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModularAssetType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IModularAssetType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModularAssetType_Statics::ClassParams = {
		&UModularAssetType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModularAssetType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModularAssetType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModularAssetType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModularAssetType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModularAssetType, 644701163);
	template<> MODULARASSETS_API UClass* StaticClass<UModularAssetType>()
	{
		return UModularAssetType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModularAssetType(Z_Construct_UClass_UModularAssetType, &UModularAssetType::StaticClass, TEXT("/Script/ModularAssets"), TEXT("UModularAssetType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAssetType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
