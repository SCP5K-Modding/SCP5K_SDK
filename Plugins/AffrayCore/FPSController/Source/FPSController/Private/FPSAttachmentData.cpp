#include "FPSAttachmentData.h"

UFPSAttachmentData::UFPSAttachmentData() {
    this->Icon = NULL;
    this->EnableSound = NULL;
    this->DisableSound = NULL;
    this->AttachSound = NULL;
    this->RemoveSound = NULL;
    this->ControlOffset = 0.00f;
    this->bOverrideAttachSettings = false;
    this->AttachMeshOverridePriority = 5;
}


