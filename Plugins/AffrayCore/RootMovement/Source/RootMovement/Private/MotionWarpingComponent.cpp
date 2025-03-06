#include "MotionWarpingComponent.h"

UMotionWarpingComponent::UMotionWarpingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootBoneName = TEXT("Root");
    this->bIsMoving = false;
    this->bIsBeginningMove = false;
    this->MoveAlpha = 0.00f;
    this->bStopDefaultGroup = false;
    this->CurrentMontage = NULL;
    this->bSweep = true;
}

bool UMotionWarpingComponent::StartRootMoveAtTransform(UAnimMontage* Montage, FTransform StartTransform, FTransform Transform, float InBlendTime, bool bShouldSweep) {
    return false;
}

bool UMotionWarpingComponent::StartRootMove(UAnimMontage* Montage, FTransform Transform, bool bShouldSweep) {
    return false;
}

void UMotionWarpingComponent::SetReferenceLocation(FName Name, const FTransform& Transform) {
}

void UMotionWarpingComponent::OnRep_IsMoving() {
}

FTransform UMotionWarpingComponent::OnProcessRootMotionPreWorld(const FTransform& Transform, UCharacterMovementComponent* MovementComponent, float DeltaSeconds) {
    return FTransform{};
}

FTransform UMotionWarpingComponent::OnProcessRootMotionPostWorld(const FTransform& Transform, UCharacterMovementComponent* MovementComponent, float DeltaSeconds) {
    return FTransform{};
}

void UMotionWarpingComponent::MontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UMotionWarpingComponent::GetRootMovement(FTransform& Transform, float& Alpha, float& Norm) {
}

FTransform UMotionWarpingComponent::GetDesiredStartLocation(UAnimSequence* Sequence, USkeletalMeshComponent* Component, FTransform Transform) {
    return FTransform{};
}

FTransform UMotionWarpingComponent::GetDesiredFinalLocation(UAnimSequence* Sequence, USkeletalMeshComponent* Component, FTransform Transform) {
    return FTransform{};
}


