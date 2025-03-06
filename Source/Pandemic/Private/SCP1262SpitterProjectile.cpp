#include "SCP1262SpitterProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=FPSProjectileMovementComponent -FallbackName=FPSProjectileMovementComponent
#include "Net/UnrealNetwork.h"

ASCP1262SpitterProjectile::ASCP1262SpitterProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->MovementComponent = CreateDefaultSubobject<UFPSProjectileMovementComponent>(TEXT("MovementComponent"));
    this->SuppressionSound = NULL;
    this->PostHitPawnLifespan = 10.00f;
    this->bActive = false;
    this->bShattered = false;
    this->Damage = 75.00f;
    this->DamageType = NULL;
    this->SurfaceDataMap = NULL;
    this->ShatterSystem = NULL;
    this->ShatterSound = NULL;
    this->ShatterChance = 0.50f;
    this->Mesh->SetupAttachment(RootComponent);
}

void ASCP1262SpitterProjectile::ProjectileStopped_Implementation(const FHitResult& ImpactResult) {
}

void ASCP1262SpitterProjectile::OnRep_HitData() {
}

void ASCP1262SpitterProjectile::OnRep_bShattered() {
}

void ASCP1262SpitterProjectile::OnRep_bActive() {
}

UProjectileMovementComponent* ASCP1262SpitterProjectile::GetMovementComponent() const {
    return NULL;
}

void ASCP1262SpitterProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP1262SpitterProjectile, bActive);
    DOREPLIFETIME(ASCP1262SpitterProjectile, HitData);
    DOREPLIFETIME(ASCP1262SpitterProjectile, bShattered);
}


