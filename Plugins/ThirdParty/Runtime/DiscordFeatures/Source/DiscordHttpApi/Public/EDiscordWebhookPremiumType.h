#pragma once
#include "CoreMinimal.h"
#include "EDiscordWebhookPremiumType.generated.h"

UENUM(BlueprintType)
enum class EDiscordWebhookPremiumType : uint8 {
    None,
    NitroClassic,
    Nitro,
};

