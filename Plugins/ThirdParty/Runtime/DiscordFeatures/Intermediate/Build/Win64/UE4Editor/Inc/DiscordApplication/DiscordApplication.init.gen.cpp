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
void EmptyLinkFunctionForGeneratedCodeDiscordApplication_init() {}
	DISCORDAPPLICATION_API UFunction* Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature();
	DISCORDAPPLICATION_API UFunction* Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnTickerReceived__DelegateSignature();
	DISCORDAPPLICATION_API UFunction* Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnValidateOrExit__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordApplication()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnOAuth2TokenReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnTickerReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordApplication_DiscordOnValidateOrExit__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/DiscordApplication",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x751E6BAF,
				0x31C65F4F,
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
