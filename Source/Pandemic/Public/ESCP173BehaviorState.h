#pragma once
#include "CoreMinimal.h"
#include "ESCP173BehaviorState.generated.h"

UENUM(BlueprintType)
enum class ESCP173BehaviorState : uint8 {
    Idle,
    Crawling,
    Stalking,
    Defending,
    Wandering,
    Bloodthirsty,
    HyperAgressive,
    AttemptingKill,
    PostKill,
};

