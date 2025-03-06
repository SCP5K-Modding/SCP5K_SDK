#include "SAIPatrol_NEW.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ASAIPatrol_NEW::ASAIPatrol_NEW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard Component"));
    this->BillboardRootComponent = (UBillboardComponent*)RootComponent;
    this->PatrolPathComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Patrol Path Component"));
    this->PatrolPathComponent->SetupAttachment(RootComponent);
}


