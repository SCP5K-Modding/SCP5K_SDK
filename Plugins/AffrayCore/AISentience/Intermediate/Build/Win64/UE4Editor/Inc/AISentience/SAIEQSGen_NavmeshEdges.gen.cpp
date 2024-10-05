// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIEQSGen_NavmeshEdges.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIEQSGen_NavmeshEdges() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEQSGen_NavmeshEdges_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEQSGen_NavmeshEdges();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void USAIEQSGen_NavmeshEdges::StaticRegisterNativesUSAIEQSGen_NavmeshEdges()
	{
	}
	UClass* Z_Construct_UClass_USAIEQSGen_NavmeshEdges_NoRegister()
	{
		return USAIEQSGen_NavmeshEdges::StaticClass();
	}
	struct Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathToItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathToItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NavigationFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScanRangeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScanRangeMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIEQSGen_NavmeshEdges.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_NavmeshEdges.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_PathToItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSGen_NavmeshEdges" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_NavmeshEdges.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_PathToItem = { "PathToItem", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSGen_NavmeshEdges, PathToItem), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_PathToItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_PathToItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_NavigationFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSGen_NavmeshEdges" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_NavmeshEdges.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_NavigationFilter = { "NavigationFilter", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSGen_NavmeshEdges, NavigationFilter), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_NavigationFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_NavigationFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_ScanRangeMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEQSGen_NavmeshEdges" },
		{ "ModuleRelativePath", "Public/SAIEQSGen_NavmeshEdges.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_ScanRangeMultiplier = { "ScanRangeMultiplier", nullptr, (EPropertyFlags)0x0010048000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEQSGen_NavmeshEdges, ScanRangeMultiplier), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_ScanRangeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_ScanRangeMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_PathToItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_NavigationFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::NewProp_ScanRangeMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIEQSGen_NavmeshEdges>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::ClassParams = {
		&USAIEQSGen_NavmeshEdges::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIEQSGen_NavmeshEdges()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIEQSGen_NavmeshEdges_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIEQSGen_NavmeshEdges, 212038723);
	template<> AISENTIENCE_API UClass* StaticClass<USAIEQSGen_NavmeshEdges>()
	{
		return USAIEQSGen_NavmeshEdges::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIEQSGen_NavmeshEdges(Z_Construct_UClass_USAIEQSGen_NavmeshEdges, &USAIEQSGen_NavmeshEdges::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIEQSGen_NavmeshEdges"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIEQSGen_NavmeshEdges);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
