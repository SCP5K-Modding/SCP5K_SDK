// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/LevelSequence/FlowLevelSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowLevelSequencePlayer() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowLevelSequencePlayer_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowLevelSequencePlayer();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer();
	UPackage* Z_Construct_UPackage__Script_Flow();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_NoRegister();
// End Cross Module References
	void UFlowLevelSequencePlayer::StaticRegisterNativesUFlowLevelSequencePlayer()
	{
	}
	UClass* Z_Construct_UClass_UFlowLevelSequencePlayer_NoRegister()
	{
		return UFlowLevelSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UFlowLevelSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowEventReceiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlowEventReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSequencePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom ULevelSequencePlayer allows for binding Flow Nodes to Level Sequence events\n */" },
		{ "IncludePath", "LevelSequence/FlowLevelSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/LevelSequence/FlowLevelSequencePlayer.h" },
		{ "ToolTip", "Custom ULevelSequencePlayer allows for binding Flow Nodes to Level Sequence events" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::NewProp_FlowEventReceiver_MetaData[] = {
		{ "Comment", "// most likely this is a UFlowNode_PlayLevelSequence or its child\n" },
		{ "ModuleRelativePath", "Public/LevelSequence/FlowLevelSequencePlayer.h" },
		{ "ToolTip", "most likely this is a UFlowNode_PlayLevelSequence or its child" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::NewProp_FlowEventReceiver = { "FlowEventReceiver", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowLevelSequencePlayer, FlowEventReceiver), Z_Construct_UClass_UFlowNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::NewProp_FlowEventReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::NewProp_FlowEventReceiver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::NewProp_FlowEventReceiver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowLevelSequencePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::ClassParams = {
		&UFlowLevelSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowLevelSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowLevelSequencePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowLevelSequencePlayer, 2707944869);
	template<> FLOW_API UClass* StaticClass<UFlowLevelSequencePlayer>()
	{
		return UFlowLevelSequencePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowLevelSequencePlayer(Z_Construct_UClass_UFlowLevelSequencePlayer, &UFlowLevelSequencePlayer::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowLevelSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowLevelSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
