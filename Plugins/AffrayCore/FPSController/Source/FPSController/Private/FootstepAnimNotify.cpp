#include "FootstepAnimNotify.h"

UFootstepAnimNotify::UFootstepAnimNotify() {
    this->Context = EFootstepContext::Step;
    this->LeftFootSyncMarker = TEXT("LeftFoot");
    this->LocomotionSyncGroup = TEXT("Locomotion");
    this->LeftFootBoneName = TEXT("foot_l");
    this->RightFootBoneName = TEXT("foot_r");
    this->MaxRange = 600.00f;
    this->ReferenceSpeed = 300.00f;
    this->SoundTag = TEXT("Footstep");
    this->CameraShakeClass = NULL;
}


