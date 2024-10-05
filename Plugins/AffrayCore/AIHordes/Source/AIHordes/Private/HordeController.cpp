#include "HordeController.h"

AHordeController::AHordeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachToPawn = true;
    this->RandomPathingRadius = 200.00f;
}

void AHordeController::OnSeePawn(APawn* SeenPawn) {
}

bool AHordeController::IsTarget_Implementation(AActor* Actor) {
    return false;
}

AHorde* AHordeController::GetHorde() const {
    return NULL;
}

TArray<APawn*> AHordeController::GetCurrentTargets() {
    return TArray<APawn*>();
}

void AHordeController::EndAlert_Implementation() {
}

void AHordeController::CheckTargetVisibility() {
}

void AHordeController::BeginAlert_Implementation(const TArray<APawn*>& Targets) {
}


