// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAICoverPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICoverPoint() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAICoverPoint_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAICoverPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ASAICoverPoint::StaticRegisterNativesASAICoverPoint()
	{
	}
	UClass* Z_Construct_UClass_ASAICoverPoint_NoRegister()
	{
		return ASAICoverPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASAICoverPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHighCover_MetaData[];
#endif
		static void NewProp_bIsHighCover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHighCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInUse_MetaData[];
#endif
		static void NewProp_bInUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnUsingCover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnUsingCover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoverDetection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoverDetection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAICoverPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICoverPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAICoverPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAICoverPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bIsHighCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverPoint" },
		{ "ModuleRelativePath", "Public/SAICoverPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bIsHighCover_SetBit(void* Obj)
	{
		((ASAICoverPoint*)Obj)->bIsHighCover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bIsHighCover = { "bIsHighCover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAICoverPoint), &Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bIsHighCover_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bIsHighCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bIsHighCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bInUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverPoint" },
		{ "ModuleRelativePath", "Public/SAICoverPoint.h" },
	};
#endif
	void Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bInUse_SetBit(void* Obj)
	{
		((ASAICoverPoint*)Obj)->bInUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bInUse = { "bInUse", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASAICoverPoint), &Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bInUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bInUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_PawnUsingCover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverPoint" },
		{ "ModuleRelativePath", "Public/SAICoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_PawnUsingCover = { "PawnUsingCover", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAICoverPoint, PawnUsingCover), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_PawnUsingCover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_PawnUsingCover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_CoverDetection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAICoverPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAICoverPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_CoverDetection = { "CoverDetection", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAICoverPoint, CoverDetection), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_CoverDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_CoverDetection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAICoverPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bIsHighCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_bInUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_PawnUsingCover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAICoverPoint_Statics::NewProp_CoverDetection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAICoverPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAICoverPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAICoverPoint_Statics::ClassParams = {
		&ASAICoverPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASAICoverPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAICoverPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAICoverPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAICoverPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAICoverPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAICoverPoint, 3934145930);
	template<> AISENTIENCE_API UClass* StaticClass<ASAICoverPoint>()
	{
		return ASAICoverPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAICoverPoint(Z_Construct_UClass_ASAICoverPoint, &ASAICoverPoint::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAICoverPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAICoverPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
