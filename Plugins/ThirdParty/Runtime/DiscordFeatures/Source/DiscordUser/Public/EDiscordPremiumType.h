#pragma once
#include "CoreMinimal.h"
#include "EDiscordPremiumType.generated.h"

UENUM(BlueprintType)
enum class EDiscordPremiumType : uint8 {
    None,
    Tier1,
    Tier2,
};

