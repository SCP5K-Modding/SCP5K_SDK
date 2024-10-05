// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAINavigationSystem.h"
#include "Engine/Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAINavigationSystem() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAINavigationSystem_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAINavigationSystem();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void USAINavigationSystem::StaticRegisterNativesUSAINavigationSystem()
	{
	}
	UClass* Z_Construct_UClass_USAINavigationSystem_NoRegister()
	{
		return USAINavigationSystem::StaticClass();
	}
	struct Z_Construct_UClass_USAINavigationSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAINavigationSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationSystemV1,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAINavigationSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAINavigationSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAINavigationSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAINavigationSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAINavigationSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAINavigationSystem_Statics::ClassParams = {
		&USAINavigationSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USAINavigationSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAINavigationSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAINavigationSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAINavigationSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAINavigationSystem, 3280113723);
	template<> AISENTIENCE_API UClass* StaticClass<USAINavigationSystem>()
	{
		return USAINavigationSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAINavigationSystem(Z_Construct_UClass_USAINavigationSystem, &USAINavigationSystem::StaticClass, TEXT("/Script/AISentience"), TEXT("USAINavigationSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAINavigationSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
