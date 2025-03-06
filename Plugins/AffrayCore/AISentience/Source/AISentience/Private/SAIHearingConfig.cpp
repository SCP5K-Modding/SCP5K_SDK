#include "SAIHearingConfig.h"

FSAIHearingConfig::FSAIHearingConfig() {
    this->Type = ESAISoundTypes::Error;
    this->Detection = 0;
    this->Strength = 0.00f;
    this->RangeMin = 0.00f;
    this->RangeMax = 0.00f;
}

