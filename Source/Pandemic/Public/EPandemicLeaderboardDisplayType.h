#pragma once
#include "CoreMinimal.h"
#include "EPandemicLeaderboardDisplayType.generated.h"

UENUM(BlueprintType)
enum class EPandemicLeaderboardDisplayType : uint8 {
    None,
    Numeric,
    TimeSeconds,
    TimeMilliSeconds,
};

