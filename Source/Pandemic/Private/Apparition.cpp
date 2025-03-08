#include "Apparition.h"
#include "Engine/EngineTypes.h"
#include "ApparitionController.h"

AApparition::AApparition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = AApparitionController::StaticClass();
}

void AApparition::SetEnabled_Implementation(bool bNewEnabled) {
}

void AApparition::SetConnectedScreen(UTheatreScreenComponent* NewConnectedScreen) {
}

UTheatreScreenComponent* AApparition::GetConnectedScreen() const {
    return NULL;
}


