// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/FPSGripData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGripData() {}
// Cross Module References
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSGripData_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSGripData();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_UFPSAttachmentData();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	FPSCONTROLLER_API UClass* Z_Construct_UClass_AFPSItem_NoRegister();
// End Cross Module References
	void UFPSGripData::StaticRegisterNativesUFPSGripData()
	{
	}
	UClass* Z_Construct_UClass_UFPSGripData_NoRegister()
	{
		return UFPSGripData::StaticClass();
	}
	struct Z_Construct_UClass_UFPSGripData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoilMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecoilMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSTimeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ADSTimeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripPose;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomPoseOverrides_ValueProp;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_CustomPoseOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPoseOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CustomPoseOverrides;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSGripData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFPSAttachmentData,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGripData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FPSGripData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FPSGripData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGripData_Statics::NewProp_IdleMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGripData" },
		{ "ModuleRelativePath", "Public/FPSGripData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSGripData_Statics::NewProp_IdleMultiplier = { "IdleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSGripData, IdleMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSGripData_Statics::NewProp_IdleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGripData_Statics::NewProp_IdleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGripData_Statics::NewProp_RecoilMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGripData" },
		{ "ModuleRelativePath", "Public/FPSGripData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFPSGripData_Statics::NewProp_RecoilMultiplier = { "RecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSGripData, RecoilMultiplier), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFPSGripData_Statics::NewProp_RecoilMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGripData_Statics::NewProp_RecoilMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGripData_Statics::NewProp_ADSTimeMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGripData" },
		{ "ModuleRelativePath", "Public/FPSGripData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFPSGripData_Statics::NewProp_ADSTimeMultiplier = { "ADSTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSGripData, ADSTimeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFPSGripData_Statics::NewProp_ADSTimeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGripData_Statics::NewProp_ADSTimeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGripData_Statics::NewProp_GripPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGripData" },
		{ "ModuleRelativePath", "Public/FPSGripData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSGripData_Statics::NewProp_GripPose = { "GripPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSGripData, GripPose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFPSGripData_Statics::NewProp_GripPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGripData_Statics::NewProp_GripPose_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides_ValueProp = { "CustomPoseOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides_Key_KeyProp = { "CustomPoseOverrides_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFPSItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FPSGripData" },
		{ "ModuleRelativePath", "Public/FPSGripData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides = { "CustomPoseOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFPSGripData, CustomPoseOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSGripData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGripData_Statics::NewProp_IdleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGripData_Statics::NewProp_RecoilMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGripData_Statics::NewProp_ADSTimeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGripData_Statics::NewProp_GripPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGripData_Statics::NewProp_CustomPoseOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSGripData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSGripData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFPSGripData_Statics::ClassParams = {
		&UFPSGripData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFPSGripData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGripData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFPSGripData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGripData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFPSGripData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFPSGripData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFPSGripData, 535113539);
	template<> FPSCONTROLLER_API UClass* StaticClass<UFPSGripData>()
	{
		return UFPSGripData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFPSGripData(Z_Construct_UClass_UFPSGripData, &UFPSGripData::StaticClass, TEXT("/Script/FPSController"), TEXT("UFPSGripData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSGripData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
