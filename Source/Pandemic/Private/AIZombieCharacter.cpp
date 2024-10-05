#include "AIZombieCharacter.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "SAIMeleeComponent.h"
#include "DismembermentComponent.h"
#include "GoreComponent.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "FMODAudioComponent.h"
#include "FootstepComponent.h"
#include "HealthComponent.h"
#include "SplatterComponent.h"
#include "TickOptimizerComponent.h"
#include "Net/UnrealNetwork.h"

AAIZombieCharacter::AAIZombieCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->DismembermentComponent = CreateDefaultSubobject<UDismembermentComponent>(TEXT("Dismemberment"));
    this->GoreComponent = CreateDefaultSubobject<UGoreComponent>(TEXT("Gore"));
    this->FMODAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODAudio"));
    this->FootstepComponent = CreateDefaultSubobject<UFootstepComponent>(TEXT("Footstep"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
    this->PhysicalAnimationComponent = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("PhysicalAnimation"));
    this->SAIMeleeComponent = CreateDefaultSubobject<USAIMeleeComponent>(TEXT("SAIMelee"));
    this->SplatterComponent = CreateDefaultSubobject<USplatterComponent>(TEXT("Splatter"));
    this->TickOptimizerComponent = CreateDefaultSubobject<UTickOptimizerComponent>(TEXT("TickOptimizer"));
    this->StimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSource"));
    this->MaxEventInstanceSpeed = 500.00f;
    this->AmbientLoopSound = NULL;
    this->DamageSound = NULL;
    this->DeathSound = NULL;
    this->AlertSound = NULL;
    this->AttackSound = NULL;
    this->CurrentMoveSpeed = 0.00f;
    this->MinimumMovementSpeed = 19.00f;
    this->MaximumMovementSpeed = 400.00f;
    this->MinMoveSpeedVariance = 0.80f;
    this->MaxMoveSpeedVariance = 1.10f;
    this->RandomMoveSpeedVariance = 0.00f;
    this->bIsAlert = false;
    this->bIsAIDying = false;
    this->bIsAIDead = false;
    this->DestroyEnemyActorDelay = 120.00f;
    this->DeathHitImpulseMultiplier = 1.00f;
    this->RagdollHitImpulseMultiplier = 1.00f;
    this->bIsFakeDeathPossible = false;
    this->bCanFakeDeathBegin = false;
    this->FakeDeathChance = 0.10f;
    this->FakeDeathHealthPercentageThreshold = 0.25f;
    this->RandomReanimationStartDelay = 0.00f;
    this->ReanimationStartDelayMin = 2.00f;
    this->ReanimationStartDelayMax = 8.00f;
    this->FakeRagdollVelocityCheckDuration = 1.00f;
    this->FakeRagdollVelocityThreshold = 15.00f;
    this->bIsFakingDeath = false;
    this->CurrentLifeState = EZombieLifeState::Alive;
    this->VelocityCheckAbortDuration = 15.00f;
    this->StopOnDeathRagdollDelay = 5.00f;
    this->InitialStopRagdollDelay = 0.20f;
    this->RagdollVelocityReductionDelay = 10.00f;
    this->RagdollVelocityThreshold = 50.00f;
    this->RagdollDeathAnimationChance = 0.20f;
    this->StaggerDelay = 1.20f;
    this->MeleeAttackDamageTypeSample = NULL;
    this->DoorAttackMontage = NULL;
    this->DoorAttackRange = 70.00f;
    this->BaseDoorDamage = 40.00f;
    this->DoorAttackDamageType = NULL;
    this->ThirdPersonMesh = NULL;
    this->MeshScale = 0.00f;
    this->bIsRandomizedMesh = true;
    this->MinMeshScale = 0.90f;
    this->MaxMeshScale = 1.05f;
    this->bCanPhysicsSleep = false;
    this->bIsInBounds = true;
    this->ZombieNavigationFilter = NULL;
    this->bIsTargetSeen = false;
    this->bIsFrontHit = false;
    this->HitDirectionAngle = 0.00f;
    this->ZombieDeathAnimation = NULL;
    this->DeathRagdollDelay = 0.00f;
    this->bCanFlinch = true;
    this->FlinchMontage = NULL;
    this->FlinchRate = 0.10f;
    this->DismembermentComponent->SetupAttachment(RootComponent);
    this->FMODAudioComponent->SetupAttachment(RootComponent);
}

