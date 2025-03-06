#include "SCP1262Spitter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIMeleeComponent -FallbackName=SAIMeleeComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=HealthComponent -FallbackName=HealthComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SignificanceBase -ObjectName=SignificanceComponent -FallbackName=SignificanceComponent
#include "Net/UnrealNetwork.h"
#include "SCP1262SpitterProjectile.h"

ASCP1262Spitter::ASCP1262Spitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAlert = false;
    this->StartAttackDelay = 1.00f;
    this->AttackDelay = 5.00f;
    this->StaggerDelay = 2.00f;
    this->StaggerDamageAmount = 50.00f;
    this->FiringAngleVariation = 1.00f;
    this->ProjectileClass = ASCP1262SpitterProjectile::StaticClass();
    this->bStartDead = false;
    this->IdleSound = NULL;
    this->bStartAlert = false;
    this->MinBlendPhysicsSignificance = 0.70f;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->LoopingAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("LoopingAudio"));
    this->MeleeComponent = CreateDefaultSubobject<USAIMeleeComponent>(TEXT("Melee"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
    this->SignificanceComponent = CreateDefaultSubobject<USignificanceComponent>(TEXT("Significance"));
    this->AnimationInstance = NULL;
    this->SCP1262Controller = NULL;
    this->bIsFiring = false;
    this->StaggerDirection = EStaggerDirection::None;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->LoopingAudioComponent->SetupAttachment(RootComponent);
}

void ASCP1262Spitter::TryFireProjectile() {
}

void ASCP1262Spitter::StartStaggering(FVector StaggerVector) {
}

void ASCP1262Spitter::StartFireProjectile(FVector TargetLocation) {
}

void ASCP1262Spitter::ReviveOrReveal() {
}

void ASCP1262Spitter::Revive() {
}

void ASCP1262Spitter::OnRep_StaggerDirection() {
}

void ASCP1262Spitter::OnRep_IsFiring() {
}

void ASCP1262Spitter::OnHealthComponentRevived_Implementation(UHealthComponent* Component) {
}

void ASCP1262Spitter::OnHealthComponentDied_Implementation(UHealthComponent* Component) {
}

void ASCP1262Spitter::OnHealthComponentDamaged_Implementation(UHealthComponent* Component, FSimpleHitData HitData) {
}

void ASCP1262Spitter::OnAttackStarted(USAIMeleeComponent* AttackingComponent, uint8 AttackIndex, FAIMeleeAttackType Attack) {
}

bool ASCP1262Spitter::GetIsStaggering() const {
    return false;
}

FVector ASCP1262Spitter::GetHeadLocation() const {
    return FVector{};
}

void ASCP1262Spitter::FinishFireProjectile_Implementation() {
}

void ASCP1262Spitter::CosmeticStartStaggering_Implementation(EStaggerDirection Direction) {
}

void ASCP1262Spitter::CosmeticRevive_Implementation() {
}

void ASCP1262Spitter::CosmeticFireProjectile_Implementation() {
}

void ASCP1262Spitter::CosmeticFinishFireProjectile_Implementation() {
}

void ASCP1262Spitter::CosmeticDie_Implementation() {
}

void ASCP1262Spitter::Alert() {
}

void ASCP1262Spitter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP1262Spitter, CurrentLookTarget);
    DOREPLIFETIME(ASCP1262Spitter, ShotOffset);
    DOREPLIFETIME(ASCP1262Spitter, bAlert);
    DOREPLIFETIME(ASCP1262Spitter, bIsFiring);
    DOREPLIFETIME(ASCP1262Spitter, StaggerDirection);
}


