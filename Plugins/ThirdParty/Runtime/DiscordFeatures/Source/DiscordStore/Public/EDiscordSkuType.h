#pragma once
#include "CoreMinimal.h"
#include "EDiscordSkuType.generated.h"

UENUM(BlueprintType)
enum class EDiscordSkuType : uint8 {
    None,
    Application,
    DLC,
    Consumable,
    Bundle,
};

