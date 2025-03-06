#include "RingAttack.h"

URingAttack::URingAttack() {
    this->ProjectileClass = NULL;
    this->ProjectileLifeSpan = 0.00f;
    this->bUsePlayerLocationForRadius = true;
    this->RingRadius = 400.00f;
    this->bDetermineNumRingsFromDistance = true;
    this->DistanceBetweenRings = 400.00f;
    this->NumRings = 3;
    this->NumAttacks = 8;
}


