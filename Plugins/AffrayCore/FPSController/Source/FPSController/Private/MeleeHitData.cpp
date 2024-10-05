#include "MeleeHitData.h"

FMeleeHitData::FMeleeHitData() {
    this->Flags = 0;
    this->Time = 0;
    this->HitBoneIndex = 0;
    this->SurfaceType = SurfaceType_Default;
    this->AttackType = 0;
    this->HitComponent = NULL;
}

