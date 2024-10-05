// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Public/BPSteamWorkshopItemDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPSteamWorkshopItemDetails() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult();
	ADVANCEDSTEAMSESSIONS_API UEnum* Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType();
// End Cross Module References
class UScriptStruct* FBPSteamWorkshopItemDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSTEAMSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails, Z_Construct_UPackage__Script_AdvancedSteamSessions(), TEXT("BPSteamWorkshopItemDetails"), sizeof(FBPSteamWorkshopItemDetails), Get_Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSTEAMSESSIONS_API UScriptStruct* StaticStruct<FBPSteamWorkshopItemDetails>()
{
	return FBPSteamWorkshopItemDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPSteamWorkshopItemDetails(FBPSteamWorkshopItemDetails::StaticStruct, TEXT("/Script/AdvancedSteamSessions"), TEXT("BPSteamWorkshopItemDetails"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamWorkshopItemDetails
{
	FScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamWorkshopItemDetails()
	{
		UScriptStruct::DeferCppStructOps<FBPSteamWorkshopItemDetails>(FName(TEXT("BPSteamWorkshopItemDetails")));
	}
} ScriptStruct_AdvancedSteamSessions_StaticRegisterNativesFBPSteamWorkshopItemDetails;
	struct Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResultOfRequest_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultOfRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResultOfRequest;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VotesUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VotesUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VotesDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VotesDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalculatedScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalculatedScore;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatorSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreatorSteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPSteamWorkshopItemDetails>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest = { "ResultOfRequest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, ResultOfRequest), Z_Construct_UEnum_AdvancedSteamSessions_FBPSteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, FileType), Z_Construct_UEnum_AdvancedSteamSessions_FBPWorkshopFileType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, CreatorAppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, ConsumerAppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl = { "ItemUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, ItemUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp = { "VotesUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, VotesUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown = { "VotesDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, VotesDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore = { "CalculatedScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, CalculatedScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_SetBit(void* Obj)
	{
		((FBPSteamWorkshopItemDetails*)Obj)->bBanned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned = { "bBanned", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSteamWorkshopItemDetails), &Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_SetBit(void* Obj)
	{
		((FBPSteamWorkshopItemDetails*)Obj)->bAcceptedForUse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse = { "bAcceptedForUse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSteamWorkshopItemDetails), &Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_SetBit(void* Obj)
	{
		((FBPSteamWorkshopItemDetails*)Obj)->bTagsTruncated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated = { "bTagsTruncated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBPSteamWorkshopItemDetails), &Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPSteamWorkshopItemDetails" },
		{ "ModuleRelativePath", "Public/BPSteamWorkshopItemDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID = { "CreatorSteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPSteamWorkshopItemDetails, CreatorSteamID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ResultOfRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_FileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ConsumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_ItemUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_VotesDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CalculatedScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bBanned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bAcceptedForUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_bTagsTruncated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::NewProp_CreatorSteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
		nullptr,
		&NewStructOps,
		"BPSteamWorkshopItemDetails",
		sizeof(FBPSteamWorkshopItemDetails),
		alignof(FBPSteamWorkshopItemDetails),
		Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSteamSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPSteamWorkshopItemDetails"), sizeof(FBPSteamWorkshopItemDetails), Get_Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPSteamWorkshopItemDetails_Hash() { return 3837205424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
