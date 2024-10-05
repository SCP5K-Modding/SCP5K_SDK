// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerAnalytics/Public/PlayerAnalyticsEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnalyticsEvent() {}
// Cross Module References
	PLAYERANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsEvent();
	UPackage* Z_Construct_UPackage__Script_PlayerAnalytics();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	PLAYERANALYTICS_API UEnum* Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType();
// End Cross Module References

static_assert(std::is_polymorphic<FPlayerAnalyticsEvent>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerAnalyticsEvent cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPlayerAnalyticsEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYERANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent, Z_Construct_UPackage__Script_PlayerAnalytics(), TEXT("PlayerAnalyticsEvent"), sizeof(FPlayerAnalyticsEvent), Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Hash());
	}
	return Singleton;
}
template<> PLAYERANALYTICS_API UScriptStruct* StaticStruct<FPlayerAnalyticsEvent>()
{
	return FPlayerAnalyticsEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerAnalyticsEvent(FPlayerAnalyticsEvent::StaticStruct, TEXT("/Script/PlayerAnalytics"), TEXT("PlayerAnalyticsEvent"), false, nullptr, nullptr);
static struct FScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsEvent
{
	FScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsEvent()
	{
		UScriptStruct::DeferCppStructOps<FPlayerAnalyticsEvent>(FName(TEXT("PlayerAnalyticsEvent")));
	}
} ScriptStruct_PlayerAnalytics_StaticRegisterNativesFPlayerAnalyticsEvent;
	struct Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAnalyticsEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsEvent" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsEvent, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsEvent" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsEvent, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_EventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsEvent" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsEvent, EventType), Z_Construct_UEnum_PlayerAnalytics_EPlayerAnalyticsEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_EventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsEvent" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsEvent, TargetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsEvent" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsEvent, TargetLocation), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayerAnalyticsEvent" },
		{ "ModuleRelativePath", "Public/PlayerAnalyticsEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAnalyticsEvent, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerAnalytics,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlayerAnalyticsEvent",
		sizeof(FPlayerAnalyticsEvent),
		alignof(FPlayerAnalyticsEvent),
		Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerAnalyticsEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayerAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerAnalyticsEvent"), sizeof(FPlayerAnalyticsEvent), Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerAnalyticsEvent_Hash() { return 2597986562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
