// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TMG_CustomMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTMG_CustomMesh() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTMG_CustomMesh_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTMG_CustomMesh();
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshProperties();
// End Cross Module References
	void UTMG_CustomMesh::StaticRegisterNativesUTMG_CustomMesh()
	{
	}
	UClass* Z_Construct_UClass_UTMG_CustomMesh_NoRegister()
	{
		return UTMG_CustomMesh::StaticClass();
	}
	struct Z_Construct_UClass_UTMG_CustomMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTMG_CustomMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTetherMeshGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMG_CustomMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TMG_CustomMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TMG_CustomMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TMG_CustomMesh" },
		{ "ModuleRelativePath", "Public/TMG_CustomMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTMG_CustomMesh, Properties), Z_Construct_UScriptStruct_FCustomMeshProperties, METADATA_PARAMS(Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTMG_CustomMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTMG_CustomMesh_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTMG_CustomMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTMG_CustomMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTMG_CustomMesh_Statics::ClassParams = {
		&UTMG_CustomMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTMG_CustomMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_CustomMesh_Statics::PropPointers),
		0,
		0x003010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTMG_CustomMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_CustomMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTMG_CustomMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTMG_CustomMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTMG_CustomMesh, 1770963320);
	template<> TETHER_API UClass* StaticClass<UTMG_CustomMesh>()
	{
		return UTMG_CustomMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTMG_CustomMesh(Z_Construct_UClass_UTMG_CustomMesh, &UTMG_CustomMesh::StaticClass, TEXT("/Script/Tether"), TEXT("UTMG_CustomMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTMG_CustomMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
