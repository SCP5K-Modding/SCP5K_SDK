#pragma once
#include "CoreMinimal.h"
#include "EDiscordAllowedMentionTypes.generated.h"

UENUM(BlueprintType)
enum class EDiscordAllowedMentionTypes : uint8 {
    RoleMentions,
    UserMentions,
    EveryoneMentions,
};

