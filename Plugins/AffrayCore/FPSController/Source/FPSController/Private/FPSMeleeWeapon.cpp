#include "FPSMeleeWeapon.h"
#include "Components/SceneComponent.h"
#include "FMODAudioComponent.h"
#include "FPSMeleeWeaponData.h"
#include "Net/UnrealNetwork.h"

AFPSMeleeWeapon::AFPSMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemDataClass = UFPSMeleeWeaponData::StaticClass();
    this->AudioComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("AudioComponent"));
    this->MeleeWeaponData = NULL;
    this->TraceStart = CreateDefaultSubobject<USceneComponent>(TEXT("Trace Start"));
    this->TraceEnd = CreateDefaultSubobject<USceneComponent>(TEXT("Trace End"));
    this->bAttacking = false;
    this->bWantsAttack = false;
    this->bWantsReady = false;
    this->DesiredReadyDirection = AD_None;
    this->bIsReady = false;
    this->ReadyDirection = AD_None;
    this->LastAttackDirection = AD_None;
    this->NumHits = 0;
    this->AudioComponent->SetupAttachment(FirstPerson);
    this->TraceStart->SetupAttachment(FirstPerson);
    this->TraceEnd->SetupAttachment(FirstPerson);
}

void AFPSMeleeWeapon::UpdateReady() {
}

void AFPSMeleeWeapon::TryStartReady(EMeleeAttackDirection Direction) {
}

void AFPSMeleeWeapon::TryStartAttack(EMeleeAttackDirection Direction) {
}

void AFPSMeleeWeapon::StartAttack(EMeleeAttackDirection Direction) {
}

void AFPSMeleeWeapon::SetReadyDirection(EMeleeAttackDirection Direction) {
}

void AFPSMeleeWeapon::ServerUpdateReady_Implementation(EMeleeAttackDirection Direction, bool bReady) {
}

void AFPSMeleeWeapon::ServerStartAttack_Implementation(EMeleeAttackDirection Direction) {
}

void AFPSMeleeWeapon::ServerProcessHit_Implementation(FMeleeHitData Hit) {
}

void AFPSMeleeWeapon::ServerCancelAttack_Implementation(EMeleeAttackDirection Direction) {
}

bool AFPSMeleeWeapon::RunWeaponTrace(FHitResult& Hit) {
    return false;
}

void AFPSMeleeWeapon::Ready(EMeleeAttackDirection Direction) {
}

void AFPSMeleeWeapon::OnRep_MeleeHitData() {
}

FVector AFPSMeleeWeapon::GetAttackVector(EMeleeAttackDirection Direction) const {
    return FVector{};
}

void AFPSMeleeWeapon::FlipAttackDirection(EMeleeAttackDirection CurrentDirection) {
}

void AFPSMeleeWeapon::CosmeticStartAttack(EMeleeAttackDirection Direction) {
}

void AFPSMeleeWeapon::CosmeticHit_Implementation(EMeleeAttackDirection Direction, FMeleeHitData HitData) {
}

void AFPSMeleeWeapon::CosmeticCancelAttack(EMeleeAttackDirection Direction) {
}

bool AFPSMeleeWeapon::CancelAttack(EMeleeAttackDirection Direction) {
    return false;
}

void AFPSMeleeWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFPSMeleeWeapon, MeleeHitData);
}


