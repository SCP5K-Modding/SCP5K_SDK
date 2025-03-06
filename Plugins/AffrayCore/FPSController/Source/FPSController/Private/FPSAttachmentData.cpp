#include "FPSAttachmentData.h"

UFPSAttachmentData::UFPSAttachmentData() {
    this->EnableSound = NULL;
    this->DisableSound = NULL;
    this->AttachSound = NULL;
    this->RemoveSound = NULL;
    this->ControlOffset = 0.00f;
    this->IdleMultiplier = 1.00f;
    this->ADSTimeMultiplier = 1.00f;
    this->bOverrideAttachSettings = false;
    this->AttachMeshOverridePriority = 5;
}


