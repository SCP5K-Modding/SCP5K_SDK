// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordImage/Public/DiscordImageDimensions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordImageDimensions() {}
// Cross Module References
	DISCORDIMAGE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordImageDimensions();
	UPackage* Z_Construct_UPackage__Script_DiscordImage();
// End Cross Module References
class UScriptStruct* FDiscordImageDimensions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDIMAGE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordImageDimensions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordImageDimensions, Z_Construct_UPackage__Script_DiscordImage(), TEXT("DiscordImageDimensions"), sizeof(FDiscordImageDimensions), Get_Z_Construct_UScriptStruct_FDiscordImageDimensions_Hash());
	}
	return Singleton;
}
template<> DISCORDIMAGE_API UScriptStruct* StaticStruct<FDiscordImageDimensions>()
{
	return FDiscordImageDimensions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordImageDimensions(FDiscordImageDimensions::StaticStruct, TEXT("/Script/DiscordImage"), TEXT("DiscordImageDimensions"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordImage_StaticRegisterNativesFDiscordImageDimensions
{
	FScriptStruct_DiscordImage_StaticRegisterNativesFDiscordImageDimensions()
	{
		UScriptStruct::DeferCppStructOps<FDiscordImageDimensions>(FName(TEXT("DiscordImageDimensions")));
	}
} ScriptStruct_DiscordImage_StaticRegisterNativesFDiscordImageDimensions;
	struct Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordImageDimensions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordImageDimensions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordImageDimensions" },
		{ "ModuleRelativePath", "Public/DiscordImageDimensions.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordImageDimensions, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordImageDimensions" },
		{ "ModuleRelativePath", "Public/DiscordImageDimensions.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordImageDimensions, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Height_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::NewProp_Height,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordImage,
		nullptr,
		&NewStructOps,
		"DiscordImageDimensions",
		sizeof(FDiscordImageDimensions),
		alignof(FDiscordImageDimensions),
		Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordImageDimensions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordImageDimensions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordImage();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordImageDimensions"), sizeof(FDiscordImageDimensions), Get_Z_Construct_UScriptStruct_FDiscordImageDimensions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordImageDimensions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordImageDimensions_Hash() { return 632496277U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
