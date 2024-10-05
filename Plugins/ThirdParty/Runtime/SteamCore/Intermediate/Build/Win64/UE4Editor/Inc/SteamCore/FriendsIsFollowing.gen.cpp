// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/FriendsIsFollowing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsIsFollowing() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFriendsIsFollowing();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FFriendsIsFollowing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFriendsIsFollowing_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendsIsFollowing, Z_Construct_UPackage__Script_SteamCore(), TEXT("FriendsIsFollowing"), sizeof(FFriendsIsFollowing), Get_Z_Construct_UScriptStruct_FFriendsIsFollowing_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFriendsIsFollowing>()
{
	return FFriendsIsFollowing::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFriendsIsFollowing(FFriendsIsFollowing::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FriendsIsFollowing"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFriendsIsFollowing
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFriendsIsFollowing()
	{
		UScriptStruct::DeferCppStructOps<FFriendsIsFollowing>(FName(TEXT("FriendsIsFollowing")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFriendsIsFollowing;
	struct Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFollowing_MetaData[];
#endif
		static void NewProp_bIsFollowing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFollowing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FriendsIsFollowing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendsIsFollowing>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_Result_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendsIsFollowing" },
		{ "ModuleRelativePath", "Public/FriendsIsFollowing.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendsIsFollowing, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_SteamID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendsIsFollowing" },
		{ "ModuleRelativePath", "Public/FriendsIsFollowing.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendsIsFollowing, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_bIsFollowing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FriendsIsFollowing" },
		{ "ModuleRelativePath", "Public/FriendsIsFollowing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_bIsFollowing_SetBit(void* Obj)
	{
		((FFriendsIsFollowing*)Obj)->bIsFollowing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_bIsFollowing = { "bIsFollowing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFriendsIsFollowing), &Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_bIsFollowing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_bIsFollowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_bIsFollowing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::NewProp_bIsFollowing,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FriendsIsFollowing",
		sizeof(FFriendsIsFollowing),
		alignof(FFriendsIsFollowing),
		Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendsIsFollowing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFriendsIsFollowing_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FriendsIsFollowing"), sizeof(FFriendsIsFollowing), Get_Z_Construct_UScriptStruct_FFriendsIsFollowing_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFriendsIsFollowing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFriendsIsFollowing_Hash() { return 912272276U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
