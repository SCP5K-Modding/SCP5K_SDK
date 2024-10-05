// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAIEnvQueryTest_RelativePosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIEnvQueryTest_RelativePosition() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAIEnvQueryTest_RelativePosition();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ERelativeType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
// End Cross Module References
	void USAIEnvQueryTest_RelativePosition::StaticRegisterNativesUSAIEnvQueryTest_RelativePosition()
	{
	}
	UClass* Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_NoRegister()
	{
		return USAIEnvQueryTest_RelativePosition::StaticClass();
	}
	struct Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RelativeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RelativeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RelativeTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Querier_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Querier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAIEnvQueryTest_RelativePosition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAIEnvQueryTest_RelativePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEnvQueryTest_RelativePosition" },
		{ "ModuleRelativePath", "Public/SAIEnvQueryTest_RelativePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeType = { "RelativeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEnvQueryTest_RelativePosition, RelativeType), Z_Construct_UEnum_AISentience_ERelativeType, METADATA_PARAMS(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeTo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEnvQueryTest_RelativePosition" },
		{ "ModuleRelativePath", "Public/SAIEnvQueryTest_RelativePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeTo = { "RelativeTo", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEnvQueryTest_RelativePosition, RelativeTo), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_Querier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAIEnvQueryTest_RelativePosition" },
		{ "ModuleRelativePath", "Public/SAIEnvQueryTest_RelativePosition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_Querier = { "Querier", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USAIEnvQueryTest_RelativePosition, Querier), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_Querier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_Querier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_RelativeTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::NewProp_Querier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAIEnvQueryTest_RelativePosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::ClassParams = {
		&USAIEnvQueryTest_RelativePosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAIEnvQueryTest_RelativePosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAIEnvQueryTest_RelativePosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAIEnvQueryTest_RelativePosition, 3435025262);
	template<> AISENTIENCE_API UClass* StaticClass<USAIEnvQueryTest_RelativePosition>()
	{
		return USAIEnvQueryTest_RelativePosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAIEnvQueryTest_RelativePosition(Z_Construct_UClass_USAIEnvQueryTest_RelativePosition, &USAIEnvQueryTest_RelativePosition::StaticClass, TEXT("/Script/AISentience"), TEXT("USAIEnvQueryTest_RelativePosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAIEnvQueryTest_RelativePosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
