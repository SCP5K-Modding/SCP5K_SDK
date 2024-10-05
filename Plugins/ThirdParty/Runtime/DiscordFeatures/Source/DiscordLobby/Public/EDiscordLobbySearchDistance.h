#pragma once
#include "CoreMinimal.h"
#include "EDiscordLobbySearchDistance.generated.h"

UENUM(BlueprintType)
enum class EDiscordLobbySearchDistance : uint8 {
    Local,
    Default,
    Extended,
    Global,
};

