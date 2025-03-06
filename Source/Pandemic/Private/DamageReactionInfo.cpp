#include "DamageReactionInfo.h"

FDamageReactionInfo::FDamageReactionInfo() {
    this->bTriggerHitReactions = false;
    this->HitReactionThreshold = 0.00f;
    this->HitDuration = 0.00f;
    this->bTriggerStaggers = false;
    this->StaggerThreshold = 0.00f;
    this->StaggerDuration = 0.00f;
    this->AccumulationDurationTime = 0.00f;
    this->AccumulatedDamage = 0.00f;
}

