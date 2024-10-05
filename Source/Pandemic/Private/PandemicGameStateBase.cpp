#include "PandemicGameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

APandemicGameStateBase::APandemicGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseRespawnWaves = false;
    this->RespawnWaveTimestamp = 0;
    this->RespawnWaveTime = 0;
    this->Difficulty = NULL;
    this->CurrentMapCollectionIndex = -1;
    this->EndGameTimestamp = 0;
    this->RestartGameTimestamp = 0;
    this->StartGameTimestamp = 0;
    this->CurrentSinglePlayerRespawns = 0;
    this->bAllowSinglePlayerRespawns = false;
    this->GameStatus = EGameStatus::GS_PreGame;
    this->bIsUsingMapCollection = false;
    this->MaxCharacterCount = 100;
}

bool APandemicGameStateBase::TryPassOnMissionItemsFromPlayer(APandemicPlayerState* Player, bool bForcePassOn) {
    return false;
}

void APandemicGameStateBase::SetUnlockedCheckpoint(FName CheckpointName) {
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

void APandemicGameStateBase::SetCurrentSinglePlayerRespawns(int32 NewSinglePlayerRespawns) {
}

void APandemicGameStateBase::SetCurrentMapList(TArray<FSelectedMap> Maps) {
}

void APandemicGameStateBase::SetCurrentMapCollectionIndex(int32 Index) {
}

void APandemicGameStateBase::SetAllowSinglePlayerRespawns(bool bNewAllowSinglePlayerRespawns) {
}

void APandemicGameStateBase::RemovePublicJournalEntry(FJournal JournalEntry) {
}

void APandemicGameStateBase::PushGameUI_Implementation(const TArray<TSubclassOf<UActivatableWidget>>& UIList) {
}

void APandemicGameStateBase::PlayerDied_Implementation(APandemicPlayerState* Player, bool bIsDeath) {
}

void APandemicGameStateBase::PlayerAlive_Implementation(APandemicPlayerState* Player) {
}

void APandemicGameStateBase::PassOnMissionItemFromPlayer(APandemicPlayerState* Player, UMissionItemSlot* Slot, bool bForcePassOn) {
}

void APandemicGameStateBase::OnRep_UpdateCharacterCount_Implementation() {
}

void APandemicGameStateBase::OnRep_SpawnLocations_Implementation() {
}

void APandemicGameStateBase::OnRep_PublicJournalEntry_Implementation() {
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

void APandemicGameStateBase::OnRep_CurrentMapList_Implementation() {
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

bool APandemicGameStateBase::IsAnyPlayerReady() const {
    return false;
}

bool APandemicGameStateBase::IsAnyPlayerAlive() const {
    return false;
}

bool APandemicGameStateBase::HasNextMap() const {
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

FName APandemicGameStateBase::GetCurrentMapCollection() const {
    return NAME_None;
}

bool APandemicGameStateBase::GetAllowSinglePlayerRespawns() const {
    return false;
}

bool APandemicGameStateBase::AreAllPlayersReady() const {
    return false;
}

void APandemicGameStateBase::AddSharedMissionItem(UMissionItem* MissionItem) {
}

void APandemicGameStateBase::AddPublicJournalEntry(FJournal JournalEntry) {
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
    DOREPLIFETIME(APandemicGameStateBase, CurrentMapList);
    DOREPLIFETIME(APandemicGameStateBase, CurrentMapCollectionIndex);
    DOREPLIFETIME(APandemicGameStateBase, AlivePlayers);
    DOREPLIFETIME(APandemicGameStateBase, GameUIList);
    DOREPLIFETIME(APandemicGameStateBase, SpawnLocations);
    DOREPLIFETIME(APandemicGameStateBase, EndGameTimestamp);
    DOREPLIFETIME(APandemicGameStateBase, RestartGameTimestamp);
    DOREPLIFETIME(APandemicGameStateBase, StartGameTimestamp);
    DOREPLIFETIME(APandemicGameStateBase, CurrentSinglePlayerRespawns);
    DOREPLIFETIME(APandemicGameStateBase, bAllowSinglePlayerRespawns);
    DOREPLIFETIME(APandemicGameStateBase, LastCheckpointID);
    DOREPLIFETIME(APandemicGameStateBase, GameStatus);
    DOREPLIFETIME(APandemicGameStateBase, PublicJournalEntry);
    DOREPLIFETIME(APandemicGameStateBase, bIsUsingMapCollection);
    DOREPLIFETIME(APandemicGameStateBase, MaxCharacterCount);
}


