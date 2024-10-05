// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAICoverGenerationSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAICoverGenerationSubsystem() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_USAICoverGenerationSubsystem_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_USAICoverGenerationSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_AISentience();
// End Cross Module References
	DEFINE_FUNCTION(USAICoverGenerationSubsystem::execQueueTilesForCoverRegeneration)
	{
		P_GET_TSET_REF(int32,Z_Param_Out_TileIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueueTilesForCoverRegeneration(Z_Param_Out_TileIndices);
		P_NATIVE_END;
	}
	void USAICoverGenerationSubsystem::StaticRegisterNativesUSAICoverGenerationSubsystem()
	{
		UClass* Class = USAICoverGenerationSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QueueTilesForCoverRegeneration", &USAICoverGenerationSubsystem::execQueueTilesForCoverRegeneration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics
	{
		struct SAICoverGenerationSubsystem_eventQueueTilesForCoverRegeneration_Parms
		{
			TSet<int32> TileIndices;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileIndices_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TileIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::NewProp_TileIndices_ElementProp = { "TileIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::NewProp_TileIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::NewProp_TileIndices = { "TileIndices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAICoverGenerationSubsystem_eventQueueTilesForCoverRegeneration_Parms, TileIndices), METADATA_PARAMS(Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::NewProp_TileIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::NewProp_TileIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::NewProp_TileIndices_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::NewProp_TileIndices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAICoverGenerationSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAICoverGenerationSubsystem, nullptr, "QueueTilesForCoverRegeneration", nullptr, nullptr, sizeof(SAICoverGenerationSubsystem_eventQueueTilesForCoverRegeneration_Parms), Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USAICoverGenerationSubsystem_NoRegister()
	{
		return USAICoverGenerationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USAICoverGenerationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAICoverGenerationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAICoverGenerationSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAICoverGenerationSubsystem_QueueTilesForCoverRegeneration, "QueueTilesForCoverRegeneration" }, // 1699523845
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAICoverGenerationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAICoverGenerationSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAICoverGenerationSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAICoverGenerationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAICoverGenerationSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USAICoverGenerationSubsystem_Statics::ClassParams = {
		&USAICoverGenerationSubsystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAICoverGenerationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAICoverGenerationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAICoverGenerationSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USAICoverGenerationSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USAICoverGenerationSubsystem, 1324241498);
	template<> AISENTIENCE_API UClass* StaticClass<USAICoverGenerationSubsystem>()
	{
		return USAICoverGenerationSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USAICoverGenerationSubsystem(Z_Construct_UClass_USAICoverGenerationSubsystem, &USAICoverGenerationSubsystem::StaticClass, TEXT("/Script/AISentience"), TEXT("USAICoverGenerationSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAICoverGenerationSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
