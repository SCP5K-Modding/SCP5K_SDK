// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemoteStorage.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteStorage() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_URemoteStorage_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_URemoteStorage();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCReadAction();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(URemoteStorage::execFileDelete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileDelete(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileExists(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileForget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileForget(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFilePersisted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FilePersisted(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileRead)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::FileRead(Z_Param_File,Z_Param_Out_Buffer,Z_Param_DataToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileReadAsync)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_BytesToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileReadAsync(FOnFileReadAsync(Z_Param_Out_Callback),Z_Param_File,Z_Param_Offset,Z_Param_BytesToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileReadAsyncComplete)
	{
		P_GET_STRUCT(FRemoteStorageFileReadAsyncComplete,Z_Param_ReadCall);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_BytesToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileReadAsyncComplete(Z_Param_ReadCall,Z_Param_Out_Buffer,Z_Param_BytesToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileShare)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileShare(FOnFileShareAsync(Z_Param_Out_Callback),Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWrite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWrite(Z_Param_File,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteAsync)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileWriteAsync(FOnFileWriteAsync(Z_Param_Out_Callback),Z_Param_File,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamCancel)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamCancel(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamClose)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamClose(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCFileWriteStreamHandle*)Z_Param__Result=URemoteStorage::FileWriteStreamOpen(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamWriteChunk)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_Handle);
		P_GET_TARRAY(uint8,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamWriteChunk(Z_Param_Handle,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetCachedUGCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetCachedUGCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetCachedUGCHandle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ICachedContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamUGCHandle*)Z_Param__Result=URemoteStorage::GetCachedUGCHandle(Z_Param_ICachedContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileNameAndSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_File);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSizeInBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URemoteStorage::GetFileNameAndSize(Z_Param_File,Z_Param_Out_FileSizeInBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileSize(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileTimestamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileTimestamp(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetQuota)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TotalBytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AvailableBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetQuota(Z_Param_Out_TotalBytes,Z_Param_Out_AvailableBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetSyncPlatforms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamRemoteStoragePlatform*)Z_Param__Result=URemoteStorage::GetSyncPlatforms(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetUGCDetails)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FileSizeInBytes);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamIDOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetUGCDetails(Z_Param_Handle,Z_Param_Out_AppID,Z_Param_Out_Name,Z_Param_Out_FileSizeInBytes,Z_Param_Out_SteamIDOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetUGCDownloadProgress)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesExpected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetUGCDownloadProgress(Z_Param_Handle,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesExpected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execIsCloudEnabledForAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::IsCloudEnabledForAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execIsCloudEnabledForApp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::IsCloudEnabledForApp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execSetCloudEnabledForApp)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		URemoteStorage::SetCloudEnabledForApp(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execSetSyncPlatforms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_ENUM(ESteamRemoteStoragePlatform,Z_Param_RemoteStoragePlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::SetSyncPlatforms(Z_Param_File,ESteamRemoteStoragePlatform(Z_Param_RemoteStoragePlatform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execUGCDownload)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UGCDownload(FOnUGCDownloadAsync(Z_Param_Out_Callback),Z_Param_Content,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execUGCDownloadToLocation)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
		P_GET_PROPERTY(FStrProperty,Z_Param_Location);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UGCDownloadToLocation(FOnUGCDownloadToLocationAsync(Z_Param_Out_Callback),Z_Param_Content,Z_Param_Location,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execUGCRead)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_Content);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutData);
		P_GET_PROPERTY(FIntProperty,Z_Param_DataToRead);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_ENUM(ESteamUGCReadAction,Z_Param_Action);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::UGCRead(Z_Param_Content,Z_Param_Out_OutData,Z_Param_DataToRead,Z_Param_Offset,ESteamUGCReadAction(Z_Param_Action));
		P_NATIVE_END;
	}
	void URemoteStorage::StaticRegisterNativesURemoteStorage()
	{
		UClass* Class = URemoteStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileDelete", &URemoteStorage::execFileDelete },
			{ "FileExists", &URemoteStorage::execFileExists },
			{ "FileForget", &URemoteStorage::execFileForget },
			{ "FilePersisted", &URemoteStorage::execFilePersisted },
			{ "FileRead", &URemoteStorage::execFileRead },
			{ "FileReadAsync", &URemoteStorage::execFileReadAsync },
			{ "FileReadAsyncComplete", &URemoteStorage::execFileReadAsyncComplete },
			{ "FileShare", &URemoteStorage::execFileShare },
			{ "FileWrite", &URemoteStorage::execFileWrite },
			{ "FileWriteAsync", &URemoteStorage::execFileWriteAsync },
			{ "FileWriteStreamCancel", &URemoteStorage::execFileWriteStreamCancel },
			{ "FileWriteStreamClose", &URemoteStorage::execFileWriteStreamClose },
			{ "FileWriteStreamOpen", &URemoteStorage::execFileWriteStreamOpen },
			{ "FileWriteStreamWriteChunk", &URemoteStorage::execFileWriteStreamWriteChunk },
			{ "GetCachedUGCCount", &URemoteStorage::execGetCachedUGCCount },
			{ "GetCachedUGCHandle", &URemoteStorage::execGetCachedUGCHandle },
			{ "GetFileCount", &URemoteStorage::execGetFileCount },
			{ "GetFileNameAndSize", &URemoteStorage::execGetFileNameAndSize },
			{ "GetFileSize", &URemoteStorage::execGetFileSize },
			{ "GetFileTimestamp", &URemoteStorage::execGetFileTimestamp },
			{ "GetQuota", &URemoteStorage::execGetQuota },
			{ "GetSyncPlatforms", &URemoteStorage::execGetSyncPlatforms },
			{ "GetUGCDetails", &URemoteStorage::execGetUGCDetails },
			{ "GetUGCDownloadProgress", &URemoteStorage::execGetUGCDownloadProgress },
			{ "IsCloudEnabledForAccount", &URemoteStorage::execIsCloudEnabledForAccount },
			{ "IsCloudEnabledForApp", &URemoteStorage::execIsCloudEnabledForApp },
			{ "SetCloudEnabledForApp", &URemoteStorage::execSetCloudEnabledForApp },
			{ "SetSyncPlatforms", &URemoteStorage::execSetSyncPlatforms },
			{ "UGCDownload", &URemoteStorage::execUGCDownload },
			{ "UGCDownloadToLocation", &URemoteStorage::execUGCDownloadToLocation },
			{ "UGCRead", &URemoteStorage::execUGCRead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteStorage_FileDelete_Statics
	{
		struct RemoteStorage_eventFileDelete_Parms
		{
			FString File;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileDelete_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_File_MetaData)) };
	void Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileDelete_Parms), &Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileDelete", nullptr, nullptr, sizeof(RemoteStorage_eventFileDelete_Parms), Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileExists_Statics
	{
		struct RemoteStorage_eventFileExists_Parms
		{
			FString File;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileExists_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_File_MetaData)) };
	void Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileExists_Parms), &Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileExists", nullptr, nullptr, sizeof(RemoteStorage_eventFileExists_Parms), Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileForget_Statics
	{
		struct RemoteStorage_eventFileForget_Parms
		{
			FString File;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileForget_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_File_MetaData)) };
	void Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileForget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileForget_Parms), &Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileForget", nullptr, nullptr, sizeof(RemoteStorage_eventFileForget_Parms), Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileForget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileForget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics
	{
		struct RemoteStorage_eventFilePersisted_Parms
		{
			FString File;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFilePersisted_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_File_MetaData)) };
	void Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFilePersisted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFilePersisted_Parms), &Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FilePersisted", nullptr, nullptr, sizeof(RemoteStorage_eventFilePersisted_Parms), Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FilePersisted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileRead_Statics
	{
		struct RemoteStorage_eventFileRead_Parms
		{
			FString File;
			TArray<uint8> Buffer;
			int32 DataToRead;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataToRead;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, DataToRead), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_Buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_DataToRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileRead", nullptr, nullptr, sizeof(RemoteStorage_eventFileRead_Parms), Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics
	{
		struct RemoteStorage_eventFileReadAsync_Parms
		{
			FScriptDelegate Callback;
			FString File;
			int32 Offset;
			int32 BytesToRead;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesToRead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_BytesToRead = { "BytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, BytesToRead), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_BytesToRead,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileReadAsync", nullptr, nullptr, sizeof(RemoteStorage_eventFileReadAsync_Parms), Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileReadAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics
	{
		struct RemoteStorage_eventFileReadAsyncComplete_Parms
		{
			FRemoteStorageFileReadAsyncComplete ReadCall;
			TArray<uint8> Buffer;
			int32 BytesToRead;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReadCall;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesToRead;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReadCall = { "ReadCall", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, ReadCall), Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_BytesToRead = { "BytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, BytesToRead), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileReadAsyncComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileReadAsyncComplete_Parms), &Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReadCall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_Buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_BytesToRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileReadAsyncComplete", nullptr, nullptr, sizeof(RemoteStorage_eventFileReadAsyncComplete_Parms), Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileShare_Statics
	{
		struct RemoteStorage_eventFileShare_Parms
		{
			FScriptDelegate Callback;
			FString File;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileShare_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileShare_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileShare", nullptr, nullptr, sizeof(RemoteStorage_eventFileShare_Parms), Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileShare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileShare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWrite_Statics
	{
		struct RemoteStorage_eventFileWrite_Parms
		{
			FString File;
			TArray<uint8> Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWrite_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWrite_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWrite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileWrite_Parms), &Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWrite", nullptr, nullptr, sizeof(RemoteStorage_eventFileWrite_Parms), Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics
	{
		struct RemoteStorage_eventFileWriteAsync_Parms
		{
			FScriptDelegate Callback;
			FString File;
			TArray<uint8> Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteAsync", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteAsync_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics
	{
		struct RemoteStorage_eventFileWriteStreamCancel_Parms
		{
			FUGCFileWriteStreamHandle Handle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamCancel_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamCancel_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamCancel", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteStreamCancel_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics
	{
		struct RemoteStorage_eventFileWriteStreamClose_Parms
		{
			FUGCFileWriteStreamHandle Handle;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamClose_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamClose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamClose_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamClose", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteStreamClose_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics
	{
		struct RemoteStorage_eventFileWriteStreamOpen_Parms
		{
			FString File;
			FUGCFileWriteStreamHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamOpen_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamOpen_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamOpen", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteStreamOpen_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics
	{
		struct RemoteStorage_eventFileWriteStreamWriteChunk_Parms
		{
			FUGCFileWriteStreamHandle Handle;
			TArray<uint8> Data;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamWriteChunk_Parms, Handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamWriteChunk_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamWriteChunk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamWriteChunk_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamWriteChunk", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteStreamWriteChunk_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics
	{
		struct RemoteStorage_eventGetCachedUGCCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetCachedUGCCount", nullptr, nullptr, sizeof(RemoteStorage_eventGetCachedUGCCount_Parms), Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics
	{
		struct RemoteStorage_eventGetCachedUGCHandle_Parms
		{
			int32 ICachedContent;
			FSteamUGCHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ICachedContent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ICachedContent = { "ICachedContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCHandle_Parms, ICachedContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ICachedContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetCachedUGCHandle", nullptr, nullptr, sizeof(RemoteStorage_eventGetCachedUGCHandle_Parms), Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics
	{
		struct RemoteStorage_eventGetFileCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileCount", nullptr, nullptr, sizeof(RemoteStorage_eventGetFileCount_Parms), Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics
	{
		struct RemoteStorage_eventGetFileNameAndSize_Parms
		{
			int32 File;
			int32 FileSizeInBytes;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileSizeInBytes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, File), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_FileSizeInBytes = { "FileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, FileSizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_FileSizeInBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileNameAndSize", nullptr, nullptr, sizeof(RemoteStorage_eventGetFileNameAndSize_Parms), Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics
	{
		struct RemoteStorage_eventGetFileSize_Parms
		{
			FString File;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileSize_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileSize", nullptr, nullptr, sizeof(RemoteStorage_eventGetFileSize_Parms), Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics
	{
		struct RemoteStorage_eventGetFileTimestamp_Parms
		{
			FString File;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileTimestamp_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileTimestamp", nullptr, nullptr, sizeof(RemoteStorage_eventGetFileTimestamp_Parms), Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetQuota_Statics
	{
		struct RemoteStorage_eventGetQuota_Parms
		{
			int32 TotalBytes;
			int32 AvailableBytes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AvailableBytes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_TotalBytes = { "TotalBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetQuota_Parms, TotalBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_AvailableBytes = { "AvailableBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetQuota_Parms, AvailableBytes), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetQuota_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventGetQuota_Parms), &Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_TotalBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_AvailableBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetQuota", nullptr, nullptr, sizeof(RemoteStorage_eventGetQuota_Parms), Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetQuota()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics
	{
		struct RemoteStorage_eventGetSyncPlatforms_Parms
		{
			FString File;
			ESteamRemoteStoragePlatform ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetSyncPlatforms_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetSyncPlatforms_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetSyncPlatforms", nullptr, nullptr, sizeof(RemoteStorage_eventGetSyncPlatforms_Parms), Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics
	{
		struct RemoteStorage_eventGetUGCDetails_Parms
		{
			FSteamUGCHandle Handle;
			int32 AppID;
			FString Name;
			int32 FileSizeInBytes;
			FSteamID SteamIDOwner;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileSizeInBytes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_FileSizeInBytes = { "FileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, FileSizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, SteamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetUGCDetails_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventGetUGCDetails_Parms), &Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_FileSizeInBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_SteamIDOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetUGCDetails", nullptr, nullptr, sizeof(RemoteStorage_eventGetUGCDetails_Parms), Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetUGCDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics
	{
		struct RemoteStorage_eventGetUGCDownloadProgress_Parms
		{
			FSteamUGCHandle Handle;
			int32 BytesDownloaded;
			int32 BytesExpected;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesExpected;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesExpected = { "BytesExpected", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, BytesExpected), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetUGCDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventGetUGCDownloadProgress_Parms), &Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesDownloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_BytesExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetUGCDownloadProgress", nullptr, nullptr, sizeof(RemoteStorage_eventGetUGCDownloadProgress_Parms), Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics
	{
		struct RemoteStorage_eventIsCloudEnabledForAccount_Parms
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
	void Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventIsCloudEnabledForAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventIsCloudEnabledForAccount_Parms), &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "IsCloudEnabledForAccount", nullptr, nullptr, sizeof(RemoteStorage_eventIsCloudEnabledForAccount_Parms), Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics
	{
		struct RemoteStorage_eventIsCloudEnabledForApp_Parms
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
	void Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventIsCloudEnabledForApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventIsCloudEnabledForApp_Parms), &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "IsCloudEnabledForApp", nullptr, nullptr, sizeof(RemoteStorage_eventIsCloudEnabledForApp_Parms), Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics
	{
		struct RemoteStorage_eventSetCloudEnabledForApp_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((RemoteStorage_eventSetCloudEnabledForApp_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventSetCloudEnabledForApp_Parms), &Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "SetCloudEnabledForApp", nullptr, nullptr, sizeof(RemoteStorage_eventSetCloudEnabledForApp_Parms), Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics
	{
		struct RemoteStorage_eventSetSyncPlatforms_Parms
		{
			FString File;
			ESteamRemoteStoragePlatform RemoteStoragePlatform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteStoragePlatform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RemoteStoragePlatform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventSetSyncPlatforms_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform = { "RemoteStoragePlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventSetSyncPlatforms_Parms, RemoteStoragePlatform), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventSetSyncPlatforms_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventSetSyncPlatforms_Parms), &Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_RemoteStoragePlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "SetSyncPlatforms", nullptr, nullptr, sizeof(RemoteStorage_eventSetSyncPlatforms_Parms), Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics
	{
		struct RemoteStorage_eventUGCDownload_Parms
		{
			FScriptDelegate Callback;
			FSteamUGCHandle Content;
			int32 Priority;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCDownload_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCDownload_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCDownload_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::NewProp_Priority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "UGCDownload", nullptr, nullptr, sizeof(RemoteStorage_eventUGCDownload_Parms), Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_UGCDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_UGCDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics
	{
		struct RemoteStorage_eventUGCDownloadToLocation_Parms
		{
			FScriptDelegate Callback;
			FSteamUGCHandle Content;
			FString Location;
			int32 Priority;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCDownloadToLocation_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnUGCDownloadToLocationAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCDownloadToLocation_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCDownloadToLocation_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCDownloadToLocation_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::NewProp_Priority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "UGCDownloadToLocation", nullptr, nullptr, sizeof(RemoteStorage_eventUGCDownloadToLocation_Parms), Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_UGCRead_Statics
	{
		struct RemoteStorage_eventUGCRead_Parms
		{
			FSteamUGCHandle Content;
			TArray<uint8> OutData;
			int32 DataToRead;
			int32 Offset;
			ESteamUGCReadAction Action;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataToRead;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, Content), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_DataToRead = { "DataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, DataToRead), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, Action), Z_Construct_UEnum_SteamCore_ESteamUGCReadAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventUGCRead_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_OutData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_OutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_DataToRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Action_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "UGCRead", nullptr, nullptr, sizeof(RemoteStorage_eventUGCRead_Parms), Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_UGCRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_UGCRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URemoteStorage_NoRegister()
	{
		return URemoteStorage::StaticClass();
	}
	struct Z_Construct_UClass_URemoteStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStorageUnsubscribePublishedFileResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStorageSubscribePublishedFileResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStorageSubscribePublishedFileResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStoragePublishedFileUnsubscribed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStoragePublishedFileSubscribed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStoragePublishedFileSubscribed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteStorage_FileDelete, "FileDelete" }, // 220198877
		{ &Z_Construct_UFunction_URemoteStorage_FileExists, "FileExists" }, // 2631087324
		{ &Z_Construct_UFunction_URemoteStorage_FileForget, "FileForget" }, // 1605733539
		{ &Z_Construct_UFunction_URemoteStorage_FilePersisted, "FilePersisted" }, // 2489297085
		{ &Z_Construct_UFunction_URemoteStorage_FileRead, "FileRead" }, // 663225064
		{ &Z_Construct_UFunction_URemoteStorage_FileReadAsync, "FileReadAsync" }, // 2879284627
		{ &Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete, "FileReadAsyncComplete" }, // 1913120102
		{ &Z_Construct_UFunction_URemoteStorage_FileShare, "FileShare" }, // 3674631370
		{ &Z_Construct_UFunction_URemoteStorage_FileWrite, "FileWrite" }, // 66209457
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteAsync, "FileWriteAsync" }, // 2462812172
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel, "FileWriteStreamCancel" }, // 3860294783
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose, "FileWriteStreamClose" }, // 1022264799
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen, "FileWriteStreamOpen" }, // 3842280964
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk, "FileWriteStreamWriteChunk" }, // 2656836373
		{ &Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount, "GetCachedUGCCount" }, // 1943055191
		{ &Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle, "GetCachedUGCHandle" }, // 3875912247
		{ &Z_Construct_UFunction_URemoteStorage_GetFileCount, "GetFileCount" }, // 2178236712
		{ &Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize, "GetFileNameAndSize" }, // 3444464954
		{ &Z_Construct_UFunction_URemoteStorage_GetFileSize, "GetFileSize" }, // 1515301380
		{ &Z_Construct_UFunction_URemoteStorage_GetFileTimestamp, "GetFileTimestamp" }, // 2153001222
		{ &Z_Construct_UFunction_URemoteStorage_GetQuota, "GetQuota" }, // 1484704511
		{ &Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms, "GetSyncPlatforms" }, // 3153617033
		{ &Z_Construct_UFunction_URemoteStorage_GetUGCDetails, "GetUGCDetails" }, // 837813783
		{ &Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress, "GetUGCDownloadProgress" }, // 2694850305
		{ &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount, "IsCloudEnabledForAccount" }, // 3273196714
		{ &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp, "IsCloudEnabledForApp" }, // 3568097383
		{ &Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp, "SetCloudEnabledForApp" }, // 2295630972
		{ &Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms, "SetSyncPlatforms" }, // 830726319
		{ &Z_Construct_UFunction_URemoteStorage_UGCDownload, "UGCDownload" }, // 2563088480
		{ &Z_Construct_UFunction_URemoteStorage_UGCDownloadToLocation, "UGCDownloadToLocation" }, // 1582777324
		{ &Z_Construct_UFunction_URemoteStorage_UGCRead, "UGCRead" }, // 653256343
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RemoteStorage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult = { "RemoteStorageUnsubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteStorage, RemoteStorageUnsubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult = { "RemoteStorageSubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteStorage, RemoteStorageSubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed = { "RemoteStoragePublishedFileUnsubscribed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteStorage, RemoteStoragePublishedFileUnsubscribed), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed = { "RemoteStoragePublishedFileSubscribed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteStorage, RemoteStoragePublishedFileSubscribed), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoteStorage_Statics::ClassParams = {
		&URemoteStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoteStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoteStorage, 1638152228);
	template<> STEAMCORE_API UClass* StaticClass<URemoteStorage>()
	{
		return URemoteStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoteStorage(Z_Construct_UClass_URemoteStorage, &URemoteStorage::StaticClass, TEXT("/Script/SteamCore"), TEXT("URemoteStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
