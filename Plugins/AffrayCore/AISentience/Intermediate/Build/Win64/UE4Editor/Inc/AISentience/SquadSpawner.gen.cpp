// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SquadSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquadSpawner() {}
// Cross Module References
	AISENTIENCE_API UClass* Z_Construct_UClass_ASquadSpawner_NoRegister();
	AISENTIENCE_API UClass* Z_Construct_UClass_ASquadSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawn();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASquadSpawner::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn();
		P_NATIVE_END;
	}
	static FName NAME_ASquadSpawner_Blueprint_AfterSpawn = FName(TEXT("Blueprint_AfterSpawn"));
	void ASquadSpawner::Blueprint_AfterSpawn(FAISpawn AIStruct, ACharacter* SpawnedCharacter)
	{
		SquadSpawner_eventBlueprint_AfterSpawn_Parms Parms;
		Parms.AIStruct=AIStruct;
		Parms.SpawnedCharacter=SpawnedCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ASquadSpawner_Blueprint_AfterSpawn),&Parms);
	}
	static FName NAME_ASquadSpawner_Blueprint_SpawnSetup = FName(TEXT("Blueprint_SpawnSetup"));
	void ASquadSpawner::Blueprint_SpawnSetup(FAISpawn AIStruct, ACharacter* SpawnedCharacter)
	{
		SquadSpawner_eventBlueprint_SpawnSetup_Parms Parms;
		Parms.AIStruct=AIStruct;
		Parms.SpawnedCharacter=SpawnedCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ASquadSpawner_Blueprint_SpawnSetup),&Parms);
	}
	void ASquadSpawner::StaticRegisterNativesASquadSpawner()
	{
		UClass* Class = ASquadSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &ASquadSpawner::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIStruct;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::NewProp_AIStruct = { "AIStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquadSpawner_eventBlueprint_AfterSpawn_Parms, AIStruct), Z_Construct_UScriptStruct_FAISpawn, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::NewProp_SpawnedCharacter = { "SpawnedCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquadSpawner_eventBlueprint_AfterSpawn_Parms, SpawnedCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::NewProp_AIStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::NewProp_SpawnedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SquadSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquadSpawner, nullptr, "Blueprint_AfterSpawn", nullptr, nullptr, sizeof(SquadSpawner_eventBlueprint_AfterSpawn_Parms), Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIStruct;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::NewProp_AIStruct = { "AIStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquadSpawner_eventBlueprint_SpawnSetup_Parms, AIStruct), Z_Construct_UScriptStruct_FAISpawn, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::NewProp_SpawnedCharacter = { "SpawnedCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquadSpawner_eventBlueprint_SpawnSetup_Parms, SpawnedCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::NewProp_AIStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::NewProp_SpawnedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SquadSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquadSpawner, nullptr, "Blueprint_SpawnSetup", nullptr, nullptr, sizeof(SquadSpawner_eventBlueprint_SpawnSetup_Parms), Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASquadSpawner_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASquadSpawner_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SquadSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASquadSpawner_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASquadSpawner, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASquadSpawner_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASquadSpawner_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASquadSpawner_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASquadSpawner_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASquadSpawner_NoRegister()
	{
		return ASquadSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASquadSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnBeginplay_MetaData[];
#endif
		static void NewProp_bSpawnOnBeginplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnBeginplay;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIClassToSpawn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIClassToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIClassToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRadiusOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnRadiusOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASquadSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASquadSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASquadSpawner_Blueprint_AfterSpawn, "Blueprint_AfterSpawn" }, // 1701620616
		{ &Z_Construct_UFunction_ASquadSpawner_Blueprint_SpawnSetup, "Blueprint_SpawnSetup" }, // 3269520269
		{ &Z_Construct_UFunction_ASquadSpawner_Spawn, "Spawn" }, // 4243669685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquadSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SquadSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SquadSpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquadSpawner_Statics::NewProp_bSpawnOnBeginplay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SquadSpawner" },
		{ "ModuleRelativePath", "Public/SquadSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ASquadSpawner_Statics::NewProp_bSpawnOnBeginplay_SetBit(void* Obj)
	{
		((ASquadSpawner*)Obj)->bSpawnOnBeginplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASquadSpawner_Statics::NewProp_bSpawnOnBeginplay = { "bSpawnOnBeginplay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASquadSpawner), &Z_Construct_UClass_ASquadSpawner_Statics::NewProp_bSpawnOnBeginplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASquadSpawner_Statics::NewProp_bSpawnOnBeginplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquadSpawner_Statics::NewProp_bSpawnOnBeginplay_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASquadSpawner_Statics::NewProp_AIClassToSpawn_Inner = { "AIClassToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAISpawn, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquadSpawner_Statics::NewProp_AIClassToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SquadSpawner" },
		{ "ModuleRelativePath", "Public/SquadSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASquadSpawner_Statics::NewProp_AIClassToSpawn = { "AIClassToSpawn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASquadSpawner, AIClassToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASquadSpawner_Statics::NewProp_AIClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquadSpawner_Statics::NewProp_AIClassToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASquadSpawner_Statics::NewProp_SpawnRadiusOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SquadSpawner" },
		{ "ModuleRelativePath", "Public/SquadSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASquadSpawner_Statics::NewProp_SpawnRadiusOffset = { "SpawnRadiusOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASquadSpawner, SpawnRadiusOffset), METADATA_PARAMS(Z_Construct_UClass_ASquadSpawner_Statics::NewProp_SpawnRadiusOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASquadSpawner_Statics::NewProp_SpawnRadiusOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASquadSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquadSpawner_Statics::NewProp_bSpawnOnBeginplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquadSpawner_Statics::NewProp_AIClassToSpawn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquadSpawner_Statics::NewProp_AIClassToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASquadSpawner_Statics::NewProp_SpawnRadiusOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASquadSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASquadSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASquadSpawner_Statics::ClassParams = {
		&ASquadSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASquadSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASquadSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASquadSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASquadSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASquadSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASquadSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASquadSpawner, 168505455);
	template<> AISENTIENCE_API UClass* StaticClass<ASquadSpawner>()
	{
		return ASquadSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASquadSpawner(Z_Construct_UClass_ASquadSpawner, &ASquadSpawner::StaticClass, TEXT("/Script/AISentience"), TEXT("ASquadSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASquadSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
