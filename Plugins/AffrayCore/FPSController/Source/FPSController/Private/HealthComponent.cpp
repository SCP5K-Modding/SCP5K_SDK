#include "HealthComponent.h"

#include "GameplayTagContainer.h"
#include "Net/UnrealNetwork.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameEventBus = NULL;
    this->CurrentHealth = 100.00f;
    this->MaxHealth = 100.00f;
    this->MaxHealthPlayerMultiplier = 0.00f;
    this->bIsDead = false;
    this->DefaultDamageMultiplier = 1.00f;
    this->HeadBoneName = TEXT("head");
}

void UHealthComponent::SetHealth(float NewHealth, AController* InstigatedBy, AActor* DamageCauser, bool bCheckDeath) {
}

void UHealthComponent::Revive() {
}

void UHealthComponent::Reset() {
}

void UHealthComponent::OnRep_LastHit() {
}

void UHealthComponent::OnRep_CurrentHealth() {
}

void UHealthComponent::OnRep_bIsDead() {
}

void UHealthComponent::OnRadialDamageOld(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser) {
}

void UHealthComponent::OnRadialDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser) {
}

void UHealthComponent::OnPointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UHealthComponent::OnDamage(AActor* DamagedActor, float Damage, const UDamageType* RecievingDamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

bool UHealthComponent::IsDead() const {
    return false;
}

void UHealthComponent::InvokeEventOnEventBusWithOurSubjectAndDamageType(const APawn* InstigatedBy, const AActor* Subject, FGameplayTagContainer TagContainer, bool bReportDamageType) {
}

float UHealthComponent::GetMaxHealth() const {
    return 0.0f;
}

FSimpleHitData UHealthComponent::GetLastHit() const {
    return FSimpleHitData{};
}

float UHealthComponent::GetCurrentHealth() const {
    return 0.0f;
}

void UHealthComponent::Die(AController* InstigatedBy, AActor* DamageCauser) {
}

bool UHealthComponent::CheckDeath(AController* InstigatedBy, AActor* DamageCauser) {
    return false;
}

void UHealthComponent::AddHealth(float HealthDelta, AController* InstigatedBy, AActor* DamageCauser, bool bCheckDeath) {
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHealthComponent, CurrentHealth);
    DOREPLIFETIME(UHealthComponent, MaxHealth);
    DOREPLIFETIME(UHealthComponent, bIsDead);
    DOREPLIFETIME(UHealthComponent, LastHit);
}


