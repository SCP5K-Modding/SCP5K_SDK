#include "SAIAwarenessComponent.h"

USAIAwarenessComponent::USAIAwarenessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseCoordinatedInvestigation = false;
    this->DialogueComponent = NULL;
    this->StimuliProcessingComponent = NULL;
    this->CombatComponent = NULL;
    this->InvestigationSubsystem = NULL;
}


