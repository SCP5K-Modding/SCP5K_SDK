#include "WaterLevelController.h"
#include "Net/UnrealNetwork.h"

AWaterLevelController::AWaterLevelController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentHeight = 0.00f;
    this->ReplicatedHeight = 0.00f;
    this->FinalMoveSpeed = 0.00f;
    this->TargetHeight = 0.00f;
    this->RisingSpeed = 50.00f;
    this->LoweringSpeed = 100.00f;
    this->bShouldUpdateSpawns = true;
    this->bIsMoving = false;
    this->CurveSampleTime = 0.00f;
    this->AudioWaterRisingEvent = NULL;
    this->AudioWaterDrainingEvent = NULL;
}

void AWaterLevelController::SpawnUpdated_Implementation(FName SpawnName) {
}

void AWaterLevelController::SetTargetHeight(float Height) {
}

void AWaterLevelController::OnRep_TargetHeight() {
}

void AWaterLevelController::OnRep_ReplicatedHeight() {
}

void AWaterLevelController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWaterLevelController, ReplicatedHeight);
    DOREPLIFETIME(AWaterLevelController, TargetHeight);
}


