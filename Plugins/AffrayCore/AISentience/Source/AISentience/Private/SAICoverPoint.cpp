#include "SAICoverPoint.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ASAICoverPoint::ASAICoverPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bIsHighCover = false;
    this->bInUse = false;
    this->PawnUsingCover = NULL;
    this->CoverDetection = CreateDefaultSubobject<UBoxComponent>(TEXT("Cover Detection"));
    this->CoverDetection->SetupAttachment(RootComponent);
}


