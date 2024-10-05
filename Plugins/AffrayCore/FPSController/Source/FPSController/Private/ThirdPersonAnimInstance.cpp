#include "ThirdPersonAnimInstance.h"

UThirdPersonAnimInstance::UThirdPersonAnimInstance() {
    this->FPSCharacter = NULL;
    this->ItemData = NULL;
    this->WeaponData = NULL;
    this->ThrowableData = NULL;
    this->MeleeData = NULL;
    this->RangedWeaponData = NULL;
    this->BasePoseAnimation = NULL;
    this->SprintingAnimation = NULL;
    this->IdleAnimation = NULL;
    this->MovementAnimation = NULL;
    this->ReadyBasePoseAnimation = NULL;
    this->GripPose = NULL;
    this->ReadyRightPose = NULL;
    this->ReadyLeftPose = NULL;
    this->LeftHandIK = 1.00f;
    this->RightHandIK = 1.00f;
    this->bUpdateDistanceToGround = true;
    this->DistanceToGround = 0.00f;
    this->bIsReadyRight = false;
    this->bIsReadyLeft = false;
    this->bIsBallisticHit = false;
    this->bIsFrontHit = false;
    this->DamageDelay = 0.20f;
    this->MaxSpeed = 260.00f;
    this->SmoothRotationDelta = 0.00f;
    this->RotationRate = 0.00f;
    this->LastRotation = 0.00f;
    this->SmoothRotationAmount = 0.30f;
    this->GripAlpha = 0.00f;
    this->bIsMounted = false;
    this->MountAlpha = 0.00f;
    this->SmoothLean = 0.00f;
    this->LeanAmount = 20.00f;
    this->ReloadSpeed = 1.00f;
    this->MovementAlpha = 0.00f;
    this->DeltaTimeX = 0.00f;
    this->RecoilMultiplier = 1.00f;
    this->LeanElbowInfluence = 0.50f;
    this->LookYaw = 0.00f;
    this->LookPitch = 0.00f;
    this->OneHandedAlpha = 0.00f;
    this->PreviewDataClass = NULL;
    this->bIsDead = false;
    this->bIsReady = false;
    this->bIsFalling = false;
    this->bIsCrouching = false;
    this->CrouchingAlpha = 0.00f;
    this->bIsAiming = false;
    this->bIsSprinting = false;
    this->SprintingAlpha = 0.00f;
    this->bIsLowReady = false;
    this->LowReadyAlpha = 0.00f;
    this->bIsMoving = false;
    this->bIsReadyToThrow = false;
    this->bIsBracedAiming = false;
    this->BracedAimAlpha = 0.00f;
    this->AimAlpha = 0.00f;
    this->bIsTurning = false;
    this->TurnRight90Anim = NULL;
    this->TurnRight180Anim = NULL;
    this->TurnLeft90Anim = NULL;
    this->TurnLeft180Anim = NULL;
}

void UThirdPersonAnimInstance::StopTurning() {
}

void UThirdPersonAnimInstance::StartTurning(UAnimMontage* Montage, float PlayRate) {
}


