#include "LevelStreamingInfoVolume.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"

ALevelStreamingInfoVolume::ALevelStreamingInfoVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::AlwaysUpdate;
    this->Priority = 0;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
}


