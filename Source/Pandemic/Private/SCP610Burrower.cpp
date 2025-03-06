#include "SCP610Burrower.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
#include "NavProjectileMovementComponent.h"

ASCP610Burrower::ASCP610Burrower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MovementComp = CreateDefaultSubobject<UNavProjectileMovementComponent>(TEXT("MovementComp"));
    this->TrueRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AudioComponent"));
    this->ExplodeDamage = 0.00f;
    this->DamageRadius = 250.00f;
    this->DamageDuration = 3.00f;
    this->DamageTickInterval = 0.30f;
    this->bDoesDamageFalloff = false;
    this->MinimumExplosionDamage = 0.00f;
    this->ExplodeDamageType = NULL;
    this->bDelayExplosion = true;
    this->TrackingSound = NULL;
    this->ExplodeSound = NULL;
    this->Particle = NULL;
    this->TriggeringAttack = NULL;
    this->NiagraComponent = NULL;
    this->AudioComponent->SetupAttachment(TrueRoot);
}

void ASCP610Burrower::OnProjectileStop(const FHitResult& ImpactResult) {
}

void ASCP610Burrower::Explode_Implementation() {
}


