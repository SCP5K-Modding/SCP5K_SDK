// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/World/FlowNode_OnNotifyFromActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_OnNotifyFromActor() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_OnNotifyFromActor_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_OnNotifyFromActor();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_ComponentObserver();
	UPackage* Z_Construct_UPackage__Script_Flow();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UFlowNode_OnNotifyFromActor::StaticRegisterNativesUFlowNode_OnNotifyFromActor()
	{
	}
	UClass* Z_Construct_UClass_UFlowNode_OnNotifyFromActor_NoRegister()
	{
		return UFlowNode_OnNotifyFromActor::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRetroactive_MetaData[];
#endif
		static void NewProp_bRetroactive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRetroactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotifyTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode_ComponentObserver,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers output when Flow Component with matching Identity Tag calls NotifyGraph function with matching Notify Tag\n */" },
		{ "DisplayName", "On Notify From Actor" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/World/FlowNode_OnNotifyFromActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_OnNotifyFromActor.h" },
		{ "ToolTip", "Triggers output when Flow Component with matching Identity Tag calls NotifyGraph function with matching Notify Tag" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTags_MetaData[] = {
		{ "Category", "Notify" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_OnNotifyFromActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTags = { "NotifyTags", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_OnNotifyFromActor, NotifyTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_bRetroactive_MetaData[] = {
		{ "Category", "Notify" },
		{ "Comment", "// If true, node will check given Notify Tag is present in the Recently Sent Notify Tags\n// This might be helpful in multiplayer, if client-side Flow Node started work after server sent the notify\n" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_OnNotifyFromActor.h" },
		{ "ToolTip", "If true, node will check given Notify Tag is present in the Recently Sent Notify Tags\nThis might be helpful in multiplayer, if client-side Flow Node started work after server sent the notify" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_bRetroactive_SetBit(void* Obj)
	{
		((UFlowNode_OnNotifyFromActor*)Obj)->bRetroactive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_bRetroactive = { "bRetroactive", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_OnNotifyFromActor), &Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_bRetroactive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_bRetroactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_bRetroactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_OnNotifyFromActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTag = { "NotifyTag", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_OnNotifyFromActor, NotifyTag_DEPRECATED), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_bRetroactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::NewProp_NotifyTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_OnNotifyFromActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::ClassParams = {
		&UFlowNode_OnNotifyFromActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_OnNotifyFromActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_OnNotifyFromActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_OnNotifyFromActor, 4281234490);
	template<> FLOW_API UClass* StaticClass<UFlowNode_OnNotifyFromActor>()
	{
		return UFlowNode_OnNotifyFromActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_OnNotifyFromActor(Z_Construct_UClass_UFlowNode_OnNotifyFromActor, &UFlowNode_OnNotifyFromActor::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_OnNotifyFromActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_OnNotifyFromActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
