// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordApplication/Public/DiscordOAuth2Token.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordOAuth2Token() {}
// Cross Module References
	DISCORDAPPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FDiscordOAuth2Token();
	UPackage* Z_Construct_UPackage__Script_DiscordApplication();
// End Cross Module References
class UScriptStruct* FDiscordOAuth2Token::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISCORDAPPLICATION_API uint32 Get_Z_Construct_UScriptStruct_FDiscordOAuth2Token_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscordOAuth2Token, Z_Construct_UPackage__Script_DiscordApplication(), TEXT("DiscordOAuth2Token"), sizeof(FDiscordOAuth2Token), Get_Z_Construct_UScriptStruct_FDiscordOAuth2Token_Hash());
	}
	return Singleton;
}
template<> DISCORDAPPLICATION_API UScriptStruct* StaticStruct<FDiscordOAuth2Token>()
{
	return FDiscordOAuth2Token::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscordOAuth2Token(FDiscordOAuth2Token::StaticStruct, TEXT("/Script/DiscordApplication"), TEXT("DiscordOAuth2Token"), false, nullptr, nullptr);
static struct FScriptStruct_DiscordApplication_StaticRegisterNativesFDiscordOAuth2Token
{
	FScriptStruct_DiscordApplication_StaticRegisterNativesFDiscordOAuth2Token()
	{
		UScriptStruct::DeferCppStructOps<FDiscordOAuth2Token>(FName(TEXT("DiscordOAuth2Token")));
	}
} ScriptStruct_DiscordApplication_StaticRegisterNativesFDiscordOAuth2Token;
	struct Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scopes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Scopes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expires_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Expires;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscordOAuth2Token.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscordOAuth2Token>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_AccessToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordOAuth2Token" },
		{ "ModuleRelativePath", "Public/DiscordOAuth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordOAuth2Token, AccessToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Scopes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordOAuth2Token" },
		{ "ModuleRelativePath", "Public/DiscordOAuth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Scopes = { "Scopes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordOAuth2Token, Scopes), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Scopes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Scopes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Expires_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DiscordOAuth2Token" },
		{ "ModuleRelativePath", "Public/DiscordOAuth2Token.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Expires = { "Expires", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscordOAuth2Token, Expires), METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Expires_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Expires_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Scopes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::NewProp_Expires,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DiscordApplication,
		nullptr,
		&NewStructOps,
		"DiscordOAuth2Token",
		sizeof(FDiscordOAuth2Token),
		alignof(FDiscordOAuth2Token),
		Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscordOAuth2Token()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscordOAuth2Token_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordApplication();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscordOAuth2Token"), sizeof(FDiscordOAuth2Token), Get_Z_Construct_UScriptStruct_FDiscordOAuth2Token_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscordOAuth2Token_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscordOAuth2Token_Hash() { return 4165200000U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
