#include "DoorSquid.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Components/BoxComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "FMODAudioComponent.h"
#include "DoorSquidAIController.h"
#include "Net/UnrealNetwork.h"

ADoorSquid::ADoorSquid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root Component"));
    this->AIControllerClass = ADoorSquidAIController::StaticClass();
    this->CurrentHealth = 300.00f;
    this->MaxHealth = 300.00f;
    this->bIsDead = false;
    this->bIsAlert = false;
    this->bAttackHostileTeam = true;
    this->bAttackNeutralTeam = false;
    this->bEnraged = false;
    this->bKilledEdibleActor = false;
    this->bEating = false;
    this->bJittering = false;
    this->bJitterOnCooldown = false;
    this->bKnocking = false;
    this->bKnockOnCooldown = false;
    this->bIsAttacking = false;
    this->RadiusDetectionZone = 675.00f;
    this->CurrentTargetActorKillEscapeRadius = 550.00f;
    this->RadiusDangerZone = 425.00f;
    this->RadiusDeathZone = 150.00f;
    this->DetectionCooldownNonEdibleActorsSeconds = 5.00f;
    this->DetectionCooldownEdibleActorsSeconds = 20.00f;
    this->LongRangeAttackCutoff = 300.00f;
    this->PostKillDelayBeforeEating = 3.00f;
    this->AttackDamageType = NULL;
    this->AnimInstance = NULL;
    this->RandomCueFailedLockoutSeconds = 10.00f;
    this->bIsTongueTargetComponentSkeletal = false;
    this->TeamAffiliationID = ESAITeam::SCP;
    this->CurrentTargetActorToKill = NULL;
    this->TonguePhysicsHandleTargetSocketName = TEXT("tongue_15");
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Audio"));
    this->IdleAudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("IdleAudio"));
    this->AudioDoorSquidDoorCrackingEvent = NULL;
    this->AudioDoorSquidDoorCrackingLongEvent = NULL;
    this->AudioDoorSquidLowJitteringEvent = NULL;
    this->AudioDoorSquidAggressiveJitteringEvent = NULL;
    this->AudioDoorSquidHeartBeatKnockEvent = NULL;
    this->AudioDoorSquidKnockingEvent = NULL;
    this->AudioDoorSquidDoorBreach = NULL;
    this->AudioDoorSquidKillingTarget = NULL;
    this->AudioDoorSquidEatingEdibleEvent = NULL;
    this->AudioDoorSquidEatingInedibleEvent = NULL;
    this->AudioDoorSquidSpitOutEvent = NULL;
    this->AudioDoorSquidDeathAteGrenade = NULL;
    this->DetectionZoneSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionZoneSphere"));
    this->DangerZoneSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("DangerZoneSphere"));
    this->DeathZoneSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("DeathZoneSphere"));
    this->PerceptionStimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionStimulusSource"));
    this->TongueHookTargetComponent = NULL;
    this->BulletCatchTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BulletCatchTrigger"));
    this->PhysicsHandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
    this->IdleAudioComponent->SetupAttachment(RootComponent);
    this->DetectionZoneSphereComponent->SetupAttachment(RootComponent);
    this->DangerZoneSphereComponent->SetupAttachment(RootComponent);
    this->DeathZoneSphereComponent->SetupAttachment(RootComponent);
    this->BulletCatchTrigger->SetupAttachment(RootComponent);
}

void ADoorSquid::TryKillActorInitiate(AActor* TargetActor) {
}

void ADoorSquid::TryKillActorFrameHit_Implementation(AActor* TargetActor) {
}

void ADoorSquid::SetTongueHookTargetComponent(UActorComponent* TargetComponent) {
}

void ADoorSquid::SetTargetActorVisibleColliding_Implementation(AActor* Actor, bool bIsVisible) {
}

void ADoorSquid::SetKnockOnCooldown(bool bInKnockOnCooldown) {
}

void ADoorSquid::SetKnocking(bool bInKnocking) {
}

void ADoorSquid::SetJitterOnCooldown(bool bInJitterOnCooldown) {
}

void ADoorSquid::SetJittering(bool bInJittering) {
}

void ADoorSquid::SetIsAlert(bool bInAlert) {
}

void ADoorSquid::SetEnraged(bool bInEnraged) {
}

void ADoorSquid::SetEating(bool bInEating) {
}

void ADoorSquid::SetDoorPanelCollidesPhysicsBodies(const bool bCollides) {
}

void ADoorSquid::SetAttacking(bool bInAttacking) {
}

bool ADoorSquid::RemoveActorFromHotList_Implementation(AActor* TargetActor) {
    return false;
}

