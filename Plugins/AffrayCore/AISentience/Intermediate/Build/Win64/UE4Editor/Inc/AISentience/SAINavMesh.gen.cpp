// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAINavMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAINavMesh() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAINavMesh_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAINavMesh();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void ASAINavMesh::StaticRegisterNativesASAINavMesh()
	{
	}
	UClass* Z_Construct_UClass_ASAINavMesh_NoRegister()
	{
		return ASAINavMesh::StaticClass();
	}
	struct Z_Construct_UClass_ASAINavMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAINavMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARecastNavMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAINavMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Rendering Tags Utilities|Transformation Actor Layers Replication" },
		{ "IncludePath", "SAINavMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAINavMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAINavMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAINavMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAINavMesh_Statics::ClassParams = {
		&ASAINavMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A6u,
		METADATA_PARAMS(Z_Construct_UClass_ASAINavMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAINavMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAINavMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAINavMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAINavMesh, 431151881);
	template<> AISENTIENCE_API UClass* StaticClass<ASAINavMesh>()
	{
		return ASAINavMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAINavMesh(Z_Construct_UClass_ASAINavMesh, &ASAINavMesh::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAINavMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAINavMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
