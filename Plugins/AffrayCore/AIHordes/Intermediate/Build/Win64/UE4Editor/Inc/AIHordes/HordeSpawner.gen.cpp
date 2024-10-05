// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIHordes/Public/HordeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeSpawner() {}
// Cross Module References
	AIHORDES_API UClass* Z_Construct_UClass_AHordeSpawner_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AIHordes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIHORDES_API UClass* Z_Construct_UClass_AHordeAgent_NoRegister();
	AIHORDES_API UClass* Z_Construct_UClass_AHorde_NoRegister();
	AIHORDES_API UScriptStruct* Z_Construct_UScriptStruct_FHordeAgentClass();
// End Cross Module References
	DEFINE_FUNCTION(AHordeSpawner::execCanSpawn)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSpawn_Implementation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeSpawner::execFindSpawnLocation)
	{
		P_GET_UBOOL_REF(Z_Param_Out_FoundSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindSpawnLocation_Implementation(Z_Param_Out_FoundSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeSpawner::execPickClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AHordeAgent> *)Z_Param__Result=P_THIS->PickClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeSpawner::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeSpawner::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Spawn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHordeSpawner::execSpawnAgent)
	{
		P_GET_OBJECT(AHorde,Z_Param_Horde);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SpawnAgent_Implementation(Z_Param_Horde);
		P_NATIVE_END;
	}
	static FName NAME_AHordeSpawner_CanSpawn = FName(TEXT("CanSpawn"));
	bool AHordeSpawner::CanSpawn(FVector Location)
	{
		HordeSpawner_eventCanSpawn_Parms Parms;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_AHordeSpawner_CanSpawn),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AHordeSpawner_FindSpawnLocation = FName(TEXT("FindSpawnLocation"));
	FVector AHordeSpawner::FindSpawnLocation(bool& FoundSpawn)
	{
		HordeSpawner_eventFindSpawnLocation_Parms Parms;
		Parms.FoundSpawn=FoundSpawn ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AHordeSpawner_FindSpawnLocation),&Parms);
		FoundSpawn=Parms.FoundSpawn;
		return Parms.ReturnValue;
	}
	static FName NAME_AHordeSpawner_PickClass = FName(TEXT("PickClass"));
	TSubclassOf<AHordeAgent>  AHordeSpawner::PickClass()
	{
		HordeSpawner_eventPickClass_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AHordeSpawner_PickClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHordeSpawner_Spawn = FName(TEXT("Spawn"));
	void AHordeSpawner::Spawn()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHordeSpawner_Spawn),NULL);
	}
	static FName NAME_AHordeSpawner_SpawnAgent = FName(TEXT("SpawnAgent"));
	bool AHordeSpawner::SpawnAgent(AHorde* Horde)
	{
		HordeSpawner_eventSpawnAgent_Parms Parms;
		Parms.Horde=Horde;
		ProcessEvent(FindFunctionChecked(NAME_AHordeSpawner_SpawnAgent),&Parms);
		return !!Parms.ReturnValue;
	}
	void AHordeSpawner::StaticRegisterNativesAHordeSpawner()
	{
		UClass* Class = AHordeSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSpawn", &AHordeSpawner::execCanSpawn },
			{ "FindSpawnLocation", &AHordeSpawner::execFindSpawnLocation },
			{ "PickClass", &AHordeSpawner::execPickClass },
			{ "Reset", &AHordeSpawner::execReset },
			{ "Spawn", &AHordeSpawner::execSpawn },
			{ "SpawnAgent", &AHordeSpawner::execSpawnAgent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeSpawner_eventCanSpawn_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HordeSpawner_eventCanSpawn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HordeSpawner_eventCanSpawn_Parms), &Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeSpawner, nullptr, "CanSpawn", nullptr, nullptr, sizeof(HordeSpawner_eventCanSpawn_Parms), Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeSpawner_CanSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeSpawner_CanSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics
	{
		static void NewProp_FoundSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FoundSpawn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::NewProp_FoundSpawn_SetBit(void* Obj)
	{
		((HordeSpawner_eventFindSpawnLocation_Parms*)Obj)->FoundSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::NewProp_FoundSpawn = { "FoundSpawn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HordeSpawner_eventFindSpawnLocation_Parms), &Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::NewProp_FoundSpawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeSpawner_eventFindSpawnLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::NewProp_FoundSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeSpawner, nullptr, "FindSpawnLocation", nullptr, nullptr, sizeof(HordeSpawner_eventFindSpawnLocation_Parms), Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeSpawner_PickClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeSpawner_eventPickClass_Parms, ReturnValue), Z_Construct_UClass_AHordeAgent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeSpawner, nullptr, "PickClass", nullptr, nullptr, sizeof(HordeSpawner_eventPickClass_Parms), Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeSpawner_PickClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeSpawner_PickClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeSpawner_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeSpawner_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeSpawner_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeSpawner, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeSpawner_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeSpawner_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeSpawner_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeSpawner_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeSpawner_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeSpawner_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeSpawner, nullptr, "Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeSpawner_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeSpawner_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeSpawner_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Horde;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::NewProp_Horde = { "Horde", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HordeSpawner_eventSpawnAgent_Parms, Horde), Z_Construct_UClass_AHorde_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HordeSpawner_eventSpawnAgent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HordeSpawner_eventSpawnAgent_Parms), &Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::NewProp_Horde,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHordeSpawner, nullptr, "SpawnAgent", nullptr, nullptr, sizeof(HordeSpawner_eventSpawnAgent_Parms), Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHordeSpawner_SpawnAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHordeSpawner_SpawnAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHordeSpawner_NoRegister()
	{
		return AHordeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AHordeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAttempts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnAttempts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HordeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HordeClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgentClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AgentClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHordeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIHordes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHordeSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHordeSpawner_CanSpawn, "CanSpawn" }, // 1737193980
		{ &Z_Construct_UFunction_AHordeSpawner_FindSpawnLocation, "FindSpawnLocation" }, // 2697147718
		{ &Z_Construct_UFunction_AHordeSpawner_PickClass, "PickClass" }, // 3858569272
		{ &Z_Construct_UFunction_AHordeSpawner_Reset, "Reset" }, // 1122517992
		{ &Z_Construct_UFunction_AHordeSpawner_Spawn, "Spawn" }, // 2070971095
		{ &Z_Construct_UFunction_AHordeSpawner_SpawnAgent, "SpawnAgent" }, // 1175179544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HordeSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAttempts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeSpawner" },
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAttempts = { "SpawnAttempts", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeSpawner, SpawnAttempts), METADATA_PARAMS(Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAttempts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAttempts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeSpawner" },
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAmount = { "SpawnAmount", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeSpawner, SpawnAmount), METADATA_PARAMS(Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeSpawner_Statics::NewProp_HordeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeSpawner" },
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHordeSpawner_Statics::NewProp_HordeClass = { "HordeClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeSpawner, HordeClass), Z_Construct_UClass_AHorde_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHordeSpawner_Statics::NewProp_HordeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawner_Statics::NewProp_HordeClass_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHordeSpawner_Statics::NewProp_AgentClasses_Inner = { "AgentClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHordeAgentClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHordeSpawner_Statics::NewProp_AgentClasses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HordeSpawner" },
		{ "ModuleRelativePath", "Public/HordeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHordeSpawner_Statics::NewProp_AgentClasses = { "AgentClasses", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHordeSpawner, AgentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHordeSpawner_Statics::NewProp_AgentClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawner_Statics::NewProp_AgentClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHordeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeSpawner_Statics::NewProp_SpawnAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeSpawner_Statics::NewProp_HordeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeSpawner_Statics::NewProp_AgentClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHordeSpawner_Statics::NewProp_AgentClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHordeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHordeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHordeSpawner_Statics::ClassParams = {
		&AHordeSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHordeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHordeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHordeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHordeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHordeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHordeSpawner, 1386292792);
	template<> AIHORDES_API UClass* StaticClass<AHordeSpawner>()
	{
		return AHordeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHordeSpawner(Z_Construct_UClass_AHordeSpawner, &AHordeSpawner::StaticClass, TEXT("/Script/AIHordes"), TEXT("AHordeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHordeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
