// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamUGCDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUGCDetails() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCDetails();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
// End Cross Module References
class UScriptStruct* FSteamUGCDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamUGCDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamUGCDetails, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamUGCDetails"), sizeof(FSteamUGCDetails), Get_Z_Construct_UScriptStruct_FSteamUGCDetails_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamUGCDetails>()
{
	return FSteamUGCDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamUGCDetails(FSteamUGCDetails::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamUGCDetails"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCDetails
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCDetails()
	{
		UScriptStruct::DeferCppStructOps<FSteamUGCDetails>(FName(TEXT("SteamUGCDetails")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCDetails;
	struct Z_Construct_UScriptStruct_FSteamUGCDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FileType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FileType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatorAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreatorAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumerAppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConsumerAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeAddedToUserList_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeAddedToUserList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBanned_MetaData[];
#endif
		static void NewProp_bBanned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBanned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAcceptedForUse_MetaData[];
#endif
		static void NewProp_bAcceptedForUse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAcceptedForUse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTagsTruncated_MetaData[];
#endif
		static void NewProp_bTagsTruncated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTagsTruncated;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_File;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewFileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewFileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VotesUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VotesUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VotesDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VotesDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChildren_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChildren;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamUGCDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PublishedFileID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, FileType), Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_CreatorAppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, CreatorAppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_CreatorAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_CreatorAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_ConsumerAppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, ConsumerAppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_ConsumerAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_ConsumerAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_SteamIDOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_SteamIDOwner = { "SteamIDOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, SteamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_SteamIDOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_SteamIDOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeCreated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeCreated = { "TimeCreated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, TimeCreated), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeUpdated = { "TimeUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, TimeUpdated), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeAddedToUserList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeAddedToUserList = { "TimeAddedToUserList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, TimeAddedToUserList), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeAddedToUserList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeAddedToUserList_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Visibility_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, Visibility), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Visibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bBanned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((FSteamUGCDetails*)Obj)->bBanned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamUGCDetails), &Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bBanned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bBanned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bAcceptedForUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bAcceptedForUse_SetBit(void* Obj)
	{
		((FSteamUGCDetails*)Obj)->bAcceptedForUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bAcceptedForUse = { "bAcceptedForUse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamUGCDetails), &Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bAcceptedForUse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bAcceptedForUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bAcceptedForUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bTagsTruncated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bTagsTruncated_SetBit(void* Obj)
	{
		((FSteamUGCDetails*)Obj)->bTagsTruncated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bTagsTruncated = { "bTagsTruncated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamUGCDetails), &Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bTagsTruncated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bTagsTruncated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bTagsTruncated_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_File_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, File), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, PreviewFile), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFileSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFileSize = { "PreviewFileSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, PreviewFileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesUp = { "VotesUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, VotesUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesDown = { "VotesDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, VotesDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_NumChildren_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SteamUGCDetails" },
		{ "ModuleRelativePath", "Public/SteamUGCDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_NumChildren = { "NumChildren", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamUGCDetails, NumChildren), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_NumChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_NumChildren_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_CreatorAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_ConsumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_SteamIDOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_TimeAddedToUserList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Visibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bBanned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bAcceptedForUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_bTagsTruncated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_FileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_PreviewFileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_VotesDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::NewProp_NumChildren,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamUGCDetails",
		sizeof(FSteamUGCDetails),
		alignof(FSteamUGCDetails),
		Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamUGCDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamUGCDetails"), sizeof(FSteamUGCDetails), Get_Z_Construct_UScriptStruct_FSteamUGCDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamUGCDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamUGCDetails_Hash() { return 3714690639U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
