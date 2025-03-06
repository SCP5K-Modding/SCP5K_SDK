#include "SAIInvestigationScriptComponent.h"

USAIInvestigationScriptComponent::USAIInvestigationScriptComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PulseRate = 30.00f;
    this->InvestigationType = ESAIInvestigationType::ScriptLow;
}

void USAIInvestigationScriptComponent::StartPulse() {
}

void USAIInvestigationScriptComponent::EndPulse() {
}


