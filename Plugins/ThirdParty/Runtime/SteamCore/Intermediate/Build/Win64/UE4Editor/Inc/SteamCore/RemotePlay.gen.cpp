// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemotePlay.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemotePlay() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_URemotePlay_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_URemotePlay();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(URemotePlay::execBGetSessionClientResolution)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResolutionX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ResolutionY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BGetSessionClientResolution(Z_Param_SessionID,Z_Param_Out_ResolutionX,Z_Param_Out_ResolutionY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execBSendRemotePlayTogetherInvite)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BSendRemotePlayTogetherInvite(Z_Param_SteamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionClientFormFactor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreDeviceFormFactor*)Z_Param__Result=P_THIS->GetSessionClientFormFactor(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionClientName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSessionClientName(Z_Param_SessionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSessionCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSessionID(Z_Param_SessionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemotePlay::execGetSessionSteamID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SessionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetSessionSteamID(Z_Param_SessionID);
		P_NATIVE_END;
	}
	void URemotePlay::StaticRegisterNativesURemotePlay()
	{
		UClass* Class = URemotePlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BGetSessionClientResolution", &URemotePlay::execBGetSessionClientResolution },
			{ "BSendRemotePlayTogetherInvite", &URemotePlay::execBSendRemotePlayTogetherInvite },
			{ "GetSessionClientFormFactor", &URemotePlay::execGetSessionClientFormFactor },
			{ "GetSessionClientName", &URemotePlay::execGetSessionClientName },
			{ "GetSessionCount", &URemotePlay::execGetSessionCount },
			{ "GetSessionID", &URemotePlay::execGetSessionID },
			{ "GetSessionSteamID", &URemotePlay::execGetSessionSteamID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics
	{
		struct RemotePlay_eventBGetSessionClientResolution_Parms
		{
			int32 SessionID;
			int32 ResolutionX;
			int32 ResolutionY;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, ResolutionX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventBGetSessionClientResolution_Parms, ResolutionY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemotePlay_eventBGetSessionClientResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemotePlay_eventBGetSessionClientResolution_Parms), &Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ResolutionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "BGetSessionClientResolution", nullptr, nullptr, sizeof(RemotePlay_eventBGetSessionClientResolution_Parms), Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics
	{
		struct RemotePlay_eventBSendRemotePlayTogetherInvite_Parms
		{
			FSteamID SteamIDFriend;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDFriend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend = { "SteamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventBSendRemotePlayTogetherInvite_Parms, SteamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemotePlay_eventBSendRemotePlayTogetherInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemotePlay_eventBSendRemotePlayTogetherInvite_Parms), &Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_SteamIDFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "BSendRemotePlayTogetherInvite", nullptr, nullptr, sizeof(RemotePlay_eventBSendRemotePlayTogetherInvite_Parms), Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics
	{
		struct RemotePlay_eventGetSessionClientFormFactor_Parms
		{
			int32 SessionID;
			ESteamCoreDeviceFormFactor ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionClientFormFactor_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionClientFormFactor_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreDeviceFormFactor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionClientFormFactor", nullptr, nullptr, sizeof(RemotePlay_eventGetSessionClientFormFactor_Parms), Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics
	{
		struct RemotePlay_eventGetSessionClientName_Parms
		{
			int32 SessionID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionClientName_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionClientName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionClientName", nullptr, nullptr, sizeof(RemotePlay_eventGetSessionClientName_Parms), Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionClientName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionClientName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics
	{
		struct RemotePlay_eventGetSessionCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionCount", nullptr, nullptr, sizeof(RemotePlay_eventGetSessionCount_Parms), Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionID_Statics
	{
		struct RemotePlay_eventGetSessionID_Parms
		{
			int32 SessionIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_SessionIndex = { "SessionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionID_Parms, SessionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_SessionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionID", nullptr, nullptr, sizeof(RemotePlay_eventGetSessionID_Parms), Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics
	{
		struct RemotePlay_eventGetSessionSteamID_Parms
		{
			int32 SessionID;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SessionID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_SessionID = { "SessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionSteamID_Parms, SessionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemotePlay_eventGetSessionSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_SessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemotePlay, nullptr, "GetSessionSteamID", nullptr, nullptr, sizeof(RemotePlay_eventGetSessionSteamID_Parms), Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemotePlay_GetSessionSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemotePlay_GetSessionSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URemotePlay_NoRegister()
	{
		return URemotePlay::StaticClass();
	}
	struct Z_Construct_UClass_URemotePlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamRemotePlaySessionDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamRemotePlaySessionDisconnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemotePlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemotePlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemotePlay_BGetSessionClientResolution, "BGetSessionClientResolution" }, // 1266154878
		{ &Z_Construct_UFunction_URemotePlay_BSendRemotePlayTogetherInvite, "BSendRemotePlayTogetherInvite" }, // 2553778154
		{ &Z_Construct_UFunction_URemotePlay_GetSessionClientFormFactor, "GetSessionClientFormFactor" }, // 324238204
		{ &Z_Construct_UFunction_URemotePlay_GetSessionClientName, "GetSessionClientName" }, // 3173789565
		{ &Z_Construct_UFunction_URemotePlay_GetSessionCount, "GetSessionCount" }, // 1623999468
		{ &Z_Construct_UFunction_URemotePlay_GetSessionID, "GetSessionID" }, // 3987004162
		{ &Z_Construct_UFunction_URemotePlay_GetSessionSteamID, "GetSessionSteamID" }, // 2848417244
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemotePlay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RemotePlay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected = { "SteamRemotePlaySessionConnected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemotePlay, SteamRemotePlaySessionConnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemotePlay" },
		{ "ModuleRelativePath", "Public/RemotePlay.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected = { "SteamRemotePlaySessionDisconnected", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemotePlay, SteamRemotePlaySessionDisconnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamRemotePlaySessionDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemotePlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemotePlay_Statics::NewProp_SteamRemotePlaySessionDisconnected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemotePlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemotePlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemotePlay_Statics::ClassParams = {
		&URemotePlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemotePlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemotePlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemotePlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemotePlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemotePlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemotePlay, 906497734);
	template<> STEAMCORE_API UClass* StaticClass<URemotePlay>()
	{
		return URemotePlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemotePlay(Z_Construct_UClass_URemotePlay, &URemotePlay::StaticClass, TEXT("/Script/SteamCore"), TEXT("URemotePlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemotePlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
