// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/HordeSpawnerTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeSpawnerTrigger() {}
// Cross Module References
	AIHORDES_API UClass* Z_Construct_UClass_AHordeSpawnerTrigger_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeSpawnerTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeSpawner_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHordeSpawnerTrigger::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AHordeSpawnerTrigger::StaticRegisterNativesAHordeSpawnerTrigger()
	{
		UClass* Class = AHordeSpawnerTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AHordeSpawnerTrigger::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics
	{
		struct HordeSpawnerTrigger_eventOnBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeSpawnerTrigger_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeSpawnerTrigger_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeSpawnerTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeSpawnerTrigger, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(HordeSpawnerTrigger_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHordeSpawnerTrigger_NoRegister()
	{
		return AHordeSpawnerTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AHordeSpawnerTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawners;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHordeSpawnerTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHordeSpawnerTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHordeSpawnerTrigger_OnBeginOverlap, "OnBeginOverlap" }, // 711392886
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeSpawnerTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HordeSpawnerTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HordeSpawnerTrigger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHordeSpawnerTrigger_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHordeSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeSpawnerTrigger_Statics::NewProp_Spawners_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeSpawnerTrigger" },
		{ "ModuleRelativePath", "Public/HordeSpawnerTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHordeSpawnerTrigger_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeSpawnerTrigger, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHordeSpawnerTrigger_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawnerTrigger_Statics::NewProp_Spawners_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHordeSpawnerTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeSpawnerTrigger_Statics::NewProp_Spawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeSpawnerTrigger_Statics::NewProp_Spawners,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHordeSpawnerTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHordeSpawnerTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHordeSpawnerTrigger_Statics::ClassParams = {
		&AHordeSpawnerTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHordeSpawnerTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawnerTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHordeSpawnerTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawnerTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHordeSpawnerTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHordeSpawnerTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHordeSpawnerTrigger, 3612402956);
	template<> AIHORDES_API UClass* StaticClass<AHordeSpawnerTrigger>()
	{
		return AHordeSpawnerTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHordeSpawnerTrigger(Z_Construct_UClass_AHordeSpawnerTrigger, &AHordeSpawnerTrigger::StaticClass, TEXT("/Script/AIHordes"), TEXT("AHordeSpawnerTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHordeSpawnerTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
