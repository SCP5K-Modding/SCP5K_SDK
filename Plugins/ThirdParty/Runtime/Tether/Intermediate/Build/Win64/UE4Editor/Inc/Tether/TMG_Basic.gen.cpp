// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TMG_Basic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTMG_Basic() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTMG_Basic_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTMG_Basic();
	TETHER_API UClass* Z_Construct_UClass_UTetherMeshGenerator();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshProperties();
// End Cross Module References
	void UTMG_Basic::StaticRegisterNativesUTMG_Basic()
	{
	}
	UClass* Z_Construct_UClass_UTMG_Basic_NoRegister()
	{
		return UTMG_Basic::StaticClass();
	}
	struct Z_Construct_UClass_UTMG_Basic_Statics
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
	UObject* (*const Z_Construct_UClass_UTMG_Basic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTetherMeshGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMG_Basic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TMG_Basic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TMG_Basic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMG_Basic_Statics::NewProp_Properties_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TMG_Basic" },
		{ "ModuleRelativePath", "Public/TMG_Basic.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTMG_Basic_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTMG_Basic, Properties), Z_Construct_UScriptStruct_FBasicMeshProperties, METADATA_PARAMS(Z_Construct_UClass_UTMG_Basic_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_Basic_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTMG_Basic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTMG_Basic_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTMG_Basic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTMG_Basic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTMG_Basic_Statics::ClassParams = {
		&UTMG_Basic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTMG_Basic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_Basic_Statics::PropPointers),
		0,
		0x003010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTMG_Basic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTMG_Basic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTMG_Basic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTMG_Basic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTMG_Basic, 84295551);
	template<> TETHER_API UClass* StaticClass<UTMG_Basic>()
	{
		return UTMG_Basic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTMG_Basic(Z_Construct_UClass_UTMG_Basic, &UTMG_Basic::StaticClass, TEXT("/Script/Tether"), TEXT("UTMG_Basic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTMG_Basic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
