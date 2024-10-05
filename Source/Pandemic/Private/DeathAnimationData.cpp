#include "DeathAnimationData.h"

FDeathAnimationData::FDeathAnimationData() {
    this->AnimationToPlay = NULL;
    this->AnimationRagdollStartOffset = 0.00f;
    this->HitLocationAllowanceX = 0.00f;
    this->HitLocationAllowanceY = 0.00f;
    this->DesiredHitSize = EDeathHitSizeRequirement::None;
    this->LargeHitDamageThreshold = 0.00f;
    this->DesiredHitDirection = EStaggerDirection::None;
    this->RequirementsMetScore = 0;
    this->DamageTypeRequirementWeight = 0;
    this->HitLocationRequirementWeight = 0;
    this->HitSizeRequirementWeight = 0;
    this->HitDirectionRequirementWeight = 0;
}