void ADoorSquid::PlayRandomIdleKnockSound() {
}

void ADoorSquid::PlayRandomIdleJitterAnimation() {
}

void ADoorSquid::PlayEatingAnimationAndSound() {
}

void ADoorSquid::OnRep_KnockOnCooldown_Implementation() {
}

void ADoorSquid::OnRep_Knocking_Implementation() {
}

void ADoorSquid::OnRep_KilledEdibleActor_Implementation() {
}

void ADoorSquid::OnRep_JitterOnCooldown_Implementation() {
}

void ADoorSquid::OnRep_Jittering_Implementation() {
}

void ADoorSquid::OnRep_IsDead_Implementation() {
}

void ADoorSquid::OnRep_IsAlert_Implementation() {
}

void ADoorSquid::OnRep_Enraged_Implementation() {
}

void ADoorSquid::OnRep_Eating_Implementation() {
}

void ADoorSquid::OnRep_CurrentHealth_Implementation() {
}

void ADoorSquid::OnRep_Attacking_Implementation() {
}

void ADoorSquid::OnDetectionZoneSphereBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADoorSquid::OnDeathZoneSphereBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADoorSquid::OnDangerZoneSphereBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADoorSquid::OnDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void ADoorSquid::MulticastKillActorSucceeded_Implementation(AActor* TargetActor, bool bWasLongRange) {
}

void ADoorSquid::MulticastKillActorInitiate_Implementation(AActor* TargetActor) {
}

void ADoorSquid::MulticastKillActorFailed_Implementation(AActor* TargetActor, bool bWasLongRange) {
}

void ADoorSquid::LoopRandomCue_Knock_Start_AwaitAudioEnd() {
}

void ADoorSquid::LoopRandomCue_Knock_Middle_UnsetKnockAwaitCooldownRandomDelay() {
}

void ADoorSquid::LoopRandomCue_Knock_End_UnsetKnockOnCooldownAwaitFinalDelay() {
}

void ADoorSquid::LoopRandomCue_Jitter_Start_AwaitAudioEnd() {
}

void ADoorSquid::LoopRandomCue_Jitter_Middle_UnsetJitterAwaitCooldownRandomDelay() {
}

void ADoorSquid::LoopRandomCue_Jitter_End_UnsetJitteringAwaitFinalDelay() {
}

bool ADoorSquid::IsInsideKillEscapeRadius(const AActor* OtherActor) const {
    return false;
}

bool ADoorSquid::IsInFrontOfSquid_Implementation(const AActor* OtherActor) const {
    return false;
}

bool ADoorSquid::IsActorOnHotList_Implementation(const AActor* TargetActor) const {
    return false;
}

float ADoorSquid::GetRandomFloatInRange_Implementation(const FFloatRange FloatRange) const {
    return 0.0f;
}

bool ADoorSquid::GetJittering() const {
    return false;
}

bool ADoorSquid::GetIsAlert() const {
    return false;
}

bool ADoorSquid::GetEnraged() const {
    return false;
}

AActor* ADoorSquid::GetClosestHotlistCreature() const {
    return NULL;
}

bool ADoorSquid::GetAttacking() const {
    return false;
}

void ADoorSquid::Die_Implementation(AActor* Causer, AController* InstigatedBy) {
}

void ADoorSquid::CosmeticDie_Implementation() {
}

void ADoorSquid::AISuppressedRequestJitterNow_Implementation(const AActor* Suppressor, const bool bIsSuppressed) {
}

void ADoorSquid::AIEnragedRequestAttack_Implementation(AActor* TargetActor) {
}

void ADoorSquid::AddActorToHotList_Implementation(AActor* TargetActor) {
}

void ADoorSquid::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADoorSquid, CurrentHealth);
    DOREPLIFETIME(ADoorSquid, bIsDead);
    DOREPLIFETIME(ADoorSquid, bIsAlert);
    DOREPLIFETIME(ADoorSquid, bAttackHostileTeam);
    DOREPLIFETIME(ADoorSquid, bAttackNeutralTeam);
    DOREPLIFETIME(ADoorSquid, bEnraged);
    DOREPLIFETIME(ADoorSquid, bKilledEdibleActor);
    DOREPLIFETIME(ADoorSquid, bEating);
    DOREPLIFETIME(ADoorSquid, bJittering);
    DOREPLIFETIME(ADoorSquid, bJitterOnCooldown);
    DOREPLIFETIME(ADoorSquid, bKnocking);
    DOREPLIFETIME(ADoorSquid, bKnockOnCooldown);
    DOREPLIFETIME(ADoorSquid, bIsAttacking);
}


