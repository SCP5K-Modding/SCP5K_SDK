#include "ReanimationData.h"

FReanimationData::FReanimationData() {
    this->AnimationToPlay = NULL;
    this->DesiredRagdollRotationDirection = EStaggerDirection::None;
    this->RequirementsMetScore = 0;
    this->RagdollRotationRequirementWeight = 0;
}

