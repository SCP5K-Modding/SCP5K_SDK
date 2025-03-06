#pragma once
#include "CoreMinimal.h"
#include "ESAITransientStimuliType.generated.h"

UENUM(BlueprintType)
enum class ESAITransientStimuliType : uint8 {
    Error,
    GlipsedActor,
    LostTarget,
    Danger,
    DangerBig,
    Incidental,
    Investigation,
    Facing,
    CurrentLook,
    PointOfInterest,
};

