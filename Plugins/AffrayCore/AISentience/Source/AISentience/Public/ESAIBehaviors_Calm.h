#pragma once
#include "CoreMinimal.h"
#include "ESAIBehaviors_Calm.generated.h"

UENUM(BlueprintType)
namespace ESAIBehaviors_Calm {
    enum Type {
        BE_Idle,
        BE_Roam,
        BE_Patrol,
        BE_Follower,
        CH_Max UMETA(Hidden),
    };
}

