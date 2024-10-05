#pragma once
#include "CoreMinimal.h"
#include "ESAIBehaviors_Combat.generated.h"

UENUM(BlueprintType)
namespace ESAIBehaviors_Combat {
    enum Type {
        BE_Default,
        BE_Aggressive,
        BE_Defensive,
        BE_Cowardly,
        CH_Max UMETA(Hidden),
    };
}

