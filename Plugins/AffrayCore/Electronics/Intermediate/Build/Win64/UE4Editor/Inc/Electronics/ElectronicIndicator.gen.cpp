// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Electronics/Public/ElectronicIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicIndicator() {}
// Cross Module References
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicIndicator_NoRegister();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicIndicator();
	ELECTRONICS_API UClass* Z_Construct_UClass_AElectronicLight();
	UPackage* Z_Construct_UPackage__Script_Electronics();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void AElectronicIndicator::StaticRegisterNativesAElectronicIndicator()
	{
	}
	UClass* Z_Construct_UClass_AElectronicIndicator_NoRegister()
	{
		return AElectronicIndicator::StaticClass();
	}
	struct Z_Construct_UClass_AElectronicIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnabledColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElectronicIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AElectronicLight,
		(UObject* (*)())Z_Construct_UPackage__Script_Electronics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicIndicator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ElectronicIndicator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ElectronicIndicator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_EnabledColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicIndicator" },
		{ "ModuleRelativePath", "Public/ElectronicIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_EnabledColor = { "EnabledColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicIndicator, EnabledColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_EnabledColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_EnabledColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_DisabledColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ElectronicIndicator" },
		{ "ModuleRelativePath", "Public/ElectronicIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_DisabledColor = { "DisabledColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AElectronicIndicator, DisabledColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_DisabledColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_DisabledColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElectronicIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_EnabledColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElectronicIndicator_Statics::NewProp_DisabledColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElectronicIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElectronicIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElectronicIndicator_Statics::ClassParams = {
		&AElectronicIndicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AElectronicIndicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicIndicator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AElectronicIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AElectronicIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElectronicIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElectronicIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElectronicIndicator, 2805910670);
	template<> ELECTRONICS_API UClass* StaticClass<AElectronicIndicator>()
	{
		return AElectronicIndicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElectronicIndicator(Z_Construct_UClass_AElectronicIndicator, &AElectronicIndicator::StaticClass, TEXT("/Script/Electronics"), TEXT("AElectronicIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElectronicIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
