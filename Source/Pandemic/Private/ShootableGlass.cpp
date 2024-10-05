#include "ShootableGlass.h"
#include "Net/UnrealNetwork.h"

UShootableGlass::UShootableGlass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->bOverrideNavigationExport = true;
    this->bUseShatteredMesh = false;
    this->ShatteredMesh = NULL;
    this->ShatterEffect = NULL;
    this->ShatterSound = NULL;
    this->bIsBroken = false;
    this->CurrentHealth = -1.00f;
    this->MaxHealth = 0.00f;
}

void UShootableGlass::OnRep_IsBroken() {
}

void UShootableGlass::OnRep_HitData() {
}

void UShootableGlass::OnRep_CurrentHealth() {
}

void UShootableGlass::OnPointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UShootableGlass::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UShootableGlass, HitData);
    DOREPLIFETIME(UShootableGlass, bIsBroken);
    DOREPLIFETIME(UShootableGlass, CurrentHealth);
}


