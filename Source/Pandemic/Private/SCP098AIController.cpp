#include "SCP098AIController.h"

ASCP098AIController::ASCP098AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SCP098Character = NULL;
    this->EatingKeyName = TEXT("IsEating");
}

FVector ASCP098AIController::GetSpawnedLocation() const {
    return FVector{};
}


