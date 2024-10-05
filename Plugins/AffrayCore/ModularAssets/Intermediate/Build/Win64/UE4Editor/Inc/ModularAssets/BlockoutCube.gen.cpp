// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularAssets/Public/BlockoutCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockoutCube() {}
// Cross Module References
	MODULARASSETS_API UClass* Z_Construct_UClass_ABlockoutCube_NoRegister();
	MODULARASSETS_API UClass* Z_Construct_UClass_ABlockoutCube();
	MODULARASSETS_API UClass* Z_Construct_UClass_ABlockoutAsset();
	UPackage* Z_Construct_UPackage__Script_ModularAssets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void ABlockoutCube::StaticRegisterNativesABlockoutCube()
	{
	}
	UClass* Z_Construct_UClass_ABlockoutCube_NoRegister()
	{
		return ABlockoutCube::StaticClass();
	}
	struct Z_Construct_UClass_ABlockoutCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockoutCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlockoutAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularAssets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutCube_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlockoutCube.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlockoutCube.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlockoutCube" },
		{ "ModuleRelativePath", "Public/BlockoutCube.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutCube, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutCube_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlockoutCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlockoutCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutCube_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutCube, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutCube_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutCube_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlockoutCube" },
		{ "ModuleRelativePath", "Public/BlockoutCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockoutCube, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockoutCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutCube_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockoutCube_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockoutCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockoutCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockoutCube_Statics::ClassParams = {
		&ABlockoutCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockoutCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockoutCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockoutCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockoutCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockoutCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockoutCube, 1525382009);
	template<> MODULARASSETS_API UClass* StaticClass<ABlockoutCube>()
	{
		return ABlockoutCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockoutCube(Z_Construct_UClass_ABlockoutCube, &ABlockoutCube::StaticClass, TEXT("/Script/ModularAssets"), TEXT("ABlockoutCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockoutCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
