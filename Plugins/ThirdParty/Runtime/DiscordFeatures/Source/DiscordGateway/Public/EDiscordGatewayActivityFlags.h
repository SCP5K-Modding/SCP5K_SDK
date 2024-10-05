#pragma once
#include "CoreMinimal.h"
#include "EDiscordGatewayActivityFlags.generated.h"

UENUM(BlueprintType)
enum class EDiscordGatewayActivityFlags : uint8 {
    Instance,
    Join,
    Spectate,
    JoinRequest,
    Sync,
    Play,
};

