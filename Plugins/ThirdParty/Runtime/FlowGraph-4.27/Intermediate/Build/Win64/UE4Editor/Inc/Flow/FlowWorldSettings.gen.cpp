// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/FlowWorldSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowWorldSettings() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_AFlowWorldSettings_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_AFlowWorldSettings();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UClass* Z_Construct_UClass_UFlowComponent_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowAsset_NoRegister();
// End Cross Module References
	void AFlowWorldSettings::StaticRegisterNativesAFlowWorldSettings()
	{
	}
	UClass* Z_Construct_UClass_AFlowWorldSettings_NoRegister()
	{
		return AFlowWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_AFlowWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlowWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World Settings used to start a Flow for this world\n */" },
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Utilities|Transformation" },
		{ "IncludePath", "FlowWorldSettings.h" },
		{ "ModuleRelativePath", "Public/FlowWorldSettings.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "World Settings used to start a Flow for this world" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Flow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlowWorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowComponent = { "FlowComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowWorldSettings, FlowComponent), Z_Construct_UClass_UFlowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlowWorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowAsset = { "FlowAsset", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowWorldSettings, FlowAsset_DEPRECATED), Z_Construct_UClass_UFlowAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlowWorldSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowWorldSettings_Statics::NewProp_FlowAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlowWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlowWorldSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlowWorldSettings_Statics::ClassParams = {
		&AFlowWorldSettings::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlowWorldSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlowWorldSettings_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlowWorldSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlowWorldSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlowWorldSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlowWorldSettings, 2153794336);
	template<> FLOW_API UClass* StaticClass<AFlowWorldSettings>()
	{
		return AFlowWorldSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlowWorldSettings(Z_Construct_UClass_AFlowWorldSettings, &AFlowWorldSettings::StaticClass, TEXT("/Script/Flow"), TEXT("AFlowWorldSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlowWorldSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
