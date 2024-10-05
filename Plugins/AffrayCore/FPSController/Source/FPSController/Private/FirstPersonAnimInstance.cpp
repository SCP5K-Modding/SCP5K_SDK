#include "FirstPersonAnimInstance.h"
#include "Templates/SubclassOf.h"

UFirstPersonAnimInstance::UFirstPersonAnimInstance() {
    this->FPSCharacter = NULL;
    this->ItemData = NULL;
    this->WeaponData = NULL;
    this->ThrowableData = NULL;
    this->MeleeData = NULL;
    this->RangedWeaponData = NULL;
    this->CurrentItem = NULL;
    this->CurrentRangedWeapon = NULL;
    this->BasePoseAnimation = NULL;
    this->SprintingAnimation = NULL;
    this->IdleAnimation = NULL;
    this->MovementAnimation = NULL;
    this->ReadyBasePoseAnimation = NULL;
    this->GripPose = NULL;
    this->LeftBasePose = NULL;
    this->ReadyRightPose = NULL;
    this->ReadyLeftPose = NULL;
    this->bIsReadyRight = false;
    this->bIsReadyLeft = false;
    this->bIsBasePoseLeft = false;
    this->CurrentClimbable = NULL;
    this->bIsClimbing = false;
    this->LeftHandClimbPercent = 0.00f;
    this->RightHandClimbPercent = 0.00f;
    this->MaxMovementSpeed = 400.00f;
    this->MovementLeanAmount = 10.00f;
    this->CrouchHeightOffset = 1.00f;
    this->CrouchIdleMultiplier = 0.75f;
    this->RightHandIKAlpha = 1.00f;
    this->LeftHandIKAlpha = 1.00f;
    this->MaxWallOffset = 20.00f;
    this->MovementPitchAmount = -4.00f;
    this->LeanElbowInfluence = 0.50f;
    this->MovementOffsetAmount = -3.00f;
    this->RecoilRotationAmount = 2.00f;
    this->AimingRecoilRotationAmount = 0.50f;
    this->AimingRecoilPositionAmount = 0.50f;
    this->PostMovementSightAlignment = 0.20f;
    this->PostFireSightAlignment = 0.20f;
    this->CurrentIdleAmount = 0.00f;
    this->SmoothMovementAmount = 0.00f;
    this->SmoothMovementSpeed = 0.00f;
    this->SmoothCrouchOffset = 0.00f;
    this->SmoothBlockingAlpha = 0.00f;
    this->SmoothWallDistanceOffset = 0.00f;
    this->LeanAmount = -20.00f;
    this->SmoothLean = 0.00f;
    this->CurrentLean = 0.00f;
    this->LeanDistance = -2.00f;
    this->ADSRotationAlpha = 0.00f;
    this->ADSForwardOffset = 0.00f;
    this->AimingAlpha = 0.00f;
    this->BracedAimAlpha = 0.00f;
    this->BracedAimTilt = 0.00f;
    this->Control = 1.00f;
    this->AimingActionMovementAmount = 0.40f;
    this->CurrentActionMovementAmount = 1.00f;
    this->SmoothActionMovementAmount = 0.00f;
    this->bIsUsingBipod = false;
    this->BipodAlpha = 0.00f;
    this->MountOffsetAlpha = 0.00f;
    this->DeltaTimeX = 0.00f;
    this->RecoilLeanAmount = -2.00f;
    this->MaxRecoilKick = 5.00f;
    this->CurrentRecoilAmount = 0.00f;
    this->CurrentRecoilAnimationAmount = 0.00f;
    this->CurrentRecoilKickAmount = 0.00f;
    this->TargetKick = 0.00f;
    this->SmoothKick = 0.00f;
    this->TargetNoise = 0.00f;
    this->SmoothNoise = 0.00f;
    this->ShotNoiseIncrement = 0.30f;
    this->AimingShotNoiseIncrement = 0.10f;
    this->ShotNoiseDecay = 7.00f;
    this->KickRotationAmount = 1.00f;
    this->AimingKickMultiplier = 1.00f;
    this->AimingRecoilAnimationMultiplier = 1.00f;
    this->GripAmount = 0.00f;
    this->bNeedsConstantGripUpdate = true;
    this->MaxSmoothRotation = 8.00f;
    this->SmoothRotationTiltAmount = -1.00f;
    this->CurrentSmoothRotationAmount = 0.00f;
    this->SmoothRotationAmount = 0.01f;
    this->SmoothRotationOffsetAmount = 0.45f;
    this->CurrentLookX = 0.00f;
    this->CurrentLookY = 0.00f;
    this->CurrentLookZ = 0.00f;
    this->MovementRoll = 0.00f;
    this->bIsSprinting = false;
    this->bIsCrouching = false;
    this->bIsAiming = false;
    this->bIsBracedAiming = false;
    this->bIsBlocking = false;
    this->bIsLowReady = false;
    this->bIsLocallyOwned = false;
    this->bIsFirstPerson = false;
    this->bIsReadyToThrow = false;
    this->ShakeAmount = 0.00f;
    this->ShakeSpeed = 1.00f;
    this->ShakeTime = 0.00f;
    this->ShakeMaxHealthPercent = 0.50f;
    this->MaxHealthShakeAmount = 1.00f;
    this->MinShakeAmount = 0.30f;
    this->MaxHealthShakeSpeed = 2.50f;
    this->MinShakeSpeed = 1.00f;
    this->bLockShakeAmount = false;
}

void UFirstPersonAnimInstance::UpdateGripPosition() {
}

void UFirstPersonAnimInstance::UpdateGripAlpha() {
}

void UFirstPersonAnimInstance::UpdateGrabPoint(bool bIsLeft) {
}

void UFirstPersonAnimInstance::SetSwayMultiplier(float Multiplier) {
}

UAnimSequence* UFirstPersonAnimInstance::GetGripPose_Implementation(UFPSGripData* GripData, TSubclassOf<AFPSRangedWeapon> WeaponClass) {
    return NULL;
}