void AAIZombieCharacter::StopZombieReanimationMontage() {
}

void AAIZombieCharacter::StopZombieAttackAnimation() {
}

void AAIZombieCharacter::StopFakeDeathRagdoll() {
}

void AAIZombieCharacter::StopActiveRagdoll() {
}

void AAIZombieCharacter::StartFakeDeathRagdoll() {
}

void AAIZombieCharacter::StartActiveRagdoll() {
}

void AAIZombieCharacter::Stagger() {
}

void AAIZombieCharacter::SetZombieReanimationMontage(const UAnimMontage* DesiredMontage) {
}

void AAIZombieCharacter::SetZombieDeathAnimation(const UAnimMontage* Animation) {
}

void AAIZombieCharacter::SetThirdPersonMesh(const USkeletalMesh* DesiredSkeletalMesh) {
}

void AAIZombieCharacter::SetTargetLocation(FVector_NetQuantize Location) {
}

void AAIZombieCharacter::SetServerRagdollLocation(FVector_NetQuantize RagdollLocation) {
}

void AAIZombieCharacter::SetRandomReanimationStartDelay(float DesiredDelay) {
}

void AAIZombieCharacter::SetMinMoveSpeedVariance(float DesiredMinVariance) {
}

void AAIZombieCharacter::SetMinimumMovementSpeed(float DesiredMinimum) {
}

void AAIZombieCharacter::SetMeshScale(float DesiredMeshScale) {
}

void AAIZombieCharacter::SetMaxMoveSpeedVariance(float DesiredMaxVariance) {
}

void AAIZombieCharacter::SetMaximumMovementSpeed(float DesiredMaximum) {
}

void AAIZombieCharacter::SetIsTargetSeen(bool bIsSeen) {
}

void AAIZombieCharacter::SetIsFrontHit(bool bDidHitFront) {
}

void AAIZombieCharacter::SetIsFakingDeath(bool bIsDeathFake) {
}

void AAIZombieCharacter::SetIsAIDying(bool bIsDying) {
}

void AAIZombieCharacter::SetIsAIDead(bool bIsDead) {
}

void AAIZombieCharacter::SetHitDirectionAngle(float Direction) {
}

void AAIZombieCharacter::SetEndReanimationDelay(float DesiredDelay) {
}

void AAIZombieCharacter::SetDoorAttackMontage(UAnimMontage* NewMontage) {
}

void AAIZombieCharacter::SetDeathRagdollDelay(float DesiredDelay) {
}

void AAIZombieCharacter::SetCurrentMoveSpeed(float DesiredSpeed) {
}

void AAIZombieCharacter::SetCurrentLifeState(EZombieLifeState NewState) {
}

void AAIZombieCharacter::SetCapsuleActive(bool bIsCapsuleActive) {
}

void AAIZombieCharacter::SetCanFlinch(bool bFlinch) {
}

void AAIZombieCharacter::SetCanFakeDeathBegin(bool bCanBegin) {
}

void AAIZombieCharacter::SetBodyHitPosition(FVector_NetQuantize HitPosition) {
}

void AAIZombieCharacter::SetAlert(bool bIsZombieAlert) {
}

void AAIZombieCharacter::ServerFakeDeath() {
}


void AAIZombieCharacter::ServerDie(const AController* DamageInstigator, FName LastHitBone) {
}

void AAIZombieCharacter::SelectSkeletalMesh() {
}

void AAIZombieCharacter::PlayAmbientSound() {
}

