#include "DamageReactionInfo.h"

FDamageReactionInfo::FDamageReactionInfo() {
    this->bTriggerHitReactions = false;
    this->bPercentageBasedHitThreshold = false;
    this->HitReactionPercentage = 0.00f;
    this->HitReactionThreshold = 0.00f;
    this->NumPlayersHitReactionMultiplier = 0.00f;
    this->HitDuration = 0.00f;
    this->bTriggerStaggers = false;
    this->bPercentageBasedStaggerThreshold = false;
    this->StaggerPercentage = 0.00f;
    this->StaggerThreshold = 0.00f;
    this->NumPlayersStaggerMultiplier = 0.00f;
    this->StaggerDuration = 0.00f;
    this->AccumulationDurationTime = 0.00f;
    this->AccumulatedDamage = 0.00f;
}

