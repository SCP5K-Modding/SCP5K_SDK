#include "SignificanceComponent.h"

USignificanceComponent::USignificanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateStreamingLevelFromPhysicsHits = false;
    this->bUpdateLevelFromCharacterFloor = false;
    this->MaxUnloadedSignificance = 0.20f;
    this->bUseDistanceSignificance = true;
    this->SignificanceCurve = NULL;
    this->DistanceScale = 1.00f;
    this->bUseVisibilitySignificance = false;
    this->MaxUnrenderedSignificance = 0.61f;
    this->bSetMeshTickInterval = false;
    this->MeshMinTickInterval = 0.00f;
    this->MeshMaxTickInterval = 0.05f;
    this->bSetDynamicShadows = false;
    this->MinShadowsEnabledSignificance = 0.60f;
}

void USignificanceComponent::OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


