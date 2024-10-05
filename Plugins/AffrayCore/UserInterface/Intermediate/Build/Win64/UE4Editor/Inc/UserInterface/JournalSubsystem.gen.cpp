// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UserInterface/Public/JournalSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalSubsystem() {}
// Cross Module References
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalSubsystem();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_UserInterface();
	USERINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FJournal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	USERINTERFACE_API UClass* Z_Construct_UClass_UJournalEntry_NoRegister();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_EJournalPersistenceType();
	USERINTERFACE_API UEnum* Z_Construct_UEnum_UserInterface_ESharingType();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature();
	USERINTERFACE_API UFunction* Z_Construct_UDelegateFunction_UserInterface_OnJournalEntryAdded__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalSubsystem, nullptr, "OnJournalUpdated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UJournalSubsystem::execGetAllJournalLists)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FJournal>*)Z_Param__Result=P_THIS->GetAllJournalLists();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJournalSubsystem::execGetJournalEntrySoftObject)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UJournalEntry>*)Z_Param__Result=UJournalSubsystem::GetJournalEntrySoftObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJournalSubsystem::execGetJournalList)
	{
		P_GET_ENUM(EJournalPersistenceType,Z_Param_Persistence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FJournal>*)Z_Param__Result=P_THIS->GetJournalList(EJournalPersistenceType(Z_Param_Persistence));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJournalSubsystem::execJournalEntryLoaded)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UJournalEntry>,Z_Param_Entry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JournalEntryLoaded(Z_Param_Entry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJournalSubsystem::execLoadJournalEntry)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UJournalEntry>,Z_Param_JournalEntry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadJournalEntry(Z_Param_JournalEntry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJournalSubsystem::execUpdateJournalList)
	{
		P_GET_ENUM(ESharingType,Z_Param_Sharable);
		P_GET_TARRAY(FJournal,Z_Param_UpdatedList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateJournalList(ESharingType(Z_Param_Sharable),Z_Param_UpdatedList);
		P_NATIVE_END;
	}
	void UJournalSubsystem::StaticRegisterNativesUJournalSubsystem()
	{
		UClass* Class = UJournalSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllJournalLists", &UJournalSubsystem::execGetAllJournalLists },
			{ "GetJournalEntrySoftObject", &UJournalSubsystem::execGetJournalEntrySoftObject },
			{ "GetJournalList", &UJournalSubsystem::execGetJournalList },
			{ "JournalEntryLoaded", &UJournalSubsystem::execJournalEntryLoaded },
			{ "LoadJournalEntry", &UJournalSubsystem::execLoadJournalEntry },
			{ "UpdateJournalList", &UJournalSubsystem::execUpdateJournalList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics
	{
		struct JournalSubsystem_eventGetAllJournalLists_Parms
		{
			TArray<FJournal> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJournal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventGetAllJournalLists_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalSubsystem, nullptr, "GetAllJournalLists", nullptr, nullptr, sizeof(JournalSubsystem_eventGetAllJournalLists_Parms), Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics
	{
		struct JournalSubsystem_eventGetJournalEntrySoftObject_Parms
		{
			TSoftObjectPtr<UObject> Object;
			TSoftObjectPtr<UJournalEntry> ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventGetJournalEntrySoftObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventGetJournalEntrySoftObject_Parms, ReturnValue), Z_Construct_UClass_UJournalEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalSubsystem, nullptr, "GetJournalEntrySoftObject", nullptr, nullptr, sizeof(JournalSubsystem_eventGetJournalEntrySoftObject_Parms), Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics
	{
		struct JournalSubsystem_eventGetJournalList_Parms
		{
			EJournalPersistenceType Persistence;
			TArray<FJournal> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Persistence_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Persistence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::NewProp_Persistence_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventGetJournalList_Parms, Persistence), Z_Construct_UEnum_UserInterface_EJournalPersistenceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJournal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventGetJournalList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::NewProp_Persistence_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::NewProp_Persistence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalSubsystem, nullptr, "GetJournalList", nullptr, nullptr, sizeof(JournalSubsystem_eventGetJournalList_Parms), Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalSubsystem_GetJournalList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalSubsystem_GetJournalList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics
	{
		struct JournalSubsystem_eventJournalEntryLoaded_Parms
		{
			TSoftObjectPtr<UJournalEntry> Entry;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Entry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventJournalEntryLoaded_Parms, Entry), Z_Construct_UClass_UJournalEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::NewProp_Entry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalSubsystem, nullptr, "JournalEntryLoaded", nullptr, nullptr, sizeof(JournalSubsystem_eventJournalEntryLoaded_Parms), Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics
	{
		struct JournalSubsystem_eventLoadJournalEntry_Parms
		{
			TSoftObjectPtr<UJournalEntry> JournalEntry;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_JournalEntry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::NewProp_JournalEntry = { "JournalEntry", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventLoadJournalEntry_Parms, JournalEntry), Z_Construct_UClass_UJournalEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::NewProp_JournalEntry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalSubsystem, nullptr, "LoadJournalEntry", nullptr, nullptr, sizeof(JournalSubsystem_eventLoadJournalEntry_Parms), Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics
	{
		struct JournalSubsystem_eventUpdateJournalList_Parms
		{
			ESharingType Sharable;
			TArray<FJournal> UpdatedList;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Sharable_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Sharable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdatedList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdatedList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::NewProp_Sharable_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::NewProp_Sharable = { "Sharable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventUpdateJournalList_Parms, Sharable), Z_Construct_UEnum_UserInterface_ESharingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::NewProp_UpdatedList_Inner = { "UpdatedList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJournal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::NewProp_UpdatedList = { "UpdatedList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JournalSubsystem_eventUpdateJournalList_Parms, UpdatedList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::NewProp_Sharable_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::NewProp_Sharable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::NewProp_UpdatedList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::NewProp_UpdatedList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJournalSubsystem, nullptr, "UpdateJournalList", nullptr, nullptr, sizeof(JournalSubsystem_eventUpdateJournalList_Parms), Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJournalSubsystem_NoRegister()
	{
		return UJournalSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UJournalSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJournalEntryLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJournalEntryLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJournalUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJournalUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJournalEntryAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJournalEntryAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnJournalEntryRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJournalEntryRemoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UserInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJournalSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJournalSubsystem_GetAllJournalLists, "GetAllJournalLists" }, // 1267944128
		{ &Z_Construct_UFunction_UJournalSubsystem_GetJournalEntrySoftObject, "GetJournalEntrySoftObject" }, // 3524256718
		{ &Z_Construct_UFunction_UJournalSubsystem_GetJournalList, "GetJournalList" }, // 2725813514
		{ &Z_Construct_UFunction_UJournalSubsystem_JournalEntryLoaded, "JournalEntryLoaded" }, // 606710620
		{ &Z_Construct_UFunction_UJournalSubsystem_LoadJournalEntry, "LoadJournalEntry" }, // 2378941047
		{ &Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature, "OnJournalUpdated__DelegateSignature" }, // 3806137696
		{ &Z_Construct_UFunction_UJournalSubsystem_UpdateJournalList, "UpdateJournalList" }, // 2824792340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JournalSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalSubsystem" },
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryLoaded = { "OnJournalEntryLoaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalSubsystem, OnJournalEntryLoaded), Z_Construct_UDelegateFunction_UserInterface_JournalEntryLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalSubsystem" },
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalUpdated = { "OnJournalUpdated", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalSubsystem, OnJournalUpdated), Z_Construct_UDelegateFunction_UJournalSubsystem_OnJournalUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryAdded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalSubsystem" },
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryAdded = { "OnJournalEntryAdded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalSubsystem, OnJournalEntryAdded), Z_Construct_UDelegateFunction_UserInterface_OnJournalEntryAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryRemoved_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "JournalSubsystem" },
		{ "ModuleRelativePath", "Public/JournalSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryRemoved = { "OnJournalEntryRemoved", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UJournalSubsystem, OnJournalEntryRemoved), Z_Construct_UDelegateFunction_UserInterface_OnJournalEntryAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryRemoved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJournalSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJournalSubsystem_Statics::NewProp_OnJournalEntryRemoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalSubsystem_Statics::ClassParams = {
		&UJournalSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJournalSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJournalSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalSubsystem, 2620552380);
	template<> USERINTERFACE_API UClass* StaticClass<UJournalSubsystem>()
	{
		return UJournalSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalSubsystem(Z_Construct_UClass_UJournalSubsystem, &UJournalSubsystem::StaticClass, TEXT("/Script/UserInterface"), TEXT("UJournalSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
