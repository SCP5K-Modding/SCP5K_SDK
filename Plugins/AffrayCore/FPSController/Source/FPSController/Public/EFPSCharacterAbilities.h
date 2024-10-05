#pragma once
#include "CoreMinimal.h"
#include "EFPSCharacterAbilities.generated.h"

UENUM(BlueprintType)
namespace EFPSCharacterAbilities {
    enum Type {
        CanCrouch,
        CanSprint,
        CanProne,
        CanLowReady,
        CanLean,
        CanMount,
        CanUseNightVision,
        CanAim,
        CanBracedAim,
        CanReload,
        CanInspect,
        CanCheckAmmo,
        CanClimb,
        CanUseMelee,
        CanKick,
    };
}

