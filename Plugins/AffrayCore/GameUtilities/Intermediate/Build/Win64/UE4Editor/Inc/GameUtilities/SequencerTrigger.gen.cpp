// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/SequencerTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerTrigger() {}
// Cross Module References
	GAMEUTILITIES_API UClass* Z_Construct_UClass_ASequencerTrigger_NoRegister();
	GAMEUTILITIES_API UClass* Z_Construct_UClass_ASequencerTrigger();
	GAMEUTILITIES_API UClass* Z_Construct_UClass_APlayerTriggerVolume();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
// End Cross Module References
	void ASequencerTrigger::StaticRegisterNativesASequencerTrigger()
	{
	}
	UClass* Z_Construct_UClass_ASequencerTrigger_NoRegister()
	{
		return ASequencerTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ASequencerTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASequencerTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerTriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_GameUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SequencerTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SequencerTrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASequencerTrigger_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SequencerTrigger" },
		{ "ModuleRelativePath", "Public/SequencerTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASequencerTrigger_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASequencerTrigger, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASequencerTrigger_Statics::NewProp_LevelSequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerTrigger_Statics::NewProp_LevelSequenceActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASequencerTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASequencerTrigger_Statics::NewProp_LevelSequenceActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASequencerTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASequencerTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASequencerTrigger_Statics::ClassParams = {
		&ASequencerTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASequencerTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASequencerTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASequencerTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASequencerTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASequencerTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASequencerTrigger, 1039612326);
	template<> GAMEUTILITIES_API UClass* StaticClass<ASequencerTrigger>()
	{
		return ASequencerTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASequencerTrigger(Z_Construct_UClass_ASequencerTrigger, &ASequencerTrigger::StaticClass, TEXT("/Script/GameUtilities"), TEXT("ASequencerTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASequencerTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
