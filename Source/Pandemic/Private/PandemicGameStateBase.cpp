#include "PandemicGameStateBase.h"
#include "AchievementManagerComponent.h"
#include "Net/UnrealNetwork.h"

APandemicGameStateBase::APandemicGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseRespawnWaves = false;
    this->RespawnWaveTimestamp = 0;
    this->RespawnWaveTime = 10;
    this->Difficulty = NULL;
    this->CurrentMapCollectionIndex = -1;
    this->bForceHideHUD = false;
    this->AchievementManager = CreateDefaultSubobject<UAchievementManagerComponent>(TEXT("Achievement Manager"));
    this->EndGameTimestamp = 0;
    this->RestartGameTimestamp = 0;
    this->StartGameTimestamp = 0;
    this->bPendingStart = false;
    this->EarlyStartDelay = 30;
    this->CurrentSinglePlayerRespawns = 0;
    this->bAllowSinglePlayerRespawns = false;
    this->GameStatus = EGameStatus::GS_PreGame;
    this->RandomSeedMode = ERandomSeedMode::RandomizeAtStart;
    this->RandomSeed = 0;
    this->LongshotDistance = 2000.00f;
    this->bIsVoteKickAllowed = false;
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

void APandemicGameStateBase::SetVotesInProgress(const TArray<FVote>& NewVotes) {
}

void APandemicGameStateBase::SetUnlockedCheckpoint(FName CheckpointName) {
}

void APandemicGameStateBase::SetUIState(FGameUIState NewUIState) {
}

void APandemicGameStateBase::SetTeams(const TArray<FTeamData>& NewTeams) {
}

void APandemicGameStateBase::SetStatus(EGameStatus NewStatus) {
}

void APandemicGameStateBase::SetMaxCharacterCount(int32 MaxCharacters) {
}

void APandemicGameStateBase::SetMapCollectionList(TArray<FName> Maps) {
}

