// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiscordGateway/Public/EDiscordGatewayIntents.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDiscordGatewayIntents() {}
// Cross Module References
	DISCORDGATEWAY_API UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayIntents();
	UPackage* Z_Construct_UPackage__Script_DiscordGateway();
// End Cross Module References
	static UEnum* EDiscordGatewayIntents_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DiscordGateway_EDiscordGatewayIntents, Z_Construct_UPackage__Script_DiscordGateway(), TEXT("EDiscordGatewayIntents"));
		}
		return Singleton;
	}
	template<> DISCORDGATEWAY_API UEnum* StaticEnum<EDiscordGatewayIntents>()
	{
		return EDiscordGatewayIntents_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDiscordGatewayIntents(EDiscordGatewayIntents_StaticEnum, TEXT("/Script/DiscordGateway"), TEXT("EDiscordGatewayIntents"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DiscordGateway_EDiscordGatewayIntents_Hash() { return 25500638U; }
	UEnum* Z_Construct_UEnum_DiscordGateway_EDiscordGatewayIntents()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DiscordGateway();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDiscordGatewayIntents"), 0, Get_Z_Construct_UEnum_DiscordGateway_EDiscordGatewayIntents_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDiscordGatewayIntents::GUILDS", (int64)EDiscordGatewayIntents::GUILDS },
				{ "EDiscordGatewayIntents::GUILD_MEMBERS", (int64)EDiscordGatewayIntents::GUILD_MEMBERS },
				{ "EDiscordGatewayIntents::GUILD_BANS", (int64)EDiscordGatewayIntents::GUILD_BANS },
				{ "EDiscordGatewayIntents::GUILD_EMOJIS", (int64)EDiscordGatewayIntents::GUILD_EMOJIS },
				{ "EDiscordGatewayIntents::GUILD_INTEGRATIONS", (int64)EDiscordGatewayIntents::GUILD_INTEGRATIONS },
				{ "EDiscordGatewayIntents::GUILD_WEBHOOKS", (int64)EDiscordGatewayIntents::GUILD_WEBHOOKS },
				{ "EDiscordGatewayIntents::GUILD_INVITES", (int64)EDiscordGatewayIntents::GUILD_INVITES },
				{ "EDiscordGatewayIntents::GUILD_VOICE_STATES", (int64)EDiscordGatewayIntents::GUILD_VOICE_STATES },
				{ "EDiscordGatewayIntents::GUILD_PRESENCES", (int64)EDiscordGatewayIntents::GUILD_PRESENCES },
				{ "EDiscordGatewayIntents::GUILD_MESSAGES", (int64)EDiscordGatewayIntents::GUILD_MESSAGES },
				{ "EDiscordGatewayIntents::GUILD_MESSAGE_REACTIONS", (int64)EDiscordGatewayIntents::GUILD_MESSAGE_REACTIONS },
				{ "EDiscordGatewayIntents::GUILD_MESSAGE_TYPING", (int64)EDiscordGatewayIntents::GUILD_MESSAGE_TYPING },
				{ "EDiscordGatewayIntents::DIRECT_MESSAGES", (int64)EDiscordGatewayIntents::DIRECT_MESSAGES },
				{ "EDiscordGatewayIntents::DIRECT_MESSAGE_REACTIONS", (int64)EDiscordGatewayIntents::DIRECT_MESSAGE_REACTIONS },
				{ "EDiscordGatewayIntents::DIRECT_MESSAGE_TYPING", (int64)EDiscordGatewayIntents::DIRECT_MESSAGE_TYPING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DIRECT_MESSAGE_REACTIONS.Name", "EDiscordGatewayIntents::DIRECT_MESSAGE_REACTIONS" },
				{ "DIRECT_MESSAGE_TYPING.Name", "EDiscordGatewayIntents::DIRECT_MESSAGE_TYPING" },
				{ "DIRECT_MESSAGES.Name", "EDiscordGatewayIntents::DIRECT_MESSAGES" },
				{ "GUILD_BANS.Name", "EDiscordGatewayIntents::GUILD_BANS" },
				{ "GUILD_EMOJIS.Name", "EDiscordGatewayIntents::GUILD_EMOJIS" },
				{ "GUILD_INTEGRATIONS.Name", "EDiscordGatewayIntents::GUILD_INTEGRATIONS" },
				{ "GUILD_INVITES.Name", "EDiscordGatewayIntents::GUILD_INVITES" },
				{ "GUILD_MEMBERS.Name", "EDiscordGatewayIntents::GUILD_MEMBERS" },
				{ "GUILD_MESSAGE_REACTIONS.Name", "EDiscordGatewayIntents::GUILD_MESSAGE_REACTIONS" },
				{ "GUILD_MESSAGE_TYPING.Name", "EDiscordGatewayIntents::GUILD_MESSAGE_TYPING" },
				{ "GUILD_MESSAGES.Name", "EDiscordGatewayIntents::GUILD_MESSAGES" },
				{ "GUILD_PRESENCES.Name", "EDiscordGatewayIntents::GUILD_PRESENCES" },
				{ "GUILD_VOICE_STATES.Name", "EDiscordGatewayIntents::GUILD_VOICE_STATES" },
				{ "GUILD_WEBHOOKS.Name", "EDiscordGatewayIntents::GUILD_WEBHOOKS" },
				{ "GUILDS.Name", "EDiscordGatewayIntents::GUILDS" },
				{ "ModuleRelativePath", "Public/EDiscordGatewayIntents.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DiscordGateway,
				nullptr,
				"EDiscordGatewayIntents",
				"EDiscordGatewayIntents",
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
