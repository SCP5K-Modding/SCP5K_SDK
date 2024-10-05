#pragma once
#include "CoreMinimal.h"
#include "EDiscordGatewayIntents.generated.h"

UENUM(BlueprintType)
enum class EDiscordGatewayIntents : uint8 {
    GUILDS,
    GUILD_MEMBERS,
    GUILD_BANS,
    GUILD_EMOJIS,
    GUILD_INTEGRATIONS,
    GUILD_WEBHOOKS,
    GUILD_INVITES,
    GUILD_VOICE_STATES,
    GUILD_PRESENCES,
    GUILD_MESSAGES,
    GUILD_MESSAGE_REACTIONS,
    GUILD_MESSAGE_TYPING,
    DIRECT_MESSAGES,
    DIRECT_MESSAGE_REACTIONS,
    DIRECT_MESSAGE_TYPING,
};

