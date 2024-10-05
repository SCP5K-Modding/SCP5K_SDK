#pragma once
#include "CoreMinimal.h"
#include "EDiscordStatus.generated.h"

UENUM(BlueprintType)
enum class EDiscordStatus : uint8 {
    Offline,
    Online,
    Idle,
    DoNotDisturb,
};

