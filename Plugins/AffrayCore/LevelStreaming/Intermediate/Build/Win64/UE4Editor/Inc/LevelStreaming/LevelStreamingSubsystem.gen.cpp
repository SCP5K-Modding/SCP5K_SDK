// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelStreaming/Public/LevelStreamingSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingSubsystem() {}
// Cross Module References
	LEVELSTREAMING_API UClass* Z_Construct_UClass_ULevelStreamingSubsystem_NoRegister();
	LEVELSTREAMING_API UClass* Z_Construct_UClass_ULevelStreamingSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_LevelStreaming();
// End Cross Module References
	void ULevelStreamingSubsystem::StaticRegisterNativesULevelStreamingSubsystem()
	{
	}
	UClass* Z_Construct_UClass_ULevelStreamingSubsystem_NoRegister()
	{
		return ULevelStreamingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelStreaming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelStreamingSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelStreamingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingSubsystem_Statics::ClassParams = {
		&ULevelStreamingSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelStreamingSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelStreamingSubsystem, 790706932);
	template<> LEVELSTREAMING_API UClass* StaticClass<ULevelStreamingSubsystem>()
	{
		return ULevelStreamingSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingSubsystem(Z_Construct_UClass_ULevelStreamingSubsystem, &ULevelStreamingSubsystem::StaticClass, TEXT("/Script/LevelStreaming"), TEXT("ULevelStreamingSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
