// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordImage/Public/EDiscordImageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordImageType() {}
// Cross Module References
	DISCORDIMAGE_API UEnum* Z_Construct_UEnum_DiscordImage_EDiscordImageType();
	UPackage* Z_Construct_UPackage__Script_DiscordImage();
// End Cross Module References
	static UEnum* EDiscordImageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordImage_EDiscordImageType, Z_Construct_UPackage__Script_DiscordImage(), TEXT("EDiscordImageType"));
		}
		return Singleton;
	}
	template<> DISCORDIMAGE_API UEnum* StaticEnum<EDiscordImageType>()
	{
		return EDiscordImageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordImageType(EDiscordImageType_StaticEnum, TEXT("/Script/DiscordImage"), TEXT("EDiscordImageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordImage_EDiscordImageType_Hash() { return 136586603U; }
	UEnum* Z_Construct_UEnum_DiscordImage_EDiscordImageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordImage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordImageType"), 0, Get_Z_Construct_UEnum_DiscordImage_EDiscordImageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordImageType::User", (int64)EDiscordImageType::User },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EDiscordImageType.h" },
				{ "User.Name", "EDiscordImageType::User" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordImage,
				nullptr,
				"EDiscordImageType",
				"EDiscordImageType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
