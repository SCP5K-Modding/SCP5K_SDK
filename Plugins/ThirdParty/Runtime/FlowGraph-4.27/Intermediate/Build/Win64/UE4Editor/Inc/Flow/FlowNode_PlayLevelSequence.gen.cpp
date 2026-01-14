// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/Nodes/World/FlowNode_PlayLevelSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowNode_PlayLevelSequence() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_PlayLevelSequence_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode_PlayLevelSequence();
	FLOW_API UClass* Z_Construct_UClass_UFlowNode();
	UPackage* Z_Construct_UPackage__Script_Flow();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings();
	FLOW_API UClass* Z_Construct_UClass_UFlowLevelSequencePlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFlowNode_PlayLevelSequence::execOnPlaybackFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlaybackFinished();
		P_NATIVE_END;
	}
	void UFlowNode_PlayLevelSequence::StaticRegisterNativesUFlowNode_PlayLevelSequence()
	{
		UClass* Class = UFlowNode_PlayLevelSequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlaybackFinished", &UFlowNode_PlayLevelSequence::execOnPlaybackFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlowNode_PlayLevelSequence_OnPlaybackFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlowNode_PlayLevelSequence_OnPlaybackFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowNode_PlayLevelSequence_OnPlaybackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowNode_PlayLevelSequence, nullptr, "OnPlaybackFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlowNode_PlayLevelSequence_OnPlaybackFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowNode_PlayLevelSequence_OnPlaybackFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlowNode_PlayLevelSequence_OnPlaybackFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlowNode_PlayLevelSequence_OnPlaybackFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlowNode_PlayLevelSequence_NoRegister()
	{
		return UFlowNode_PlayLevelSequence::StaticClass();
	}
	struct Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayReverse_MetaData[];
#endif
		static void NewProp_bPlayReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGraphOwnerAsTransformOrigin_MetaData[];
#endif
		static void NewProp_bUseGraphOwnerAsTransformOrigin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGraphOwnerAsTransformOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicates_MetaData[];
#endif
		static void NewProp_bReplicates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRelevant_MetaData[];
#endif
		static void NewProp_bAlwaysRelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRelevant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyOwnerTimeDilation_MetaData[];
#endif
		static void NewProp_bApplyOwnerTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyOwnerTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlowNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowNode_PlayLevelSequence_OnPlaybackFinished, "OnPlaybackFinished" }, // 629366402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Order of triggering outputs after calling Start\n * - PreStart, just before starting playback\n * - Started\n * - Out (always, even if Sequence is invalid)\n * - Completed\n */" },
		{ "DisplayName", "Play Level Sequence" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Nodes/World/FlowNode_PlayLevelSequence.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
		{ "ToolTip", "Order of triggering outputs after calling Start\n- PreStart, just before starting playback\n- Started\n- Out (always, even if Sequence is invalid)\n- Completed" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_PlayLevelSequence, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_PlayLevelSequence, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_PlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_PlaybackSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bPlayReverse_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bPlayReverse_SetBit(void* Obj)
	{
		((UFlowNode_PlayLevelSequence*)Obj)->bPlayReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bPlayReverse = { "bPlayReverse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_PlayLevelSequence), &Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bPlayReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bPlayReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bPlayReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_PlayLevelSequence, CameraSettings), Z_Construct_UScriptStruct_FLevelSequenceCameraSettings, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_CameraSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bUseGraphOwnerAsTransformOrigin_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "// Level Sequence playback can be moved to any place in the world by applying Transform Origin\n// Enabling this option will use actor that created Root Flow instance, i.e. World Settings or Player Controller\n// https://docs.unrealengine.com/5.0/en-US/creating-level-sequences-with-dynamic-transforms-in-unreal-engine/\n" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
		{ "ToolTip", "Level Sequence playback can be moved to any place in the world by applying Transform Origin\nEnabling this option will use actor that created Root Flow instance, i.e. World Settings or Player Controller\nhttps:docs.unrealengine.com/5.0/en-US/creating-level-sequences-with-dynamic-transforms-in-unreal-engine/" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bUseGraphOwnerAsTransformOrigin_SetBit(void* Obj)
	{
		((UFlowNode_PlayLevelSequence*)Obj)->bUseGraphOwnerAsTransformOrigin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bUseGraphOwnerAsTransformOrigin = { "bUseGraphOwnerAsTransformOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_PlayLevelSequence), &Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bUseGraphOwnerAsTransformOrigin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bUseGraphOwnerAsTransformOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bUseGraphOwnerAsTransformOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bReplicates_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "// If true, playback of this level sequence on the server will be synchronized across other clients\n" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
		{ "ToolTip", "If true, playback of this level sequence on the server will be synchronized across other clients" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bReplicates_SetBit(void* Obj)
	{
		((UFlowNode_PlayLevelSequence*)Obj)->bReplicates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bReplicates = { "bReplicates", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_PlayLevelSequence), &Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bReplicates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bReplicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bReplicates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bAlwaysRelevant_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "// Always relevant for network (overrides bOnlyRelevantToOwner)\n" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
		{ "ToolTip", "Always relevant for network (overrides bOnlyRelevantToOwner)" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bAlwaysRelevant_SetBit(void* Obj)
	{
		((UFlowNode_PlayLevelSequence*)Obj)->bAlwaysRelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bAlwaysRelevant = { "bAlwaysRelevant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_PlayLevelSequence), &Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bAlwaysRelevant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bAlwaysRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bAlwaysRelevant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bApplyOwnerTimeDilation_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "// If True, Play Rate will by multiplied by Custom Time Dilation\n// Enabling this option will use Custom Time Dilation from actor that created Root Flow instance, i.e. World Settings or Player Controller\n" },
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
		{ "ToolTip", "If True, Play Rate will by multiplied by Custom Time Dilation\nEnabling this option will use Custom Time Dilation from actor that created Root Flow instance, i.e. World Settings or Player Controller" },
	};
#endif
	void Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bApplyOwnerTimeDilation_SetBit(void* Obj)
	{
		((UFlowNode_PlayLevelSequence*)Obj)->bApplyOwnerTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bApplyOwnerTimeDilation = { "bApplyOwnerTimeDilation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFlowNode_PlayLevelSequence), &Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bApplyOwnerTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bApplyOwnerTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bApplyOwnerTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_LoadedSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_LoadedSequence = { "LoadedSequence", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_PlayLevelSequence, LoadedSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_LoadedSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_LoadedSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_PlayLevelSequence, SequencePlayer), Z_Construct_UClass_UFlowLevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_PlayLevelSequence, StartTime), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_PlayLevelSequence, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_TimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Nodes/World/FlowNode_PlayLevelSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlowNode_PlayLevelSequence, TimeDilation), METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_TimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_TimeDilation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_PlaybackSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bPlayReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_CameraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bUseGraphOwnerAsTransformOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bReplicates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bAlwaysRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_bApplyOwnerTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_LoadedSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_SequencePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::NewProp_TimeDilation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowNode_PlayLevelSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::ClassParams = {
		&UFlowNode_PlayLevelSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlowNode_PlayLevelSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlowNode_PlayLevelSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlowNode_PlayLevelSequence, 3642513113);
	template<> FLOW_API UClass* StaticClass<UFlowNode_PlayLevelSequence>()
	{
		return UFlowNode_PlayLevelSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlowNode_PlayLevelSequence(Z_Construct_UClass_UFlowNode_PlayLevelSequence, &UFlowNode_PlayLevelSequence::StaticClass, TEXT("/Script/Flow"), TEXT("UFlowNode_PlayLevelSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowNode_PlayLevelSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
