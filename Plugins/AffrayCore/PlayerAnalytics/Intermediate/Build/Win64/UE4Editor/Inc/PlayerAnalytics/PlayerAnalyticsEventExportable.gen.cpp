// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerAnalytics/Public/PlayerAnalyticsEventExportable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnalyticsEventExportable() {}
// Cross Module References
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable();
	UPackage* Z_Construct_UPackage__Script_PlayerAnalytics();
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsEvent();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerAnalyticsEventExportable>() == std::is_polymorphic<FPlayerAnalyticsEvent>(), "USTRUCT FPlayerAnalyticsEventExportable cannot be polymorphic unless super FPlayerAnalyticsEvent is polymorphic");

class UScriptStruct* FPlayerAnalyticsEventExportable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYERANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable, Z_Construct_UPackage__Script_PlayerAnalytics(), TEXT("PlayerAnalyticsEventExportable"), sizeof(FPlayerAnalyticsEventExportable), Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Hash());
	}
	return Singleton;
}
template<> PLAYERANALYTICS_API UScriptStruct* StaticStruct<FPlayerAnalyticsEventExportable>()
{
	return FPlayerAnalyticsEventExportable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerAnalyticsEventExportable(FPlayerAnalyticsEventExportable::StaticStruct, TEXT("/Script/PlayerAnalytics"), TEXT("PlayerAnalyticsEventExportable"), false, nullptr, nullptr);
static struct FScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsEventExportable
{
	FScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsEventExportable()
	{
		UScriptStruct::DeferCppStructOps<FPlayerAnalyticsEventExportable>(FName(TEXT("PlayerAnalyticsEventExportable")));
	}
} ScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsEventExportable;
	struct Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEventExportable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAnalyticsEventExportable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::NewProp_PlayerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsEventExportable" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEventExportable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::NewProp_PlayerID = { "PlayerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsEventExportable, PlayerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::NewProp_PlayerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::NewProp_PlayerID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::NewProp_PlayerID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerAnalytics,
		Z_Construct_UScriptStruct_FPlayerAnalyticsEvent,
		&NewStructOps,
		"PlayerAnalyticsEventExportable",
		sizeof(FPlayerAnalyticsEventExportable),
		alignof(FPlayerAnalyticsEventExportable),
		Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayerAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerAnalyticsEventExportable"), sizeof(FPlayerAnalyticsEventExportable), Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEventExportable_Hash() { return 3657681387U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
