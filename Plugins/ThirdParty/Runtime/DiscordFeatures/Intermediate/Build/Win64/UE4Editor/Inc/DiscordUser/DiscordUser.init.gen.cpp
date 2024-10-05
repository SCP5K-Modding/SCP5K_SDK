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
void EmptyLinkFunctionForGeneratedCodeDiscordUser_init() {}
	DISCORDUSER_API UFunction* Z_Construct_UDelegateFunction_DiscordUser_OnCurrentUserUpdateEvent__DelegateSignature();
	DISCORDUSER_API UFunction* Z_Construct_UDelegateFunction_DiscordUser_OnGetUserEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordUser()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordUser_OnCurrentUserUpdateEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordUser_OnGetUserEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/DiscordUser",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8C7AE75B,
				0xFD523CC6,
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
