// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flow/Public/LevelSequence/FlowLevelSequenceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowLevelSequenceActor() {}
// Cross Module References
	FLOW_API UClass* Z_Construct_UClass_AFlowLevelSequenceActor_NoRegister();
	FLOW_API UClass* Z_Construct_UClass_AFlowLevelSequenceActor();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor();
	UPackage* Z_Construct_UPackage__Script_Flow();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	DEFINE_FUNCTION(AFlowLevelSequenceActor::execOnRep_ReplicatedLevelSequenceAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedLevelSequenceAsset();
		P_NATIVE_END;
	}
	void AFlowLevelSequenceActor::StaticRegisterNativesAFlowLevelSequenceActor()
	{
		UClass* Class = AFlowLevelSequenceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedLevelSequenceAsset", &AFlowLevelSequenceActor::execOnRep_ReplicatedLevelSequenceAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlowLevelSequenceActor_OnRep_ReplicatedLevelSequenceAsset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlowLevelSequenceActor_OnRep_ReplicatedLevelSequenceAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequence/FlowLevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlowLevelSequenceActor_OnRep_ReplicatedLevelSequenceAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlowLevelSequenceActor, nullptr, "OnRep_ReplicatedLevelSequenceAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlowLevelSequenceActor_OnRep_ReplicatedLevelSequenceAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlowLevelSequenceActor_OnRep_ReplicatedLevelSequenceAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlowLevelSequenceActor_OnRep_ReplicatedLevelSequenceAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlowLevelSequenceActor_OnRep_ReplicatedLevelSequenceAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlowLevelSequenceActor_NoRegister()
	{
		return AFlowLevelSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_AFlowLevelSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedLevelSequenceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedLevelSequenceAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlowLevelSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelSequenceActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Flow,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlowLevelSequenceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlowLevelSequenceActor_OnRep_ReplicatedLevelSequenceAsset, "OnRep_ReplicatedLevelSequenceAsset" }, // 3637216340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowLevelSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom ALevelSequenceActor is needed to override ULevelSequencePlayer class\n */" },
		{ "HideCategories", "Rendering Physics LOD Activation Input Rendering Physics LOD Activation Input" },
		{ "IncludePath", "LevelSequence/FlowLevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequence/FlowLevelSequenceActor.h" },
		{ "ToolTip", "Custom ALevelSequenceActor is needed to override ULevelSequencePlayer class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlowLevelSequenceActor_Statics::NewProp_ReplicatedLevelSequenceAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence/FlowLevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlowLevelSequenceActor_Statics::NewProp_ReplicatedLevelSequenceAsset = { "ReplicatedLevelSequenceAsset", "OnRep_ReplicatedLevelSequenceAsset", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFlowLevelSequenceActor, ReplicatedLevelSequenceAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_AFlowLevelSequenceActor_Statics::NewProp_ReplicatedLevelSequenceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowLevelSequenceActor_Statics::NewProp_ReplicatedLevelSequenceAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlowLevelSequenceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlowLevelSequenceActor_Statics::NewProp_ReplicatedLevelSequenceAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlowLevelSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlowLevelSequenceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlowLevelSequenceActor_Statics::ClassParams = {
		&AFlowLevelSequenceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlowLevelSequenceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlowLevelSequenceActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFlowLevelSequenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlowLevelSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlowLevelSequenceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlowLevelSequenceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlowLevelSequenceActor, 3353873002);
	template<> FLOW_API UClass* StaticClass<AFlowLevelSequenceActor>()
	{
		return AFlowLevelSequenceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlowLevelSequenceActor(Z_Construct_UClass_AFlowLevelSequenceActor, &AFlowLevelSequenceActor::StaticClass, TEXT("/Script/Flow"), TEXT("AFlowLevelSequenceActor"), false, nullptr, nullptr, nullptr);

	void AFlowLevelSequenceActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedLevelSequenceAsset(TEXT("ReplicatedLevelSequenceAsset"));

		const bool bIsValid = true
			&& Name_ReplicatedLevelSequenceAsset == ClassReps[(int32)ENetFields_Private::ReplicatedLevelSequenceAsset].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AFlowLevelSequenceActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlowLevelSequenceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
