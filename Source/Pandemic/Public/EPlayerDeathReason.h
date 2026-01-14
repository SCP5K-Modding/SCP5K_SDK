#pragma once
#include "CoreMinimal.h"
#include "EPlayerDeathReason.generated.h"

UENUM(BlueprintType)
enum class EPlayerDeathReason : uint8 {
    None,
    Death,
    Spectate,
    Logout,
};

