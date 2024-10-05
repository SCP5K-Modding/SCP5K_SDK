// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordStorage/Public/DiscordStorageManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordStorageManager() {}
// Cross Module References
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UDiscordStorageManager_NoRegister();
	DISCORDSTORAGE_API UClass* Z_Construct_UClass_UDiscordStorageManager();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager();
	UPackage* Z_Construct_UPackage__Script_DiscordStorage();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDSTORAGE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordFileStat();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordStorageManager::execCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Count();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStorageManager::execDelete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Delete(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStorageManager::execExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Exists(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStorageManager::execGetPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStorageManager::execGetStorageManager)
	{
		P_GET_OBJECT(UDiscordCore,Z_Param_DiscordCore);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordStorageManager**)Z_Param__Result=UDiscordStorageManager::GetStorageManager(Z_Param_DiscordCore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStorageManager::execRead)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Read(Z_Param_Name,Z_Param_Out_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStorageManager::execStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordFileStat*)Z_Param__Result=P_THIS->Stat(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStorageManager::execStatAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDiscordFileStat*)Z_Param__Result=P_THIS->StatAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordStorageManager::execWrite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Write(Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void UDiscordStorageManager::StaticRegisterNativesUDiscordStorageManager()
	{
		UClass* Class = UDiscordStorageManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Count", &UDiscordStorageManager::execCount },
			{ "Delete", &UDiscordStorageManager::execDelete },
			{ "Exists", &UDiscordStorageManager::execExists },
			{ "GetPath", &UDiscordStorageManager::execGetPath },
			{ "GetStorageManager", &UDiscordStorageManager::execGetStorageManager },
			{ "Read", &UDiscordStorageManager::execRead },
			{ "Stat", &UDiscordStorageManager::execStat },
			{ "StatAt", &UDiscordStorageManager::execStatAt },
			{ "Write", &UDiscordStorageManager::execWrite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_Count_Statics
	{
		struct DiscordStorageManager_eventCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "Count", nullptr, nullptr, sizeof(DiscordStorageManager_eventCount_Parms), Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics
	{
		struct DiscordStorageManager_eventDelete_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventDelete_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "Delete", nullptr, nullptr, sizeof(DiscordStorageManager_eventDelete_Parms), Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_Delete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_Delete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics
	{
		struct DiscordStorageManager_eventExists_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventExists_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DiscordStorageManager_eventExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DiscordStorageManager_eventExists_Parms), &Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "Exists", nullptr, nullptr, sizeof(DiscordStorageManager_eventExists_Parms), Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_Exists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_Exists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics
	{
		struct DiscordStorageManager_eventGetPath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventGetPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "GetPath", nullptr, nullptr, sizeof(DiscordStorageManager_eventGetPath_Parms), Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_GetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_GetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics
	{
		struct DiscordStorageManager_eventGetStorageManager_Parms
		{
			const UDiscordCore* DiscordCore;
			UDiscordStorageManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscordCore_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DiscordCore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::NewProp_DiscordCore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::NewProp_DiscordCore = { "DiscordCore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventGetStorageManager_Parms, DiscordCore), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::NewProp_DiscordCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::NewProp_DiscordCore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventGetStorageManager_Parms, ReturnValue), Z_Construct_UClass_UDiscordStorageManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::NewProp_DiscordCore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "GetStorageManager", nullptr, nullptr, sizeof(DiscordStorageManager_eventGetStorageManager_Parms), Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_Read_Statics
	{
		struct DiscordStorageManager_eventRead_Parms
		{
			FString Name;
			TArray<uint8> Buffer;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventRead_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventRead_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventRead_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_Buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "Read", nullptr, nullptr, sizeof(DiscordStorageManager_eventRead_Parms), Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_Read()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_Read_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics
	{
		struct DiscordStorageManager_eventStat_Parms
		{
			FString Name;
			FDiscordFileStat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventStat_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordFileStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "Stat", nullptr, nullptr, sizeof(DiscordStorageManager_eventStat_Parms), Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_Stat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_Stat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics
	{
		struct DiscordStorageManager_eventStatAt_Parms
		{
			int32 Index;
			FDiscordFileStat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventStatAt_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventStatAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FDiscordFileStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "StatAt", nullptr, nullptr, sizeof(DiscordStorageManager_eventStatAt_Parms), Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_StatAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_StatAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordStorageManager_Write_Statics
	{
		struct DiscordStorageManager_eventWrite_Parms
		{
			FString Name;
			TArray<uint8> Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventWrite_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordStorageManager_eventWrite_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordStorageManager, nullptr, "Write", nullptr, nullptr, sizeof(DiscordStorageManager_eventWrite_Parms), Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordStorageManager_Write()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordStorageManager_Write_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordStorageManager_NoRegister()
	{
		return UDiscordStorageManager::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordStorageManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordStorageManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDiscordManager,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordStorage,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordStorageManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordStorageManager_Count, "Count" }, // 3935538113
		{ &Z_Construct_UFunction_UDiscordStorageManager_Delete, "Delete" }, // 3658567239
		{ &Z_Construct_UFunction_UDiscordStorageManager_Exists, "Exists" }, // 3670845945
		{ &Z_Construct_UFunction_UDiscordStorageManager_GetPath, "GetPath" }, // 4328663
		{ &Z_Construct_UFunction_UDiscordStorageManager_GetStorageManager, "GetStorageManager" }, // 3892459456
		{ &Z_Construct_UFunction_UDiscordStorageManager_Read, "Read" }, // 1771253487
		{ &Z_Construct_UFunction_UDiscordStorageManager_Stat, "Stat" }, // 1045193008
		{ &Z_Construct_UFunction_UDiscordStorageManager_StatAt, "StatAt" }, // 359114869
		{ &Z_Construct_UFunction_UDiscordStorageManager_Write, "Write" }, // 256888287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordStorageManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordStorageManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordStorageManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordStorageManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordStorageManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordStorageManager_Statics::ClassParams = {
		&UDiscordStorageManager::StaticClass,
		nullptr,
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
		METADATA_PARAMS(Z_Construct_UClass_UDiscordStorageManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordStorageManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordStorageManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordStorageManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordStorageManager, 1683415638);
	template<> DISCORDSTORAGE_API UClass* StaticClass<UDiscordStorageManager>()
	{
		return UDiscordStorageManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordStorageManager(Z_Construct_UClass_UDiscordStorageManager, &UDiscordStorageManager::StaticClass, TEXT("/Script/DiscordStorage"), TEXT("UDiscordStorageManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordStorageManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
