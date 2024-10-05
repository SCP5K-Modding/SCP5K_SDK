#include "AIZombieController.h"

AAIZombieController::AAIZombieController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachToPawn = true;
    this->bAllowStrafe = true;
    this->FakingDeathKeyName = TEXT("IsFakingDeath");
    this->ZombieBehaviorTree = NULL;
    this->bIsBetweenAttacks = false;
    this->bIsAttackingDoor = false;
    this->DoorCheckDelayDuration = 2.50f;
    this->DoorCheckTraceRadius = 30.00f;
    this->DoorAttackDelayDuration = 0.50f;
    this->CurrentDistanceMovementValue = 0.00f;
    this->InvestigatingDistanceWeight = 0.30f;
    this->InvestigatingAlertnessWeight = 0.70f;
    this->ChasingDistanceWeight = 0.10f;
    this->ChasingAlertnessWeight = 0.90f;
    this->SearchingForPlayerDistanceWeight = 0.10f;
    this->SearchingForPlayerAlertnessWeight = 0.90f;
    this->WanderingDistanceWeight = 0.00f;
    this->WanderingAlertnessWeight = 1.00f;
    this->InitialMoveToPathLength = 0.00f;
}

void AAIZombieController::UpdateMoveSpeed() {
}

void AAIZombieController::StopDoorAttacks() {
}

void AAIZombieController::SetInitialMoveToPathLength(float PathLength) {
}

void AAIZombieController::OnAIInteractDoor(const AElectronicDoor* CurrentDoor, const UNavLinkCustomComponent* CurrentNavLinkComp) {
}

USAIMeleeComponent* AAIZombieController::GetZombieMeleeComponent() const {
    return NULL;
}

UHealthComponent* AAIZombieController::GetZombieHealthComponent() const {
    return NULL;
}

AAIZombieCharacter* AAIZombieController::GetZombieCharacter() const {
    return NULL;
}

UBlackboardComponent* AAIZombieController::GetZombieBlackboard() const {
    return NULL;
}

UBehaviorTree* AAIZombieController::GetZombieBehaviorTree() const {
    return NULL;
}

bool AAIZombieController::FireDoorAttackTrace(FHitResult& OutDoorHit) {
    return false;
}

void AAIZombieController::DoorAttackEnd_Delayed() {
}

void AAIZombieController::CheckValidDoorAttack_Delayed() {
}

bool AAIZombieController::CanAttackDoor() const {
    return false;
}

void AAIZombieController::AttackDoor_Delayed() {
}


