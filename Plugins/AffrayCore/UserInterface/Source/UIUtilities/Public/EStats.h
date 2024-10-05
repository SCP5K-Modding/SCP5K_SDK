#pragma once
#include "CoreMinimal.h"
#include "EStats.generated.h"

UENUM(BlueprintType)
enum EStats {
    S_Level,
    S_Name,
    S_State,
    S_PVPKills,
    S_PVEKills,
    S_Headshots,
    S_Deaths,
    S_KDRatio,
    S_Score,
    S_Ping,
};

