#pragma once
#include "CoreMinimal.h"
#include "EAdaptiveMusicEncounterStage.generated.h"

UENUM(BlueprintType)
enum class EAdaptiveMusicEncounterStage : uint8 {
    None,
    PreEncounter,
    InEncounter,
    EndEncounter,
    PostEncounter,
};

