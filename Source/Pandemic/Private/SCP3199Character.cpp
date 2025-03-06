#include "SCP3199Character.h"
#include "Net/UnrealNetwork.h"

ASCP3199Character::ASCP3199Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentActionState = ESCP3199ActionState::CalmIdle;
    this->bIsPanicking = false;
    this->MinPanickingDeathDelay = 2.00f;
    this->MaxPanickingDeathDelay = 5.00f;
    this->bIsCrashing = false;
    this->bIsEating = false;
    this->bIsTurning = false;
    this->bCrashOnHitCharacter = true;
    this->ChargeDamageAmount = 30.00f;
    this->ChargeHitCheckRate = 0.20f;
    this->StartChargeCheckDelay = 1.00f;
    this->MaxChargeZDifference = 50.00f;
    this->MinChargeDistance = 300.00f;
    this->MaxChargeDistance = 1200.00f;
    this->ChargeCollisionRange = 250.00f;
    this->ChargeDotProductThreshold = 0.00f;
    this->RotationDelta = 0.00f;
    this->MovementDistance = 0.00f;
    this->bServerPlayingAttackBlockAnim = false;
    this->DoorwayMontage = NULL;
    this->StartChargeMontage = NULL;
    this->ChargeCrashMontage = NULL;
    this->TurnLeftMontage = NULL;
    this->TurnRightMontage = NULL;
    this->TurnLeftSharpMontage = NULL;
    this->TurnRightSharpMontage = NULL;
    this->ChargeStartSoundDelay = 1.50f;
    this->ChargeCrashSound = NULL;
    this->ChargeStartSound = NULL;
    this->MeleeAttackKillSound = NULL;
}

void ASCP3199Character::TeethChatterQueueControlLoop() {
}

void ASCP3199Character::StopTurning_Delayed() {
}

void ASCP3199Character::SetServerPlayingAttackBlock(bool BIsPlaying) {
}

void ASCP3199Character::SetRotationDelta(float Delta) {
}

void ASCP3199Character::SetMovementDistance(float Distance) {
}

void ASCP3199Character::SetIsTurning(bool bTurning) {
}

void ASCP3199Character::SetIsPanicking(bool bPanicked) {
}

void ASCP3199Character::SetIsEating(bool bEating) {
}

void ASCP3199Character::SetIsCrashing(bool bCrashed) {
}

void ASCP3199Character::SetCurrentActionState(ESCP3199ActionState NewActionState) {
}

void ASCP3199Character::ServerStartCharge() {
}

void ASCP3199Character::ServerBeginChargeCrash() {
}

void ASCP3199Character::PlayTeethChatter_Implementation() {
}

void ASCP3199Character::PlayChargeStartSound_Delayed_Implementation() {
}

void ASCP3199Character::OnRep_IsPanicking_Implementation() {
}

void ASCP3199Character::OnRep_IsEating_Implementation() {
}

void ASCP3199Character::OnRep_IsCrashing_Implementation() {
}

void ASCP3199Character::OnRep_CurrentActionState_Implementation() {
}

void ASCP3199Character::MulticastCosmeticStartTurning_Implementation(UAnimMontage* Montage, float PlayRate) {
}

void ASCP3199Character::MulticastCosmeticStartCharge_Implementation() {
}

void ASCP3199Character::MulticastCosmeticChargeCrash_Implementation() {
}

bool ASCP3199Character::GetServerPlayingAttackBlock() const {
    return false;
}

float ASCP3199Character::GetRotationDelta() const {
    return 0.0f;
}

float ASCP3199Character::GetMovementDistance() const {
    return 0.0f;
}

float ASCP3199Character::GetMinChargeDistance() const {
    return 0.0f;
}

float ASCP3199Character::GetMaxChargeZDifference() const {
    return 0.0f;
}

float ASCP3199Character::GetMaxChargeDistance() const {
    return 0.0f;
}

bool ASCP3199Character::GetIsTurning() const {
    return false;
}

bool ASCP3199Character::GetIsPanicking() const {
    return false;
}

bool ASCP3199Character::GetIsEating() const {
    return false;
}

bool ASCP3199Character::GetIsCrashing() const {
    return false;
}

UAnimMontage* ASCP3199Character::GetDoorwayMontage() const {
    return NULL;
}

ESCP3199ActionState ASCP3199Character::GetCurrentActionState() const {
    return ESCP3199ActionState::CalmIdle;
}

float ASCP3199Character::GetChargeDotProductThreshold() const {
    return 0.0f;
}

UFMODEvent* ASCP3199Character::GetChargeCrashSound() const {
    return NULL;
}

void ASCP3199Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP3199Character, CurrentActionState);
    DOREPLIFETIME(ASCP3199Character, bIsPanicking);
    DOREPLIFETIME(ASCP3199Character, bIsCrashing);
    DOREPLIFETIME(ASCP3199Character, bIsEating);
    DOREPLIFETIME(ASCP3199Character, RotationDelta);
    DOREPLIFETIME(ASCP3199Character, MovementDistance);
}


