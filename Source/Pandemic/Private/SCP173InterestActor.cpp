#include "SCP173InterestActor.h"
#include "Components/SkeletalMeshComponent.h"

ASCP173InterestActor::ASCP173InterestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->bIncludeInQueries = true;
    this->InterestWeight = 1.00f;
    this->GroupName = TEXT("Default");
    this->InterestActorMesh = (USkeletalMeshComponent*)RootComponent;
}

void ASCP173InterestActor::SetInterestWeight(float NewInterestWeight) {
}

void ASCP173InterestActor::SetIncludeInQueries(bool NewIncludeInQueries) {
}


