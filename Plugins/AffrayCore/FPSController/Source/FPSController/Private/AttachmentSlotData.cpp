#include "AttachmentSlotData.h"

FAttachmentSlotData::FAttachmentSlotData() {
    this->Type = EAttachmentSlotType::ST_Generic;
    this->AttachMeshPriority = 0;
    this->bRequestAlternateGripPose = false;
    this->bUseOverrideAlternateGripPose = false;
}

