#pragma once
#include "CoreMinimal.h"
#include "EPandemicLeaderboardDataRequest.generated.h"

UENUM(BlueprintType)
enum class EPandemicLeaderboardDataRequest : uint8 {
    Global,
    GlobalAroundUser,
    Friends,
    Users,
};

