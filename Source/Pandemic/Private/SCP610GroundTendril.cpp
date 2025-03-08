#include "SCP610GroundTendril.h"
#include "Components/SceneComponent.h"
#include "FMODAudioComponent.h"

ASCP610GroundTendril::ASCP610GroundTendril(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MovementComp = NULL;
    this->TrueRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AudioComponent"));
    this->ExplodeDamage = 0.00f;
    this->DamageRadius = 250.00f;
    this->DamageDuration = 3.00f;
    this->DamageTickInterval = 0.30f;
    this->bDoesDamageFalloff = false;
    this->MinimumExplosionDamage = 0.00f;
    this->ExplodeDamageType = NULL;
    this->ExplodeSound = NULL;
    this->Particle = NULL;
    this->TriggeringAttack = NULL;
    this->NiagraComponent = NULL;
    this->AudioComponent->SetupAttachment(TrueRoot);
}

void ASCP610GroundTendril::Explode_Implementation() {
}


