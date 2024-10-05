#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityType.generated.h"

UENUM(BlueprintType)
enum class EDiscordActivityType : uint8 {
    Playing,
    Streaming,
    Listening,
    Watching,
};

