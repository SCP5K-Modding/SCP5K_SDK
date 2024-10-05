#include "PlayerObjective.h"
#include "Net/UnrealNetwork.h"

UPlayerObjective::UPlayerObjective() {
    this->RequiredPlayers = 0;
    this->CurrentPlayers = 0;
    this->bRequiresPlayersForTimer = true;
    this->bStopUnderRequiredPlayers = true;
}

void UPlayerObjective::SetRequiredPlayers(int32 NewRequiredPlayers) {
}

void UPlayerObjective::RemovePlayer() {
}

void UPlayerObjective::OnRep_RequiredPlayers() {
}

void UPlayerObjective::OnRep_CurrentPlayers() {
}

int32 UPlayerObjective::GetRequiredAmountPlayers() const {
    return 0;
}

int32 UPlayerObjective::GetCurrentAmountPlayers() const {
    return 0;
}

UPlayerObjective* UPlayerObjective::CreatePlayerObjective(UObject* Outer, FName Name, FText DisplayName, FText Description, int32 RequiredAmountPlayers, bool UseTimer, float TimerLength, bool RequirePlayersForTimerTick, bool bShouldAutoActivateWithParent, bool bMajorObjective, bool bShouldStartChildren) {
    return NULL;
}

void UPlayerObjective::AddPlayer() {
}

void UPlayerObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerObjective, RequiredPlayers);
    DOREPLIFETIME(UPlayerObjective, CurrentPlayers);
    DOREPLIFETIME(UPlayerObjective, bRequiresPlayersForTimer);
    DOREPLIFETIME(UPlayerObjective, bStopUnderRequiredPlayers);
}