void APandemicGameStateBase::SetIsVoteKickAllowed(bool bNewVoteKickAllowed) {
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

void APandemicGameStateBase::SetActiveVoteKicks(const TArray<FKickData>& NewVoteKicks) {
}

void APandemicGameStateBase::ServerSubmitVoteKick(int32 VoteResult, int32 CurrentVoteIndex, int32 CurrentKickIndex) {
}

void APandemicGameStateBase::ServerRemoveVoteKick(const APlayerState* VoteOwningPlayer) {
}

void APandemicGameStateBase::ServerEndVoteKick(int32 CurrentVoteIndex, int32 CurrentKickIndex) {
}

void APandemicGameStateBase::ServerCancelVoteKick(int32 CurrentVoteIndex, int32 CurrentKickIndex) {
}

void APandemicGameStateBase::ServerBeginVoteKick(const FVote& VoteToBegin, const FKickData& NewKickData) {
}

void APandemicGameStateBase::ServerAddVoteKick(const APlayerState* VotingPlayer, int32 NewVoteValue) {
}

void APandemicGameStateBase::SavePlayerLoadouts() {
}

bool APandemicGameStateBase::RetrieveVoteIndicesByType(int32 TeamIndex, EVoteType DesiredVoteType, TArray<int32>& OutVoteIndices) const {
    return false;
}

bool APandemicGameStateBase::RetrieveTeamVotesByType(int32 TeamIndex, EVoteType DesiredVoteType, TArray<FVote>& OutFoundVotes) const {
    return false;
}

bool APandemicGameStateBase::RetrieveKickIndexByTeam(int32 TeamIndex, int32& OutKickIndex) const {
    return false;
}

bool APandemicGameStateBase::RetrieveKickDataByTeam(int32 TeamIndex, FKickData& OutKickData) const {
    return false;
}

void APandemicGameStateBase::RemoveCustomJournalEntryByID(FName JournalID) {
}

void APandemicGameStateBase::RemoveCustomJournalEntry(UJournalDataEntry* JournalList) {
}

void APandemicGameStateBase::RemoveActiveVoteKickData(int32 IndexToRemove) {
}

void APandemicGameStateBase::ReceivedMessage(const FString& Name, const FString& Message) {
}

void APandemicGameStateBase::PushGameUI_Implementation(const TArray<TSoftClassPtr<UActivatableWidget>>& UIList) {
}

void APandemicGameStateBase::PushCachedPreGameUI() {
}

void APandemicGameStateBase::PushCachedPostGameUI() {
}

void APandemicGameStateBase::PlayerReadyUpdated_Implementation(APandemicPlayerState* Player, bool bIsReady) {
}

void APandemicGameStateBase::PlayerFinishedLoading_Implementation(APandemicPlayerState* Player) {
}

void APandemicGameStateBase::PlayerDied_Implementation(APandemicPlayerState* Player, EPlayerDeathReason Reason) {
}

void APandemicGameStateBase::PlayerAlive_Implementation(APandemicPlayerState* Player) {
}

void APandemicGameStateBase::PassOnMissionItemFromPlayer(APandemicPlayerState* Player, UMissionItemSlot* Slot, bool bForcePassOn) {
}

void APandemicGameStateBase::OnTeamPlayerRemoved(const APandemicPlayerState* Player, int32 PreviousTeamIndex) {
}

void APandemicGameStateBase::OnTeamPlayerAdded(const APandemicPlayerState* Player, int32 NewTeamIndex) {
}

void APandemicGameStateBase::OnRep_UpdateCharacterCount_Implementation() {
}

void APandemicGameStateBase::OnRep_UIState_Implementation(FGameUIState PreviousState) {
}

void APandemicGameStateBase::OnRep_Teams_Implementation(const TArray<FTeamData>& PreviousTeamsData) {
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

void APandemicGameStateBase::OnRep_IsVoteKickAllowed_Implementation() {
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

void APandemicGameStateBase::OnRep_ActiveVoteKicks_Implementation(const TArray<FKickData>& PreviousVoteKicks) {
}

void APandemicGameStateBase::OnCoOpPlayerRemoved(APlayerState* RemovedPlayer) {
}

void APandemicGameStateBase::OnCoOpPlayerAdded(APlayerState* AddedPlayer) {
}

void APandemicGameStateBase::ObjectiveCompleted_Implementation(UObjective* Objective, bool bSucceeded) {
}

void APandemicGameStateBase::MulticastCosmeticEndVoteKick_Implementation(int32 VoteKickTeamIndex) {
}

void APandemicGameStateBase::MulticastCosmeticCancelVoteKick_Implementation(int32 VoteKickTeamIndex) {
}

void APandemicGameStateBase::Multicast_SendMessageToAll_Implementation(const FString& Name, const FString& Message) {
}

void APandemicGameStateBase::LoadAchievementData() {
}

bool APandemicGameStateBase::IsVoteKickInProgress(int32 TeamIndex) const {
    return false;
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

bool APandemicGameStateBase::IsLocalPlayersTeam(int32 TeamIndex) const {
    return false;
}

bool APandemicGameStateBase::IsLocalPlayer(APlayerState* Player) const {
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

TArray<FVote> APandemicGameStateBase::GetVotesInProgress() const {
    return TArray<FVote>();
}

EGameStatus APandemicGameStateBase::GetStatus() const {
    return EGameStatus::GS_Standby;
}

int32 APandemicGameStateBase::GetScoreForTags(const FGameplayTagContainer& InTags) const {
    return 0;
}

int32 APandemicGameStateBase::GetRandomSeed() const {
    return 0;
}

FVector APandemicGameStateBase::GetRandomPlayerLocation(APlayerState*& Player) {
    return FVector{};
}

TArray<UJournalDataEntry*> APandemicGameStateBase::GetPublicCustomJournalList() {
    return TArray<UJournalDataEntry*>();
}

TArray<APandemicPlayerState*> APandemicGameStateBase::GetPlayersPendingRespawn() const {
    return TArray<APandemicPlayerState*>();
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

bool APandemicGameStateBase::GetIsVoteKickAllowed() const {
    return false;
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

TArray<FKickData> APandemicGameStateBase::GetActiveVoteKicks() const {
    return TArray<FKickData>();
}

void APandemicGameStateBase::EndCinematic(FName Name) {
}

void APandemicGameStateBase::CinematicStarted_Implementation(FName Name, ALevelSequenceActor* LevelSequence, float Duration) {
}

void APandemicGameStateBase::CinematicEnded_Implementation(FName Name, bool bWasSkipped) {
}

void APandemicGameStateBase::CheckAllPlayersLoaded() {
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

int32 APandemicGameStateBase::AddActiveVoteKickData(const FKickData& DataToAdd) {
    return 0;
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
    DOREPLIFETIME(APandemicGameStateBase, Teams);
    DOREPLIFETIME(APandemicGameStateBase, GameUIList);
    DOREPLIFETIME(APandemicGameStateBase, LateJoinUIList);
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
    DOREPLIFETIME(APandemicGameStateBase, RandomSeed);
    DOREPLIFETIME(APandemicGameStateBase, bIsVoteKickAllowed);
    DOREPLIFETIME(APandemicGameStateBase, ActiveVoteKicks);
    DOREPLIFETIME(APandemicGameStateBase, VotesInProgress);
    DOREPLIFETIME(APandemicGameStateBase, PublicCustomJournalList);
    DOREPLIFETIME(APandemicGameStateBase, bIsUsingMapCollection);
    DOREPLIFETIME(APandemicGameStateBase, MaxCharacterCount);
}


