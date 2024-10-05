#include "LookAtPointService.h"

ULookAtPointService::ULookAtPointService() {
    this->bDrawDebug = false;
    this->bCheckVisibility = true;
    this->bAlwaysLookForward = false;
    this->bUseLookAhead = false;
    this->LookAheadDistance = 300.00f;
    this->bUseRandomOffset = true;
    this->AngleLimit = 40.00f;
    this->MinLookTime = 1.50f;
    this->LookTimeVariance = 0.50f;
    this->RandomAmount = 20.00f;
    this->bUseLookAtActor = false;
    this->MaxLookSpeed = 400.00f;
    this->MinLookSpeed = 50.00f;
    this->RecoilCompensationAmount = 0.40f;
    this->bUseRandomSway = true;
    this->NoiseAmount = 2.00f;
    this->NoiseSpeed = 0.60f;
    this->DeltaTime = 0.00f;
}

void ULookAtPointService::UpdateVisibility() {
}

float ULookAtPointService::ReduceOverTime(float Target, float Random) {
    return 0.0f;
}


