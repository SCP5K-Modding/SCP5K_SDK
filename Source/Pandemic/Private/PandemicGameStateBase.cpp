#include "PandemicGameStateBase.h"
#include "Net/UnrealNetwork.h"

APandemicGameStateBase::APandemicGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseRespawnWaves = false;
    this->RespawnWaveTimestamp = 0;
    this->RespawnWaveTime = 10;
    this->Difficulty = NULL;
    this->CurrentMapCollectionIndex = -1;
    this->bForceHideHUD = false;
    this->EndGameTimestamp = 0;
    this->RestartGameTimestamp = 0;
    this->StartGameTimestamp = 0;
    this->bPendingStart = false;
    this->EarlyStartDelay = 30;
    this->CurrentSinglePlayerRespawns = 0;
    this->bAllowSinglePlayerRespawns = false;
    this->GameStatus = EGameStatus::GS_PreGame;
    this->bIsUsingMapCollection = false;
    this->MaxCharacterCount = 100;
}

bool APandemicGameStateBase::TryPassOnMissionItemsFromPlayer(APandemicPlayerState* Player, bool bForcePassOn) {
    return false;
}

void APandemicGameStateBase::StartCinematic(bool bSkippable, float Duration, FName Name, ALevelSequenceActor* SequenceActor) {
}

void APandemicGameStateBase::SkipCinematic(FName Name) {
}

void APandemicGameStateBase::SetUnlockedCheckpoint(FName CheckpointName) {
}

void APandemicGameStateBase::SetUIState(FGameUIState NewUIState) {
}

void APandemicGameStateBase::SetStatus(EGameStatus NewStatus) {
}

void APandemicGameStateBase::SetMaxCharacterCount(int32 MaxCharacters) {
}

void APandemicGameStateBase::SetMapCollectionList(TArray<FName> Maps) {
}

void APandemicGameStateBase::SetIndividualMapList(TArray<FSelectedMap> Maps) {
}

void APandemicGameStateBase::SetFullMapList(TArray<FSelectedMap> Maps) {
}

void APandemicGameStateBase::SetForceHideHUD(bool bShouldForceHideHUD) {
}

void APandemicGameStateBase::SetCurrentSinglePlayerRespawns(int32 NewSinglePlayerRespawns) {
}

void APandemicGameStateBase::SetCurrentMapCollectionIndex(int32 Index) {
}

void APandemicGameStateBase::SetCurrentCollectionMapList(TArray<FSelectedMap> Maps) {
}

void APandemicGameStateBase::SetCinematicState(FCinematicState NewCinematicState) {
}

void APandemicGameStateBase::SetAllowSinglePlayerRespawns(bool bNewAllowSinglePlayerRespawns) {
}

void APandemicGameStateBase::SavePlayerLoadouts() {
}

void APandemicGameStateBase::RemoveCustomJournalEntryByID(FName JournalID) {
}

void APandemicGameStateBase::RemoveCustomJournalEntry(UJournalDataEntry* JournalList) {
}

void APandemicGameStateBase::PushGameUI_Implementation(const TArray<TSoftClassPtr<UActivatableWidget>>& UIList) {
}

void APandemicGameStateBase::PlayerReadyUpdated_Implementation(APandemicPlayerState* Player, bool bIsReady) {
}

void APandemicGameStateBase::PlayerFinishedLoading_Implementation(APandemicPlayerState* Player) {
}

void APandemicGameStateBase::PlayerDied_Implementation(APandemicPlayerState* Player, bool bIsDeath) {
}

void APandemicGameStateBase::PlayerAlive_Implementation(APandemicPlayerState* Player) {
}

void APandemicGameStateBase::PassOnMissionItemFromPlayer(APandemicPlayerState* Player, UMissionItemSlot* Slot, bool bForcePassOn) {
}

void APandemicGameStateBase::OnRep_UpdateCharacterCount_Implementation() {
}

void APandemicGameStateBase::OnRep_UIState_Implementation(FGameUIState PreviousState) {
}

void APandemicGameStateBase::OnRep_SpawnLocations_Implementation() {
}

void APandemicGameStateBase::OnRep_PublicCustomJournalList_Implementation() {
}

void APandemicGameStateBase::OnRep_MissionInventory_Implementation() {
}

void APandemicGameStateBase::OnRep_MapCollectionList_Implementation() {
}

void APandemicGameStateBase::OnRep_MapCollectionIndex_Implementation() {
}

void APandemicGameStateBase::OnRep_LastCheckpoint_Implementation() {
}

void APandemicGameStateBase::OnRep_IndividualMapList_Implementation() {
}

void APandemicGameStateBase::OnRep_GameUIList_Implementation() {
}

void APandemicGameStateBase::OnRep_GameStatus_Implementation() {
}

void APandemicGameStateBase::OnRep_FullMapList_Implementation() {
}

void APandemicGameStateBase::OnRep_Difficulty_Implementation() {
}

void APandemicGameStateBase::OnRep_CurrentSinglePlayerRespawns_Implementation() {
}

void APandemicGameStateBase::OnRep_CurrentCollectionMapList_Implementation() {
}

void APandemicGameStateBase::OnRep_CinematicState_Implementation(FCinematicState PreviousState) {
}

void APandemicGameStateBase::OnRep_bForceHideHUD_Implementation() {
}

void APandemicGameStateBase::OnRep_AlivePlayers_Implementation() {
}

