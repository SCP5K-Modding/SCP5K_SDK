#include "PandemicSpectatorPawn.h"

APandemicSpectatorPawn::APandemicSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpectateClass = NULL;
    this->SecondsToSwitchAfterDeath = 5.00f;
}

void APandemicSpectatorPawn::AddSpectatee(ACharacter* Spectatee) {
}


