#include "SCP173C.h"

ASCP173C::ASCP173C(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxMovementSpeed = 6000.00f;
    this->SlowMovementSpeed = 30.00f;
    this->SpeedCurve = NULL;
    this->AggressionMultiplier = 1.00f;
    this->AggressionHysteresis = 0.10f;
    this->bHandleAggression = true;
    this->SpottedPlayerSound = NULL;
    this->DeathSound = NULL;
}

void ASCP173C::PlayTargetSwapSound() {
}

void ASCP173C::OverrideAggression(float Aggression) {
}


