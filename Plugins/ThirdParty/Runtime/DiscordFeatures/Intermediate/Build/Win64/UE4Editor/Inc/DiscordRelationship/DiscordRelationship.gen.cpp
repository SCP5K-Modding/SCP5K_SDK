// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordRelationship/Public/DiscordRelationship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordRelationship() {}
// Cross Module References
	DISCORDRELATIONSHIP_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordRelationship();
	UPackage* Z_Construct_UPackage__Script_DiscordRelationship();
	DISCORDRELATIONSHIP_API UEnum* Z_Construct_UEnum_DiscordRelationship_EDiscordRelationshipType();
	DISCORDCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordUser();
	DISCORDRELATIONSHIP_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordPresence();
// End Cross Module References
class UScriptStruct* FDiscordRelationship::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDRELATIONSHIP_API uint32 Get_Z_Construct_UScriptStruct_FDiscordRelationship_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordRelationship, Z_Construct_UPackage__Script_DiscordRelationship(), TEXT("DiscordRelationship"), sizeof(FDiscordRelationship), Get_Z_Construct_UScriptStruct_FDiscordRelationship_Hash());
	}
	return Singleton;
}
template<> DISCORDRELATIONSHIP_API UScriptStruct* StaticStruct<FDiscordRelationship>()
{
	return FDiscordRelationship::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordRelationship(FDiscordRelationship::StaticStruct, TEXT("/Script/DiscordRelationship"), TEXT("DiscordRelationship"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordRelationship_StaticRegisterNativesFDiscordRelationship
{
	FScriptStruct_DiscordRelationship_StaticRegisterNativesFDiscordRelationship()
	{
		UScriptStruct::DeferCppStructOps<FDiscordRelationship>(FName(TEXT("DiscordRelationship")));
	}
} ScriptStruct_DiscordRelationship_StaticRegisterNativesFDiscordRelationship;
	struct Z_Construct_UScriptStruct_FDiscordRelationship_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRelationship_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordRelationship.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordRelationship>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordRelationship" },
		{ "ModuleRelativePath", "Public/DiscordRelationship.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRelationship, Type), Z_Construct_UEnum_DiscordRelationship_EDiscordRelationshipType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_User_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordRelationship" },
		{ "ModuleRelativePath", "Public/DiscordRelationship.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRelationship, User), Z_Construct_UScriptStruct_FDiscordUser, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_User_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_User_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Presence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordRelationship" },
		{ "ModuleRelativePath", "Public/DiscordRelationship.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordRelationship, Presence), Z_Construct_UScriptStruct_FDiscordPresence, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Presence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Presence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordRelationship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordRelationship_Statics::NewProp_Presence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordRelationship_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordRelationship,
		nullptr,
		&NewStructOps,
		"DiscordRelationship",
		sizeof(FDiscordRelationship),
		alignof(FDiscordRelationship),
		Z_Construct_UScriptStruct_FDiscordRelationship_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordRelationship_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordRelationship()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordRelationship_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordRelationship();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordRelationship"), sizeof(FDiscordRelationship), Get_Z_Construct_UScriptStruct_FDiscordRelationship_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordRelationship_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordRelationship_Hash() { return 1309783843U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
