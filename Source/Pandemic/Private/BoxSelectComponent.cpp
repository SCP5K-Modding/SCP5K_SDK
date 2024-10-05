#include "BoxSelectComponent.h"

UBoxSelectComponent::UBoxSelectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bHiddenInGame = true;
    this->Mobility = EComponentMobility::Static;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->AlwaysLoadOnClient = false;
    this->bUseEditorCompositing = true;
    this->ObjectTypesToGrab.AddDefaulted(3);
    this->bRequireFullOverlap = true;
}

void UBoxSelectComponent::SelectObjects() {
}

FVector UBoxSelectComponent::GetBoxLocation() const {
    return FVector{};
}

void UBoxSelectComponent::DepositObjects() {
}


