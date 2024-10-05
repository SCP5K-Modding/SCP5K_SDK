#pragma once
#include "CoreMinimal.h"
#include "EDiscordActivityActionType.generated.h"

UENUM(BlueprintType)
enum class EDiscordActivityActionType : uint8 {
    None,
    Join,
    Spectate,
};

