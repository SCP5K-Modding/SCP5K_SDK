#pragma once
#include "CoreMinimal.h"
#include "EDiscordWebhookUserFlag.generated.h"

UENUM(BlueprintType)
enum class EDiscordWebhookUserFlag : uint8 {
    None,
    DiscordEmployee,
    PartneredServerOwner,
    HypeSquadEvents,
    BugHunterLevel1,
    HouseBravery,
    HouseBrilliance,
    HouseBalance,
    EarlySupporter,
    TeamUser,
    System,
    BugHunterLevel2,
    VerifiedBot,
    EarlyVerifiedBotDeveloper,
};

