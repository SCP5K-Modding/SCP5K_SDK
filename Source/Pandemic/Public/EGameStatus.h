#pragma once
#include "CoreMinimal.h"
#include "EGameStatus.generated.h"

UENUM(BlueprintType)
enum class EGameStatus : uint8 {
    GS_Standby,
    GS_PreGame,
    GS_InGame,
    GS_PostGame,
    GS_Paused,
};

