// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCoreGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreGameMode() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_ASteamCoreGameMode_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_ASteamCoreGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	void ASteamCoreGameMode::StaticRegisterNativesASteamCoreGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASteamCoreGameMode_NoRegister()
	{
		return ASteamCoreGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASteamCoreGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteamCoreGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamCoreGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SteamCoreGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamCoreGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteamCoreGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamCoreGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASteamCoreGameMode_Statics::ClassParams = {
		&ASteamCoreGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASteamCoreGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASteamCoreGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASteamCoreGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASteamCoreGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASteamCoreGameMode, 1303191140);
	template<> STEAMCORE_API UClass* StaticClass<ASteamCoreGameMode>()
	{
		return ASteamCoreGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASteamCoreGameMode(Z_Construct_UClass_ASteamCoreGameMode, &ASteamCoreGameMode::StaticClass, TEXT("/Script/SteamCore"), TEXT("ASteamCoreGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamCoreGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
