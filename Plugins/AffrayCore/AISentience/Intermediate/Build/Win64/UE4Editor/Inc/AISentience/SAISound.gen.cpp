// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AISentience/Public/SAISound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAISound() {}
// Cross Module References
	AISENTIENCE_API UScriptStruct* Z_Construct_UScriptStruct_FSAISound();
	UPackage* Z_Construct_UPackage__Script_AISentience();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AISENTIENCE_API UEnum* Z_Construct_UEnum_AISentience_ESAISoundType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSAISound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AISENTIENCE_API uint32 Get_Z_Construct_UScriptStruct_FSAISound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAISound, Z_Construct_UPackage__Script_AISentience(), TEXT("SAISound"), sizeof(FSAISound), Get_Z_Construct_UScriptStruct_FSAISound_Hash());
	}
	return Singleton;
}
template<> AISENTIENCE_API UScriptStruct* StaticStruct<FSAISound>()
{
	return FSAISound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAISound(FSAISound::StaticStruct, TEXT("/Script/AISentience"), TEXT("SAISound"), false, nullptr, nullptr);
static struct FScriptStruct_AISentience_StaticRegisterNativesFSAISound
{
	FScriptStruct_AISentience_StaticRegisterNativesFSAISound()
	{
		UScriptStruct::DeferCppStructOps<FSAISound>(FName(TEXT("SAISound")));
	}
} ScriptStruct_AISentience_StaticRegisterNativesFSAISound;
	struct Z_Construct_UScriptStruct_FSAISound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SoundType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Age;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SAISound.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAISound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAISound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISound" },
		{ "ModuleRelativePath", "Public/SAISound.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISound, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_SoundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_SoundType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISound" },
		{ "ModuleRelativePath", "Public/SAISound.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_SoundType = { "SoundType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISound, SoundType), Z_Construct_UEnum_AISentience_ESAISoundType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_SoundType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_SoundType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISound" },
		{ "ModuleRelativePath", "Public/SAISound.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISound, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISound" },
		{ "ModuleRelativePath", "Public/SAISound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISound, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Age_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISound" },
		{ "ModuleRelativePath", "Public/SAISound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISound, Age), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Age_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Age_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_MaxAge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SAISound" },
		{ "ModuleRelativePath", "Public/SAISound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_MaxAge = { "MaxAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAISound, MaxAge), METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_MaxAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_MaxAge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAISound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_SoundType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_SoundType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_Age,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAISound_Statics::NewProp_MaxAge,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAISound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AISentience,
		nullptr,
		&NewStructOps,
		"SAISound",
		sizeof(FSAISound),
		alignof(FSAISound),
		Z_Construct_UScriptStruct_FSAISound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAISound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAISound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAISound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAISound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AISentience();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAISound"), sizeof(FSAISound), Get_Z_Construct_UScriptStruct_FSAISound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAISound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAISound_Hash() { return 2307425372U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
