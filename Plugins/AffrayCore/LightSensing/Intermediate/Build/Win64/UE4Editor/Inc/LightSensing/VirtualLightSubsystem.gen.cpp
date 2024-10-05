// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightSensing/Public/VirtualLightSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualLightSubsystem() {}
// Cross Module References
	LIGHTSENSING_API UClass* Z_Construct_UClass_UVirtualLightSubsystem_NoRegister();
	LIGHTSENSING_API UClass* Z_Construct_UClass_UVirtualLightSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_LightSensing();
// End Cross Module References
	void UVirtualLightSubsystem::StaticRegisterNativesUVirtualLightSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UVirtualLightSubsystem_NoRegister()
	{
		return UVirtualLightSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualLightSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualLightSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LightSensing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualLightSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VirtualLightSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualLightSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualLightSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualLightSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualLightSubsystem_Statics::ClassParams = {
		&UVirtualLightSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualLightSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualLightSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualLightSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualLightSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualLightSubsystem, 2865965683);
	template<> LIGHTSENSING_API UClass* StaticClass<UVirtualLightSubsystem>()
	{
		return UVirtualLightSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualLightSubsystem(Z_Construct_UClass_UVirtualLightSubsystem, &UVirtualLightSubsystem::StaticClass, TEXT("/Script/LightSensing"), TEXT("UVirtualLightSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualLightSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
