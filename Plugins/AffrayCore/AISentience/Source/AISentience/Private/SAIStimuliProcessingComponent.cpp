#include "SAIStimuliProcessingComponent.h"

USAIStimuliProcessingComponent::USAIStimuliProcessingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CombatComponent = NULL;
    this->DetectionThreshold = 0.50f;
    this->DetectionDecayDelay = 2.00f;
    this->DetectionCap = 10.00f;
}

void USAIStimuliProcessingComponent::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}


