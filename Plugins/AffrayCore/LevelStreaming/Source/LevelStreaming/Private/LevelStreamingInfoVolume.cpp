#include "LevelStreamingInfoVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EActorUpdateOverlapsMethod -FallbackName=EActorUpdateOverlapsMethod

ALevelStreamingInfoVolume::ALevelStreamingInfoVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::AlwaysUpdate;
    this->Priority = 0;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
}


