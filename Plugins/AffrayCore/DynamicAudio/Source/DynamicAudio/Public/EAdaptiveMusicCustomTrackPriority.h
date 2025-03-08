#pragma once
#include "CoreMinimal.h"
#include "EAdaptiveMusicCustomTrackPriority.generated.h"

UENUM(BlueprintType)
enum class EAdaptiveMusicCustomTrackPriority : uint8 {
    P0_GameStateCinematics,
    P1A_Tensions_AboveEncounters,
    P1B_Tensions_BelowEncounters,
    P2A_Ambient_AboveAreas,
    P2B_Ambient_BelowAreas,
};

