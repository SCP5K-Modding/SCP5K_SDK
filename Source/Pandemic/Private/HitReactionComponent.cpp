#include "HitReactionComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UHitReactionComponent::UHitReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningCharacter = NULL;
    this->SkeletalMesh = NULL;
    this->FrontQuadrantMin = 25.00f;
    this->FrontQuadrantMax = 155.00f;
    this->LeftQuadrantMin = -155.00f;
    this->LeftQuadrantMax = 155.00f;
    this->BackQuadrantMin = -155.00f;
    this->BackQuadrantMax = -25.00f;
    this->RightQuadrantMin = -25.00f;
    this->RightQuadrantMax = 25.00f;
}

bool UHitReactionComponent::TryUpdateHitReactionData(const FSimpleHitData& HitData) {
    return false;
}

void UHitReactionComponent::StopStagger() {
}

void UHitReactionComponent::StopHitReaction() {
}

void UHitReactionComponent::SetOwningSkeletalComponent(USkeletalMeshComponent* SkeletalComponent) {
}

void UHitReactionComponent::SetOwningCharacter(ACharacter* Owner) {
}

void UHitReactionComponent::SetLastHitReactionData(FHitReactionData NewData) {
}

void UHitReactionComponent::PlayStagger(FHitReactionData ReactionData) {
}

void UHitReactionComponent::PlayHitReaction(FHitReactionData ReactionData) {
}

void UHitReactionComponent::OnRep_LastHitReactionData_Implementation() {
}

void UHitReactionComponent::OnHit(UHealthComponent* HealthComponent, FSimpleHitData HitData) {
}

USkeletalMeshComponent* UHitReactionComponent::GetOwningSkeletalComponent() const {
    return NULL;
}

ACharacter* UHitReactionComponent::GetOwningCharacter() const {
    return NULL;
}

FHitReactionData UHitReactionComponent::GetLastHitReactionData() const {
    return FHitReactionData{};
}

void UHitReactionComponent::ClearDamageAccumulation(TSubclassOf<UDamageType> DamageType) {
}

void UHitReactionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHitReactionComponent, LastHitReactionData);
}


