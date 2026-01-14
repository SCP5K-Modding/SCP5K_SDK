// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/World/FlowNode_NotifyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_NotifyActor() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_NotifyActor_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_NotifyActor();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	FLOW_API UEnum* Z_Construct_UEnum_Flow_EFlowNetMode();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UFlowNode_NotifyActor::StaticRegisterNativesUFlowNode_NotifyActor()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_NotifyActor_NoRegister()
	{
		return UFlowNode_NotifyActor::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_NotifyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentityTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IdentityTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyTags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NetMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentityTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IdentityTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_NotifyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_NotifyActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Finds all Flow Components with matching Identity Tag and calls ReceiveNotify event on these components\n */" },
		{ "DisplayName", "Notify Actor" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/World/FlowNode_NotifyActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_NotifyActor.h" },
		{ "ToolTip", "Finds all Flow Components with matching Identity Tag and calls ReceiveNotify event on these components" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTags_MetaData[] = {
		{ "Category", "Notify" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_NotifyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTags = { "IdentityTags", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_NotifyActor, IdentityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTags_MetaData[] = {
		{ "Category", "Notify" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_NotifyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTags = { "NotifyTags", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_NotifyActor, NotifyTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NetMode_MetaData[] = {
		{ "Category", "Notify" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_NotifyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NetMode = { "NetMode", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_NotifyActor, NetMode), Z_Construct_UEnum_Flow_EFlowNetMode, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NetMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_NotifyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTag = { "IdentityTag", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_NotifyActor, IdentityTag_DEPRECATED), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_NotifyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTag = { "NotifyTag", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_NotifyActor, NotifyTag_DEPRECATED), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_NotifyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NetMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_IdentityTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_NotifyActor_Statics::NewProp_NotifyTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_NotifyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_NotifyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_NotifyActor_Statics::ClassParams = {
		&UFlowNode_NotifyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_NotifyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_NotifyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_NotifyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_NotifyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_NotifyActor, 1975008808);
	template<> FLOW_API UClass* StaticClass<UFlowNode_NotifyActor>()
	{
		return UFlowNode_NotifyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_NotifyActor(Z_Construct_UClass_UFlowNode_NotifyActor, &UFlowNode_NotifyActor::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_NotifyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_NotifyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
