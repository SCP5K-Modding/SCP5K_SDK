// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIPatrol_NEW.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIPatrol_NEW() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrol_NEW_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASAIPatrol_NEW();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void ASAIPatrol_NEW::StaticRegisterNativesASAIPatrol_NEW()
	{
	}
	UClass* Z_Construct_UClass_ASAIPatrol_NEW_NoRegister()
	{
		return ASAIPatrol_NEW::StaticClass();
	}
	struct Z_Construct_UClass_ASAIPatrol_NEW_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BillboardRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BillboardRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPathComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPathComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIPatrol_NEW_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrol_NEW_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIPatrol_NEW.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIPatrol_NEW.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_BillboardRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrol_NEW" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIPatrol_NEW.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_BillboardRootComponent = { "BillboardRootComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrol_NEW, BillboardRootComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_BillboardRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_BillboardRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_PatrolPathComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPatrol_NEW" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SAIPatrol_NEW.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_PatrolPathComponent = { "PatrolPathComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAIPatrol_NEW, PatrolPathComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_PatrolPathComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_PatrolPathComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAIPatrol_NEW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_BillboardRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAIPatrol_NEW_Statics::NewProp_PatrolPathComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIPatrol_NEW_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIPatrol_NEW>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAIPatrol_NEW_Statics::ClassParams = {
		&ASAIPatrol_NEW::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASAIPatrol_NEW_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrol_NEW_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAIPatrol_NEW_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAIPatrol_NEW_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAIPatrol_NEW()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAIPatrol_NEW_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAIPatrol_NEW, 2895003768);
	template<> AISENTIENCE_API UClass* StaticClass<ASAIPatrol_NEW>()
	{
		return ASAIPatrol_NEW::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAIPatrol_NEW(Z_Construct_UClass_ASAIPatrol_NEW, &ASAIPatrol_NEW::StaticClass, TEXT("/Script/AISentience"), TEXT("ASAIPatrol_NEW"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIPatrol_NEW);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
