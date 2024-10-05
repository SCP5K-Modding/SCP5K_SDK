// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMovement/Public/RootMotionMetaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionMetaData() {}
// Cross Module References
	ROOTMOVEMENT_API UClass* Z_Construct_UClass_URootMotionMetaData_NoRegister();
	ROOTMOVEMENT_API UClass* Z_Construct_UClass_URootMotionMetaData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
	UPackage* Z_Construct_UPackage__Script_RootMovement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void URootMotionMetaData::StaticRegisterNativesURootMotionMetaData()
	{
	}
	UClass* Z_Construct_UClass_URootMotionMetaData_NoRegister()
	{
		return URootMotionMetaData::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompletedFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartingOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimMetaData,
		(UObject* (*)())Z_Construct_UPackage__Script_RootMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionMetaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RootMotionMetaData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RootMotionMetaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_CompletedFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionMetaData" },
		{ "ModuleRelativePath", "Public/RootMotionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_CompletedFrame = { "CompletedFrame", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionMetaData, CompletedFrame), METADATA_PARAMS(Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_CompletedFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_CompletedFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_StartingOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionMetaData" },
		{ "ModuleRelativePath", "Public/RootMotionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_StartingOffset = { "StartingOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionMetaData, StartingOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_StartingOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_StartingOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_EndTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootMotionMetaData" },
		{ "ModuleRelativePath", "Public/RootMotionMetaData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_EndTransform = { "EndTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootMotionMetaData, EndTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_EndTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_EndTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_CompletedFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_StartingOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionMetaData_Statics::NewProp_EndTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionMetaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootMotionMetaData_Statics::ClassParams = {
		&URootMotionMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootMotionMetaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionMetaData_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionMetaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootMotionMetaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootMotionMetaData, 609169928);
	template<> ROOTMOVEMENT_API UClass* StaticClass<URootMotionMetaData>()
	{
		return URootMotionMetaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootMotionMetaData(Z_Construct_UClass_URootMotionMetaData, &URootMotionMetaData::StaticClass, TEXT("/Script/RootMovement"), TEXT("URootMotionMetaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionMetaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
