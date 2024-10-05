// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/BTService_LockTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_LockTarget() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTService_LockTarget_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_UBTService_LockTarget();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	void UBTService_LockTarget::StaticRegisterNativesUBTService_LockTarget()
	{
	}
	UClass* Z_Construct_UClass_UBTService_LockTarget_NoRegister()
	{
		return UBTService_LockTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_LockTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_LockTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_LockTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTService_LockTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTService_LockTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_LockTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_LockTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_LockTarget_Statics::ClassParams = {
		&UBTService_LockTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_LockTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_LockTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_LockTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_LockTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_LockTarget, 445987756);
	template<> AISENTIENCE_API UClass* StaticClass<UBTService_LockTarget>()
	{
		return UBTService_LockTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_LockTarget(Z_Construct_UClass_UBTService_LockTarget, &UBTService_LockTarget::StaticClass, TEXT("/Script/AISentience"), TEXT("UBTService_LockTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_LockTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
