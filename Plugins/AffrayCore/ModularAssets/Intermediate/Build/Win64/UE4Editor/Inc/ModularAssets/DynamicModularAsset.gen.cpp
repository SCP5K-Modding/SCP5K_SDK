// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/DynamicModularAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicModularAsset() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_ADynamicModularAsset_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_ADynamicModularAsset();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	MODULARASSETS_API UEnum* Z_Construct_UEnum_ModularAssets_EAssetType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MODULARASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FAssetType();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void ADynamicModularAsset::StaticRegisterNativesADynamicModularAsset()
	{
	}
	UClass* Z_Construct_UClass_ADynamicModularAsset_NoRegister()
	{
		return ADynamicModularAsset::StaticClass();
	}
	struct Z_Construct_UClass_ADynamicModularAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrimaryLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondaryLength;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapping_MetaData[];
#endif
		static void NewProp_bEnableSnapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionSnapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PositionSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSnapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RotationSnapping;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Types_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Types;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomMesh_MetaData[];
#endif
		static void NewProp_bUseCustomMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADynamicModularAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynamicModularAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_AssetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicModularAsset, AssetType), Z_Construct_UEnum_ModularAssets_EAssetType, METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_AssetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_AssetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PrimaryLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PrimaryLength = { "PrimaryLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicModularAsset, PrimaryLength), METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PrimaryLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PrimaryLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_SecondaryLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_SecondaryLength = { "SecondaryLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicModularAsset, SecondaryLength), METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_SecondaryLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_SecondaryLength_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Materials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicModularAsset, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bEnableSnapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bEnableSnapping_SetBit(void* Obj)
	{
		((ADynamicModularAsset*)Obj)->bEnableSnapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bEnableSnapping = { "bEnableSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADynamicModularAsset), &Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bEnableSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bEnableSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bEnableSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PositionSnapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PositionSnapping = { "PositionSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicModularAsset, PositionSnapping), METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PositionSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PositionSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_RotationSnapping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_RotationSnapping = { "RotationSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicModularAsset, RotationSnapping), METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_RotationSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_RotationSnapping_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssetType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Types_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicModularAsset, Types), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Types_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Types_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bUseCustomMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	void Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bUseCustomMesh_SetBit(void* Obj)
	{
		((ADynamicModularAsset*)Obj)->bUseCustomMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bUseCustomMesh = { "bUseCustomMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADynamicModularAsset), &Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bUseCustomMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bUseCustomMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bUseCustomMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_CurrentMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicModularAsset" },
		{ "ModuleRelativePath", "Public/DynamicModularAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_CurrentMesh = { "CurrentMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADynamicModularAsset, CurrentMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_CurrentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_CurrentMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADynamicModularAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_AssetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PrimaryLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_SecondaryLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bEnableSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_PositionSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_RotationSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Types_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_Types,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_bUseCustomMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADynamicModularAsset_Statics::NewProp_CurrentMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADynamicModularAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicModularAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADynamicModularAsset_Statics::ClassParams = {
		&ADynamicModularAsset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADynamicModularAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADynamicModularAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADynamicModularAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADynamicModularAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADynamicModularAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADynamicModularAsset, 2441029922);
	template<> MODULARASSETS_API UClass* StaticClass<ADynamicModularAsset>()
	{
		return ADynamicModularAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADynamicModularAsset(Z_Construct_UClass_ADynamicModularAsset, &ADynamicModularAsset::StaticClass, TEXT("/Script/ModularAssets"), TEXT("ADynamicModularAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADynamicModularAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
