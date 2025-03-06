#include "SpiderAnimationInstance.h"

USpiderAnimationInstance::USpiderAnimationInstance() {
    this->Character = NULL;
    this->bCanMoveLimbs = true;
    this->MaxMovingLimbs = 0;
    this->CurrentMovingLimbs = 0;
    this->MaxDistance = 100.00f;
    this->TimeToMove = 0.30f;
    this->AnticipationMultiplier = 0.20f;
    this->AcceptanceThreshold = 0.70f;
    this->WallCheckRadius = 50.00f;
    this->MaxWallDistance = 300.00f;
    this->UpperDistance = 0.00f;
    this->LowerDistance = 0.00f;
    this->RightDistance = 0.00f;
    this->LeftDistance = 0.00f;
    this->Compression = 0.00f;
}

void USpiderAnimationInstance::SetPositions() {
}

void USpiderAnimationInstance::OnFootstep_Implementation(FVector position, int32 LegIndex) {
}

bool USpiderAnimationInstance::IsPlayingAnimationInSlot(FName SlotName) {
    return false;
}

FVector USpiderAnimationInstance::FindTargetLocation_Implementation(int32 Index, FVector ProjectedLocation, FVector& Normal) {
    return FVector{};
}

void USpiderAnimationInstance::CheckDistances_Implementation() {
}


