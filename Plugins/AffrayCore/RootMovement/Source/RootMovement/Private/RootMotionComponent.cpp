#include "RootMotionComponent.h"
#include "Net/UnrealNetwork.h"

URootMotionComponent::URootMotionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootBoneName = TEXT("Root");
    this->bIsMoving = false;
    this->bIsBeginningMove = false;
    this->MoveAlpha = 0.00f;
    this->CurrentMontage = NULL;
    this->bDebug = false;
    this->bSweep = true;
}

bool URootMotionComponent::StartRootMoveAtTransform(UAnimMontage* Montage, FTransform StartTransform, FTransform Transform, float BlendTime, bool bShouldSweep) {
    return false;
}

bool URootMotionComponent::StartRootMove(UAnimMontage* Montage, FTransform Transform, bool bShouldSweep) {
    return false;
}

void URootMotionComponent::OnRep_IsMoving() {
}

void URootMotionComponent::GetRootMovement(FTransform& Transform, float& Alpha, float& Norm) {
}

FTransform URootMotionComponent::GetDesiredStartLocation(UAnimSequence* Sequence, FTransform RelativeTransform, FVector RootOffset, FTransform Transform) {
    return FTransform{};
}

FTransform URootMotionComponent::GetDesiredFinalLocation(UAnimSequence* Sequence, FTransform RelativeTransform, FVector RootOffset, FTransform Transform) {
    return FTransform{};
}

void URootMotionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URootMotionComponent, bIsMoving);
    DOREPLIFETIME(URootMotionComponent, MoveStart);
    DOREPLIFETIME(URootMotionComponent, MoveTarget);
    DOREPLIFETIME(URootMotionComponent, CurrentMontage);
}


