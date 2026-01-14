#include "BlizzardActor.h"
#include "Net/UnrealNetwork.h"

ABlizzardActor::ABlizzardActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bApplyDamage = false;
    this->bApplySlow = false;
    this->bActivelySlowing = false;
    this->MildPeriod = 60.00f;
    this->IntensePeriod = 2.00f;
    this->DamageAmount = 1.00f;
    this->DamageFrequency = 0.10f;
    this->PhysicsVolume = NULL;
    this->DamageType = NULL;
    this->bBlizzardIsIntense = false;
    this->bBlizzardEnabled = false;
}

void ABlizzardActor::StopBlizzard_Implementation() {
}

void ABlizzardActor::StartBlizzard_Implementation() {
}

void ABlizzardActor::SetBlizzardIsIntense(bool bInBlizzardIsIntense) {
}

void ABlizzardActor::SetBlizzardEnabled(bool bInBlizzardEnabled) {
}

void ABlizzardActor::SetApplySlow(bool bInApplySlow) {
}





void ABlizzardActor::OnRep_SetApplySlow() {
}

void ABlizzardActor::OnRep_BlizzardIsIntense() {
}

void ABlizzardActor::OnRep_BlizzardEnabled() {
}

void ABlizzardActor::OnExcludedActorRemoved(UWeatherExclusionComponent* Component, AActor* OldActor) {
}

void ABlizzardActor::OnExcludedActorAdded(UWeatherExclusionComponent* Component, AActor* NewActor) {
}

void ABlizzardActor::OnComponentAddedToComponentRegistry(UActorComponent* NewComponent) {
}

void ABlizzardActor::OnActorSpawned(AActor* SpawnedActor) {
}

void ABlizzardActor::Multicast_StopBlizzardFX_Implementation() {
}

void ABlizzardActor::Multicast_StopBlizzard_Implementation() {
}

void ABlizzardActor::Multicast_StartBlizzardFX_Implementation() {
}

void ABlizzardActor::Multicast_StartBlizzard_Implementation() {
}

void ABlizzardActor::DamageActors() {
}

void ABlizzardActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABlizzardActor, bActivelySlowing);
    DOREPLIFETIME(ABlizzardActor, bBlizzardIsIntense);
    DOREPLIFETIME(ABlizzardActor, bBlizzardEnabled);
}


