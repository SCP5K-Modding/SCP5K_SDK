// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ESteamUserRestriction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESteamUserRestriction() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserRestriction();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
// End Cross Module References
	static UEnum* ESteamUserRestriction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUserRestriction, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUserRestriction"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserRestriction>()
	{
		return ESteamUserRestriction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUserRestriction(ESteamUserRestriction_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUserRestriction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUserRestriction_Hash() { return 4261363752U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUserRestriction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUserRestriction"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUserRestriction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUserRestriction::None", (int64)ESteamUserRestriction::None },
				{ "ESteamUserRestriction::Unknown", (int64)ESteamUserRestriction::Unknown },
				{ "ESteamUserRestriction::AnyChat", (int64)ESteamUserRestriction::AnyChat },
				{ "ESteamUserRestriction::VoiceChat", (int64)ESteamUserRestriction::VoiceChat },
				{ "ESteamUserRestriction::GroupChat", (int64)ESteamUserRestriction::GroupChat },
				{ "ESteamUserRestriction::Rating", (int64)ESteamUserRestriction::Rating },
				{ "ESteamUserRestriction::GameInvites", (int64)ESteamUserRestriction::GameInvites },
				{ "ESteamUserRestriction::Trading", (int64)ESteamUserRestriction::Trading },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyChat.Name", "ESteamUserRestriction::AnyChat" },
				{ "BlueprintType", "true" },
				{ "GameInvites.Name", "ESteamUserRestriction::GameInvites" },
				{ "GroupChat.Name", "ESteamUserRestriction::GroupChat" },
				{ "ModuleRelativePath", "Public/ESteamUserRestriction.h" },
				{ "None.Name", "ESteamUserRestriction::None" },
				{ "Rating.Name", "ESteamUserRestriction::Rating" },
				{ "Trading.Name", "ESteamUserRestriction::Trading" },
				{ "Unknown.Name", "ESteamUserRestriction::Unknown" },
				{ "VoiceChat.Name", "ESteamUserRestriction::VoiceChat" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUserRestriction",
				"ESteamUserRestriction",
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
