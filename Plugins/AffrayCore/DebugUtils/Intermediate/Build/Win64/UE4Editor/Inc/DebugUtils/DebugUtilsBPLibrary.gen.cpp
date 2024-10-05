// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DebugUtils/Public/DebugUtilsBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugUtilsBPLibrary() {}
// Cross Module References
	DEBUGUTILS_API UClass* Z_Construct_UClass_UDebugUtilsBPLibrary_NoRegister();
	DEBUGUTILS_API UClass* Z_Construct_UClass_UDebugUtilsBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DebugUtils();
// End Cross Module References
	void UDebugUtilsBPLibrary::StaticRegisterNativesUDebugUtilsBPLibrary()
	{
	}
	UClass* Z_Construct_UClass_UDebugUtilsBPLibrary_NoRegister()
	{
		return UDebugUtilsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDebugUtilsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugUtilsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DebugUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugUtilsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DebugUtilsBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DebugUtilsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugUtilsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugUtilsBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDebugUtilsBPLibrary_Statics::ClassParams = {
		&UDebugUtilsBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugUtilsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugUtilsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugUtilsBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDebugUtilsBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDebugUtilsBPLibrary, 1054552518);
	template<> DEBUGUTILS_API UClass* StaticClass<UDebugUtilsBPLibrary>()
	{
		return UDebugUtilsBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebugUtilsBPLibrary(Z_Construct_UClass_UDebugUtilsBPLibrary, &UDebugUtilsBPLibrary::StaticClass, TEXT("/Script/DebugUtils"), TEXT("UDebugUtilsBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugUtilsBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
