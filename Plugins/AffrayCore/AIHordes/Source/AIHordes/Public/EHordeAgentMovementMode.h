#pragma once
#include "CoreMinimal.h"
#include "EHordeAgentMovementMode.generated.h"

UENUM(BlueprintType)
enum class EHordeAgentMovementMode : uint8 {
    Wandering,
    Walking,
    Crawling,
    Running,
};

