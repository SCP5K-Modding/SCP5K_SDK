#include "SCP610Character.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AISentience -ObjectName=SAIAttackComponent -FallbackName=SAIAttackComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Dismemberment -ObjectName=GoreComponent -FallbackName=GoreComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoPossessAI -FallbackName=EAutoPossessAI
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicalAnimationComponent -FallbackName=PhysicalAnimationComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=FootstepComponent -FallbackName=FootstepComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=HealthComponent -FallbackName=HealthComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=SplatterComponent -FallbackName=SplatterComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FPSController -ObjectName=TickOptimizerComponent -FallbackName=TickOptimizerComponent
#include "DoorAttackComponent.h"
#include "FastReplicatedRagdoll.h"
#include "HitReactionComponent.h"
#include "InterruptibleAnimComponent.h"
#include "Net/UnrealNetwork.h"
#include "RageComponent.h"
#include "ReanimationComponent.h"

ASCP610Character::ASCP610Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AttackComponent = CreateDefaultSubobject<USAIAttackComponent>(TEXT("AttackComponent"));
    this->GoreComponent = CreateDefaultSubobject<UGoreComponent>(TEXT("Gore"));
    this->FMODAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODAudio"));
    this->LoopingAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("LoopingAudio"));
    this->FootstepComponent = CreateDefaultSubobject<UFootstepComponent>(TEXT("Footstep"));
    this->PhysicalAnimationComponent = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("PhysicalAnimation"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
    this->SplatterComponent = CreateDefaultSubobject<USplatterComponent>(TEXT("Splatter"));
    this->ReplicatedRagdollComponent = CreateDefaultSubobject<UFastReplicatedRagdoll>(TEXT("FastReplicatedRagdollComponent"));
    this->ReanimationComponent = CreateDefaultSubobject<UReanimationComponent>(TEXT("Reanimation"));
    this->TickOptimizerComponent = CreateDefaultSubobject<UTickOptimizerComponent>(TEXT("TickOptimizer"));
    this->RageComponent = CreateDefaultSubobject<URageComponent>(TEXT("Rage"));
    this->HitReactionComponent = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReaction"));
    this->InterruptibleAnimComponent = CreateDefaultSubobject<UInterruptibleAnimComponent>(TEXT("InterruptibleAnimComponent"));
    this->DoorAttackComponent = CreateDefaultSubobject<UDoorAttackComponent>(TEXT("DoorAttackComponent"));
    this->PerceptionStimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionStimulusSource"));
    this->SCP610Controller = NULL;
    this->bIsAIPermanentlyDead = false;
    this->DestroyEnemyActorDelay = 120.00f;
    this->DeathHitImpulseMultiplier = 1.00f;
    this->RagdollHitImpulseMultiplier = 1.00f;
    this->bIgniteWithFlareDamage = true;
    this->bFlaresDisableReanimation = true;
    this->BurnDuration = 5.00f;
    this->BurnInterval = 0.50f;
    this->BurnDamage = 5.00f;
    this->BurnVFX = NULL;
    this->FlareDamageType = NULL;
    this->BurnDamageType = NULL;
    this->BurnNiagaraComponent = NULL;
    this->VocalLoopSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->bCanFakeDeathStart = false;
    this->MinDeathResets = 1;
    this->MaxDeathResets = 3;
    this->DeathResetCount = 0;
    this->bSetTrulyDeadPrimitiveData = false;
    this->VertAnimSpeedPrimDataChannel = 4;
    this->ReanimationStartDelayMin = 2.00f;
    this->ReanimationStartDelayMax = 8.00f;
    this->FakeRagdollVelocityCheckDuration = 1.00f;
    this->FakeRagdollVelocityThreshold = 15.00f;
    this->CurrentLifeState = EZombieLifeState::Alive;
    this->VelocityCheckAbortDuration = 15.00f;
    this->AwarenessState = ESAIAwarenessState::Error;
    this->PelvisBoneName = TEXT("hips");
    this->StopOnDeathRagdollDelay = 5.00f;
    this->InitialStopRagdollDelay = 0.20f;
    this->RagdollVelocityReductionDelay = 10.00f;
    this->RagdollVelocityThreshold = 50.00f;
    this->ThirdPersonMesh = NULL;
    this->MeshScale = 0.00f;
    this->bIsRandomizedMesh = true;
    this->MinMeshScale = 0.90f;
    this->MaxMeshScale = 1.05f;
    this->CurrentMoveSpeed = 0.00f;
    this->MinimumMovementSpeed = 19.00f;
    this->MaximumMovementSpeed = 400.00f;
    this->MinMoveSpeedVariance = 0.80f;
    this->MaxMoveSpeedVariance = 1.10f;
    this->bCanPhysicsSleep = false;
    this->EnemySubsystem = NULL;
    this->BodySubsystem = NULL;
    this->FMODAudioComponent->SetupAttachment(RootComponent);
    this->LoopingAudioComponent->SetupAttachment(RootComponent);
}

void ASCP610Character::StopFakeDeathRagdoll() {
}

void ASCP610Character::StopActiveRagdoll() {
}

void ASCP610Character::StartFakeDeathRagdoll() {
}

void ASCP610Character::StartActiveRagdoll() {
}

void ASCP610Character::SetThirdPersonMesh(const USkeletalMesh* DesiredSkeletalMesh) {
}

