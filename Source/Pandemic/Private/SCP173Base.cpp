#include "SCP173Base.h"
#include "SCP173MovementComponent.h"

ASCP173Base::ASCP173Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USCP173MovementComponent>(TEXT("CharMoveComp"))) {
    this->ObservationRadius = 5000.00f;
    this->PseudoCapsuleRadius = -1.00f;
    this->PseudoCapsuleHalfHeight = -1.00f;
    this->VisibilityTraceSubdivisions = 5;
}

bool ASCP173Base::WouldBeVisibleToQuerier(const FVector& TargetLocation, const FVector& QueryLocation, const FVector& QueryDirection, float QueryFOV, bool bSingleTrace, FColor DebugColor) const {
    return false;
}

bool ASCP173Base::WouldBeVisibleToObserver(const FVector& TargetLocation, const USCP173ObserverComponent* QueryObserver, FColor DebugColor) const {
    return false;
}

bool ASCP173Base::WouldBeVisibleToActor(const FVector& TargetLocation, const AActor* QueryActor, FColor DebugColor) const {
    return false;
}

bool ASCP173Base::WouldBeVisible(const FVector& TargetLocation, FColor DebugColor) const {
    return false;
}

bool ASCP173Base::WouldBeInQuerierFOV(const FVector& TargetLocation, const FVector& QueryLocation, const FVector& QueryDirection, float QueryFOV) const {
    return false;
}

TArray<FVector> ASCP173Base::TransformPoints(const FTransform& TargetTransform, FColor DebugColor) const {
    return TArray<FVector>();
}

bool ASCP173Base::IsObserved() const {
    return false;
}

TArray<USCP173ObserverComponent*> ASCP173Base::GetPotentialObserversOfTargetLocation(const FVector& TargetLocation) const {
    return TArray<USCP173ObserverComponent*>();
}

TArray<USCP173ObserverComponent*> ASCP173Base::GetObserversOfTargetLocation(const FVector& TargetLocation, FColor DebugColor) const {
    return TArray<USCP173ObserverComponent*>();
}

TArray<USCP173ObserverComponent*> ASCP173Base::GetCurrentObservers(FColor DebugColor) const {
    return TArray<USCP173ObserverComponent*>();
}


