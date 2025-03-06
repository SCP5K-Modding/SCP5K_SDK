#include "SAICoverPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASAICoverPoint::ASAICoverPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bIsHighCover = false;
    this->bInUse = false;
    this->PawnUsingCover = NULL;
    this->CoverDetection = CreateDefaultSubobject<UBoxComponent>(TEXT("Cover Detection"));
    this->CoverDetection->SetupAttachment(RootComponent);
}


