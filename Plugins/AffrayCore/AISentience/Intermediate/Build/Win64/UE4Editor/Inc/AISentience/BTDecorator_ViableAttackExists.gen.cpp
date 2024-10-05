// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/BTDecorator_ViableAttackExists.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ViableAttackExists() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTDecorator_ViableAttackExists_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTDecorator_ViableAttackExists();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_ViableAttackExists::StaticRegisterNativesUBTDecorator_ViableAttackExists()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ViableAttackExists_NoRegister()
	{
		return UBTDecorator_ViableAttackExists::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blackboard_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTDecorator_ViableAttackExists.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTDecorator_ViableAttackExists.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::NewProp_Blackboard_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BTDecorator_ViableAttackExists" },
		{ "ModuleRelativePath", "Public/BTDecorator_ViableAttackExists.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::NewProp_Blackboard_Target = { "Blackboard_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ViableAttackExists, Blackboard_Target), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::NewProp_Blackboard_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::NewProp_Blackboard_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::NewProp_Blackboard_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ViableAttackExists>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::ClassParams = {
		&UBTDecorator_ViableAttackExists::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ViableAttackExists()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_ViableAttackExists_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_ViableAttackExists, 3126418344);
	template<> AISENTIENCE_API UClass* StaticClass<UBTDecorator_ViableAttackExists>()
	{
		return UBTDecorator_ViableAttackExists::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ViableAttackExists(Z_Construct_UClass_UBTDecorator_ViableAttackExists, &UBTDecorator_ViableAttackExists::StaticClass, TEXT("/Script/AISentience"), TEXT("UBTDecorator_ViableAttackExists"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ViableAttackExists);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
