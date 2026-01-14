// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/FlowSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowSettings() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowSettings_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Flow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_NoRegister();
// End Cross Module References
	void UFlowSettings::StaticRegisterNativesUFlowSettings()
	{
	}
	UClass* Z_Construct_UClass_UFlowSettings_NoRegister()
	{
		return UFlowSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFlowSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateFlowSubsystemOnClients_MetaData[];
#endif
		static void NewProp_bCreateFlowSubsystemOnClients_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateFlowSubsystemOnClients;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultPreloadDepth_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultPreloadDepth_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPreloadDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DefaultPreloadDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarnAboutMissingIdentityTags_MetaData[];
#endif
		static void NewProp_bWarnAboutMissingIdentityTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutMissingIdentityTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Flow" },
		{ "IncludePath", "FlowSettings.h" },
		{ "ModuleRelativePath", "Public/FlowSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowSettings_Statics::NewProp_bCreateFlowSubsystemOnClients_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Set if to False, if you don't want to create client-side Flow Graphs\n// And you don't access to the Flow Component registry on clients\n" },
		{ "ModuleRelativePath", "Public/FlowSettings.h" },
		{ "ToolTip", "Set if to False, if you don't want to create client-side Flow Graphs\nAnd you don't access to the Flow Component registry on clients" },
	};
#endif
	void Z_Construct_UClass_UFlowSettings_Statics::NewProp_bCreateFlowSubsystemOnClients_SetBit(void* Obj)
	{
		((UFlowSettings*)Obj)->bCreateFlowSubsystemOnClients = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowSettings_Statics::NewProp_bCreateFlowSubsystemOnClients = { "bCreateFlowSubsystemOnClients", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowSettings), &Z_Construct_UClass_UFlowSettings_Statics::NewProp_bCreateFlowSubsystemOnClients_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowSettings_Statics::NewProp_bCreateFlowSubsystemOnClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSettings_Statics::NewProp_bCreateFlowSubsystemOnClients_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth_ValueProp = { "DefaultPreloadDepth", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth_Key_KeyProp = { "DefaultPreloadDepth_Key", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFlowNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth_MetaData[] = {
		{ "Category", "Preload" },
		{ "Comment", "// How many nodes of given class should be preloaded with the Flow Asset instance?\n" },
		{ "ModuleRelativePath", "Public/FlowSettings.h" },
		{ "ToolTip", "How many nodes of given class should be preloaded with the Flow Asset instance?" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth = { "DefaultPreloadDepth", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowSettings, DefaultPreloadDepth), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowSettings_Statics::NewProp_bWarnAboutMissingIdentityTags_MetaData[] = {
		{ "Category", "SaveSystem" },
		{ "ModuleRelativePath", "Public/FlowSettings.h" },
	};
#endif
	void Z_Construct_UClass_UFlowSettings_Statics::NewProp_bWarnAboutMissingIdentityTags_SetBit(void* Obj)
	{
		((UFlowSettings*)Obj)->bWarnAboutMissingIdentityTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowSettings_Statics::NewProp_bWarnAboutMissingIdentityTags = { "bWarnAboutMissingIdentityTags", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowSettings), &Z_Construct_UClass_UFlowSettings_Statics::NewProp_bWarnAboutMissingIdentityTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowSettings_Statics::NewProp_bWarnAboutMissingIdentityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSettings_Statics::NewProp_bWarnAboutMissingIdentityTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSettings_Statics::NewProp_bCreateFlowSubsystemOnClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSettings_Statics::NewProp_DefaultPreloadDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowSettings_Statics::NewProp_bWarnAboutMissingIdentityTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowSettings_Statics::ClassParams = {
		&UFlowSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowSettings, 2407231932);
	template<> FLOW_API UClass* StaticClass<UFlowSettings>()
	{
		return UFlowSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowSettings(Z_Construct_UClass_UFlowSettings, &UFlowSettings::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
