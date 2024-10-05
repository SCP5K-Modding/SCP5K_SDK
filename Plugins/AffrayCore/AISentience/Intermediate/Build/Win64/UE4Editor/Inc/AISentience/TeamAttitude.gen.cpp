// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/TeamAttitude.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeamAttitude() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTeamAttitude();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAITeam();
// End Cross Module References
class UScriptStruct* FTeamAttitude::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FTeamAttitude_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTeamAttitude, Z_Construct_UPackage__Script_AISentience(), TEXT("TeamAttitude"), sizeof(FTeamAttitude), Get_Z_Construct_UScriptStruct_FTeamAttitude_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FTeamAttitude>()
{
	return FTeamAttitude::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTeamAttitude(FTeamAttitude::StaticStruct, TEXT("/Script/AISentience"), TEXT("TeamAttitude"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFTeamAttitude
{
	FScriptStruct_AISentience_StaticRegisterNativesFTeamAttitude()
	{
		UScriptStruct::DeferCppStructOps<FTeamAttitude>(FName(TEXT("TeamAttitude")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFTeamAttitude;
	struct Z_Construct_UScriptStruct_FTeamAttitude_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRelationship_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultRelationship;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attitudes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attitudes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attitudes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attitudes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Attitudes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamAttitude_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TeamAttitude.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTeamAttitude>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_DefaultRelationship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamAttitude" },
		{ "ModuleRelativePath", "Public/TeamAttitude.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_DefaultRelationship = { "DefaultRelationship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamAttitude, DefaultRelationship), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_DefaultRelationship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_DefaultRelationship_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_ValueProp = { "Attitudes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_Key_KeyProp = { "Attitudes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AISentience_ESAITeam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TeamAttitude" },
		{ "ModuleRelativePath", "Public/TeamAttitude.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes = { "Attitudes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTeamAttitude, Attitudes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTeamAttitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_DefaultRelationship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTeamAttitude_Statics::NewProp_Attitudes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTeamAttitude_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"TeamAttitude",
		sizeof(FTeamAttitude),
		alignof(FTeamAttitude),
		Z_Construct_UScriptStruct_FTeamAttitude_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamAttitude_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTeamAttitude_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTeamAttitude_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTeamAttitude()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTeamAttitude_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TeamAttitude"), sizeof(FTeamAttitude), Get_Z_Construct_UScriptStruct_FTeamAttitude_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTeamAttitude_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTeamAttitude_Hash() { return 737195177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
