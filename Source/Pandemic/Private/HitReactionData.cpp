#include "HitReactionData.h"

FHitReactionData::FHitReactionData() {
    this->bIsFrontHit = false;
    this->HitDirectionAngle = 0.00f;
    this->HitBodyQuadrant = EHitBodyQuadrant::None;
    this->HitDamageType = NULL;
    this->ReactionType = EReactionType::None;
    this->HitDuration = 0.00f;
}

