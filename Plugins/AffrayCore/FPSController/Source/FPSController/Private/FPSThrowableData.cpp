#include "FPSThrowableData.h"
#include "EItemType.h"

UFPSThrowableData::UFPSThrowableData() {
    this->ItemType = EItemType::Throwable;
    this->bCanLowReady = false;
    this->ProjectileClass = NULL;
    this->Velocity = 2000.00f;
    this->LobMultiplier = 0.50f;
    this->CockDelay = 1.00f;
    this->MaxAmount = 2;
    this->ThrowDelay = 0.20f;
}


