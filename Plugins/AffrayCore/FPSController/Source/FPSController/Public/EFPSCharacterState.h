#pragma once
#include "CoreMinimal.h"
#include "EFPSCharacterState.generated.h"

UENUM(BlueprintType)
enum EFPSCharacterState {
    WantsCrouching,
    Crouching,
    WantsSprinting,
    Sprinting,
    WantsProne,
    Prone,
    LowReady,
    WantsLeaningLeft,
    LeaningLeft,
    WantsLeaningRight,
    LeaningRight,
    Mounted,
    NightVision,
    WantsAiming,
    Aiming,
    WantsBracedAiming,
    BracedAiming,
    Firing,
    Dead,
    Reloading,
    CancelledReload,
    EmptyReload,
    Inspecting,
    CheckingAmmo,
    WantsClimbing,
    Climbing,
    MeleeBasePoseLeft,
    MeleeReadyLeft,
    MeleeReadyRight,
    UsingMelee,
    Kicking,
    CheckingWatch,
};

