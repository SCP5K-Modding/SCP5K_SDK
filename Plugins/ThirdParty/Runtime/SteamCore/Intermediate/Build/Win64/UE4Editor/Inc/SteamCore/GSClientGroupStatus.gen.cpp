// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GSClientGroupStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSClientGroupStatus() {}
// Cross Module References
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientGroupStatus();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
// End Cross Module References
class UScriptStruct* FGSClientGroupStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientGroupStatus, Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientGroupStatus"), sizeof(FGSClientGroupStatus), Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientGroupStatus>()
{
	return FGSClientGroupStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSClientGroupStatus(FGSClientGroupStatus::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GSClientGroupStatus"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGSClientGroupStatus
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGSClientGroupStatus()
	{
		UScriptStruct::DeferCppStructOps<FGSClientGroupStatus>(FName(TEXT("GSClientGroupStatus")));
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGSClientGroupStatus;
	struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMember_MetaData[];
#endif
		static void NewProp_bMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOfficer_MetaData[];
#endif
		static void NewProp_bOfficer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOfficer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GSClientGroupStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientGroupStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientGroupStatus" },
		{ "ModuleRelativePath", "Public/GSClientGroupStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientGroupStatus, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientGroupStatus" },
		{ "ModuleRelativePath", "Public/GSClientGroupStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientGroupStatus, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientGroupStatus" },
		{ "ModuleRelativePath", "Public/GSClientGroupStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_SetBit(void* Obj)
	{
		((FGSClientGroupStatus*)Obj)->bMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember = { "bMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSClientGroupStatus), &Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GSClientGroupStatus" },
		{ "ModuleRelativePath", "Public/GSClientGroupStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_SetBit(void* Obj)
	{
		((FGSClientGroupStatus*)Obj)->bOfficer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer = { "bOfficer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSClientGroupStatus), &Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientGroupStatus",
		sizeof(FGSClientGroupStatus),
		alignof(FGSClientGroupStatus),
		Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientGroupStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSClientGroupStatus"), sizeof(FGSClientGroupStatus), Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash() { return 3529920818U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
