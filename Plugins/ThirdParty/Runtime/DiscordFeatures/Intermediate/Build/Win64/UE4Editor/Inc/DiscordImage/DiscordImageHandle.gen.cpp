// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordImage/Public/DiscordImageHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordImageHandle() {}
// Cross Module References
	DISCORDIMAGE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordImageHandle();
	UPackage* Z_Construct_UPackage__Script_DiscordImage();
	DISCORDIMAGE_API UEnum* Z_Construct_UEnum_DiscordImage_EDiscordImageType();
// End Cross Module References
class UScriptStruct* FDiscordImageHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDIMAGE_API uint32 Get_Z_Construct_UScriptStruct_FDiscordImageHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordImageHandle, Z_Construct_UPackage__Script_DiscordImage(), TEXT("DiscordImageHandle"), sizeof(FDiscordImageHandle), Get_Z_Construct_UScriptStruct_FDiscordImageHandle_Hash());
	}
	return Singleton;
}
template<> DISCORDIMAGE_API UScriptStruct* StaticStruct<FDiscordImageHandle>()
{
	return FDiscordImageHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordImageHandle(FDiscordImageHandle::StaticStruct, TEXT("/Script/DiscordImage"), TEXT("DiscordImageHandle"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordImage_StaticRegisterNativesFDiscordImageHandle
{
	FScriptStruct_DiscordImage_StaticRegisterNativesFDiscordImageHandle()
	{
		UScriptStruct::DeferCppStructOps<FDiscordImageHandle>(FName(TEXT("DiscordImageHandle")));
	}
} ScriptStruct_DiscordImage_StaticRegisterNativesFDiscordImageHandle;
	struct Z_Construct_UScriptStruct_FDiscordImageHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordImageHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordImageHandle>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordImageHandle" },
		{ "ModuleRelativePath", "Public/DiscordImageHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordImageHandle, Type), Z_Construct_UEnum_DiscordImage_EDiscordImageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordImageHandle" },
		{ "ModuleRelativePath", "Public/DiscordImageHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordImageHandle, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordImageHandle" },
		{ "ModuleRelativePath", "Public/DiscordImageHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordImageHandle, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::NewProp_Size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordImage,
		nullptr,
		&NewStructOps,
		"DiscordImageHandle",
		sizeof(FDiscordImageHandle),
		alignof(FDiscordImageHandle),
		Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordImageHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordImageHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordImage();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordImageHandle"), sizeof(FDiscordImageHandle), Get_Z_Construct_UScriptStruct_FDiscordImageHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordImageHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordImageHandle_Hash() { return 3659523652U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
