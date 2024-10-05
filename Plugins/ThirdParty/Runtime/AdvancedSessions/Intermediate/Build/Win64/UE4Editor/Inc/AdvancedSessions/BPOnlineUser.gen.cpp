// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Public/BPOnlineUser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPOnlineUser() {}
// Cross Module References
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ADVANCEDSESSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBPUniqueNetId();
// End Cross Module References
class UScriptStruct* FBPOnlineUser::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDSESSIONS_API uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOnlineUser, Z_Construct_UPackage__Script_AdvancedSessions(), TEXT("BPOnlineUser"), sizeof(FBPOnlineUser), Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash());
	}
	return Singleton;
}
template<> ADVANCEDSESSIONS_API UScriptStruct* StaticStruct<FBPOnlineUser>()
{
	return FBPOnlineUser::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOnlineUser(FBPOnlineUser::StaticStruct, TEXT("/Script/AdvancedSessions"), TEXT("BPOnlineUser"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser
{
	FScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser()
	{
		UScriptStruct::DeferCppStructOps<FBPOnlineUser>(FName(TEXT("BPOnlineUser")));
	}
} ScriptStruct_AdvancedSessions_StaticRegisterNativesFBPOnlineUser;
	struct Z_Construct_UScriptStruct_FBPOnlineUser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueNetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RealName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineUser_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPOnlineUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOnlineUser>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPOnlineUser" },
		{ "ModuleRelativePath", "Public/BPOnlineUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOnlineUser, UniqueNetId), Z_Construct_UScriptStruct_FBPUniqueNetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPOnlineUser" },
		{ "ModuleRelativePath", "Public/BPOnlineUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOnlineUser, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BPOnlineUser" },
		{ "ModuleRelativePath", "Public/BPOnlineUser.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPOnlineUser, RealName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPOnlineUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPOnlineUser_Statics::NewProp_RealName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPOnlineUser_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
		nullptr,
		&NewStructOps,
		"BPOnlineUser",
		sizeof(FBPOnlineUser),
		alignof(FBPOnlineUser),
		Z_Construct_UScriptStruct_FBPOnlineUser_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPOnlineUser_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPOnlineUser()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedSessions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOnlineUser"), sizeof(FBPOnlineUser), Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPOnlineUser_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOnlineUser_Hash() { return 2394504811U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
