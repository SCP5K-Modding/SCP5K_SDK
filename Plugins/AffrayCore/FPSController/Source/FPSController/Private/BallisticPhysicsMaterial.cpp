#include "BallisticPhysicsMaterial.h"

UBallisticPhysicsMaterial::UBallisticPhysicsMaterial() {
    this->BallisticHardness = 0.20f;
    this->BallisticThickness = 0.20f;
    this->BallisticFriction = 0.05f;
    this->BallisticRicochetChance = 0.50f;
    this->bDamageActor = true;
    this->HitChance = 1.00f;
}


