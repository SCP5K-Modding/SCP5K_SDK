// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreWeb/Public/WebLobbyMatchmakingService.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebLobbyMatchmakingService() {}
// Cross Module References
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_UWebLobbyMatchmakingService();
	STEAMCOREWEB_API UClass* Z_Construct_UClass_USteamCoreWebSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCoreWeb();
	STEAMCOREWEB_API UFunction* Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature();
	STEAMCOREWEB_API UEnum* Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType();
// End Cross Module References
	DEFINE_FUNCTION(UWebLobbyMatchmakingService::execCreateLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
		P_GET_ENUM(ESteamCoreWebLobbyType,Z_Param_LobbyType);
		P_GET_PROPERTY(FStrProperty,Z_Param_lobbyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputJson);
		P_GET_TARRAY(FString,Z_Param_steamIDInvitedMembers);
		P_GET_PROPERTY(FStrProperty,Z_Param_lobbyMetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateLobby(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_MaxMembers,ESteamCoreWebLobbyType(Z_Param_LobbyType),Z_Param_lobbyName,Z_Param_inputJson,Z_Param_steamIDInvitedMembers,Z_Param_lobbyMetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebLobbyMatchmakingService::execRemoveUserFromLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_PROPERTY(FStrProperty,Z_Param_steamIDToRemove);
		P_GET_PROPERTY(FStrProperty,Z_Param_SteamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUserFromLobby(FOnSteamCoreWebCallback(Z_Param_Out_Callback),Z_Param_Key,Z_Param_AppID,Z_Param_steamIDToRemove,Z_Param_SteamIDLobby,Z_Param_inputJson);
		P_NATIVE_END;
	}
	void UWebLobbyMatchmakingService::StaticRegisterNativesUWebLobbyMatchmakingService()
	{
		UClass* Class = UWebLobbyMatchmakingService::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLobby", &UWebLobbyMatchmakingService::execCreateLobby },
			{ "RemoveUserFromLobby", &UWebLobbyMatchmakingService::execRemoveUserFromLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics
	{
		struct WebLobbyMatchmakingService_eventCreateLobby_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			int32 MaxMembers;
			ESteamCoreWebLobbyType LobbyType;
			FString lobbyName;
			FString inputJson;
			TArray<FString> steamIDInvitedMembers;
			FString lobbyMetaData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lobbyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lobbyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputJson;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDInvitedMembers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_steamIDInvitedMembers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lobbyMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_lobbyMetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_SteamCoreWeb_ESteamCoreWebLobbyType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyName = { "lobbyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, lobbyName), METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_inputJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_inputJson = { "inputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, inputJson), METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_inputJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_inputJson_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_steamIDInvitedMembers_Inner = { "steamIDInvitedMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_steamIDInvitedMembers = { "steamIDInvitedMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, steamIDInvitedMembers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyMetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyMetaData = { "lobbyMetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventCreateLobby_Parms, lobbyMetaData), METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyMetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_MaxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_LobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_inputJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_steamIDInvitedMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_steamIDInvitedMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::NewProp_lobbyMetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebLobbyMatchmakingService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLobbyMatchmakingService, nullptr, "CreateLobby", nullptr, nullptr, sizeof(WebLobbyMatchmakingService_eventCreateLobby_Parms), Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics
	{
		struct WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms
		{
			FScriptDelegate Callback;
			FString Key;
			int32 AppID;
			FString steamIDToRemove;
			FString SteamIDLobby;
			FString inputJson;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steamIDToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_steamIDToRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputJson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, Callback), Z_Construct_UDelegateFunction_SteamCoreWeb_OnSteamCoreWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDToRemove = { "steamIDToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, steamIDToRemove), METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDToRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, SteamIDLobby), METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_inputJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_inputJson = { "inputJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms, inputJson), METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_inputJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_inputJson_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_steamIDToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::NewProp_inputJson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebLobbyMatchmakingService.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebLobbyMatchmakingService, nullptr, "RemoveUserFromLobby", nullptr, nullptr, sizeof(WebLobbyMatchmakingService_eventRemoveUserFromLobby_Parms), Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebLobbyMatchmakingService_NoRegister()
	{
		return UWebLobbyMatchmakingService::StaticClass();
	}
	struct Z_Construct_UClass_UWebLobbyMatchmakingService_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreWebSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreWeb,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebLobbyMatchmakingService_CreateLobby, "CreateLobby" }, // 299042767
		{ &Z_Construct_UFunction_UWebLobbyMatchmakingService_RemoveUserFromLobby, "RemoveUserFromLobby" }, // 657319245
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebLobbyMatchmakingService.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebLobbyMatchmakingService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebLobbyMatchmakingService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::ClassParams = {
		&UWebLobbyMatchmakingService::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebLobbyMatchmakingService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebLobbyMatchmakingService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebLobbyMatchmakingService, 3776848396);
	template<> STEAMCOREWEB_API UClass* StaticClass<UWebLobbyMatchmakingService>()
	{
		return UWebLobbyMatchmakingService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebLobbyMatchmakingService(Z_Construct_UClass_UWebLobbyMatchmakingService, &UWebLobbyMatchmakingService::StaticClass, TEXT("/Script/SteamCoreWeb"), TEXT("UWebLobbyMatchmakingService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebLobbyMatchmakingService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
