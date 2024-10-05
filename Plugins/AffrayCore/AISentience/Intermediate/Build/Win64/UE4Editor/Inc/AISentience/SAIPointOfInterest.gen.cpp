// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIPointOfInterest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIPointOfInterest() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPointOfInterest_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIPointOfInterest();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void USAIPointOfInterest::StaticRegisterNativesUSAIPointOfInterest()
	{
	}
	UClass* Z_Construct_UClass_USAIPointOfInterest_NoRegister()
	{
		return USAIPointOfInterest::StaticClass();
	}
	struct Z_Construct_UClass_USAIPointOfInterest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterestPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterestPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIPointOfInterest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIPointOfInterest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SAIPointOfInterest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIPointOfInterest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIPointOfInterest_Statics::NewProp_InterestPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIPointOfInterest" },
		{ "ModuleRelativePath", "Public/SAIPointOfInterest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USAIPointOfInterest_Statics::NewProp_InterestPriority = { "InterestPriority", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIPointOfInterest, InterestPriority), METADATA_PARAMS(Z_Construct_UClass_USAIPointOfInterest_Statics::NewProp_InterestPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIPointOfInterest_Statics::NewProp_InterestPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAIPointOfInterest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIPointOfInterest_Statics::NewProp_InterestPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIPointOfInterest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIPointOfInterest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIPointOfInterest_Statics::ClassParams = {
		&USAIPointOfInterest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USAIPointOfInterest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USAIPointOfInterest_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USAIPointOfInterest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIPointOfInterest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIPointOfInterest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIPointOfInterest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIPointOfInterest, 3283404254);
	template<> AISENTIENCE_API UClass* StaticClass<USAIPointOfInterest>()
	{
		return USAIPointOfInterest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIPointOfInterest(Z_Construct_UClass_USAIPointOfInterest, &USAIPointOfInterest::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIPointOfInterest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIPointOfInterest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
