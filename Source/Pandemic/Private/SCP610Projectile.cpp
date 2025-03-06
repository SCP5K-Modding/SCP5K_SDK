#include "SCP610Projectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=FPSProjectileMovementComponent -FallbackName=FPSProjectileMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "Net/UnrealNetwork.h"

ASCP610Projectile::ASCP610Projectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ProjectileMovement = CreateDefaultSubobject<UFPSProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Particle"));
    this->NoiseSpeed = 1.00f;
    this->NoiseAmount = 300.00f;
    this->NoiseOffset = 0.00f;
    this->Damage = 10.00f;
    this->DamageType = NULL;
    this->TriggeringAttack = NULL;
    this->SurfaceDataMap = NULL;
    this->FlightSound = NULL;
    this->SuppressionSound = NULL;
    this->AudioComponent = NULL;
    this->NiagaraComponent->SetupAttachment(RootComponent);
}

void ASCP610Projectile::ProjectileStopped_Implementation(const FHitResult& ImpactResult) {
}

void ASCP610Projectile::OnRep_HitData() {
}

void ASCP610Projectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP610Projectile, NoiseOffset);
    DOREPLIFETIME(ASCP610Projectile, HitData);
}


