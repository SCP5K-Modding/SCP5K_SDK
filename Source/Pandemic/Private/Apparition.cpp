#include "Apparition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
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


