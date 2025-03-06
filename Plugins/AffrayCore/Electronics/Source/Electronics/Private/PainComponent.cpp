#include "PainComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavArea_Obstacle -FallbackName=NavArea_Obstacle

UPainComponent::UPainComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->EntryPain = 100.00f;
    this->bApplyPain = true;
    this->DamageTypeClass = UDamageType::StaticClass();
}

void UPainComponent::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


