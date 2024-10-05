#include "SAIPatrol_NEW.h"
#include "Components/BillboardComponent.h"
#include "Components/SplineComponent.h"

ASAIPatrol_NEW::ASAIPatrol_NEW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard Component"));
    this->BillboardRootComponent = (UBillboardComponent*)RootComponent;
    this->PatrolPathComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Patrol Path Component"));
    this->PatrolPathComponent->SetupAttachment(RootComponent);
}


