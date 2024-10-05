// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSController/Public/AISuppressionEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISuppressionEvent() {}
// Cross Module References
	FPSCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAISuppressionEvent();
	UPackage* Z_Construct_UPackage__Script_FPSController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FAISuppressionEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FAISuppressionEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISuppressionEvent, Z_Construct_UPackage__Script_FPSController(), TEXT("AISuppressionEvent"), sizeof(FAISuppressionEvent), Get_Z_Construct_UScriptStruct_FAISuppressionEvent_Hash());
	}
	return Singleton;
}
template<> FPSCONTROLLER_API UScriptStruct* StaticStruct<FAISuppressionEvent>()
{
	return FAISuppressionEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISuppressionEvent(FAISuppressionEvent::StaticStruct, TEXT("/Script/FPSController"), TEXT("AISuppressionEvent"), false, nullptr, nullptr);
static struct FScriptStruct_FPSController_StaticRegisterNativesFAISuppressionEvent
{
	FScriptStruct_FPSController_StaticRegisterNativesFAISuppressionEvent()
	{
		UScriptStruct::DeferCppStructOps<FAISuppressionEvent>(FName(TEXT("AISuppressionEvent")));
	}
} ScriptStruct_FPSController_StaticRegisterNativesFAISuppressionEvent;
	struct Z_Construct_UScriptStruct_FAISuppressionEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuppressionLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuppressionLocation;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AISuppressionEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISuppressionEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_SuppressionLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISuppressionEvent" },
		{ "ModuleRelativePath", "Public/AISuppressionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_SuppressionLocation = { "SuppressionLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISuppressionEvent, SuppressionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_SuppressionLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_SuppressionLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Strength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISuppressionEvent" },
		{ "ModuleRelativePath", "Public/AISuppressionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISuppressionEvent, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_MaxRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISuppressionEvent" },
		{ "ModuleRelativePath", "Public/AISuppressionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISuppressionEvent, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Instigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISuppressionEvent" },
		{ "ModuleRelativePath", "Public/AISuppressionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISuppressionEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISuppressionEvent" },
		{ "ModuleRelativePath", "Public/AISuppressionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISuppressionEvent, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AISuppressionEvent" },
		{ "ModuleRelativePath", "Public/AISuppressionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISuppressionEvent, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_SuppressionLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSController,
		nullptr,
		&NewStructOps,
		"AISuppressionEvent",
		sizeof(FAISuppressionEvent),
		alignof(FAISuppressionEvent),
		Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISuppressionEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISuppressionEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISuppressionEvent"), sizeof(FAISuppressionEvent), Get_Z_Construct_UScriptStruct_FAISuppressionEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISuppressionEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISuppressionEvent_Hash() { return 3675404744U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
