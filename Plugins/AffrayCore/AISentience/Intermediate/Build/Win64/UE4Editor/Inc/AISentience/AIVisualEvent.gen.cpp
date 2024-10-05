// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AIVisualEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIVisualEvent() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAIVisualEvent();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FAIVisualEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FAIVisualEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIVisualEvent, Z_Construct_UPackage__Script_AISentience(), TEXT("AIVisualEvent"), sizeof(FAIVisualEvent), Get_Z_Construct_UScriptStruct_FAIVisualEvent_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FAIVisualEvent>()
{
	return FAIVisualEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIVisualEvent(FAIVisualEvent::StaticStruct, TEXT("/Script/AISentience"), TEXT("AIVisualEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFAIVisualEvent
{
	FScriptStruct_AISentience_StaticRegisterNativesFAIVisualEvent()
	{
		UScriptStruct::DeferCppStructOps<FAIVisualEvent>(FName(TEXT("AIVisualEvent")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFAIVisualEvent;
	struct Z_Construct_UScriptStruct_FAIVisualEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualEventLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VisualEventLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVisualEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIVisualEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIVisualEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_VisualEventLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVisualEvent" },
		{ "ModuleRelativePath", "Public/AIVisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_VisualEventLocation = { "VisualEventLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVisualEvent, VisualEventLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_VisualEventLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_VisualEventLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Strength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVisualEvent" },
		{ "ModuleRelativePath", "Public/AIVisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVisualEvent, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_MaxRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVisualEvent" },
		{ "ModuleRelativePath", "Public/AIVisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVisualEvent, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Instigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVisualEvent" },
		{ "ModuleRelativePath", "Public/AIVisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVisualEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVisualEvent" },
		{ "ModuleRelativePath", "Public/AIVisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVisualEvent, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIVisualEvent" },
		{ "ModuleRelativePath", "Public/AIVisualEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIVisualEvent, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIVisualEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_VisualEventLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIVisualEvent_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIVisualEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"AIVisualEvent",
		sizeof(FAIVisualEvent),
		alignof(FAIVisualEvent),
		Z_Construct_UScriptStruct_FAIVisualEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIVisualEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIVisualEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIVisualEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIVisualEvent"), sizeof(FAIVisualEvent), Get_Z_Construct_UScriptStruct_FAIVisualEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIVisualEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIVisualEvent_Hash() { return 3250658115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
