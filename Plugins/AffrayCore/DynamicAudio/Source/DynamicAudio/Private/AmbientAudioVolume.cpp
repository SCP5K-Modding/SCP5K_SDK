#include "AmbientAudioVolume.h"
#include "GameFramework/Actor.h"

AAmbientAudioVolume::AAmbientAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::AlwaysUpdate;
    this->Event = NULL;
    this->VolumeIndex = 0;
}

UFMODEvent* AAmbientAudioVolume::GetEvent() {
    return NULL;
}


