#include "SAIAttackComponent.h"
#include "Net/UnrealNetwork.h"

USAIAttackComponent::USAIAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void USAIAttackComponent::ServerStartAttack_Implementation(uint8 AttackIndex, const AActor* Target, const FVector& TargetLocation) {
}

void USAIAttackComponent::ServerFinishAttack_Implementation(uint8 AttackIndex) {
}

void USAIAttackComponent::ServerCancelAttack_Implementation(uint8 AttackIndex) {
}

void USAIAttackComponent::ServerCancelAllAttacks_Implementation() {
}

void USAIAttackComponent::MulticastStartAttack_Implementation(uint8 AttackIndex, const AActor* Target, const FVector& TargetLocation) {
}

void USAIAttackComponent::MulticastFinishAttack_Implementation(uint8 AttackIndex) {
}

void USAIAttackComponent::MulticastCancelAttack_Implementation(uint8 AttackIndex) {
}

bool USAIAttackComponent::IsValidAttackIndex(uint8 AttackIndex) const {
    return false;
}

TArray<uint8> USAIAttackComponent::GetUsableAttacks(AActor* TargetActor, bool bIncludeManualAttacks) {
    return TArray<uint8>();
}

APawn* USAIAttackComponent::GetPawnOwner() const {
    return NULL;
}

ACharacter* USAIAttackComponent::GetCharacterOwner() const {
    return NULL;
}

void USAIAttackComponent::FinishAttackWithAnimation(UAnimSequenceBase* Animation) {
}

void USAIAttackComponent::FinishAttack(USAIAttack* Attack) {
}

uint8 USAIAttackComponent::FindBestAttack(AActor* TargetActor) {
    return 0;
}

uint8 USAIAttackComponent::FindAttackIndex(const FGameplayTag& DesiredAttack) {
    return 0;
}

void USAIAttackComponent::EndAttackRegion(UAnimSequenceBase* Animation) {
}

bool USAIAttackComponent::CanUseAnyAttacksIfStopped(AActor* TargetActor, bool bIncludeManualAttacks) {
    return false;
}

bool USAIAttackComponent::CanUseAnyAttacks(AActor* TargetActor, bool bIncludeManualAttacks) {
    return false;
}

bool USAIAttackComponent::CanAttack() const {
    return false;
}

void USAIAttackComponent::BeginAttackRegion(float TotalDuration, UAnimSequenceBase* Animation) {
}

void USAIAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USAIAttackComponent, ActiveAttacks);
}