void ASCP610Character::SetReplicatedRagdollComponent(UFastReplicatedRagdoll* InReplicatedRagdollComponent) {
}

void ASCP610Character::SetMeshScale(float DesiredMeshScale) {
}

void ASCP610Character::SetIsAIPermanentlyDead(bool bHasDied) {
}

void ASCP610Character::SetDeathResetCount(int32 NewCount) {
}

void ASCP610Character::SetCurrentMoveSpeed(float DesiredSpeed) {
}

void ASCP610Character::SetCurrentLifeState(EZombieLifeState NewState) {
}

void ASCP610Character::SetCanFakeDeathStart(bool bCanStart) {
}

void ASCP610Character::ServerSelectSkeletalMesh() {
}

void ASCP610Character::ServerFakeDeath() {
}

void ASCP610Character::ServerDie(AActor* Causer, AController* InstigatedBy) {
}

void ASCP610Character::Server_RagdollStopAndReclaim_Implementation() {
}

void ASCP610Character::Server_RagdollPrepare_Implementation() {
}

void ASCP610Character::Server_RagdollInitiate_Implementation() {
}

void ASCP610Character::PlayVocalAmbientSound() {
}

void ASCP610Character::PlayUpdatedFMODEvent(const UFMODEvent* EventToPlay) {
}

void ASCP610Character::OnStartReanimation(UReanimationComponent* InReanimationComponent, UAnimMontage* ReanimationMontage, FVector TargetCapsuleLocation) {
}

void ASCP610Character::OnRep_ThirdPersonMesh_Implementation() {
}

void ASCP610Character::OnRep_MeshScale_Implementation() {
}

void ASCP610Character::OnRep_IsAIPermanentlyDead_Implementation() {
}

void ASCP610Character::OnRep_CurrentMoveSpeed_Implementation() {
}

void ASCP610Character::OnRep_CurrentLifeState_Implementation(EZombieLifeState PreviousLifeState) {
}

void ASCP610Character::OnRep_AwarenessState_Implementation(ESAIAwarenessState PrevAwarenessState) {
}

void ASCP610Character::OnHealthComponentDied(UHealthComponent* UpdatedHealthComponent) {
}

void ASCP610Character::OnHealthComponentDamaged(UHealthComponent* UpdatedHealthComponent, FSimpleHitData HitData) {
}

void ASCP610Character::OnEndReanimation(UReanimationComponent* InReanimationComponent) {
}

void ASCP610Character::NetMulticast_RagdollStopAndReclaim_Implementation() {
}

void ASCP610Character::NetMulticast_RagdollPrepare_Implementation() {
}

void ASCP610Character::NetMulticast_RagdollInitiate_Implementation() {
}

UFMODEvent* ASCP610Character::GetVocalLoopSound() const {
    return NULL;
}

USkeletalMesh* ASCP610Character::GetThirdPersonMesh() const {
    return NULL;
}

USplatterComponent* ASCP610Character::GetSplatterComponent() const {
    return NULL;
}

UFastReplicatedRagdoll* ASCP610Character::GetReplicatedRagdollComponent() const {
    return NULL;
}

FRotator ASCP610Character::GetReplicatedControlRotation() const {
    return FRotator{};
}

URageComponent* ASCP610Character::GetRageComponent() const {
    return NULL;
}

UPhysicalAnimationComponent* ASCP610Character::GetPhysicalAnimationComponent() const {
    return NULL;
}

float ASCP610Character::GetMinMoveSpeedVariance() const {
    return 0.0f;
}

float ASCP610Character::GetMinimumMovementSpeed() const {
    return 0.0f;
}

float ASCP610Character::GetMeshScale() const {
    return 0.0f;
}

float ASCP610Character::GetMaxMoveSpeedVariance() const {
    return 0.0f;
}

float ASCP610Character::GetMaximumMovementSpeed() const {
    return 0.0f;
}

bool ASCP610Character::GetIsFakingDeath() const {
    return false;
}

bool ASCP610Character::GetIsAIPermanentlyDead() const {
    return false;
}

UHealthComponent* ASCP610Character::GetHealthComponent() const {
    return NULL;
}

UGoreComponent* ASCP610Character::GetGoreComponent() const {
    return NULL;
}

FRotator ASCP610Character::GetDesiredRotation() const {
    return FRotator{};
}

EZombieLifeState ASCP610Character::GetCurrentLifeState() const {
    return EZombieLifeState::Alive;
}

bool ASCP610Character::GetCanFakeDeathStart() const {
    return false;
}

void ASCP610Character::CosmeticFakeDeath() {
}

void ASCP610Character::CosmeticDie() {
}

void ASCP610Character::CancelFakeDeath() {
}

void ASCP610Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP610Character, bIsAIPermanentlyDead);
    DOREPLIFETIME(ASCP610Character, DesiredRotation);
    DOREPLIFETIME(ASCP610Character, ControlRotation);
    DOREPLIFETIME(ASCP610Character, bCanFakeDeathStart);
    DOREPLIFETIME(ASCP610Character, DeathResetCount);
    DOREPLIFETIME(ASCP610Character, CurrentLifeState);
    DOREPLIFETIME(ASCP610Character, AwarenessState);
    DOREPLIFETIME(ASCP610Character, ThirdPersonMesh);
    DOREPLIFETIME(ASCP610Character, MeshScale);
    DOREPLIFETIME(ASCP610Character, CurrentMoveSpeed);
}


