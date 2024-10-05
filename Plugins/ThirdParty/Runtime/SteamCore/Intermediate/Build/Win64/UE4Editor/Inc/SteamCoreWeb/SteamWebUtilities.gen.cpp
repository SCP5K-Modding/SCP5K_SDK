// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/SteamWebUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamWebUtilities() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamWebUtilities_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamWebUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult();
	STEAMCOREWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSteamCoreJson();
// End Cross Module References
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonBool(Z_Param_JsonString,Z_Param_Key,Z_Param_Out_Value,(ESteamJsonResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonBools)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(bool,Z_Param_Out_Values);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonBools(Z_Param_JsonString,Z_Param_Key,Z_Param_Out_Values,(ESteamJsonResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonNumber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonNumber(Z_Param_JsonString,Z_Param_Key,Z_Param_Out_Value,(ESteamJsonResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonNumbers)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Values);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonNumbers(Z_Param_JsonString,Z_Param_Key,Z_Param_Out_Values,(ESteamJsonResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonString(Z_Param_JsonString,Z_Param_Key,Z_Param_Out_Value,(ESteamJsonResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execFindJsonStrings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Values);
		P_GET_ENUM_REF(ESteamJsonResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamWebUtilities::FindJsonStrings(Z_Param_JsonString,Z_Param_Key,Z_Param_Out_Values,(ESteamJsonResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execGetDevSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamWebUtilities::GetDevSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execGetProjectAppID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamWebUtilities::GetProjectAppID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execGetProjectKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamWebUtilities::GetProjectKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamWebUtilities::execParseJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_TARRAY_REF(FSteamCoreJson,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamWebUtilities::ParseJson(Z_Param_JsonString,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void USteamWebUtilities::StaticRegisterNativesUSteamWebUtilities()
	{
		UClass* Class = USteamWebUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindJsonBool", &USteamWebUtilities::execFindJsonBool },
			{ "FindJsonBools", &USteamWebUtilities::execFindJsonBools },
			{ "FindJsonNumber", &USteamWebUtilities::execFindJsonNumber },
			{ "FindJsonNumbers", &USteamWebUtilities::execFindJsonNumbers },
			{ "FindJsonString", &USteamWebUtilities::execFindJsonString },
			{ "FindJsonStrings", &USteamWebUtilities::execFindJsonStrings },
			{ "GetDevSteamID", &USteamWebUtilities::execGetDevSteamID },
			{ "GetProjectAppID", &USteamWebUtilities::execGetProjectAppID },
			{ "GetProjectKey", &USteamWebUtilities::execGetProjectKey },
			{ "ParseJson", &USteamWebUtilities::execParseJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics
	{
		struct SteamWebUtilities_eventFindJsonBool_Parms
		{
			FString JsonString;
			FString Key;
			bool Value;
			ESteamJsonResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((SteamWebUtilities_eventFindJsonBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamWebUtilities_eventFindJsonBool_Parms), &Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBool_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonBool", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonBool_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics
	{
		struct SteamWebUtilities_eventFindJsonBools_Parms
		{
			FString JsonString;
			FString Key;
			TArray<bool> Values;
			ESteamJsonResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonBools_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonBools", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonBools_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonBools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonBools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics
	{
		struct SteamWebUtilities_eventFindJsonNumber_Parms
		{
			FString JsonString;
			FString Key;
			int32 Value;
			ESteamJsonResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumber_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonNumber", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonNumber_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics
	{
		struct SteamWebUtilities_eventFindJsonNumbers_Parms
		{
			FString JsonString;
			FString Key;
			TArray<int32> Values;
			ESteamJsonResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonNumbers_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonNumbers", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonNumbers_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics
	{
		struct SteamWebUtilities_eventFindJsonString_Parms
		{
			FString JsonString;
			FString Key;
			FString Value;
			ESteamJsonResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonString_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonString", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonString_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics
	{
		struct SteamWebUtilities_eventFindJsonStrings_Parms
		{
			FString JsonString;
			FString Key;
			TArray<FString> Values;
			ESteamJsonResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventFindJsonStrings_Parms, Result), Z_Construct_UEnum_SteamCoreWeb_ESteamJsonResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "FindJsonStrings", nullptr, nullptr, sizeof(SteamWebUtilities_eventFindJsonStrings_Parms), Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics
	{
		struct SteamWebUtilities_eventGetDevSteamID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetDevSteamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetDevSteamID", nullptr, nullptr, sizeof(SteamWebUtilities_eventGetDevSteamID_Parms), Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics
	{
		struct SteamWebUtilities_eventGetProjectAppID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetProjectAppID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetProjectAppID", nullptr, nullptr, sizeof(SteamWebUtilities_eventGetProjectAppID_Parms), Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics
	{
		struct SteamWebUtilities_eventGetProjectKey_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventGetProjectKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "GetProjectKey", nullptr, nullptr, sizeof(SteamWebUtilities_eventGetProjectKey_Parms), Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_GetProjectKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_GetProjectKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics
	{
		struct SteamWebUtilities_eventParseJson_Parms
		{
			FString JsonString;
			TArray<FSteamCoreJson> Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventParseJson_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JsonString_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamCoreJson, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamWebUtilities_eventParseJson_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamWebUtilities_eventParseJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamWebUtilities_eventParseJson_Parms), &Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamWebUtilities, nullptr, "ParseJson", nullptr, nullptr, sizeof(SteamWebUtilities_eventParseJson_Parms), Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamWebUtilities_ParseJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamWebUtilities_ParseJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamWebUtilities_NoRegister()
	{
		return USteamWebUtilities::StaticClass();
	}
	struct Z_Construct_UClass_USteamWebUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamWebUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamWebUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonBool, "FindJsonBool" }, // 2194972822
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonBools, "FindJsonBools" }, // 14105713
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonNumber, "FindJsonNumber" }, // 675587759
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonNumbers, "FindJsonNumbers" }, // 349671616
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonString, "FindJsonString" }, // 731429177
		{ &Z_Construct_UFunction_USteamWebUtilities_FindJsonStrings, "FindJsonStrings" }, // 1033652116
		{ &Z_Construct_UFunction_USteamWebUtilities_GetDevSteamID, "GetDevSteamID" }, // 215274959
		{ &Z_Construct_UFunction_USteamWebUtilities_GetProjectAppID, "GetProjectAppID" }, // 3390166430
		{ &Z_Construct_UFunction_USteamWebUtilities_GetProjectKey, "GetProjectKey" }, // 1060340085
		{ &Z_Construct_UFunction_USteamWebUtilities_ParseJson, "ParseJson" }, // 3634004963
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamWebUtilities.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SteamWebUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamWebUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamWebUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamWebUtilities_Statics::ClassParams = {
		&USteamWebUtilities::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamWebUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamWebUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamWebUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamWebUtilities, 1453185112);
	template<> STEAMCOREWEB_API UClass* StaticClass<USteamWebUtilities>()
	{
		return USteamWebUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamWebUtilities(Z_Construct_UClass_USteamWebUtilities, &USteamWebUtilities::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("USteamWebUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamWebUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
