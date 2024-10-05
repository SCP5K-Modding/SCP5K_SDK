// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/ModularWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularWall() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularWall_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_AModularWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_UModularAssetType_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AModularWall::execRefreshAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAsset();
		P_NATIVE_END;
	}
	void AModularWall::StaticRegisterNativesAModularWall()
	{
		UClass* Class = AModularWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshAsset", &AModularWall::execRefreshAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModularWall_RefreshAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularWall_RefreshAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularWall_RefreshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularWall, nullptr, "RefreshAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularWall_RefreshAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularWall_RefreshAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularWall_RefreshAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularWall_RefreshAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModularWall_NoRegister()
	{
		return AModularWall::StaticClass();
	}
	struct Z_Construct_UClass_AModularWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AssetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subtractors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtractors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtractors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModularWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularWall_RefreshAsset, "RefreshAsset" }, // 1200062321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModularWall.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularWall, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularWall, MeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularWall" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularWall, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::NewProp_AssetSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularWall" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_AssetSize = { "AssetSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularWall, AssetSize), METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::NewProp_AssetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::NewProp_AssetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularWall" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularWall, Height), METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::NewProp_WallDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularWall" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_WallDirection = { "WallDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularWall, WallDirection), METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::NewProp_WallDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::NewProp_WallDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::NewProp_Thickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularWall" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularWall, Thickness), METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::NewProp_Thickness_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_Subtractors_Inner = { "Subtractors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularWall_Statics::NewProp_Subtractors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModularWall" },
		{ "ModuleRelativePath", "Public/ModularWall.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModularWall_Statics::NewProp_Subtractors = { "Subtractors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularWall, Subtractors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::NewProp_Subtractors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::NewProp_Subtractors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_AssetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_WallDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_Subtractors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWall_Statics::NewProp_Subtractors,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AModularWall_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UModularAssetType_NoRegister, (int32)VTABLE_OFFSET(AModularWall, IModularAssetType), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModularWall_Statics::ClassParams = {
		&AModularWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModularWall_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularWall, 1413566783);
	template<> MODULARASSETS_API UClass* StaticClass<AModularWall>()
	{
		return AModularWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularWall(Z_Construct_UClass_AModularWall, &AModularWall::StaticClass, TEXT("/Script/ModularAssets"), TEXT("AModularWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
