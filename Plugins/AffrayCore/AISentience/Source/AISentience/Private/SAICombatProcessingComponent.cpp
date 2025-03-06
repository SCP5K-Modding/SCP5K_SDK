#include "SAICombatProcessingComponent.h"

USAICombatProcessingComponent::USAICombatProcessingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StandingStillTime = 3.00f;
    this->TransientStimuliLifetime = 10.00f;
    this->LoseTargetTime = 15.00f;
    this->TargetSelectionQuery = NULL;
    this->DialogueComponent = NULL;
    this->InvestigationSubsystem = NULL;
}


