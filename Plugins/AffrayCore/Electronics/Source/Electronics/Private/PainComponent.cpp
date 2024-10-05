#include "PainComponent.h"
#include "GameFramework/DamageType.h"
#include "NavAreas/NavArea_Obstacle.h"

UPainComponent::UPainComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->EntryPain = 100.00f;
    this->bApplyPain = true;
    this->DamageTypeClass = UDamageType::StaticClass();
}

void UPainComponent::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


