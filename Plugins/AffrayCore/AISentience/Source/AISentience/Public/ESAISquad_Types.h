#pragma once
#include "CoreMinimal.h"
#include "ESAISquad_Types.generated.h"

UENUM(BlueprintType)
namespace ESAISquad_Types {
    enum Type {
        SQ_Default,
        SQ_Observant,
        SQ_Distant,
        CH_Max UMETA(Hidden),
    };
}

