#pragma once
#include "CoreMinimal.h"
#include "EPandemicLeaderboardUploadScoreMethod.generated.h"

UENUM(BlueprintType)
enum class EPandemicLeaderboardUploadScoreMethod : uint8 {
    None,
    KeepBest,
    ForceUpdate,
};

