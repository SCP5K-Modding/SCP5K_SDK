#include "SCP173B.h"
#include "Net/UnrealNetwork.h"
#include "SCP173HallucinogenComponent.h"

ASCP173B::ASCP173B(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HallucinogenComponent = CreateDefaultSubobject<USCP173HallucinogenComponent>(TEXT("HallucinogenComponent"));
    this->WarningSound = NULL;
    this->DamageType = NULL;
    this->GraceCurve = NULL;
    this->StalkingMovementSpeed = 6000.00f;
    this->BloodthirstMovementSpeed = 4000.00f;
    this->BehaviorState = ESCP173BehaviorState::Idle;
    this->bIsAttemptingKill = false;
}

void ASCP173B::SetBehaviorState(ESCP173BehaviorState InBehaviorState) {
}

void ASCP173B::OnRep_BehaviorState() {
}

void ASCP173B::KillTarget(AActor* TargetActor) {
}

bool ASCP173B::IsAttemptingKill() const {
    return false;
}

AActor* ASCP173B::GetCurrentKillTarget() const {
    return NULL;
}

void ASCP173B::EnterStalkingState() {
}

void ASCP173B::EnterBloodthirstState() {
}

void ASCP173B::CancelKill() {
}

void ASCP173B::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASCP173B, BehaviorState);
    DOREPLIFETIME(ASCP173B, bIsAttemptingKill);
}


