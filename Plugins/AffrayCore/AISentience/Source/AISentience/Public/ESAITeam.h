#pragma once
#include "CoreMinimal.h"
#include "ESAITeam.generated.h"

UENUM(BlueprintType)
enum class ESAITeam : uint8 {
    NoTeam = 255,
    PlayerFoundation = 0,
    PlayerFaultline,
    PlayerDClass,
    Faultline = 5,
    DClass,
    Foundation,
    SCP,
    FoundationCivillian,
};

