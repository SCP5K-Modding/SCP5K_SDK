#include "FPSDamageSound.h"

FFPSDamageSound::FFPSDamageSound() {
    this->Sound = NULL;
    this->Delay = 0.00f;
    this->bLoopingSound = false;
    this->NextPlayTime = 0.00f;
    this->AccumulatedDamage = 0.00f;
}

