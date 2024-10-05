#include "TheatreAnomaly.h"
#include "Net/UnrealNetwork.h"
#include "TheatreAnomalyController.h"

ATheatreAnomaly::ATheatreAnomaly(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIControllerClass = ATheatreAnomalyController::StaticClass();
    this->CurrentScreen = NULL;
    this->MovingToScreen = NULL;
    this->MediaPlayer = NULL;
    this->MediaPlaylist = NULL;
    this->AttackingMediaSource = NULL;
    this->CurrentAngerLevel = 0;
    this->bIsAttacking = false;
    this->CurrentScreenActor = NULL;
    this->MovingToScreenActor = NULL;
    this->DamageType = NULL;
    this->ScreenMoveTime = 0.20f;
    this->KillDetectionLevel = 15.00f;
    this->StartingScreen = NULL;
    this->DeathSound = NULL;
    this->AlertSound = NULL;
    this->ScreamSound = NULL;
    this->KillSound = NULL;
    this->JumpSound = NULL;
    this->bIsDead = false;
    this->bIsAlert = false;
}

void ATheatreAnomaly::StartScreenEffects_Implementation(UTheatreScreenComponent* From, UTheatreScreenComponent* To) {
}

bool ATheatreAnomaly::StartMoveToScreen(UTheatreScreenComponent* Screen) {
    return false;
}

void ATheatreAnomaly::SetAngerLevel(int32 NewAngerLevel) {
}


void ATheatreAnomaly::OnRep_MovingToScreen() {
}

void ATheatreAnomaly::OnRep_IsDead() {
}

void ATheatreAnomaly::OnRep_IsAlert() {
}

void ATheatreAnomaly::OnRep_CurrentScreen() {
}

void ATheatreAnomaly::OnRep_CurrentAngerLevel() {
}

void ATheatreAnomaly::OnRemoveTarget_Implementation(FTheatreAnomalyTarget Target) {
}

void ATheatreAnomaly::OnAddTarget_Implementation(FTheatreAnomalyTarget Target) {
}

void ATheatreAnomaly::MulticastKillTarget_Implementation(AActor* Target) {
}

bool ATheatreAnomaly::MoveToScreen(UTheatreScreenComponent* Screen) {
    return false;
}

void ATheatreAnomaly::KillTarget_Implementation(AActor* Target) {
}

bool ATheatreAnomaly::GetIsDead() const {
    return false;
}

bool ATheatreAnomaly::GetIsAlert() const {
    return false;
}

void ATheatreAnomaly::FinishMoveToScreen() {
}

void ATheatreAnomaly::EndScreenEffects_Implementation(UTheatreScreenComponent* From, UTheatreScreenComponent* To) {
}

void ATheatreAnomaly::Die_Implementation(AActor* InstigatingActor) {
}

void ATheatreAnomaly::Alert_Implementation(AActor* InstigatingActor) {
}

void ATheatreAnomaly::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATheatreAnomaly, CurrentAngerLevel);
    DOREPLIFETIME(ATheatreAnomaly, CurrentScreenActor);
    DOREPLIFETIME(ATheatreAnomaly, MovingToScreenActor);
    DOREPLIFETIME(ATheatreAnomaly, Targets);
    DOREPLIFETIME(ATheatreAnomaly, bIsDead);
    DOREPLIFETIME(ATheatreAnomaly, bIsAlert);
}


