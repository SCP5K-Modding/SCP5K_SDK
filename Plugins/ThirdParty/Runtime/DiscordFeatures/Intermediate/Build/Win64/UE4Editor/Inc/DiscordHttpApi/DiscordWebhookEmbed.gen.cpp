// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordHttpApi/Public/DiscordWebhookEmbed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordWebhookEmbed() {}
// Cross Module References
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbed();
	UPackage* Z_Construct_UPackage__Script_DiscordHttpApi();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedImage();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedThumbnail();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedVideo();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor();
	DISCORDHTTPAPI_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbedField();
// End Cross Module References
class UScriptStruct* FDiscordWebhookEmbed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDHTTPAPI_API uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordWebhookEmbed, Z_Construct_UPackage__Script_DiscordHttpApi(), TEXT("DiscordWebhookEmbed"), sizeof(FDiscordWebhookEmbed), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Hash());
	}
	return Singleton;
}
template<> DISCORDHTTPAPI_API UScriptStruct* StaticStruct<FDiscordWebhookEmbed>()
{
	return FDiscordWebhookEmbed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordWebhookEmbed(FDiscordWebhookEmbed::StaticStruct, TEXT("/Script/DiscordHttpApi"), TEXT("DiscordWebhookEmbed"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbed
{
	FScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbed()
	{
		UScriptStruct::DeferCppStructOps<FDiscordWebhookEmbed>(FName(TEXT("DiscordWebhookEmbed")));
	}
} ScriptStruct_DiscordHttpApi_StaticRegisterNativesFDiscordWebhookEmbed;
	struct Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Footer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Footer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Video;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Author;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Field_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Field;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordWebhookEmbed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Timestamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Color), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Footer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Footer = { "Footer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Footer), Z_Construct_UScriptStruct_FDiscordWebhookEmbedFooter, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Footer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Footer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Image_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Image), Z_Construct_UScriptStruct_FDiscordWebhookEmbedImage, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Thumbnail), Z_Construct_UScriptStruct_FDiscordWebhookEmbedThumbnail, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Video_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Video), Z_Construct_UScriptStruct_FDiscordWebhookEmbedVideo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Video_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Video_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Provider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Provider), Z_Construct_UScriptStruct_FDiscordWebhookEmbedProvider, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Author_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Author), Z_Construct_UScriptStruct_FDiscordWebhookEmbedAuthor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Author_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Field_Inner = { "Field", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDiscordWebhookEmbedField, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Field_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordWebhookEmbed" },
		{ "ModuleRelativePath", "Public/DiscordWebhookEmbed.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordWebhookEmbed, Field), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Field_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Footer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Video,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Author,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Field_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::NewProp_Field,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordHttpApi,
		nullptr,
		&NewStructOps,
		"DiscordWebhookEmbed",
		sizeof(FDiscordWebhookEmbed),
		alignof(FDiscordWebhookEmbed),
		Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordWebhookEmbed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordHttpApi();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordWebhookEmbed"), sizeof(FDiscordWebhookEmbed), Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordWebhookEmbed_Hash() { return 2336923079U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
