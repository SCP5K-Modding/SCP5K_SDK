// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/AvatarImageLoaded.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatarImageLoaded() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarImageLoaded();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FAvatarImageLoaded::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FAvatarImageLoaded_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarImageLoaded, Z_Construct_UPackage__Script_SteamCore(), TEXT("AvatarImageLoaded"), sizeof(FAvatarImageLoaded), Get_Z_Construct_UScriptStruct_FAvatarImageLoaded_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FAvatarImageLoaded>()
{
	return FAvatarImageLoaded::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAvatarImageLoaded(FAvatarImageLoaded::StaticStruct, TEXT("/Script/SteamCore"), TEXT("AvatarImageLoaded"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFAvatarImageLoaded
{
	FScriptStruct_SteamCore_StaticRegisterNativesFAvatarImageLoaded()
	{
		UScriptStruct::DeferCppStructOps<FAvatarImageLoaded>(FName(TEXT("AvatarImageLoaded")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFAvatarImageLoaded;
	struct Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AvatarImageLoaded.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarImageLoaded>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AvatarImageLoaded" },
		{ "ModuleRelativePath", "Public/AvatarImageLoaded.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarImageLoaded, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_Image_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AvatarImageLoaded" },
		{ "ModuleRelativePath", "Public/AvatarImageLoaded.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarImageLoaded, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::NewProp_Image,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"AvatarImageLoaded",
		sizeof(FAvatarImageLoaded),
		alignof(FAvatarImageLoaded),
		Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarImageLoaded()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAvatarImageLoaded_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AvatarImageLoaded"), sizeof(FAvatarImageLoaded), Get_Z_Construct_UScriptStruct_FAvatarImageLoaded_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAvatarImageLoaded_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAvatarImageLoaded_Hash() { return 628117522U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
