// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAINavBlockingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAINavBlockingVolume() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAINavBlockingVolume_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAINavBlockingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
// End Cross Module References
	void ASAINavBlockingVolume::StaticRegisterNativesASAINavBlockingVolume()
	{
	}
	UClass* Z_Construct_UClass_ASAINavBlockingVolume_NoRegister()
	{
		return ASAINavBlockingVolume::StaticClass();
	}
	struct Z_Construct_UClass_ASAINavBlockingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData[];
#endif
		static void NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaskFillCollisionUnderneathForNavmesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAINavBlockingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAINavBlockingVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SAINavBlockingVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAINavBlockingVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAINavBlockingVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAINavBlockingVolume" },
		{ "ModuleRelativePath", "Public/SAINavBlockingVolume.h" },
	};
#endif
	void Z_Construct_UClass_ASAINavBlockingVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit(void* Obj)
	{
		((ASAINavBlockingVolume*)Obj)->bMaskFillCollisionUnderneathForNavmesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAINavBlockingVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh = { "bMaskFillCollisionUnderneathForNavmesh", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAINavBlockingVolume), &Z_Construct_UClass_ASAINavBlockingVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAINavBlockingVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAINavBlockingVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAINavBlockingVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAINavBlockingVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASAINavBlockingVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ASAINavBlockingVolume, INavRelevantInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAINavBlockingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAINavBlockingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAINavBlockingVolume_Statics::ClassParams = {
		&ASAINavBlockingVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASAINavBlockingVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAINavBlockingVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAINavBlockingVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAINavBlockingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAINavBlockingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAINavBlockingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAINavBlockingVolume, 3292115957);
	template<> AISENTIENCE_API UClass* StaticClass<ASAINavBlockingVolume>()
	{
		return ASAINavBlockingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAINavBlockingVolume(Z_Construct_UClass_ASAINavBlockingVolume, &ASAINavBlockingVolume::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAINavBlockingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAINavBlockingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
