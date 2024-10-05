#pragma once
#include "CoreMinimal.h"
#include "EDiscordGatewayActivity.generated.h"

UENUM(BlueprintType)
enum class EDiscordGatewayActivity : uint8 {
    Game,
    Streaming,
    Listening,
    Custom,
    Competing,
};

