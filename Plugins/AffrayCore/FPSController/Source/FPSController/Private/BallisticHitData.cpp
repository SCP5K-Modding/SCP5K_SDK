#include "BallisticHitData.h"

FBallisticHitData::FBallisticHitData() {
    this->Flags = 0;
    this->Time = 0;
    this->PhysicsMaterialIndex = 0;
    this->Distance = 0;
    this->HitBoneIndex = 0;
    this->HitComponent = NULL;
}