void AAIZombieCharacter::OnSAIMeleeAttackStarted(USAIMeleeComponent* AttackingComponent, uint8 AttackIndex, FAIMeleeAttackType Attack) {
}

void AAIZombieCharacter::OnRep_ThirdPersonMesh_Implementation() {
}

void AAIZombieCharacter::OnRep_MeshScale_Implementation() {
}

void AAIZombieCharacter::OnRep_IsAlert_Implementation() {
}

void AAIZombieCharacter::OnRep_IsAIDead_Implementation() {
}

void AAIZombieCharacter::OnRep_CurrentMoveSpeed_Implementation() {
}

void AAIZombieCharacter::OnRep_CanFlinch_Implementation() {
}

void AAIZombieCharacter::OnHealthComponentDied(UHealthComponent* UpdatedHealthComponent) {
}

void AAIZombieCharacter::OnHealthComponentDamaged(UHealthComponent* UpdatedHealthComponent, FSimpleHitData HitData) {
}

void AAIZombieCharacter::MulticastCosmeticPrepareReanimation_Delayed_Implementation() {
}

void AAIZombieCharacter::MulticastCosmeticDoorAttack_Implementation() {
}

void AAIZombieCharacter::MulticastCosmeticBeginReanimation_Implementation(UAnimMontage* ReanimationMontage, float ReanimationDelay) {
}

UAnimMontage* AAIZombieCharacter::GetZombieReanimationMontage() const {
    return NULL;
}

UAnimMontage* AAIZombieCharacter::GetZombieDeathAnimation() const {
    return NULL;
}

UTickOptimizerComponent* AAIZombieCharacter::GetTickOptimizerComponent() const {
    return NULL;
}

USkeletalMesh* AAIZombieCharacter::GetThirdPersonMesh() const {
    return NULL;
}

UAIPerceptionStimuliSourceComponent* AAIZombieCharacter::GetStimuliSourceComponent() const {
    return NULL;
}

float AAIZombieCharacter::GetStaggerDelay() const {
    return 0.0f;
}

USplatterComponent* AAIZombieCharacter::GetSplatterComponent() const {
    return NULL;
}

FVector_NetQuantize AAIZombieCharacter::GetServerRagdollLocation() const {
    return FVector_NetQuantize{};
}

USAIMeleeComponent* AAIZombieCharacter::GetSAIMeleeComponent() const {
    return NULL;
}

float AAIZombieCharacter::GetRandomReanimationStartDelay() const {
    return 0.0f;
}

float AAIZombieCharacter::GetRandomMoveSpeedVariance() const {
    return 0.0f;
}

UPhysicalAnimationComponent* AAIZombieCharacter::GetPhysicalAnimationComponent() const {
    return NULL;
}

float AAIZombieCharacter::GetMinMoveSpeedVariance() const {
    return 0.0f;
}

float AAIZombieCharacter::GetMinimumMovementSpeed() const {
    return 0.0f;
}

float AAIZombieCharacter::GetMeshScale() const {
    return 0.0f;
}

float AAIZombieCharacter::GetMaxMoveSpeedVariance() const {
    return 0.0f;
}

float AAIZombieCharacter::GetMaximumMovementSpeed() const {
    return 0.0f;
}

bool AAIZombieCharacter::GetIsTargetSeen() const {
    return false;
}

bool AAIZombieCharacter::GetIsInBounds() const {
    return false;
}

bool AAIZombieCharacter::GetIsFrontHit() const {
    return false;
}

bool AAIZombieCharacter::GetIsFakingDeath() const {
    return false;
}

bool AAIZombieCharacter::GetIsAlert() const {
    return false;
}

bool AAIZombieCharacter::GetIsAIDying() const {
    return false;
}

bool AAIZombieCharacter::GetIsAIDead() const {
    return false;
}

float AAIZombieCharacter::GetHitDirectionAngle() const {
    return 0.0f;
}

UHealthComponent* AAIZombieCharacter::GetHealthComponent() const {
    return NULL;
}

