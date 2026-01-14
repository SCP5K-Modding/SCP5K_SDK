#include "TestingChamberManager.h"
#include "Net/UnrealNetwork.h"

ATestingChamberManager::ATestingChamberManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EntranceTeleporter = NULL;
    this->ExitTeleporter = NULL;
    this->ExitLift = NULL;
    this->EntranceLift = NULL;
    this->bShowStartingObjectiveInUI = true;
    this->StartingObjective = TEXT("TestingChambers_PressButton");
    this->ElevatorExitObjective = TEXT("TestingChambers_ExitElevator");
    this->WaitForElevatorObjective = TEXT("TestingChambers_WaitForElevator");
    this->SurfaceFloor = 2;
    this->TransitionFloor = 1;
    this->BelowFloor = 0;
    this->ChamberEnteredSound = NULL;
    this->bDestroyAllEnemiesAfterChamberExit = true;
    this->DestroyAllEnemiesAfterChamberExitTime = 5.00f;
    this->DefaultPlayerSpawnTag = TEXT("Chamber");
    this->CurrentChamberTimingState = ETestingChamberTimingState::BeforeChamberEntered;
    this->ChamberIndex = -1;
    this->bHasRunChamberIndexUpdated = false;
    this->bHasRunChamberEntered = false;
    this->bHasRunChamberExited = false;
}

void ATestingChamberManager::StartingObjectiveCompleted(UObjective* Objective, bool bSucceeded) {
}

void ATestingChamberManager::OnRep_CurrentChamberTimingState() {
}

void ATestingChamberManager::OnRep_ChamberIndex() {
}

void ATestingChamberManager::OnClockworkChamberEntered(const UObject* InInstigator, const UObject* Subject) {
}

void ATestingChamberManager::LiftReachedFloor(AElectronicLift* InLift, int32 Floor) {
}

FTestingChamberRequirements ATestingChamberManager::GetTestingChamberRequirements() const {
    return FTestingChamberRequirements{};
}

FName ATestingChamberManager::GetSpawnTagForWave(int32 Wave) {
    return NAME_None;
}

void ATestingChamberManager::ElevatorEntered(UObjective* Objective, bool bSucceeded) {
}

void ATestingChamberManager::ChamberEntered(int32 CurrentChamberIndex) {
}

void ATestingChamberManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATestingChamberManager, CurrentChamberTimingState);
    DOREPLIFETIME(ATestingChamberManager, ChamberIndex);
}


