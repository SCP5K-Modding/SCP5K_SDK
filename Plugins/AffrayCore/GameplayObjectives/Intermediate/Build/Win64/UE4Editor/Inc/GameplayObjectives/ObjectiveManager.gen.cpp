// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayObjectives/Public/ObjectiveManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveManager() {}
// Cross Module References
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveManager_NoRegister();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_AObjectiveManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameplayObjectives();
	GAMEPLAYOBJECTIVES_API UClass* Z_Construct_UClass_UObjective_NoRegister();
	GAMEPLAYOBJECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleObjectiveData();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveModifiedDelegate__DelegateSignature();
	GAMEPLAYOBJECTIVES_API UFunction* Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveCompletedDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AObjectiveManager::execActivateObjective)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_GET_UBOOL(Z_Param_bStart);
		P_GET_UBOOL(Z_Param_bDisplayOnUI);
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateObjective(Z_Param_Objective,Z_Param_bStart,Z_Param_bDisplayOnUI,Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execActivateObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateObjectives_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execActivateObjectiveWithName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveName);
		P_GET_UBOOL(Z_Param_bStart);
		P_GET_UBOOL(Z_Param_bDisplayOnUI);
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObjective**)Z_Param__Result=P_THIS->ActivateObjectiveWithName(Z_Param_ObjectiveName,Z_Param_bStart,Z_Param_bDisplayOnUI,Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execActivateSimpleObjectives)
	{
		P_GET_TARRAY_REF(FSimpleObjectiveData,Z_Param_Out_InObjectives);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateSimpleObjectives(Z_Param_Out_InObjectives);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execAddCachedObjectiveName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ObjectiveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCachedObjectiveName(Z_Param_ObjectiveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execAddObjective)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjective(Z_Param_Objective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execDeactivateObjective)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateObjective(Z_Param_Objective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execDeactivateObjectiveWithName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObjective**)Z_Param__Result=P_THIS->DeactivateObjectiveWithName(Z_Param_ObjectiveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execGetActiveObjectiveNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetActiveObjectiveNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execGetNumActiveObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumActiveObjectives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execGetObjective)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObjective**)Z_Param__Result=P_THIS->GetObjective(Z_Param_ObjectiveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execGetObjectiveNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetObjectiveNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execHasActiveObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasActiveObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execInitializeObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeObjectives_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execRemoveObjective)
	{
		P_GET_OBJECT(UObjective,Z_Param_Objective);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjective(Z_Param_Objective);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execRemoveObjectiveWithName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjectiveWithName(Z_Param_ObjectiveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execSyncObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncObjectives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObjectiveManager::execUpdateCachedObjectiveNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCachedObjectiveNames();
		P_NATIVE_END;
	}
	static FName NAME_AObjectiveManager_ActivateObjectives = FName(TEXT("ActivateObjectives"));
	void AObjectiveManager::ActivateObjectives()
	{
		ProcessEvent(FindFunctionChecked(NAME_AObjectiveManager_ActivateObjectives),NULL);
	}
	static FName NAME_AObjectiveManager_InitializeObjectives = FName(TEXT("InitializeObjectives"));
	void AObjectiveManager::InitializeObjectives()
	{
		ProcessEvent(FindFunctionChecked(NAME_AObjectiveManager_InitializeObjectives),NULL);
	}
	void AObjectiveManager::StaticRegisterNativesAObjectiveManager()
	{
		UClass* Class = AObjectiveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateObjective", &AObjectiveManager::execActivateObjective },
			{ "ActivateObjectives", &AObjectiveManager::execActivateObjectives },
			{ "ActivateObjectiveWithName", &AObjectiveManager::execActivateObjectiveWithName },
			{ "ActivateSimpleObjectives", &AObjectiveManager::execActivateSimpleObjectives },
			{ "AddCachedObjectiveName", &AObjectiveManager::execAddCachedObjectiveName },
			{ "AddObjective", &AObjectiveManager::execAddObjective },
			{ "DeactivateObjective", &AObjectiveManager::execDeactivateObjective },
			{ "DeactivateObjectiveWithName", &AObjectiveManager::execDeactivateObjectiveWithName },
			{ "GetActiveObjectiveNames", &AObjectiveManager::execGetActiveObjectiveNames },
			{ "GetNumActiveObjectives", &AObjectiveManager::execGetNumActiveObjectives },
			{ "GetObjective", &AObjectiveManager::execGetObjective },
			{ "GetObjectiveNames", &AObjectiveManager::execGetObjectiveNames },
			{ "HasActiveObjective", &AObjectiveManager::execHasActiveObjective },
			{ "InitializeObjectives", &AObjectiveManager::execInitializeObjectives },
			{ "RemoveObjective", &AObjectiveManager::execRemoveObjective },
			{ "RemoveObjectiveWithName", &AObjectiveManager::execRemoveObjectiveWithName },
			{ "SyncObjectives", &AObjectiveManager::execSyncObjectives },
			{ "UpdateCachedObjectiveNames", &AObjectiveManager::execUpdateCachedObjectiveNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics
	{
		struct ObjectiveManager_eventActivateObjective_Parms
		{
			UObjective* Objective;
			bool bStart;
			bool bDisplayOnUI;
			bool bReset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static void NewProp_bStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStart;
		static void NewProp_bDisplayOnUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayOnUI;
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventActivateObjective_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bStart_SetBit(void* Obj)
	{
		((ObjectiveManager_eventActivateObjective_Parms*)Obj)->bStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveManager_eventActivateObjective_Parms), &Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bDisplayOnUI_SetBit(void* Obj)
	{
		((ObjectiveManager_eventActivateObjective_Parms*)Obj)->bDisplayOnUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bDisplayOnUI = { "bDisplayOnUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveManager_eventActivateObjective_Parms), &Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bDisplayOnUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((ObjectiveManager_eventActivateObjective_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveManager_eventActivateObjective_Parms), &Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_Objective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bDisplayOnUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "ActivateObjective", nullptr, nullptr, sizeof(ObjectiveManager_eventActivateObjective_Parms), Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_ActivateObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_ActivateObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_ActivateObjectives_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_ActivateObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_ActivateObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "ActivateObjectives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_ActivateObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_ActivateObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_ActivateObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_ActivateObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics
	{
		struct ObjectiveManager_eventActivateObjectiveWithName_Parms
		{
			FName ObjectiveName;
			bool bStart;
			bool bDisplayOnUI;
			bool bReset;
			UObjective* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveName;
		static void NewProp_bStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStart;
		static void NewProp_bDisplayOnUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayOnUI;
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_ObjectiveName = { "ObjectiveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventActivateObjectiveWithName_Parms, ObjectiveName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bStart_SetBit(void* Obj)
	{
		((ObjectiveManager_eventActivateObjectiveWithName_Parms*)Obj)->bStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bStart = { "bStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveManager_eventActivateObjectiveWithName_Parms), &Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bStart_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bDisplayOnUI_SetBit(void* Obj)
	{
		((ObjectiveManager_eventActivateObjectiveWithName_Parms*)Obj)->bDisplayOnUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bDisplayOnUI = { "bDisplayOnUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveManager_eventActivateObjectiveWithName_Parms), &Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bDisplayOnUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((ObjectiveManager_eventActivateObjectiveWithName_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveManager_eventActivateObjectiveWithName_Parms), &Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventActivateObjectiveWithName_Parms, ReturnValue), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_ObjectiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bDisplayOnUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_bReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "ActivateObjectiveWithName", nullptr, nullptr, sizeof(ObjectiveManager_eventActivateObjectiveWithName_Parms), Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics
	{
		struct ObjectiveManager_eventActivateSimpleObjectives_Parms
		{
			TArray<FSimpleObjectiveData> InObjectives;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InObjectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InObjectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InObjectives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::NewProp_InObjectives_Inner = { "InObjectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimpleObjectiveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::NewProp_InObjectives_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::NewProp_InObjectives = { "InObjectives", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventActivateSimpleObjectives_Parms, InObjectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::NewProp_InObjectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::NewProp_InObjectives_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::NewProp_InObjectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::NewProp_InObjectives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "ActivateSimpleObjectives", nullptr, nullptr, sizeof(ObjectiveManager_eventActivateSimpleObjectives_Parms), Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics
	{
		struct ObjectiveManager_eventAddCachedObjectiveName_Parms
		{
			FString ObjectiveName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectiveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::NewProp_ObjectiveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::NewProp_ObjectiveName = { "ObjectiveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventAddCachedObjectiveName_Parms, ObjectiveName), METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::NewProp_ObjectiveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::NewProp_ObjectiveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::NewProp_ObjectiveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "AddCachedObjectiveName", nullptr, nullptr, sizeof(ObjectiveManager_eventAddCachedObjectiveName_Parms), Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics
	{
		struct ObjectiveManager_eventAddObjective_Parms
		{
			UObjective* Objective;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventAddObjective_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "AddObjective", nullptr, nullptr, sizeof(ObjectiveManager_eventAddObjective_Parms), Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_AddObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_AddObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics
	{
		struct ObjectiveManager_eventDeactivateObjective_Parms
		{
			UObjective* Objective;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventDeactivateObjective_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "DeactivateObjective", nullptr, nullptr, sizeof(ObjectiveManager_eventDeactivateObjective_Parms), Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_DeactivateObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_DeactivateObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics
	{
		struct ObjectiveManager_eventDeactivateObjectiveWithName_Parms
		{
			FName ObjectiveName;
			UObjective* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::NewProp_ObjectiveName = { "ObjectiveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventDeactivateObjectiveWithName_Parms, ObjectiveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventDeactivateObjectiveWithName_Parms, ReturnValue), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::NewProp_ObjectiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "DeactivateObjectiveWithName", nullptr, nullptr, sizeof(ObjectiveManager_eventDeactivateObjectiveWithName_Parms), Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics
	{
		struct ObjectiveManager_eventGetActiveObjectiveNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventGetActiveObjectiveNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "GetActiveObjectiveNames", nullptr, nullptr, sizeof(ObjectiveManager_eventGetActiveObjectiveNames_Parms), Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics
	{
		struct ObjectiveManager_eventGetNumActiveObjectives_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventGetNumActiveObjectives_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "GetNumActiveObjectives", nullptr, nullptr, sizeof(ObjectiveManager_eventGetNumActiveObjectives_Parms), Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics
	{
		struct ObjectiveManager_eventGetObjective_Parms
		{
			FName ObjectiveName;
			UObjective* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::NewProp_ObjectiveName = { "ObjectiveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventGetObjective_Parms, ObjectiveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventGetObjective_Parms, ReturnValue), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::NewProp_ObjectiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "GetObjective", nullptr, nullptr, sizeof(ObjectiveManager_eventGetObjective_Parms), Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_GetObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_GetObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics
	{
		struct ObjectiveManager_eventGetObjectiveNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventGetObjectiveNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "GetObjectiveNames", nullptr, nullptr, sizeof(ObjectiveManager_eventGetObjectiveNames_Parms), Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics
	{
		struct ObjectiveManager_eventHasActiveObjective_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectiveManager_eventHasActiveObjective_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ObjectiveManager_eventHasActiveObjective_Parms), &Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "HasActiveObjective", nullptr, nullptr, sizeof(ObjectiveManager_eventHasActiveObjective_Parms), Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_HasActiveObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_HasActiveObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_InitializeObjectives_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_InitializeObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_InitializeObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "InitializeObjectives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_InitializeObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_InitializeObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_InitializeObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_InitializeObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics
	{
		struct ObjectiveManager_eventRemoveObjective_Parms
		{
			UObjective* Objective;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::NewProp_Objective = { "Objective", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventRemoveObjective_Parms, Objective), Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::NewProp_Objective,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "RemoveObjective", nullptr, nullptr, sizeof(ObjectiveManager_eventRemoveObjective_Parms), Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_RemoveObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_RemoveObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics
	{
		struct ObjectiveManager_eventRemoveObjectiveWithName_Parms
		{
			FName ObjectiveName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectiveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::NewProp_ObjectiveName = { "ObjectiveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ObjectiveManager_eventRemoveObjectiveWithName_Parms, ObjectiveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::NewProp_ObjectiveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "RemoveObjectiveWithName", nullptr, nullptr, sizeof(ObjectiveManager_eventRemoveObjectiveWithName_Parms), Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_SyncObjectives_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_SyncObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_SyncObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "SyncObjectives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_SyncObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_SyncObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_SyncObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_SyncObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObjectiveManager_UpdateCachedObjectiveNames_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObjectiveManager_UpdateCachedObjectiveNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObjectiveManager_UpdateCachedObjectiveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObjectiveManager, nullptr, "UpdateCachedObjectiveNames", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObjectiveManager_UpdateCachedObjectiveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObjectiveManager_UpdateCachedObjectiveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObjectiveManager_UpdateCachedObjectiveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObjectiveManager_UpdateCachedObjectiveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObjectiveManager_NoRegister()
	{
		return AObjectiveManager::StaticClass();
	}
	struct Z_Construct_UClass_AObjectiveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnActivateObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivateObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDeactivateObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeactivateObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleteObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleteObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasActivatedObjectives_MetaData[];
#endif
		static void NewProp_bHasActivatedObjectives_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasActivatedObjectives;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectiveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayObjectives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObjectiveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObjectiveManager_ActivateObjective, "ActivateObjective" }, // 2767819546
		{ &Z_Construct_UFunction_AObjectiveManager_ActivateObjectives, "ActivateObjectives" }, // 518634278
		{ &Z_Construct_UFunction_AObjectiveManager_ActivateObjectiveWithName, "ActivateObjectiveWithName" }, // 4152249225
		{ &Z_Construct_UFunction_AObjectiveManager_ActivateSimpleObjectives, "ActivateSimpleObjectives" }, // 943903058
		{ &Z_Construct_UFunction_AObjectiveManager_AddCachedObjectiveName, "AddCachedObjectiveName" }, // 2810476321
		{ &Z_Construct_UFunction_AObjectiveManager_AddObjective, "AddObjective" }, // 2358307493
		{ &Z_Construct_UFunction_AObjectiveManager_DeactivateObjective, "DeactivateObjective" }, // 3356904954
		{ &Z_Construct_UFunction_AObjectiveManager_DeactivateObjectiveWithName, "DeactivateObjectiveWithName" }, // 1384353745
		{ &Z_Construct_UFunction_AObjectiveManager_GetActiveObjectiveNames, "GetActiveObjectiveNames" }, // 2823958770
		{ &Z_Construct_UFunction_AObjectiveManager_GetNumActiveObjectives, "GetNumActiveObjectives" }, // 178964661
		{ &Z_Construct_UFunction_AObjectiveManager_GetObjective, "GetObjective" }, // 2600325165
		{ &Z_Construct_UFunction_AObjectiveManager_GetObjectiveNames, "GetObjectiveNames" }, // 3384312863
		{ &Z_Construct_UFunction_AObjectiveManager_HasActiveObjective, "HasActiveObjective" }, // 1109432355
		{ &Z_Construct_UFunction_AObjectiveManager_InitializeObjectives, "InitializeObjectives" }, // 333227778
		{ &Z_Construct_UFunction_AObjectiveManager_RemoveObjective, "RemoveObjective" }, // 823440309
		{ &Z_Construct_UFunction_AObjectiveManager_RemoveObjectiveWithName, "RemoveObjectiveWithName" }, // 1663921300
		{ &Z_Construct_UFunction_AObjectiveManager_SyncObjectives, "SyncObjectives" }, // 2304861297
		{ &Z_Construct_UFunction_AObjectiveManager_UpdateCachedObjectiveNames, "UpdateCachedObjectiveNames" }, // 764220594
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ObjectiveManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObjectiveManager_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveManager_Statics::NewProp_Objectives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveManager" },
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObjectiveManager_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000025, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectiveManager, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_Objectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnActivateObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveManager" },
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnActivateObjective = { "OnActivateObjective", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectiveManager, OnActivateObjective), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnActivateObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnActivateObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnDeactivateObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveManager" },
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnDeactivateObjective = { "OnDeactivateObjective", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectiveManager, OnDeactivateObjective), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveModifiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnDeactivateObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnDeactivateObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnCompleteObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveManager" },
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnCompleteObjective = { "OnCompleteObjective", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectiveManager, OnCompleteObjective), Z_Construct_UDelegateFunction_GameplayObjectives_ObjectiveCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnCompleteObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnCompleteObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectiveManager_Statics::NewProp_bHasActivatedObjectives_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ObjectiveManager" },
		{ "ModuleRelativePath", "Public/ObjectiveManager.h" },
	};
#endif
	void Z_Construct_UClass_AObjectiveManager_Statics::NewProp_bHasActivatedObjectives_SetBit(void* Obj)
	{
		((AObjectiveManager*)Obj)->bHasActivatedObjectives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObjectiveManager_Statics::NewProp_bHasActivatedObjectives = { "bHasActivatedObjectives", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObjectiveManager), &Z_Construct_UClass_AObjectiveManager_Statics::NewProp_bHasActivatedObjectives_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_bHasActivatedObjectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveManager_Statics::NewProp_bHasActivatedObjectives_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectiveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveManager_Statics::NewProp_Objectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveManager_Statics::NewProp_Objectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnActivateObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnDeactivateObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveManager_Statics::NewProp_OnCompleteObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectiveManager_Statics::NewProp_bHasActivatedObjectives,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectiveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectiveManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectiveManager_Statics::ClassParams = {
		&AObjectiveManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AObjectiveManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjectiveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectiveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectiveManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectiveManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectiveManager, 3847527533);
	template<> GAMEPLAYOBJECTIVES_API UClass* StaticClass<AObjectiveManager>()
	{
		return AObjectiveManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectiveManager(Z_Construct_UClass_AObjectiveManager, &AObjectiveManager::StaticClass, TEXT("/Script/GameplayObjectives"), TEXT("AObjectiveManager"), false, nullptr, nullptr, nullptr);

	void AObjectiveManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Objectives(TEXT("Objectives"));

		const bool bIsValid = true
			&& Name_Objectives == ClassReps[(int32)ENetFields_Private::Objectives].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AObjectiveManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectiveManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