void APandemicGameStateBase::ObjectiveCompleted_Implementation(UObjective* Objective, bool bSucceeded) {
}

void APandemicGameStateBase::Multicast_SendMessageToAll_Implementation(const FString& Name, const FString& Message) {
}

bool APandemicGameStateBase::IsUsingMapCollection(FName& CollectionName) const {
    return false;
}

bool APandemicGameStateBase::IsSessionBegun() {
    return false;
}

bool APandemicGameStateBase::IsReadyForUI() {
    return false;
}

bool APandemicGameStateBase::IsInCinematic(FName Name) {
    return false;
}

bool APandemicGameStateBase::IsAnyPlayerReady() const {
    return false;
}

bool APandemicGameStateBase::IsAnyPlayerAlive() const {
    return false;
}

bool APandemicGameStateBase::HasNextMap() const {
    return false;
}

bool APandemicGameStateBase::HasCinematicEnded(FName Name, float History) {
    return false;
}

bool APandemicGameStateBase::HasCheckpoint() const {
    return false;
}

EGameStatus APandemicGameStateBase::GetStatus() const {
    return EGameStatus::GS_Standby;
}

FVector APandemicGameStateBase::GetRandomPlayerLocation(APlayerState*& Player) {
    return FVector{};
}

TArray<UJournalDataEntry*> APandemicGameStateBase::GetPublicCustomJournalList() {
    return TArray<UJournalDataEntry*>();
}

int32 APandemicGameStateBase::GetNumReadyPlayers() const {
    return 0;
}

int32 APandemicGameStateBase::GetNumAlivePlayers() const {
    return 0;
}

FName APandemicGameStateBase::GetNextMapName() const {
    return NAME_None;
}

FSelectedMap APandemicGameStateBase::GetNextMap() const {
    return FSelectedMap{};
}

float APandemicGameStateBase::GetLowestPlayerHeight() const {
    return 0.0f;
}

FName APandemicGameStateBase::GetLastCheckpointID() const {
    return NAME_None;
}

FCheckpoint APandemicGameStateBase::GetLastCheckpoint() const {
    return FCheckpoint{};
}

int32 APandemicGameStateBase::GetCurrentSinglePlayerRespawns() const {
    return 0;
}

FSelectedMap APandemicGameStateBase::GetCurrentMapFromCollection() const {
    return FSelectedMap{};
}

FName APandemicGameStateBase::GetCurrentMapCollection() const {
    return NAME_None;
}

bool APandemicGameStateBase::GetAllowSinglePlayerRespawns() const {
    return false;
}

void APandemicGameStateBase::EndCinematic(FName Name) {
}

void APandemicGameStateBase::CinematicStarted_Implementation(FName Name, ALevelSequenceActor* LevelSequence, float Duration) {
}

void APandemicGameStateBase::CinematicEnded_Implementation(FName Name, bool bWasSkipped) {
}

bool APandemicGameStateBase::AreAllPlayersReady() const {
    return false;
}

bool APandemicGameStateBase::AreAllPlayersLoaded() const {
    return false;
}

void APandemicGameStateBase::AddSharedMissionItem(UMissionItem* MissionItem) {
}

void APandemicGameStateBase::AddCustomJournalEntry(UJournalDataEntry* JournalEntry) {
}

void APandemicGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APandemicGameStateBase, bUseRespawnWaves);
    DOREPLIFETIME(APandemicGameStateBase, RespawnWaveTimestamp);
    DOREPLIFETIME(APandemicGameStateBase, RespawnWaveTime);
    DOREPLIFETIME(APandemicGameStateBase, Difficulty);
    DOREPLIFETIME(APandemicGameStateBase, MissionInventory);
    DOREPLIFETIME(APandemicGameStateBase, IndividualMapList);
    DOREPLIFETIME(APandemicGameStateBase, MapCollectionList);
    DOREPLIFETIME(APandemicGameStateBase, FullMapList);
    DOREPLIFETIME(APandemicGameStateBase, CurrentCollectionMapList);
    DOREPLIFETIME(APandemicGameStateBase, CurrentMapCollectionIndex);
    DOREPLIFETIME(APandemicGameStateBase, AlivePlayers);
    DOREPLIFETIME(APandemicGameStateBase, GameUIList);
    DOREPLIFETIME(APandemicGameStateBase, SpawnLocations);
    DOREPLIFETIME(APandemicGameStateBase, bForceHideHUD);
    DOREPLIFETIME(APandemicGameStateBase, UIState);
    DOREPLIFETIME(APandemicGameStateBase, CinematicState);
    DOREPLIFETIME(APandemicGameStateBase, EndGameTimestamp);
    DOREPLIFETIME(APandemicGameStateBase, RestartGameTimestamp);
    DOREPLIFETIME(APandemicGameStateBase, StartGameTimestamp);
    DOREPLIFETIME(APandemicGameStateBase, bPendingStart);
    DOREPLIFETIME(APandemicGameStateBase, CurrentSinglePlayerRespawns);
    DOREPLIFETIME(APandemicGameStateBase, bAllowSinglePlayerRespawns);
    DOREPLIFETIME(APandemicGameStateBase, LastCheckpointID);
    DOREPLIFETIME(APandemicGameStateBase, GameStatus);
    DOREPLIFETIME(APandemicGameStateBase, PublicCustomJournalList);
    DOREPLIFETIME(APandemicGameStateBase, bIsUsingMapCollection);
    DOREPLIFETIME(APandemicGameStateBase, MaxCharacterCount);
}


