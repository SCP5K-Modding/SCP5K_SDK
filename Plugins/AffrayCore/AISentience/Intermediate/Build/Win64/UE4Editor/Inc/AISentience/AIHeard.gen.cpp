// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/AIHeard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIHeard() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FAIHeard();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAIHeard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FAIHeard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIHeard, Z_Construct_UPackage__Script_AISentience(), TEXT("AIHeard"), sizeof(FAIHeard), Get_Z_Construct_UScriptStruct_FAIHeard_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FAIHeard>()
{
	return FAIHeard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIHeard(FAIHeard::StaticStruct, TEXT("/Script/AISentience"), TEXT("AIHeard"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFAIHeard
{
	FScriptStruct_AISentience_StaticRegisterNativesFAIHeard()
	{
		UScriptStruct::DeferCppStructOps<FAIHeard>(FName(TEXT("AIHeard")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFAIHeard;
	struct Z_Construct_UScriptStruct_FAIHeard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOfHearing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOfHearing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIHeard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AIHeard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIHeard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIHeard>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIHeard" },
		{ "ModuleRelativePath", "Public/AIHeard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIHeard, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIHeard" },
		{ "ModuleRelativePath", "Public/AIHeard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIHeard, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIHeard" },
		{ "ModuleRelativePath", "Public/AIHeard.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIHeard, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_TimeOfHearing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AIHeard" },
		{ "ModuleRelativePath", "Public/AIHeard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_TimeOfHearing = { "TimeOfHearing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIHeard, TimeOfHearing), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_TimeOfHearing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_TimeOfHearing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIHeard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIHeard_Statics::NewProp_TimeOfHearing,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIHeard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"AIHeard",
		sizeof(FAIHeard),
		alignof(FAIHeard),
		Z_Construct_UScriptStruct_FAIHeard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIHeard_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIHeard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIHeard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIHeard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIHeard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIHeard"), sizeof(FAIHeard), Get_Z_Construct_UScriptStruct_FAIHeard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIHeard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIHeard_Hash() { return 353623095U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
