#include "ClimbableComponent.h"

UClimbableComponent::UClimbableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClimbableExits.AddDefaulted(2);
    this->Height = 1000.00f;
    this->RungDistance = 20.00f;
    this->Width = 100.00f;
    this->bOneSided = false;
    this->ClimbDistance = 50.00f;
    this->OverlapBox = NULL;
}

void UClimbableComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void UClimbableComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UClimbableComponent::IsInClimbable(FVector Location) const {
    return false;
}

bool UClimbableComponent::IsForcedExit(FVector Location, FVector Velocity, FClimbableExit& Exit) const {
    return false;
}

float UClimbableComponent::GetWidth() const {
    return 0.0f;
}

float UClimbableComponent::GetRungDistance() const {
    return 0.0f;
}

float UClimbableComponent::GetHeight() const {
    return 0.0f;
}

FClimbableExit UClimbableComponent::GetClimbableExit(FVector Location) {
    return FClimbableExit{};
}


