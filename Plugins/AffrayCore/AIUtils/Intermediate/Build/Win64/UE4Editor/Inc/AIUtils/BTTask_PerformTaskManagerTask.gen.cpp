// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIUtils/Public/BTTask_PerformTaskManagerTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PerformTaskManagerTask() {}
// Cross Module References
	AIUTILS_API UClass* Z_Construct_UClass_UBTTask_PerformTaskManagerTask_NoRegister();
	AIUTILS_API UClass* Z_Construct_UClass_UBTTask_PerformTaskManagerTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIUtils();
// End Cross Module References
	void UBTTask_PerformTaskManagerTask::StaticRegisterNativesUBTTask_PerformTaskManagerTask()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PerformTaskManagerTask_NoRegister()
	{
		return UBTTask_PerformTaskManagerTask::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PerformTaskManagerTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PerformTaskManagerTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PerformTaskManagerTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BTTask_PerformTaskManagerTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BTTask_PerformTaskManagerTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PerformTaskManagerTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PerformTaskManagerTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PerformTaskManagerTask_Statics::ClassParams = {
		&UBTTask_PerformTaskManagerTask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PerformTaskManagerTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformTaskManagerTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PerformTaskManagerTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PerformTaskManagerTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PerformTaskManagerTask, 914674882);
	template<> AIUTILS_API UClass* StaticClass<UBTTask_PerformTaskManagerTask>()
	{
		return UBTTask_PerformTaskManagerTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PerformTaskManagerTask(Z_Construct_UClass_UBTTask_PerformTaskManagerTask, &UBTTask_PerformTaskManagerTask::StaticClass, TEXT("/Script/AIUtils"), TEXT("UBTTask_PerformTaskManagerTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PerformTaskManagerTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
