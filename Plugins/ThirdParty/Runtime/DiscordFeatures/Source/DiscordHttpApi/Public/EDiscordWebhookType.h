#pragma once
#include "CoreMinimal.h"
#include "EDiscordWebhookType.generated.h"

UENUM(BlueprintType)
enum class EDiscordWebhookType : uint8 {
    None,
    Incoming,
    ChannelFollower,
};

