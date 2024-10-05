// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UGC.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGC() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UUGC_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UUGC();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddAppDependencyResult__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddUGCDependencyResult__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCQueryHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCUpdateHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemPreviewType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavorites__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateItem__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCQuery();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCList();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAppDependenciesResult__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCDetails();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemStatistic();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetUserItemVote__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveUGCDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveItemFromFavorites__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSendQueryUGCRequest__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetUserItemVote__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStartPlaytimeTracking__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTracking__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTrackingForAllItems__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSubmitItemUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSubscribeItem__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUnsubscribeItem__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnItemInstalled__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadItemResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUGC::execAddAppDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAppDependency(FOnAddAppDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_ChildPublishedFileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDependency(FOnAddUGCDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_ChildPublishedFileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddExcludedTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddExcludedTag(Z_Param_Handle,Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemKeyValueTag)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemKeyValueTag(Z_Param_Handle,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemPreviewFile)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_GET_ENUM(ESteamItemPreviewType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemPreviewFile(Z_Param_Handle,Z_Param_PreviewFile,ESteamItemPreviewType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemPreviewVideo)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_VideoID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemPreviewVideo(Z_Param_Handle,Z_Param_VideoID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemToFavorites)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToFavorites(FOnAddItemToFavorites(Z_Param_Out_Callback),Z_Param_AppID,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddRequiredKeyValueTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddRequiredKeyValueTag(Z_Param_Handle,Z_Param_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddRequiredTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddRequiredTag(Z_Param_Handle,Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddRequiredTagGroup)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_TARRAY(FString,Z_Param_TagGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddRequiredTagGroup(Z_Param_Handle,Z_Param_TagGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execBInitWorkshopForGameServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WorkshopDepotID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::BInitWorkshopForGameServer(Z_Param_WorkshopDepotID,Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_ENUM(ESteamWorkshopFileType,Z_Param_FileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateItem(FOnCreateItem(Z_Param_Out_Callback),Z_Param_ConsumerAppID,ESteamWorkshopFileType(Z_Param_FileType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryAllUGCRequest)
	{
		P_GET_ENUM(ESteamUGCQuery,Z_Param_QueryType);
		P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_FileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery(Z_Param_QueryType),ESteamUGCMatchingUGCType(Z_Param_FileType),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryUGCDetailsRequest)
	{
		P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryUGCDetailsRequest(Z_Param_PublishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryUserUGCRequest)
	{
		P_GET_STRUCT(FSteamID,Z_Param_SteamID);
		P_GET_ENUM(ESteamUserUGCList,Z_Param_ListType);
		P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_MatchingUGCType);
		P_GET_ENUM(ESteamUserUGCListSortOrder,Z_Param_SortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_CreatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryUserUGCRequest(Z_Param_SteamID,ESteamUserUGCList(Z_Param_ListType),ESteamUGCMatchingUGCType(Z_Param_MatchingUGCType),ESteamUserUGCListSortOrder(Z_Param_SortOrder),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execDeleteItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteItem(FOnDeleteItemResult(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execDownloadItem)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_UBOOL(Z_Param_bHighPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::DownloadItem(Z_Param_PublishedFileID,Z_Param_bHighPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetAppDependencies)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppDependencies(FOnGetAppDependenciesResult(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemDownloadInfo)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetItemDownloadInfo(Z_Param_PublishedFileID,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemInstallInfo)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeOnDisk);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Timestamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetItemInstallInfo(Z_Param_PublishedFileID,Z_Param_Out_SizeOnDisk,Z_Param_Out_Folder,Z_Param_Out_Timestamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemState)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_TARRAY_REF(ESteamItemState,Z_Param_Out_States);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetItemState(Z_Param_PublishedFileID,Z_Param_Out_States);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemUpdateProgress)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesProcessed);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamItemUpdateStatus*)Z_Param__Result=UUGC::GetItemUpdateProgress(Z_Param_Handle,Z_Param_Out_BytesProcessed,Z_Param_Out_BytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetNumSubscribedItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetNumSubscribedItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCAdditionalPreview)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URLOrVideoID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OriginalFileName);
		P_GET_ENUM_REF(ESteamItemPreviewType,Z_Param_Out_PreviewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCAdditionalPreview(Z_Param_Handle,Z_Param_Index,Z_Param_PreviewIndex,Z_Param_Out_URLOrVideoID,Z_Param_Out_OriginalFileName,(ESteamItemPreviewType&)(Z_Param_Out_PreviewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCChildren)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_TARRAY_REF(FPublishedFileID,Z_Param_Out_PublishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCChildren(Z_Param_Handle,Z_Param_Index,Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCKeyValueTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_KeyValueTagIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCKeyValueTag(Z_Param_Handle,Z_Param_Index,Z_Param_KeyValueTagIndex,Z_Param_Out_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCMetadata)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_MetaData);
		P_GET_PROPERTY(FIntProperty,Z_Param_MetadataSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCMetadata(Z_Param_Handle,Z_Param_Index,Z_Param_Out_MetaData,Z_Param_MetadataSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCNumAdditionalPreviews)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetQueryUGCNumAdditionalPreviews(Z_Param_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCNumKeyValueTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetQueryUGCNumKeyValueTags(Z_Param_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCNumTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetQueryUGCNumTags(Z_Param_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCPreviewURL)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCPreviewURL(Z_Param_Handle,Z_Param_Index,Z_Param_Out_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCResult)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FSteamUGCDetails,Z_Param_Out_Details);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCResult(Z_Param_Handle,Z_Param_Index,Z_Param_Out_Details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCStatistic)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_ENUM(ESteamItemStatistic,Z_Param_StatType);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_StatValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCStatistic(Z_Param_Handle,Z_Param_Index,ESteamItemStatistic(Z_Param_StatType),Z_Param_Out_StatValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexTag);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCTag(Z_Param_Handle,Z_Param_Index,Z_Param_IndexTag,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCTagDisplayName)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexTag);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCTagDisplayName(Z_Param_Handle,Z_Param_Index,Z_Param_IndexTag,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetSubscribedItems)
	{
		P_GET_TARRAY_REF(FPublishedFileID,Z_Param_Out_PublishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetSubscribedItems(Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetUserItemVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserItemVote(FOnGetUserItemVote(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execReleaseQueryUGCRequest)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::ReleaseQueryUGCRequest(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveAppDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAppDependency(FOnRemoveAppDependencyResult(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_AppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_ParentPublishedFileID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_ChildPublishedFileId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDependency(FOnRemoveUGCDependencyResult(Z_Param_Out_Callback),Z_Param_ParentPublishedFileID,Z_Param_ChildPublishedFileId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemFromFavorites)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemFromFavorites(FOnRemoveItemFromFavorites(Z_Param_Out_Callback),Z_Param_AppID,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemKeyValueTags)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::RemoveItemKeyValueTags(Z_Param_Handle,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemPreview)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::RemoveItemPreview(Z_Param_Handle,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSendQueryUGCRequest)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendQueryUGCRequest(FOnSendQueryUGCRequest(Z_Param_Out_Callback),Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetAllowCachedResponse)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAgeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetAllowCachedResponse(Z_Param_Handle,Z_Param_MaxAgeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetAllowLegacyUpload)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bAllowLegacyUpload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAllowLegacyUpload(Z_Param_Handle,Z_Param_bAllowLegacyUpload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetCloudFileNameFilter)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchCloudFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetCloudFileNameFilter(Z_Param_Handle,Z_Param_MatchCloudFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemContent)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemContent(Z_Param_Handle,Z_Param_ContentFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemDescription)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemDescription(Z_Param_Handle,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemMetadata)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemMetadata(Z_Param_Handle,Z_Param_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemPreview)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemPreview(Z_Param_Handle,Z_Param_PreviewFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemTags)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_TARRAY(FString,Z_Param_Tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemTags(Z_Param_Handle,Z_Param_Tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemTitle)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Title);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemTitle(Z_Param_Handle,Z_Param_Title);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemUpdateLanguage)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemUpdateLanguage(Z_Param_Handle,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemVisibility)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_ENUM(ESteamRemoteStoragePublishedFileVisibility,Z_Param_Visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemVisibility(Z_Param_Handle,ESteamRemoteStoragePublishedFileVisibility(Z_Param_Visibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetLanguage)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_Language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetLanguage(Z_Param_Handle,Z_Param_Language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetMatchAnyTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bMatchAnyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetMatchAnyTag(Z_Param_Handle,Z_Param_bMatchAnyTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetRankedByTrendDays)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetRankedByTrendDays(Z_Param_Handle,Z_Param_Days);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnAdditionalPreviews)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnAdditionalPreviews);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnAdditionalPreviews(Z_Param_Handle,Z_Param_bReturnAdditionalPreviews);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnChildren)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnChildren(Z_Param_Handle,Z_Param_bReturnChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnKeyValueTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnKeyValueTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnKeyValueTags(Z_Param_Handle,Z_Param_bReturnKeyValueTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnLongDescription)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnLongDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnLongDescription(Z_Param_Handle,Z_Param_bReturnLongDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnMetadata)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnMetadata(Z_Param_Handle,Z_Param_bReturnMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnOnlyIDs)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnOnlyIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnOnlyIDs(Z_Param_Handle,Z_Param_bReturnOnlyIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnPlaytimeStats)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Days);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnPlaytimeStats(Z_Param_Handle,Z_Param_Days);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnTotalOnly)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_UBOOL(Z_Param_bReturnTotalOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnTotalOnly(Z_Param_Handle,Z_Param_bReturnTotalOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetSearchText)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetSearchText(Z_Param_Handle,Z_Param_SearchText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetUserItemVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_GET_UBOOL(Z_Param_bVoteUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserItemVote(FOnSetUserItemVote(Z_Param_Out_Callback),Z_Param_PublishedFileID,Z_Param_bVoteUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStartItemUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConsumerAppID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCUpdateHandle*)Z_Param__Result=UUGC::StartItemUpdate(Z_Param_ConsumerAppID,Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStartPlaytimeTracking)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlaytimeTracking(FOnStartPlaytimeTracking(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStopPlaytimeTracking)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_TARRAY(FPublishedFileID,Z_Param_PublishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPlaytimeTracking(FOnStopPlaytimeTracking(Z_Param_Out_Callback),Z_Param_PublishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStopPlaytimeTrackingForAllItems)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPlaytimeTrackingForAllItems(FOnStopPlaytimeTrackingForAllItems(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSubmitItemUpdate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_ChangeNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubmitItemUpdate(FOnSubmitItemUpdate(Z_Param_Out_Callback),Z_Param_Handle,Z_Param_ChangeNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSubscribeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeItem(FOnSubscribeItem(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSuspendDownloads)
	{
		P_GET_UBOOL(Z_Param_bSuspend);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUGC::SuspendDownloads(Z_Param_bSuspend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execUnsubscribeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeItem(FOnUnsubscribeItem(Z_Param_Out_Callback),Z_Param_PublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execUpdateItemPreviewFile)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::UpdateItemPreviewFile(Z_Param_Handle,Z_Param_Index,Z_Param_PreviewFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execUpdateItemPreviewVideo)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreviewVideo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::UpdateItemPreviewVideo(Z_Param_Handle,Z_Param_Index,Z_Param_PreviewVideo);
		P_NATIVE_END;
	}
	void UUGC::StaticRegisterNativesUUGC()
	{
		UClass* Class = UUGC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAppDependency", &UUGC::execAddAppDependency },
			{ "AddDependency", &UUGC::execAddDependency },
			{ "AddExcludedTag", &UUGC::execAddExcludedTag },
			{ "AddItemKeyValueTag", &UUGC::execAddItemKeyValueTag },
			{ "AddItemPreviewFile", &UUGC::execAddItemPreviewFile },
			{ "AddItemPreviewVideo", &UUGC::execAddItemPreviewVideo },
			{ "AddItemToFavorites", &UUGC::execAddItemToFavorites },
			{ "AddRequiredKeyValueTag", &UUGC::execAddRequiredKeyValueTag },
			{ "AddRequiredTag", &UUGC::execAddRequiredTag },
			{ "AddRequiredTagGroup", &UUGC::execAddRequiredTagGroup },
			{ "BInitWorkshopForGameServer", &UUGC::execBInitWorkshopForGameServer },
			{ "CreateItem", &UUGC::execCreateItem },
			{ "CreateQueryAllUGCRequest", &UUGC::execCreateQueryAllUGCRequest },
			{ "CreateQueryUGCDetailsRequest", &UUGC::execCreateQueryUGCDetailsRequest },
			{ "CreateQueryUserUGCRequest", &UUGC::execCreateQueryUserUGCRequest },
			{ "DeleteItem", &UUGC::execDeleteItem },
			{ "DownloadItem", &UUGC::execDownloadItem },
			{ "GetAppDependencies", &UUGC::execGetAppDependencies },
			{ "GetItemDownloadInfo", &UUGC::execGetItemDownloadInfo },
			{ "GetItemInstallInfo", &UUGC::execGetItemInstallInfo },
			{ "GetItemState", &UUGC::execGetItemState },
			{ "GetItemUpdateProgress", &UUGC::execGetItemUpdateProgress },
			{ "GetNumSubscribedItems", &UUGC::execGetNumSubscribedItems },
			{ "GetQueryUGCAdditionalPreview", &UUGC::execGetQueryUGCAdditionalPreview },
			{ "GetQueryUGCChildren", &UUGC::execGetQueryUGCChildren },
			{ "GetQueryUGCKeyValueTag", &UUGC::execGetQueryUGCKeyValueTag },
			{ "GetQueryUGCMetadata", &UUGC::execGetQueryUGCMetadata },
			{ "GetQueryUGCNumAdditionalPreviews", &UUGC::execGetQueryUGCNumAdditionalPreviews },
			{ "GetQueryUGCNumKeyValueTags", &UUGC::execGetQueryUGCNumKeyValueTags },
			{ "GetQueryUGCNumTags", &UUGC::execGetQueryUGCNumTags },
			{ "GetQueryUGCPreviewURL", &UUGC::execGetQueryUGCPreviewURL },
			{ "GetQueryUGCResult", &UUGC::execGetQueryUGCResult },
			{ "GetQueryUGCStatistic", &UUGC::execGetQueryUGCStatistic },
			{ "GetQueryUGCTag", &UUGC::execGetQueryUGCTag },
			{ "GetQueryUGCTagDisplayName", &UUGC::execGetQueryUGCTagDisplayName },
			{ "GetSubscribedItems", &UUGC::execGetSubscribedItems },
			{ "GetUserItemVote", &UUGC::execGetUserItemVote },
			{ "ReleaseQueryUGCRequest", &UUGC::execReleaseQueryUGCRequest },
			{ "RemoveAppDependency", &UUGC::execRemoveAppDependency },
			{ "RemoveDependency", &UUGC::execRemoveDependency },
			{ "RemoveItemFromFavorites", &UUGC::execRemoveItemFromFavorites },
			{ "RemoveItemKeyValueTags", &UUGC::execRemoveItemKeyValueTags },
			{ "RemoveItemPreview", &UUGC::execRemoveItemPreview },
			{ "SendQueryUGCRequest", &UUGC::execSendQueryUGCRequest },
			{ "SetAllowCachedResponse", &UUGC::execSetAllowCachedResponse },
			{ "SetAllowLegacyUpload", &UUGC::execSetAllowLegacyUpload },
			{ "SetCloudFileNameFilter", &UUGC::execSetCloudFileNameFilter },
			{ "SetItemContent", &UUGC::execSetItemContent },
			{ "SetItemDescription", &UUGC::execSetItemDescription },
			{ "SetItemMetadata", &UUGC::execSetItemMetadata },
			{ "SetItemPreview", &UUGC::execSetItemPreview },
			{ "SetItemTags", &UUGC::execSetItemTags },
			{ "SetItemTitle", &UUGC::execSetItemTitle },
			{ "SetItemUpdateLanguage", &UUGC::execSetItemUpdateLanguage },
			{ "SetItemVisibility", &UUGC::execSetItemVisibility },
			{ "SetLanguage", &UUGC::execSetLanguage },
			{ "SetMatchAnyTag", &UUGC::execSetMatchAnyTag },
			{ "SetRankedByTrendDays", &UUGC::execSetRankedByTrendDays },
			{ "SetReturnAdditionalPreviews", &UUGC::execSetReturnAdditionalPreviews },
			{ "SetReturnChildren", &UUGC::execSetReturnChildren },
			{ "SetReturnKeyValueTags", &UUGC::execSetReturnKeyValueTags },
			{ "SetReturnLongDescription", &UUGC::execSetReturnLongDescription },
			{ "SetReturnMetadata", &UUGC::execSetReturnMetadata },
			{ "SetReturnOnlyIDs", &UUGC::execSetReturnOnlyIDs },
			{ "SetReturnPlaytimeStats", &UUGC::execSetReturnPlaytimeStats },
			{ "SetReturnTotalOnly", &UUGC::execSetReturnTotalOnly },
			{ "SetSearchText", &UUGC::execSetSearchText },
			{ "SetUserItemVote", &UUGC::execSetUserItemVote },
			{ "StartItemUpdate", &UUGC::execStartItemUpdate },
			{ "StartPlaytimeTracking", &UUGC::execStartPlaytimeTracking },
			{ "StopPlaytimeTracking", &UUGC::execStopPlaytimeTracking },
			{ "StopPlaytimeTrackingForAllItems", &UUGC::execStopPlaytimeTrackingForAllItems },
			{ "SubmitItemUpdate", &UUGC::execSubmitItemUpdate },
			{ "SubscribeItem", &UUGC::execSubscribeItem },
			{ "SuspendDownloads", &UUGC::execSuspendDownloads },
			{ "UnsubscribeItem", &UUGC::execUnsubscribeItem },
			{ "UpdateItemPreviewFile", &UUGC::execUpdateItemPreviewFile },
			{ "UpdateItemPreviewVideo", &UUGC::execUpdateItemPreviewVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGC_AddAppDependency_Statics
	{
		struct UGC_eventAddAppDependency_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
			int32 AppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddAppDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddAppDependency", nullptr, nullptr, sizeof(UGC_eventAddAppDependency_Parms), Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddAppDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddAppDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddDependency_Statics
	{
		struct UGC_eventAddDependency_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
			FPublishedFileID ChildPublishedFileId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddUGCDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_ChildPublishedFileId = { "ChildPublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, ChildPublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_ChildPublishedFileId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddDependency", nullptr, nullptr, sizeof(UGC_eventAddDependency_Parms), Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddExcludedTag_Statics
	{
		struct UGC_eventAddExcludedTag_Parms
		{
			FUGCQueryHandle Handle;
			FString TagName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddExcludedTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddExcludedTag_Parms, TagName), METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName_MetaData)) };
	void Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddExcludedTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddExcludedTag_Parms), &Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_TagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddExcludedTag", nullptr, nullptr, sizeof(UGC_eventAddExcludedTag_Parms), Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddExcludedTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics
	{
		struct UGC_eventAddItemKeyValueTag_Parms
		{
			FUGCUpdateHandle Handle;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddItemKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemKeyValueTag", nullptr, nullptr, sizeof(UGC_eventAddItemKeyValueTag_Parms), Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics
	{
		struct UGC_eventAddItemPreviewFile_Parms
		{
			FUGCUpdateHandle Handle;
			FString PreviewFile;
			ESteamItemPreviewType Type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, Type), Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddItemPreviewFile_Parms), &Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_PreviewFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemPreviewFile", nullptr, nullptr, sizeof(UGC_eventAddItemPreviewFile_Parms), Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemPreviewFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics
	{
		struct UGC_eventAddItemPreviewVideo_Parms
		{
			FUGCUpdateHandle Handle;
			FString VideoID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewVideo_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewVideo_Parms, VideoID), METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID_MetaData)) };
	void Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddItemPreviewVideo_Parms), &Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_VideoID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemPreviewVideo", nullptr, nullptr, sizeof(UGC_eventAddItemPreviewVideo_Parms), Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemPreviewVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics
	{
		struct UGC_eventAddItemToFavorites_Parms
		{
			FScriptDelegate Callback;
			int32 AppID;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavorites__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemToFavorites", nullptr, nullptr, sizeof(UGC_eventAddItemToFavorites_Parms), Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemToFavorites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics
	{
		struct UGC_eventAddRequiredKeyValueTag_Parms
		{
			FUGCQueryHandle Handle;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddRequiredKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddRequiredKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredKeyValueTag", nullptr, nullptr, sizeof(UGC_eventAddRequiredKeyValueTag_Parms), Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddRequiredTag_Statics
	{
		struct UGC_eventAddRequiredTag_Parms
		{
			FUGCQueryHandle Handle;
			FString TagName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredTag_Parms, TagName), METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName_MetaData)) };
	void Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddRequiredTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddRequiredTag_Parms), &Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_TagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredTag", nullptr, nullptr, sizeof(UGC_eventAddRequiredTag_Parms), Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddRequiredTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics
	{
		struct UGC_eventAddRequiredTagGroup_Parms
		{
			FUGCQueryHandle Handle;
			TArray<FString> TagGroups;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagGroups_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagGroups;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredTagGroup_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups_Inner = { "TagGroups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups = { "TagGroups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredTagGroup_Parms, TagGroups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddRequiredTagGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddRequiredTagGroup_Parms), &Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_TagGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredTagGroup", nullptr, nullptr, sizeof(UGC_eventAddRequiredTagGroup_Parms), Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddRequiredTagGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredTagGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics
	{
		struct UGC_eventBInitWorkshopForGameServer_Parms
		{
			int32 WorkshopDepotID;
			FString Folder;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorkshopDepotID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Folder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID = { "WorkshopDepotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventBInitWorkshopForGameServer_Parms, WorkshopDepotID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventBInitWorkshopForGameServer_Parms, Folder), METADATA_PARAMS(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder_MetaData)) };
	void Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventBInitWorkshopForGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventBInitWorkshopForGameServer_Parms), &Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_WorkshopDepotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_Folder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "BInitWorkshopForGameServer", nullptr, nullptr, sizeof(UGC_eventBInitWorkshopForGameServer_Parms), Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateItem_Statics
	{
		struct UGC_eventCreateItem_Parms
		{
			FScriptDelegate Callback;
			int32 ConsumerAppID;
			ESteamWorkshopFileType FileType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, FileType), Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_ConsumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_FileType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateItem", nullptr, nullptr, sizeof(UGC_eventCreateItem_Parms), Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_CreateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics
	{
		struct UGC_eventCreateQueryAllUGCRequest_Parms
		{
			ESteamUGCQuery QueryType;
			ESteamUGCMatchingUGCType FileType;
			int32 CreatorAppID;
			int32 ConsumerAppID;
			int32 Page;
			FUGCQueryHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QueryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FileType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Page;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, QueryType), Z_Construct_UEnum_SteamCore_ESteamUGCQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, FileType), Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, Page), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_QueryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_Page,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryAllUGCRequest", nullptr, nullptr, sizeof(UGC_eventCreateQueryAllUGCRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics
	{
		struct UGC_eventCreateQueryUGCDetailsRequest_Parms
		{
			TArray<FPublishedFileID> PublishedFileIDs;
			FUGCQueryHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUGCDetailsRequest_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUGCDetailsRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryUGCDetailsRequest", nullptr, nullptr, sizeof(UGC_eventCreateQueryUGCDetailsRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics
	{
		struct UGC_eventCreateQueryUserUGCRequest_Parms
		{
			FSteamID SteamID;
			ESteamUserUGCList ListType;
			ESteamUGCMatchingUGCType MatchingUGCType;
			ESteamUserUGCListSortOrder SortOrder;
			int32 CreatorAppID;
			int32 ConsumerAppID;
			int32 Page;
			FUGCQueryHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ListType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ListType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchingUGCType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchingUGCType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortOrder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Page;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ListType), Z_Construct_UEnum_SteamCore_ESteamUserUGCList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType = { "MatchingUGCType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, MatchingUGCType), Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, SortOrder), Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, CreatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, Page), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ListType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_MatchingUGCType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_Page,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryUserUGCRequest", nullptr, nullptr, sizeof(UGC_eventCreateQueryUserUGCRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_DeleteItem_Statics
	{
		struct UGC_eventDeleteItem_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventDeleteItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventDeleteItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "DeleteItem", nullptr, nullptr, sizeof(UGC_eventDeleteItem_Parms), Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_DeleteItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_DeleteItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_DownloadItem_Statics
	{
		struct UGC_eventDownloadItem_Parms
		{
			FPublishedFileID PublishedFileID;
			bool bHighPriority;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_bHighPriority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPriority;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventDownloadItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit(void* Obj)
	{
		((UGC_eventDownloadItem_Parms*)Obj)->bHighPriority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority = { "bHighPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventDownloadItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "DownloadItem", nullptr, nullptr, sizeof(UGC_eventDownloadItem_Parms), Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_DownloadItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_DownloadItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetAppDependencies_Statics
	{
		struct UGC_eventGetAppDependencies_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetAppDependencies_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetAppDependenciesResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetAppDependencies_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetAppDependencies", nullptr, nullptr, sizeof(UGC_eventGetAppDependencies_Parms), Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetAppDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics
	{
		struct UGC_eventGetItemDownloadInfo_Parms
		{
			FPublishedFileID PublishedFileID;
			int32 BytesDownloaded;
			int32 BytesTotal;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesDownloaded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, BytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetItemDownloadInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetItemDownloadInfo_Parms), &Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_BytesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemDownloadInfo", nullptr, nullptr, sizeof(UGC_eventGetItemDownloadInfo_Parms), Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemDownloadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics
	{
		struct UGC_eventGetItemInstallInfo_Parms
		{
			FPublishedFileID PublishedFileID;
			int32 SizeOnDisk;
			FString Folder;
			int32 Timestamp;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeOnDisk;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Folder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Timestamp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk = { "SizeOnDisk", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, SizeOnDisk), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, Folder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, Timestamp), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetItemInstallInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetItemInstallInfo_Parms), &Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_SizeOnDisk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_Folder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemInstallInfo", nullptr, nullptr, sizeof(UGC_eventGetItemInstallInfo_Parms), Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemInstallInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemState_Statics
	{
		struct UGC_eventGetItemState_Parms
		{
			FPublishedFileID PublishedFileID;
			TArray<ESteamItemState> States;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_States_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_States_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemState_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemState_Parms, States), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_States,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemState", nullptr, nullptr, sizeof(UGC_eventGetItemState_Parms), Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics
	{
		struct UGC_eventGetItemUpdateProgress_Parms
		{
			FUGCUpdateHandle Handle;
			int32 BytesProcessed;
			int32 BytesTotal;
			ESteamItemUpdateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesProcessed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesTotal;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed = { "BytesProcessed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, BytesProcessed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, BytesTotal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesProcessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_BytesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemUpdateProgress", nullptr, nullptr, sizeof(UGC_eventGetItemUpdateProgress_Parms), Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemUpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics
	{
		struct UGC_eventGetNumSubscribedItems_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetNumSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetNumSubscribedItems", nullptr, nullptr, sizeof(UGC_eventGetNumSubscribedItems_Parms), Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetNumSubscribedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics
	{
		struct UGC_eventGetQueryUGCAdditionalPreview_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 PreviewIndex;
			FString URLOrVideoID;
			FString OriginalFileName;
			ESteamItemPreviewType PreviewType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URLOrVideoID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OriginalFileName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID = { "URLOrVideoID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, URLOrVideoID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName = { "OriginalFileName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, OriginalFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType = { "PreviewType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, PreviewType), Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCAdditionalPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCAdditionalPreview_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_URLOrVideoID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCAdditionalPreview", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCAdditionalPreview_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics
	{
		struct UGC_eventGetQueryUGCChildren_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			TArray<FPublishedFileID> PublishedFileIDs;
			int32 MaxEntries;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, MaxEntries), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCChildren_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_MaxEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCChildren", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCChildren_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics
	{
		struct UGC_eventGetQueryUGCKeyValueTag_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 KeyValueTagIndex;
			FString Key;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeyValueTagIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeyValueTagIndex = { "KeyValueTagIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, KeyValueTagIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_KeyValueTagIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCKeyValueTag", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCKeyValueTag_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics
	{
		struct UGC_eventGetQueryUGCMetadata_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			FString MetaData;
			int32 MetadataSize;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MetadataSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, MetaData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetadataSize = { "MetadataSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, MetadataSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCMetadata_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_MetadataSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCMetadata", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCMetadata_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics
	{
		struct UGC_eventGetQueryUGCNumAdditionalPreviews_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumAdditionalPreviews", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics
	{
		struct UGC_eventGetQueryUGCNumKeyValueTags_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumKeyValueTags", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCNumKeyValueTags_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics
	{
		struct UGC_eventGetQueryUGCNumTags_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumTags", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCNumTags_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics
	{
		struct UGC_eventGetQueryUGCPreviewURL_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			FString URL;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCPreviewURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCPreviewURL_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCPreviewURL", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCPreviewURL_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics
	{
		struct UGC_eventGetQueryUGCResult_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			FSteamUGCDetails Details;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Details;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, Details), Z_Construct_UScriptStruct_FSteamUGCDetails, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCResult_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCResult", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCResult_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics
	{
		struct UGC_eventGetQueryUGCStatistic_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			ESteamItemStatistic StatType;
			FString StatValue;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, StatType), Z_Construct_UEnum_SteamCore_ESteamItemStatistic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, StatValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCStatistic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCStatistic_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_StatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCStatistic", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCStatistic_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics
	{
		struct UGC_eventGetQueryUGCTag_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 IndexTag;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexTag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_IndexTag = { "IndexTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, IndexTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTag_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCTag_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_IndexTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCTag", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCTag_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics
	{
		struct UGC_eventGetQueryUGCTagDisplayName_Parms
		{
			FUGCQueryHandle Handle;
			int32 Index;
			int32 IndexTag;
			FString Value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexTag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_IndexTag = { "IndexTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, IndexTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCTagDisplayName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCTagDisplayName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCTagDisplayName_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_IndexTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCTagDisplayName", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCTagDisplayName_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics
	{
		struct UGC_eventGetSubscribedItems_Parms
		{
			TArray<FPublishedFileID> PublishedFileIDs;
			int32 MaxEntries;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, MaxEntries), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_PublishedFileIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_MaxEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetSubscribedItems", nullptr, nullptr, sizeof(UGC_eventGetSubscribedItems_Parms), Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetSubscribedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetUserItemVote_Statics
	{
		struct UGC_eventGetUserItemVote_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetUserItemVote_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnGetUserItemVote__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetUserItemVote", nullptr, nullptr, sizeof(UGC_eventGetUserItemVote_Parms), Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetUserItemVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics
	{
		struct UGC_eventReleaseQueryUGCRequest_Parms
		{
			FUGCQueryHandle Handle;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventReleaseQueryUGCRequest_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventReleaseQueryUGCRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventReleaseQueryUGCRequest_Parms), &Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "ReleaseQueryUGCRequest", nullptr, nullptr, sizeof(UGC_eventReleaseQueryUGCRequest_Parms), Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics
	{
		struct UGC_eventRemoveAppDependency_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
			int32 AppID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_AppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveAppDependency", nullptr, nullptr, sizeof(UGC_eventRemoveAppDependency_Parms), Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveAppDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveDependency_Statics
	{
		struct UGC_eventRemoveDependency_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID ParentPublishedFileID;
			FPublishedFileID ChildPublishedFileId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentPublishedFileID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildPublishedFileId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveUGCDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID = { "ParentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, ParentPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileId = { "ChildPublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, ChildPublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ParentPublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_ChildPublishedFileId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveDependency", nullptr, nullptr, sizeof(UGC_eventRemoveDependency_Parms), Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics
	{
		struct UGC_eventRemoveItemFromFavorites_Parms
		{
			FScriptDelegate Callback;
			int32 AppID;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveItemFromFavorites__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, AppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemFromFavorites", nullptr, nullptr, sizeof(UGC_eventRemoveItemFromFavorites_Parms), Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemFromFavorites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics
	{
		struct UGC_eventRemoveItemKeyValueTags_Parms
		{
			FUGCUpdateHandle Handle;
			FString Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemKeyValueTags_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key_MetaData)) };
	void Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventRemoveItemKeyValueTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventRemoveItemKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemKeyValueTags", nullptr, nullptr, sizeof(UGC_eventRemoveItemKeyValueTags_Parms), Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics
	{
		struct UGC_eventRemoveItemPreview_Parms
		{
			FUGCUpdateHandle Handle;
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemPreview_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventRemoveItemPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventRemoveItemPreview_Parms), &Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemPreview", nullptr, nullptr, sizeof(UGC_eventRemoveItemPreview_Parms), Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics
	{
		struct UGC_eventSendQueryUGCRequest_Parms
		{
			FScriptDelegate Callback;
			FUGCQueryHandle Handle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSendQueryUGCRequest_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSendQueryUGCRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSendQueryUGCRequest_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SendQueryUGCRequest", nullptr, nullptr, sizeof(UGC_eventSendQueryUGCRequest_Parms), Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SendQueryUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics
	{
		struct UGC_eventSetAllowCachedResponse_Parms
		{
			FUGCQueryHandle Handle;
			int32 MaxAgeSeconds;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAgeSeconds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetAllowCachedResponse_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetAllowCachedResponse_Parms, MaxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetAllowCachedResponse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetAllowCachedResponse_Parms), &Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetAllowCachedResponse", nullptr, nullptr, sizeof(UGC_eventSetAllowCachedResponse_Parms), Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetAllowCachedResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics
	{
		struct UGC_eventSetAllowLegacyUpload_Parms
		{
			FUGCUpdateHandle Handle;
			bool bAllowLegacyUpload;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bAllowLegacyUpload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowLegacyUpload;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetAllowLegacyUpload_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit(void* Obj)
	{
		((UGC_eventSetAllowLegacyUpload_Parms*)Obj)->bAllowLegacyUpload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload = { "bAllowLegacyUpload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetAllowLegacyUpload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetAllowLegacyUpload", nullptr, nullptr, sizeof(UGC_eventSetAllowLegacyUpload_Parms), Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetAllowLegacyUpload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics
	{
		struct UGC_eventSetCloudFileNameFilter_Parms
		{
			FUGCQueryHandle Handle;
			FString MatchCloudFileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchCloudFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchCloudFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetCloudFileNameFilter_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName = { "MatchCloudFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetCloudFileNameFilter_Parms, MatchCloudFileName), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetCloudFileNameFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetCloudFileNameFilter_Parms), &Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetCloudFileNameFilter", nullptr, nullptr, sizeof(UGC_eventSetCloudFileNameFilter_Parms), Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetCloudFileNameFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemContent_Statics
	{
		struct UGC_eventSetItemContent_Parms
		{
			FUGCUpdateHandle Handle;
			FString ContentFolder;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentFolder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemContent_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder = { "ContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemContent_Parms, ContentFolder), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemContent_Parms), &Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ContentFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemContent", nullptr, nullptr, sizeof(UGC_eventSetItemContent_Parms), Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemDescription_Statics
	{
		struct UGC_eventSetItemDescription_Parms
		{
			FUGCUpdateHandle Handle;
			FString Description;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemDescription_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemDescription_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemDescription_Parms), &Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemDescription", nullptr, nullptr, sizeof(UGC_eventSetItemDescription_Parms), Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemMetadata_Statics
	{
		struct UGC_eventSetItemMetadata_Parms
		{
			FUGCUpdateHandle Handle;
			FString MetaData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemMetadata_Parms, MetaData), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemMetadata_Parms), &Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemMetadata", nullptr, nullptr, sizeof(UGC_eventSetItemMetadata_Parms), Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemPreview_Statics
	{
		struct UGC_eventSetItemPreview_Parms
		{
			FUGCUpdateHandle Handle;
			FString PreviewFile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemPreview_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemPreview_Parms, PreviewFile), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemPreview_Parms), &Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_PreviewFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemPreview", nullptr, nullptr, sizeof(UGC_eventSetItemPreview_Parms), Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemTags_Statics
	{
		struct UGC_eventSetItemTags_Parms
		{
			FUGCUpdateHandle Handle;
			TArray<FString> Tags;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemTags_Parms), &Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemTags", nullptr, nullptr, sizeof(UGC_eventSetItemTags_Parms), Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemTitle_Statics
	{
		struct UGC_eventSetItemTitle_Parms
		{
			FUGCUpdateHandle Handle;
			FString Title;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemTitle_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemTitle_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemTitle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemTitle_Parms), &Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemTitle", nullptr, nullptr, sizeof(UGC_eventSetItemTitle_Parms), Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics
	{
		struct UGC_eventSetItemUpdateLanguage_Parms
		{
			FUGCUpdateHandle Handle;
			FString Language;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemUpdateLanguage_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemUpdateLanguage_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemUpdateLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemUpdateLanguage_Parms), &Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemUpdateLanguage", nullptr, nullptr, sizeof(UGC_eventSetItemUpdateLanguage_Parms), Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemUpdateLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemVisibility_Statics
	{
		struct UGC_eventSetItemVisibility_Parms
		{
			FUGCUpdateHandle Handle;
			ESteamRemoteStoragePublishedFileVisibility Visibility;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemVisibility_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemVisibility_Parms, Visibility), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemVisibility_Parms), &Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_Visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemVisibility", nullptr, nullptr, sizeof(UGC_eventSetItemVisibility_Parms), Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetLanguage_Statics
	{
		struct UGC_eventSetLanguage_Parms
		{
			FUGCQueryHandle Handle;
			FString Language;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetLanguage_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetLanguage_Parms, Language), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetLanguage_Parms), &Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetLanguage", nullptr, nullptr, sizeof(UGC_eventSetLanguage_Parms), Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics
	{
		struct UGC_eventSetMatchAnyTag_Parms
		{
			FUGCQueryHandle Handle;
			bool bMatchAnyTag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bMatchAnyTag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchAnyTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetMatchAnyTag_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit(void* Obj)
	{
		((UGC_eventSetMatchAnyTag_Parms*)Obj)->bMatchAnyTag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag = { "bMatchAnyTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetMatchAnyTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetMatchAnyTag", nullptr, nullptr, sizeof(UGC_eventSetMatchAnyTag_Parms), Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetMatchAnyTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics
	{
		struct UGC_eventSetRankedByTrendDays_Parms
		{
			FUGCQueryHandle Handle;
			int32 Days;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Days;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetRankedByTrendDays_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetRankedByTrendDays_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetRankedByTrendDays_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetRankedByTrendDays_Parms), &Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_Days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetRankedByTrendDays", nullptr, nullptr, sizeof(UGC_eventSetRankedByTrendDays_Parms), Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetRankedByTrendDays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics
	{
		struct UGC_eventSetReturnAdditionalPreviews_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnAdditionalPreviews;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnAdditionalPreviews_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnAdditionalPreviews;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnAdditionalPreviews_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit(void* Obj)
	{
		((UGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->bReturnAdditionalPreviews = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews = { "bReturnAdditionalPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnAdditionalPreviews", nullptr, nullptr, sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnChildren_Statics
	{
		struct UGC_eventSetReturnChildren_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnChildren;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnChildren_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
	{
		((UGC_eventSetReturnChildren_Parms*)Obj)->bReturnChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnChildren", nullptr, nullptr, sizeof(UGC_eventSetReturnChildren_Parms), Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics
	{
		struct UGC_eventSetReturnKeyValueTags_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnKeyValueTags;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnKeyValueTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnKeyValueTags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnKeyValueTags_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit(void* Obj)
	{
		((UGC_eventSetReturnKeyValueTags_Parms*)Obj)->bReturnKeyValueTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags = { "bReturnKeyValueTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnKeyValueTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnKeyValueTags", nullptr, nullptr, sizeof(UGC_eventSetReturnKeyValueTags_Parms), Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics
	{
		struct UGC_eventSetReturnLongDescription_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnLongDescription;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnLongDescription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnLongDescription;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnLongDescription_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit(void* Obj)
	{
		((UGC_eventSetReturnLongDescription_Parms*)Obj)->bReturnLongDescription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription = { "bReturnLongDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnLongDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnLongDescription", nullptr, nullptr, sizeof(UGC_eventSetReturnLongDescription_Parms), Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnLongDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics
	{
		struct UGC_eventSetReturnMetadata_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnMetadata;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnMetadata_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnMetadata;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnMetadata_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit(void* Obj)
	{
		((UGC_eventSetReturnMetadata_Parms*)Obj)->bReturnMetadata = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata = { "bReturnMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnMetadata", nullptr, nullptr, sizeof(UGC_eventSetReturnMetadata_Parms), Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics
	{
		struct UGC_eventSetReturnOnlyIDs_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnOnlyIDs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnOnlyIDs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnOnlyIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnOnlyIDs_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit(void* Obj)
	{
		((UGC_eventSetReturnOnlyIDs_Parms*)Obj)->bReturnOnlyIDs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs = { "bReturnOnlyIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnOnlyIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnOnlyIDs", nullptr, nullptr, sizeof(UGC_eventSetReturnOnlyIDs_Parms), Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnOnlyIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics
	{
		struct UGC_eventSetReturnPlaytimeStats_Parms
		{
			FUGCQueryHandle Handle;
			int32 Days;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Days;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnPlaytimeStats_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnPlaytimeStats_Parms, Days), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnPlaytimeStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnPlaytimeStats_Parms), &Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_Days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnPlaytimeStats", nullptr, nullptr, sizeof(UGC_eventSetReturnPlaytimeStats_Parms), Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics
	{
		struct UGC_eventSetReturnTotalOnly_Parms
		{
			FUGCQueryHandle Handle;
			bool bReturnTotalOnly;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bReturnTotalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnTotalOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnTotalOnly_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit(void* Obj)
	{
		((UGC_eventSetReturnTotalOnly_Parms*)Obj)->bReturnTotalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly = { "bReturnTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnTotalOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnTotalOnly", nullptr, nullptr, sizeof(UGC_eventSetReturnTotalOnly_Parms), Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnTotalOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetSearchText_Statics
	{
		struct UGC_eventSetSearchText_Parms
		{
			FUGCQueryHandle Handle;
			FString SearchText;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetSearchText_Parms, Handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetSearchText_Parms, SearchText), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText_MetaData)) };
	void Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetSearchText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetSearchText_Parms), &Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_SearchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetSearchText", nullptr, nullptr, sizeof(UGC_eventSetSearchText_Parms), Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetUserItemVote_Statics
	{
		struct UGC_eventSetUserItemVote_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
			bool bVoteUp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static void NewProp_bVoteUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetUserItemVote_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSetUserItemVote__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetUserItemVote_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit(void* Obj)
	{
		((UGC_eventSetUserItemVote_Parms*)Obj)->bVoteUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetUserItemVote_Parms), &Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetUserItemVote", nullptr, nullptr, sizeof(UGC_eventSetUserItemVote_Parms), Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetUserItemVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StartItemUpdate_Statics
	{
		struct UGC_eventStartItemUpdate_Parms
		{
			int32 ConsumerAppID;
			FPublishedFileID PublishedFileID;
			FUGCUpdateHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, ConsumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ConsumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StartItemUpdate", nullptr, nullptr, sizeof(UGC_eventStartItemUpdate_Parms), Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StartItemUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics
	{
		struct UGC_eventStartPlaytimeTracking_Parms
		{
			FScriptDelegate Callback;
			TArray<FPublishedFileID> PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartPlaytimeTracking_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStartPlaytimeTracking__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner = { "PublishedFileID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartPlaytimeTracking_Parms, PublishedFileID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StartPlaytimeTracking", nullptr, nullptr, sizeof(UGC_eventStartPlaytimeTracking_Parms), Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StartPlaytimeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics
	{
		struct UGC_eventStopPlaytimeTracking_Parms
		{
			FScriptDelegate Callback;
			TArray<FPublishedFileID> PublishedFileIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTracking_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTracking__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTracking_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_PublishedFileIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StopPlaytimeTracking", nullptr, nullptr, sizeof(UGC_eventStopPlaytimeTracking_Parms), Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StopPlaytimeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics
	{
		struct UGC_eventStopPlaytimeTrackingForAllItems_Parms
		{
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTrackingForAllItems_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTrackingForAllItems__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StopPlaytimeTrackingForAllItems", nullptr, nullptr, sizeof(UGC_eventStopPlaytimeTrackingForAllItems_Parms), Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics
	{
		struct UGC_eventSubmitItemUpdate_Parms
		{
			FScriptDelegate Callback;
			FUGCUpdateHandle Handle;
			FString ChangeNote;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeNote_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChangeNote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSubmitItemUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote = { "ChangeNote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, ChangeNote), METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_ChangeNote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SubmitItemUpdate", nullptr, nullptr, sizeof(UGC_eventSubmitItemUpdate_Parms), Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SubmitItemUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SubscribeItem_Statics
	{
		struct UGC_eventSubscribeItem_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubscribeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnSubscribeItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SubscribeItem", nullptr, nullptr, sizeof(UGC_eventSubscribeItem_Parms), Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SubscribeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SubscribeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SuspendDownloads_Statics
	{
		struct UGC_eventSuspendDownloads_Parms
		{
			bool bSuspend;
		};
		static void NewProp_bSuspend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit(void* Obj)
	{
		((UGC_eventSuspendDownloads_Parms*)Obj)->bSuspend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSuspendDownloads_Parms), &Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SuspendDownloads", nullptr, nullptr, sizeof(UGC_eventSuspendDownloads_Parms), Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SuspendDownloads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics
	{
		struct UGC_eventUnsubscribeItem_Parms
		{
			FScriptDelegate Callback;
			FPublishedFileID PublishedFileID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUnsubscribeItem_Parms, Callback), Z_Construct_UDelegateFunction_SteamCore_OnUnsubscribeItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUnsubscribeItem_Parms, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_PublishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UnsubscribeItem", nullptr, nullptr, sizeof(UGC_eventUnsubscribeItem_Parms), Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UnsubscribeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics
	{
		struct UGC_eventUpdateItemPreviewFile_Parms
		{
			FUGCUpdateHandle Handle;
			int32 Index;
			FString PreviewFile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile_MetaData)) };
	void Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventUpdateItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventUpdateItemPreviewFile_Parms), &Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_PreviewFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UpdateItemPreviewFile", nullptr, nullptr, sizeof(UGC_eventUpdateItemPreviewFile_Parms), Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UpdateItemPreviewFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics
	{
		struct UGC_eventUpdateItemPreviewVideo_Parms
		{
			FUGCUpdateHandle Handle;
			int32 Index;
			FString PreviewVideo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewVideo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviewVideo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, Handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo = { "PreviewVideo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, PreviewVideo), METADATA_PARAMS(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo_MetaData)) };
	void Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventUpdateItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventUpdateItemPreviewVideo_Parms), &Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_PreviewVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UpdateItemPreviewVideo", nullptr, nullptr, sizeof(UGC_eventUpdateItemPreviewVideo_Parms), Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUGC_NoRegister()
	{
		return UUGC::StaticClass();
	}
	struct Z_Construct_UClass_UUGC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInstalled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemInstalled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadItemResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadItemResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGC_AddAppDependency, "AddAppDependency" }, // 2986597188
		{ &Z_Construct_UFunction_UUGC_AddDependency, "AddDependency" }, // 1135562545
		{ &Z_Construct_UFunction_UUGC_AddExcludedTag, "AddExcludedTag" }, // 2691399270
		{ &Z_Construct_UFunction_UUGC_AddItemKeyValueTag, "AddItemKeyValueTag" }, // 1945517887
		{ &Z_Construct_UFunction_UUGC_AddItemPreviewFile, "AddItemPreviewFile" }, // 1641161503
		{ &Z_Construct_UFunction_UUGC_AddItemPreviewVideo, "AddItemPreviewVideo" }, // 1504883503
		{ &Z_Construct_UFunction_UUGC_AddItemToFavorites, "AddItemToFavorites" }, // 2580920504
		{ &Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag, "AddRequiredKeyValueTag" }, // 3304710159
		{ &Z_Construct_UFunction_UUGC_AddRequiredTag, "AddRequiredTag" }, // 3041791690
		{ &Z_Construct_UFunction_UUGC_AddRequiredTagGroup, "AddRequiredTagGroup" }, // 1444848180
		{ &Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer, "BInitWorkshopForGameServer" }, // 1143576405
		{ &Z_Construct_UFunction_UUGC_CreateItem, "CreateItem" }, // 4112105113
		{ &Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest, "CreateQueryAllUGCRequest" }, // 3920723475
		{ &Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest, "CreateQueryUGCDetailsRequest" }, // 898559819
		{ &Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest, "CreateQueryUserUGCRequest" }, // 1301557149
		{ &Z_Construct_UFunction_UUGC_DeleteItem, "DeleteItem" }, // 272818722
		{ &Z_Construct_UFunction_UUGC_DownloadItem, "DownloadItem" }, // 3096793371
		{ &Z_Construct_UFunction_UUGC_GetAppDependencies, "GetAppDependencies" }, // 2446466978
		{ &Z_Construct_UFunction_UUGC_GetItemDownloadInfo, "GetItemDownloadInfo" }, // 2276660965
		{ &Z_Construct_UFunction_UUGC_GetItemInstallInfo, "GetItemInstallInfo" }, // 2181190633
		{ &Z_Construct_UFunction_UUGC_GetItemState, "GetItemState" }, // 1757806801
		{ &Z_Construct_UFunction_UUGC_GetItemUpdateProgress, "GetItemUpdateProgress" }, // 852629889
		{ &Z_Construct_UFunction_UUGC_GetNumSubscribedItems, "GetNumSubscribedItems" }, // 2836064407
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview, "GetQueryUGCAdditionalPreview" }, // 2790067578
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCChildren, "GetQueryUGCChildren" }, // 1199817092
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag, "GetQueryUGCKeyValueTag" }, // 2049321038
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCMetadata, "GetQueryUGCMetadata" }, // 4174253246
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews, "GetQueryUGCNumAdditionalPreviews" }, // 948938163
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags, "GetQueryUGCNumKeyValueTags" }, // 3099545375
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumTags, "GetQueryUGCNumTags" }, // 3837073897
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL, "GetQueryUGCPreviewURL" }, // 1748392217
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCResult, "GetQueryUGCResult" }, // 3376291717
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCStatistic, "GetQueryUGCStatistic" }, // 2179432995
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCTag, "GetQueryUGCTag" }, // 3073500696
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCTagDisplayName, "GetQueryUGCTagDisplayName" }, // 3940251948
		{ &Z_Construct_UFunction_UUGC_GetSubscribedItems, "GetSubscribedItems" }, // 2962543873
		{ &Z_Construct_UFunction_UUGC_GetUserItemVote, "GetUserItemVote" }, // 1560379129
		{ &Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest, "ReleaseQueryUGCRequest" }, // 3331689641
		{ &Z_Construct_UFunction_UUGC_RemoveAppDependency, "RemoveAppDependency" }, // 51702149
		{ &Z_Construct_UFunction_UUGC_RemoveDependency, "RemoveDependency" }, // 1212761135
		{ &Z_Construct_UFunction_UUGC_RemoveItemFromFavorites, "RemoveItemFromFavorites" }, // 2217659380
		{ &Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags, "RemoveItemKeyValueTags" }, // 1915170416
		{ &Z_Construct_UFunction_UUGC_RemoveItemPreview, "RemoveItemPreview" }, // 12177005
		{ &Z_Construct_UFunction_UUGC_SendQueryUGCRequest, "SendQueryUGCRequest" }, // 3796315055
		{ &Z_Construct_UFunction_UUGC_SetAllowCachedResponse, "SetAllowCachedResponse" }, // 2394107967
		{ &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload, "SetAllowLegacyUpload" }, // 3800472732
		{ &Z_Construct_UFunction_UUGC_SetCloudFileNameFilter, "SetCloudFileNameFilter" }, // 19472782
		{ &Z_Construct_UFunction_UUGC_SetItemContent, "SetItemContent" }, // 3079241302
		{ &Z_Construct_UFunction_UUGC_SetItemDescription, "SetItemDescription" }, // 1593544197
		{ &Z_Construct_UFunction_UUGC_SetItemMetadata, "SetItemMetadata" }, // 2823645973
		{ &Z_Construct_UFunction_UUGC_SetItemPreview, "SetItemPreview" }, // 2702999979
		{ &Z_Construct_UFunction_UUGC_SetItemTags, "SetItemTags" }, // 4049256128
		{ &Z_Construct_UFunction_UUGC_SetItemTitle, "SetItemTitle" }, // 1617425109
		{ &Z_Construct_UFunction_UUGC_SetItemUpdateLanguage, "SetItemUpdateLanguage" }, // 832115018
		{ &Z_Construct_UFunction_UUGC_SetItemVisibility, "SetItemVisibility" }, // 403985912
		{ &Z_Construct_UFunction_UUGC_SetLanguage, "SetLanguage" }, // 2849832692
		{ &Z_Construct_UFunction_UUGC_SetMatchAnyTag, "SetMatchAnyTag" }, // 3461755876
		{ &Z_Construct_UFunction_UUGC_SetRankedByTrendDays, "SetRankedByTrendDays" }, // 275486517
		{ &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews, "SetReturnAdditionalPreviews" }, // 1601304339
		{ &Z_Construct_UFunction_UUGC_SetReturnChildren, "SetReturnChildren" }, // 3035407890
		{ &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags, "SetReturnKeyValueTags" }, // 2533636818
		{ &Z_Construct_UFunction_UUGC_SetReturnLongDescription, "SetReturnLongDescription" }, // 96755845
		{ &Z_Construct_UFunction_UUGC_SetReturnMetadata, "SetReturnMetadata" }, // 2643365248
		{ &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs, "SetReturnOnlyIDs" }, // 2192291409
		{ &Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats, "SetReturnPlaytimeStats" }, // 403239845
		{ &Z_Construct_UFunction_UUGC_SetReturnTotalOnly, "SetReturnTotalOnly" }, // 2014906404
		{ &Z_Construct_UFunction_UUGC_SetSearchText, "SetSearchText" }, // 1409943599
		{ &Z_Construct_UFunction_UUGC_SetUserItemVote, "SetUserItemVote" }, // 3664076873
		{ &Z_Construct_UFunction_UUGC_StartItemUpdate, "StartItemUpdate" }, // 3894603577
		{ &Z_Construct_UFunction_UUGC_StartPlaytimeTracking, "StartPlaytimeTracking" }, // 616521234
		{ &Z_Construct_UFunction_UUGC_StopPlaytimeTracking, "StopPlaytimeTracking" }, // 729043731
		{ &Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems, "StopPlaytimeTrackingForAllItems" }, // 3174927082
		{ &Z_Construct_UFunction_UUGC_SubmitItemUpdate, "SubmitItemUpdate" }, // 4072802893
		{ &Z_Construct_UFunction_UUGC_SubscribeItem, "SubscribeItem" }, // 2523185282
		{ &Z_Construct_UFunction_UUGC_SuspendDownloads, "SuspendDownloads" }, // 1992650272
		{ &Z_Construct_UFunction_UUGC_UnsubscribeItem, "UnsubscribeItem" }, // 1064910556
		{ &Z_Construct_UFunction_UUGC_UpdateItemPreviewFile, "UpdateItemPreviewFile" }, // 2610081022
		{ &Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo, "UpdateItemPreviewVideo" }, // 1118170
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UGC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UGC" },
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled = { "ItemInstalled", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGC, ItemInstalled), Z_Construct_UDelegateFunction_SteamCore_OnItemInstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UGC" },
		{ "ModuleRelativePath", "Public/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult = { "DownloadItemResult", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGC, DownloadItemResult), Z_Construct_UDelegateFunction_SteamCore_OnDownloadItemResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUGC_Statics::ClassParams = {
		&UUGC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUGC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUGC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUGC, 384506927);
	template<> STEAMCORE_API UClass* StaticClass<UUGC>()
	{
		return UUGC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUGC(Z_Construct_UClass_UUGC, &UUGC::StaticClass, TEXT("/Script/SteamCore"), TEXT("UUGC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
