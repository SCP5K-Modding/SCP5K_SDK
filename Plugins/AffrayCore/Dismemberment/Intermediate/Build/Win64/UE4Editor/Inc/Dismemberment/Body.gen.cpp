// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberment/Public/Body.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBody() {}
// Cross Module References
	DISMEMBERMENT_API UScriptStruct* Z_Construct_UScriptStruct_FBody();
	UPackage* Z_Construct_UPackage__Script_Dismemberment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FBody::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISMEMBERMENT_API uint32 Get_Z_Construct_UScriptStruct_FBody_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBody, Z_Construct_UPackage__Script_Dismemberment(), TEXT("Body"), sizeof(FBody), Get_Z_Construct_UScriptStruct_FBody_Hash());
	}
	return Singleton;
}
template<> DISMEMBERMENT_API UScriptStruct* StaticStruct<FBody>()
{
	return FBody::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBody(FBody::StaticStruct, TEXT("/Script/Dismemberment"), TEXT("Body"), false, nullptr, nullptr);
static struct FScriptStruct_Dismemberment_StaticRegisterNativesFBody
{
	FScriptStruct_Dismemberment_StaticRegisterNativesFBody()
	{
		UScriptStruct::DeferCppStructOps<FBody>(FName(TEXT("Body")));
	}
} ScriptStruct_Dismemberment_StaticRegisterNativesFBody;
	struct Z_Construct_UScriptStruct_FBody_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyDot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BodyDot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Body.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBody>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Body" },
		{ "ModuleRelativePath", "Public/Body.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDirection = { "BodyDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, BodyDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Body" },
		{ "ModuleRelativePath", "Public/Body.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyLocation = { "BodyLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, BodyLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Body" },
		{ "ModuleRelativePath", "Public/Body.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDot = { "BodyDot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBody, BodyDot), METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBody_Statics::NewProp_BodyDot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dismemberment,
		nullptr,
		&NewStructOps,
		"Body",
		sizeof(FBody),
		alignof(FBody),
		Z_Construct_UScriptStruct_FBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBody()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBody_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dismemberment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Body"), sizeof(FBody), Get_Z_Construct_UScriptStruct_FBody_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBody_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBody_Hash() { return 4067594839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
