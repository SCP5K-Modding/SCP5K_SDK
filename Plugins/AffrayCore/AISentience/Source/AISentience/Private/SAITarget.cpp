#include "SAITarget.h"

FSAITarget::FSAITarget() {
    this->bIsVisible = false;
    this->bHasBeenVisible = false;
    this->Detection = 0.00f;
    this->Prejudice = 0.00f;
    this->LastLightIntensity = 0.00f;
    this->FirstSeenTime = 0.00f;
    this->LastSeenTime = 0.00f;
    this->SightDot = 0.00f;
    this->Damage = 0.00f;
    this->Threat = 0.00f;
    this->MaxThreat = 0.00f;
    this->Health = 0.00f;
}

