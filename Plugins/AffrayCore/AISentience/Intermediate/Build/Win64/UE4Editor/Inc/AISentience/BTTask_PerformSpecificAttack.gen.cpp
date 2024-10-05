// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/BTTask_PerformSpecificAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PerformSpecificAttack() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_PerformSpecificAttack_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_PerformSpecificAttack();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTTask_PerformMeleeAttack();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void UBTTask_PerformSpecificAttack::StaticRegisterNativesUBTTask_PerformSpecificAttack()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PerformSpecificAttack_NoRegister()
	{
		return UBTTask_PerformSpecificAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredAttackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DesiredAttackIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_PerformMeleeAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTTask_PerformSpecificAttack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTTask_PerformSpecificAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::NewProp_DesiredAttackIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BTTask_PerformSpecificAttack" },
		{ "ModuleRelativePath", "Public/BTTask_PerformSpecificAttack.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::NewProp_DesiredAttackIndex = { "DesiredAttackIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_PerformSpecificAttack, DesiredAttackIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::NewProp_DesiredAttackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::NewProp_DesiredAttackIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::NewProp_DesiredAttackIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PerformSpecificAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::ClassParams = {
		&UBTTask_PerformSpecificAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PerformSpecificAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PerformSpecificAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PerformSpecificAttack, 3249083924);
	template<> AISENTIENCE_API UClass* StaticClass<UBTTask_PerformSpecificAttack>()
	{
		return UBTTask_PerformSpecificAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PerformSpecificAttack(Z_Construct_UClass_UBTTask_PerformSpecificAttack, &UBTTask_PerformSpecificAttack::StaticClass, TEXT("/Script/AISentience"), TEXT("UBTTask_PerformSpecificAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PerformSpecificAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