UGoreComponent* AAIZombieCharacter::GetGoreComponent() const {
    return NULL;
}

UFootstepComponent* AAIZombieCharacter::GetFootstepComponent() const {
    return NULL;
}

UFMODAudioComponent* AAIZombieCharacter::GetFMODAudioComponent() const {
    return NULL;
}

float AAIZombieCharacter::GetFlinchRate() const {
    return 0.0f;
}

UAnimMontage* AAIZombieCharacter::GetFlinchMontage() const {
    return NULL;
}

float AAIZombieCharacter::GetDoorAttackRange() const {
    return 0.0f;
}

UAnimMontage* AAIZombieCharacter::GetDoorAttackMontage() {
    return NULL;
}

UDismembermentComponent* AAIZombieCharacter::GetDismembermentComponent() const {
    return NULL;
}

UFMODEvent* AAIZombieCharacter::GetDeathSound() const {
    return NULL;
}

float AAIZombieCharacter::GetDeathRagdollDelay() const {
    return 0.0f;
}

TArray<FDeathAnimationData> AAIZombieCharacter::GetDeathAnimations() const {
    return TArray<FDeathAnimationData>();
}

UFMODEvent* AAIZombieCharacter::GetDamageSound() const {
    return NULL;
}

float AAIZombieCharacter::GetCurrentMoveSpeed() const {
    return 0.0f;
}

EZombieLifeState AAIZombieCharacter::GetCurrentLifeState() const {
    return EZombieLifeState::Alive;
}

bool AAIZombieCharacter::GetCanFlinch() const {
    return false;
}

FVector AAIZombieCharacter::GetBodyHitPosition() const {
    return FVector{};
}

UFMODEvent* AAIZombieCharacter::GetAttackSound() const {
    return NULL;
}

UFMODEvent* AAIZombieCharacter::GetAmbientLoopSound() const {
    return NULL;
}

UFMODEvent* AAIZombieCharacter::GetAlertSound() const {
    return NULL;
}

FVector AAIZombieCharacter::GetAITargetLocation() const {
    return FVector{};
}

void AAIZombieCharacter::CosmeticFlinch() {
}

void AAIZombieCharacter::CosmeticFakeDeath() {
}

void AAIZombieCharacter::CosmeticDie() {
}

void AAIZombieCharacter::CheckGroundedStatus() {
}

void AAIZombieCharacter::CancelFakeDeath() {
}

void AAIZombieCharacter::AttackDoor(const FHitResult& Hit, AElectronicDoor* AttackedDoor) {
}

void AAIZombieCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAIZombieCharacter, CurrentMoveSpeed);
    DOREPLIFETIME(AAIZombieCharacter, bIsAlert);
    DOREPLIFETIME(AAIZombieCharacter, bIsAIDying);
    DOREPLIFETIME(AAIZombieCharacter, bIsAIDead);
    DOREPLIFETIME(AAIZombieCharacter, bCanFakeDeathBegin);
    DOREPLIFETIME(AAIZombieCharacter, RandomReanimationStartDelay);
    DOREPLIFETIME(AAIZombieCharacter, ServerRagdollLocation);
    DOREPLIFETIME(AAIZombieCharacter, ThirdPersonMesh);
    DOREPLIFETIME(AAIZombieCharacter, MeshScale);
    DOREPLIFETIME(AAIZombieCharacter, bIsTargetSeen);
    DOREPLIFETIME(AAIZombieCharacter, TargetLocation);
    DOREPLIFETIME(AAIZombieCharacter, BodyHitPosition);
    DOREPLIFETIME(AAIZombieCharacter, bIsFrontHit);
    DOREPLIFETIME(AAIZombieCharacter, HitDirectionAngle);
    DOREPLIFETIME(AAIZombieCharacter, ZombieDeathAnimation);
    DOREPLIFETIME(AAIZombieCharacter, DeathRagdollDelay);
    DOREPLIFETIME(AAIZombieCharacter, bCanFlinch);
}


