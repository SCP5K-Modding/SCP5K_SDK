#include "WaveStagingArea.h"

AWaveStagingArea::AWaveStagingArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->EntranceTeleporter = NULL;
    this->ExitTeleporter = NULL;
    this->ExitLift = NULL;
    this->ExitObjective = TEXT("TestingChambers_ExitStagingArea");
    this->bOnlyLoadRequiredUpgradeRooms = true;
    this->LevelLoadingPriority = 10;
    this->StagingAreaEnteredGameAction = NULL;
}

void AWaveStagingArea::UnloadUpgradeRooms() {
}

bool AWaveStagingArea::SupportsChamberIndex(int32 NextChamberIndex) const {
    return false;
}

void AWaveStagingArea::SpawnUpgradeRoomsForPlayers(const TArray<APlayerState*>& InPlayers) {
}

void AWaveStagingArea::MulticastUnloadUpgradeRooms_Implementation() {
}

void AWaveStagingArea::MulticastSpawnUpgradeRoomsForPlayers_Implementation(const TArray<APlayerState*>& InPlayers) {
}

void AWaveStagingArea::LevelFinishedLoading() {
}

FName AWaveStagingArea::GetExitObjectiveName() const {
    return NAME_None;
}

void AWaveStagingArea::ExitStagingArea() {
}

void AWaveStagingArea::ExitObjectiveUpdated(UObjective* Objective) {
}

void AWaveStagingArea::ExitObjectiveCompleted(UObjective* Objective, bool bCompleted) {
}

void AWaveStagingArea::EnteredStagingArea() {
}


