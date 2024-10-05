// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIUtils/Public/TMTask_LocationalRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTMTask_LocationalRequirement() {}
// Cross Module References
	AIUTILS_API UClass* Z_Construct_UClass_UTMTask_LocationalRequirement_NoRegister();
	AIUTILS_API UClass* Z_Construct_UClass_UTMTask_LocationalRequirement();
	AIUTILS_API UClass* Z_Construct_UClass_UTaskManagerTask();
	UPackage* Z_Construct_UPackage__Script_AIUtils();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UTMTask_LocationalRequirement::StaticRegisterNativesUTMTask_LocationalRequirement()
	{
	}
	UClass* Z_Construct_UClass_UTMTask_LocationalRequirement_NoRegister()
	{
		return UTMTask_LocationalRequirement::StaticClass();
	}
	struct Z_Construct_UClass_UTMTask_LocationalRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Blackboard_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blackboard_HasLocationalRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Blackboard_HasLocationalRequirement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationRequirement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationRequirement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTaskManagerTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AIUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TMTask_LocationalRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TMTask_LocationalRequirement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TMTask_LocationalRequirement" },
		{ "ModuleRelativePath", "Public/TMTask_LocationalRequirement.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_Location = { "Blackboard_Location", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTMTask_LocationalRequirement, Blackboard_Location), METADATA_PARAMS(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_HasLocationalRequirement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TMTask_LocationalRequirement" },
		{ "ModuleRelativePath", "Public/TMTask_LocationalRequirement.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_HasLocationalRequirement = { "Blackboard_HasLocationalRequirement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTMTask_LocationalRequirement, Blackboard_HasLocationalRequirement), METADATA_PARAMS(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_HasLocationalRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_HasLocationalRequirement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_LocationRequirement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TMTask_LocationalRequirement" },
		{ "ModuleRelativePath", "Public/TMTask_LocationalRequirement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_LocationRequirement = { "LocationRequirement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTMTask_LocationalRequirement, LocationRequirement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_LocationRequirement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_LocationRequirement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_Blackboard_HasLocationalRequirement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::NewProp_LocationRequirement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTMTask_LocationalRequirement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::ClassParams = {
		&UTMTask_LocationalRequirement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTMTask_LocationalRequirement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTMTask_LocationalRequirement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTMTask_LocationalRequirement, 3669457440);
	template<> AIUTILS_API UClass* StaticClass<UTMTask_LocationalRequirement>()
	{
		return UTMTask_LocationalRequirement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTMTask_LocationalRequirement(Z_Construct_UClass_UTMTask_LocationalRequirement, &UTMTask_LocationalRequirement::StaticClass, TEXT("/Script/AIUtils"), TEXT("UTMTask_LocationalRequirement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTMTask_LocationalRequirement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
