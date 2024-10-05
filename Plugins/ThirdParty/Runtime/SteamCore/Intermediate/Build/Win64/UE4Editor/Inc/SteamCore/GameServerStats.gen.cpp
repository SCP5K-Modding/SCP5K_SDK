// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameServerStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameServerStats() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UGameServerStats_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UGameServerStats();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGameServerStats::execClearUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execGetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execGetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execGetUserStatInt)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execServerRequestUserStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestUserStats(FOnServerRequestUserStats(Z_Param_Out_Callback),Z_Param_SteamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execServerStoreUserStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStoreUserStats(FOnServerStoreUserStats(Z_Param_Out_Callback),Z_Param_SteamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execSetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execSetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execSetUserStatInt)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserStatInt(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execUpdateUserAvgRateStat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateUserAvgRateStat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
		P_NATIVE_END;
	}
	void UGameServerStats::StaticRegisterNativesUGameServerStats()
	{
		UClass* Class = UGameServerStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearUserAchievement", &UGameServerStats::execClearUserAchievement },
			{ "GetUserAchievement", &UGameServerStats::execGetUserAchievement },
			{ "GetUserStatFloat", &UGameServerStats::execGetUserStatFloat },
			{ "GetUserStatInt", &UGameServerStats::execGetUserStatInt },
			{ "ServerRequestUserStats", &UGameServerStats::execServerRequestUserStats },
			{ "ServerStoreUserStats", &UGameServerStats::execServerStoreUserStats },
			{ "SetUserAchievement", &UGameServerStats::execSetUserAchievement },
			{ "SetUserStatFloat", &UGameServerStats::execSetUserStatFloat },
			{ "SetUserStatInt", &UGameServerStats::execSetUserStatInt },
			{ "UpdateUserAvgRateStat", &UGameServerStats::execUpdateUserAvgRateStat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics
	{
		struct GameServerStats_eventClearUserAchievement_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventClearUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventClearUserAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventClearUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventClearUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ClearUserAchievement", nullptr, nullptr, sizeof(GameServerStats_eventClearUserAchievement_Parms), Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_ClearUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics
	{
		struct GameServerStats_eventGetUserAchievement_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool bAchieved;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((GameServerStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserAchievement", nullptr, nullptr, sizeof(GameServerStats_eventGetUserAchievement_Parms), Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_GetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics
	{
		struct GameServerStats_eventGetUserStatFloat_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			float Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserStatFloat", nullptr, nullptr, sizeof(GameServerStats_eventGetUserStatFloat_Parms), Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_GetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics
	{
		struct GameServerStats_eventGetUserStatInt_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			int32 Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventGetUserStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserStatInt_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserStatInt", nullptr, nullptr, sizeof(GameServerStats_eventGetUserStatInt_Parms), Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_GetUserStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics
	{
		struct GameServerStats_eventServerRequestUserStats_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDUser;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventServerRequestUserStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventServerRequestUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ServerRequestUserStats", nullptr, nullptr, sizeof(GameServerStats_eventServerRequestUserStats_Parms), Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics
	{
		struct GameServerStats_eventServerStoreUserStats_Parms
		{
			FScriptDelegate Callback;
			FSteamID SteamIDUser;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventServerStoreUserStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventServerStoreUserStats_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_SteamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ServerStoreUserStats", nullptr, nullptr, sizeof(GameServerStats_eventServerStoreUserStats_Parms), Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics
	{
		struct GameServerStats_eventSetUserAchievement_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserAchievement_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventSetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserAchievement", nullptr, nullptr, sizeof(GameServerStats_eventSetUserAchievement_Parms), Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_SetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics
	{
		struct GameServerStats_eventSetUserStatFloat_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			float Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventSetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserStatFloat_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserStatFloat", nullptr, nullptr, sizeof(GameServerStats_eventSetUserStatFloat_Parms), Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_SetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics
	{
		struct GameServerStats_eventSetUserStatInt_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			int32 Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventSetUserStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserStatInt_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserStatInt", nullptr, nullptr, sizeof(GameServerStats_eventSetUserStatInt_Parms), Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_SetUserStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics
	{
		struct GameServerStats_eventUpdateUserAvgRateStat_Parms
		{
			FSteamID SteamIDUser;
			FString Name;
			float CountThisSession;
			float SessionLength;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, SessionLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventUpdateUserAvgRateStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventUpdateUserAvgRateStat_Parms), &Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_CountThisSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_SessionLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "UpdateUserAvgRateStat", nullptr, nullptr, sizeof(GameServerStats_eventUpdateUserAvgRateStat_Parms), Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameServerStats_NoRegister()
	{
		return UGameServerStats::StaticClass();
	}
	struct Z_Construct_UClass_UGameServerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSStatsUnloaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSStatsUnloaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameServerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameServerStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameServerStats_ClearUserAchievement, "ClearUserAchievement" }, // 1981905517
		{ &Z_Construct_UFunction_UGameServerStats_GetUserAchievement, "GetUserAchievement" }, // 156506313
		{ &Z_Construct_UFunction_UGameServerStats_GetUserStatFloat, "GetUserStatFloat" }, // 3577599822
		{ &Z_Construct_UFunction_UGameServerStats_GetUserStatInt, "GetUserStatInt" }, // 2125237531
		{ &Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats, "ServerRequestUserStats" }, // 695043498
		{ &Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats, "ServerStoreUserStats" }, // 2599389482
		{ &Z_Construct_UFunction_UGameServerStats_SetUserAchievement, "SetUserAchievement" }, // 1089200667
		{ &Z_Construct_UFunction_UGameServerStats_SetUserStatFloat, "SetUserStatFloat" }, // 4217165047
		{ &Z_Construct_UFunction_UGameServerStats_SetUserStatInt, "SetUserStatInt" }, // 2287841183
		{ &Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat, "UpdateUserAvgRateStat" }, // 1121989709
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServerStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameServerStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameServerStats" },
		{ "ModuleRelativePath", "Public/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded = { "GSStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameServerStats, GSStatsUnloaded), Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameServerStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameServerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameServerStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameServerStats_Statics::ClassParams = {
		&UGameServerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameServerStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameServerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameServerStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameServerStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameServerStats, 349616253);
	template<> STEAMCORE_API UClass* StaticClass<UGameServerStats>()
	{
		return UGameServerStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameServerStats(Z_Construct_UClass_UGameServerStats, &UGameServerStats::StaticClass, TEXT("/Script/SteamCore"), TEXT("UGameServerStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameServerStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
