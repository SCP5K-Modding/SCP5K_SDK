// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordCore/Public/DiscordCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordCore() {}
// Cross Module References
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore_NoRegister();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DiscordCore();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUint64();
	DISCORDCORE_API UEnum* Z_Construct_UEnum_DiscordCore_EDiscordCoreCreationFlags();
	DISCORDCORE_API UFunction* Z_Construct_UDelegateFunction_DiscordCore_DiscordLogEvent__DelegateSignature();
	DISCORDCORE_API UFunction* Z_Construct_UDelegateFunction_DiscordCore_OnRunCallbacks__DelegateSignature();
	DISCORDCORE_API UClass* Z_Construct_UClass_UDiscordManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDiscordCore::execBlueprint_GetApplicationId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUint64*)Z_Param__Result=P_THIS->Blueprint_GetApplicationId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordCore::execCreateDiscordCore)
	{
		P_GET_ENUM(EDiscordCoreCreationFlags,Z_Param_CreationFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDiscordCore**)Z_Param__Result=UDiscordCore::CreateDiscordCore(EDiscordCoreCreationFlags(Z_Param_CreationFlags));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordCore::execGetTimeSinceEpoch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UDiscordCore::GetTimeSinceEpoch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordCore::execSetLogHook)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnLogCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLogHook(FDiscordLogEvent(Z_Param_Out_OnLogCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordCore::execStringToUint64)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUint64*)Z_Param__Result=UDiscordCore::StringToUint64(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDiscordCore::execUint64ToString)
	{
		P_GET_STRUCT_REF(FUint64,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDiscordCore::Uint64ToString(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UDiscordCore::StaticRegisterNativesUDiscordCore()
	{
		UClass* Class = UDiscordCore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Blueprint_GetApplicationId", &UDiscordCore::execBlueprint_GetApplicationId },
			{ "CreateDiscordCore", &UDiscordCore::execCreateDiscordCore },
			{ "GetTimeSinceEpoch", &UDiscordCore::execGetTimeSinceEpoch },
			{ "SetLogHook", &UDiscordCore::execSetLogHook },
			{ "StringToUint64", &UDiscordCore::execStringToUint64 },
			{ "Uint64ToString", &UDiscordCore::execUint64ToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics
	{
		struct DiscordCore_eventBlueprint_GetApplicationId_Parms
		{
			FUint64 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventBlueprint_GetApplicationId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordCore, nullptr, "Blueprint_GetApplicationId", nullptr, nullptr, sizeof(DiscordCore_eventBlueprint_GetApplicationId_Parms), Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics
	{
		struct DiscordCore_eventCreateDiscordCore_Parms
		{
			EDiscordCoreCreationFlags CreationFlags;
			UDiscordCore* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CreationFlags_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreationFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CreationFlags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_CreationFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_CreationFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_CreationFlags = { "CreationFlags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventCreateDiscordCore_Parms, CreationFlags), Z_Construct_UEnum_DiscordCore_EDiscordCoreCreationFlags, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_CreationFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_CreationFlags_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventCreateDiscordCore_Parms, ReturnValue), Z_Construct_UClass_UDiscordCore_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_CreationFlags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_CreationFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordCore, nullptr, "CreateDiscordCore", nullptr, nullptr, sizeof(DiscordCore_eventCreateDiscordCore_Parms), Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordCore_CreateDiscordCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordCore_CreateDiscordCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics
	{
		struct DiscordCore_eventGetTimeSinceEpoch_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventGetTimeSinceEpoch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordCore, nullptr, "GetTimeSinceEpoch", nullptr, nullptr, sizeof(DiscordCore_eventGetTimeSinceEpoch_Parms), Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics
	{
		struct DiscordCore_eventSetLogHook_Parms
		{
			FScriptDelegate OnLogCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLogCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnLogCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::NewProp_OnLogCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::NewProp_OnLogCallback = { "OnLogCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventSetLogHook_Parms, OnLogCallback), Z_Construct_UDelegateFunction_DiscordCore_DiscordLogEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::NewProp_OnLogCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::NewProp_OnLogCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::NewProp_OnLogCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordCore, nullptr, "SetLogHook", nullptr, nullptr, sizeof(DiscordCore_eventSetLogHook_Parms), Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordCore_SetLogHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordCore_SetLogHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics
	{
		struct DiscordCore_eventStringToUint64_Parms
		{
			FString Value;
			FUint64 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventStringToUint64_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventStringToUint64_Parms, ReturnValue), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordCore, nullptr, "StringToUint64", nullptr, nullptr, sizeof(DiscordCore_eventStringToUint64_Parms), Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordCore_StringToUint64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordCore_StringToUint64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics
	{
		struct DiscordCore_eventUint64ToString_Parms
		{
			FUint64 Value;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventUint64ToString_Parms, Value), Z_Construct_UScriptStruct_FUint64, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DiscordCore_eventUint64ToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDiscordCore, nullptr, "Uint64ToString", nullptr, nullptr, sizeof(DiscordCore_eventUint64ToString_Parms), Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDiscordCore_Uint64ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDiscordCore_Uint64ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDiscordCore_NoRegister()
	{
		return UDiscordCore::StaticClass();
	}
	struct Z_Construct_UClass_UDiscordCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRunCallbacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRunCallbacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetworkManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivityManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivityManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApplicationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LobbyManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlayManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelationshipManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelationshipManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorageManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoreManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StoreManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiscordCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDiscordCore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDiscordCore_Blueprint_GetApplicationId, "Blueprint_GetApplicationId" }, // 1985852887
		{ &Z_Construct_UFunction_UDiscordCore_CreateDiscordCore, "CreateDiscordCore" }, // 366487213
		{ &Z_Construct_UFunction_UDiscordCore_GetTimeSinceEpoch, "GetTimeSinceEpoch" }, // 1628322312
		{ &Z_Construct_UFunction_UDiscordCore_SetLogHook, "SetLogHook" }, // 1600970595
		{ &Z_Construct_UFunction_UDiscordCore_StringToUint64, "StringToUint64" }, // 1977654101
		{ &Z_Construct_UFunction_UDiscordCore_Uint64ToString, "Uint64ToString" }, // 235028487
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DiscordCore.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_OnRunCallbacks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_OnRunCallbacks = { "OnRunCallbacks", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, OnRunCallbacks), Z_Construct_UDelegateFunction_DiscordCore_OnRunCallbacks__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_OnRunCallbacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_OnRunCallbacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_NetworkManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_NetworkManager = { "NetworkManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, NetworkManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_NetworkManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_NetworkManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_AchievementManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_AchievementManager = { "AchievementManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, AchievementManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_AchievementManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_AchievementManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_ActivityManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_ActivityManager = { "ActivityManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, ActivityManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_ActivityManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_ActivityManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_ApplicationManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_ApplicationManager = { "ApplicationManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, ApplicationManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_ApplicationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_ApplicationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_VoiceManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_VoiceManager = { "VoiceManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, VoiceManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_VoiceManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_VoiceManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_ImageManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_ImageManager = { "ImageManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, ImageManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_ImageManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_ImageManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_LobbyManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_LobbyManager = { "LobbyManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, LobbyManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_LobbyManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_LobbyManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_OverlayManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_OverlayManager = { "OverlayManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, OverlayManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_OverlayManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_OverlayManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_RelationshipManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_RelationshipManager = { "RelationshipManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, RelationshipManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_RelationshipManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_RelationshipManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_StorageManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_StorageManager = { "StorageManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, StorageManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_StorageManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_StorageManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_StoreManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_StoreManager = { "StoreManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, StoreManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_StoreManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_StoreManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiscordCore_Statics::NewProp_UserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordCore" },
		{ "ModuleRelativePath", "Public/DiscordCore.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDiscordCore_Statics::NewProp_UserManager = { "UserManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDiscordCore, UserManager), Z_Construct_UClass_UDiscordManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::NewProp_UserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::NewProp_UserManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDiscordCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_OnRunCallbacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_NetworkManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_AchievementManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_ActivityManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_ApplicationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_VoiceManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_ImageManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_LobbyManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_OverlayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_RelationshipManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_StorageManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_StoreManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDiscordCore_Statics::NewProp_UserManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiscordCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiscordCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDiscordCore_Statics::ClassParams = {
		&UDiscordCore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDiscordCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDiscordCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiscordCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiscordCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDiscordCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDiscordCore, 1771597014);
	template<> DISCORDCORE_API UClass* StaticClass<UDiscordCore>()
	{
		return UDiscordCore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDiscordCore(Z_Construct_UClass_UDiscordCore, &UDiscordCore::StaticClass, TEXT("/Script/DiscordCore"), TEXT("UDiscordCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiscordCore);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
