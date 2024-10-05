// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordActivity_init() {}
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivityJoin__DelegateSignature();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivityJoinRequest__DelegateSignature();
	DISCORDACTIVITY_API UFunction* Z_Construct_UDelegateFunction_DiscordActivity_OnActivitySpectate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordActivity()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordActivity_DiscordCallbackEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordActivity_OnActivityInvite__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordActivity_OnActivityJoin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordActivity_OnActivityJoinRequest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordActivity_OnActivitySpectate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/DiscordActivity",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x626A346F,
				0x170F5362,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
