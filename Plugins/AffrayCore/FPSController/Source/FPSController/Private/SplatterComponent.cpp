#include "SplatterComponent.h"
#include "Net/UnrealNetwork.h"

USplatterComponent::USplatterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutomaticallyTrigger = false;
    this->bFlipAngledDecal = true;
    this->TraceLength = 300.00f;
    this->AngledThreshold = 0.35f;
    this->MinDecalSize = 50.00f;
    this->MaxDecalSize = 100.00f;
    this->DecalThickness = 10.00f;
    this->CloseDecalSizeMultiplier = 0.50f;
    this->CloseDecalDistance = 50.00f;
    this->NumSplatterTraces = 4;
    this->SplatterTraceLength = 200.00f;
    this->MinSplatterDecalSize = 25.00f;
    this->MaxSplatterDecalSize = 50.00f;
    this->DecalLifeSpan = 60.00f;
    this->DecalFadeInTime = 0.10f;
    this->DecalFadeOutTime = 10.00f;
    this->PelvisBoneName = TEXT("pelvis");
    this->DeathDecalDelay = 5.00f;
    this->DeathDecalFadeTime = 15.00f;
    this->MaxDeathDecalVelocity = 200.00f;
    this->bCheckDamageTypes = false;
    this->bAutoLoadResources = true;
    this->bSpawnSplattersOnDedicatedServer = false;
    this->bUseHealthComponentForReplication = false;
}

void USplatterComponent::SpawnSplatterDecals(int32 Count) {
}

void USplatterComponent::SpawnDecal(FVector Location, FVector Normal, FVector Direction, float Distance, UPrimitiveComponent* HitComponent) {
}

void USplatterComponent::SpawnDeathDecal(FVector Location) {
}

void USplatterComponent::OnRep_LastHit() {
}

void USplatterComponent::OnHealthComponentDamaged(UHealthComponent* HealthComponent, FSimpleHitData HitData) {
}

void USplatterComponent::OnDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void USplatterComponent::AddTrace(FVector HitLocation, FVector ShotFromDirection, float Damage) {
}

void USplatterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplatterComponent, LastHit);
}


