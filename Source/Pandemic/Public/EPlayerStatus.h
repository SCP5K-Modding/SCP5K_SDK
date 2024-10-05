#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EPlayerStatus : uint8 {
    PS_Alive,
    PS_Dead,
    PS_Spectating,
    PS_Waiting,
};

