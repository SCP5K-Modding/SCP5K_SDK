#include "SimpleHitData.h"

FSimpleHitData::FSimpleHitData() {
    this->bRadial = false;
    this->HitComponent = NULL;
    this->HitBoneIndex = 0;
    this->HitDamageCauser = NULL;
    this->bHasAppliedPhysics = false;
    this->DamageType = NULL;
    this->StoredDamage = 0;
}

