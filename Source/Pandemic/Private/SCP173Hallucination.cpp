#include "SCP173Hallucination.h"

USCP173Hallucination::USCP173Hallucination() {
    this->bCanStack = true;
}

bool USCP173Hallucination::HasExpendedDuration() const {
    return false;
}

bool USCP173Hallucination::CanStack() const {
    return false;
}


