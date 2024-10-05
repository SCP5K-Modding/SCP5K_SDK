// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameUtilities/Public/ServerConfigSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerConfigSubsystem() {}
// Cross Module References
	GAMEUTILITIES_API UClass* Z_Construct_UClass_UServerConfigSubsystem_NoRegister();
	GAMEUTILITIES_API UClass* Z_Construct_UClass_UServerConfigSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_GameUtilities();
// End Cross Module References
	void UServerConfigSubsystem::StaticRegisterNativesUServerConfigSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UServerConfigSubsystem_NoRegister()
	{
		return UServerConfigSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UServerConfigSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerConfigSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GameUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerConfigSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ServerConfigSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ServerConfigSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerConfigSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerConfigSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerConfigSubsystem_Statics::ClassParams = {
		&UServerConfigSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UServerConfigSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerConfigSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerConfigSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerConfigSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerConfigSubsystem, 2601170975);
	template<> GAMEUTILITIES_API UClass* StaticClass<UServerConfigSubsystem>()
	{
		return UServerConfigSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerConfigSubsystem(Z_Construct_UClass_UServerConfigSubsystem, &UServerConfigSubsystem::StaticClass, TEXT("/Script/GameUtilities"), TEXT("UServerConfigSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerConfigSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
