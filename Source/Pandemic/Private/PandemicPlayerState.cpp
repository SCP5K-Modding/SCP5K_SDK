#include "PandemicPlayerState.h"
#include "Net/UnrealNetwork.h"

APandemicPlayerState::APandemicPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Status = EPlayerStatus::PS_Waiting;
    this->Team = 0;
    this->TotalKills = 0;
    this->PlayerKills = 0;
    this->TeamKills = 0;
    this->TotalDeaths = 0;
    this->Headshots = 0;
    this->Level = 0;
    this->GlobalKills = 0;
    this->GlobalPlayerKills = 0;
    this->GlobalDeaths = 0;
    this->GlobalHeadshots = 0;
    this->GlobalScore = 0;
    this->bIsOwner = false;
    this->bIsAdmin = false;
    this->bIsDev = false;
    this->bIsSupporter = false;
    this->bIsSpeaking = false;
    this->bIsServerMuted = false;
    this->bIsLocallyMuted = false;
    this->bRespawning = false;
    this->RespawnTimeStamp = 0;
    this->RespawnTime = 0.00f;
    this->HeadshotScoreAmount = 5;
    this->KillScoreAmount = 10;
    this->DeathScoreAmount = -20;
    this->PlayerKillScoreAmount = 30;
    this->TeamKillScoreAmount = -50;
    this->SelectedFaction = 0;
    this->RandomValue = 31873;
    this->SelectedSkinToneIndex = 0;
    this->SelectedGenderIndex = 0;
    this->bIsReady = false;
    this->bIsFullyLoaded = false;
}

void APandemicPlayerState::UseMissionItem(TSoftObjectPtr<UMissionItem> Item) {
}

void APandemicPlayerState::UpdateLevel() {
}

bool APandemicPlayerState::TryRemoveMissionItem(TSoftObjectPtr<UMissionItem> Item) {
    return false;
}

void APandemicPlayerState::StartGrantMissionItem(TSoftObjectPtr<UMissionItem> Item) {
}

void APandemicPlayerState::SetStatus(EPlayerStatus NewStatus, bool bForceUpdate) {
}

void APandemicPlayerState::SetServerMuted(bool bNewMuted) {
}

void APandemicPlayerState::SetReady(bool bNewReady) {
}

void APandemicPlayerState::SetPlayerName(const FString& NewName) {
}

void APandemicPlayerState::SetMuted(bool bNewMuted) {
}

void APandemicPlayerState::SetLoadout(FFPSLoadout Loadout) {
}

void APandemicPlayerState::SetDLCOwnership(int32 DLCID, FName DLCName, bool bIsOwned) {
}

void APandemicPlayerState::ServerSubmitDLCOwnership_Implementation(const TArray<FDLCOwnership>& Ownership) {
}

void APandemicPlayerState::ServerSetFinishedLoading_Implementation(bool bFinishedLoading) {
}

void APandemicPlayerState::ServerRequestSelectedPatches_Implementation(const TArray<int32>& InSelectedPatches) {
}

void APandemicPlayerState::ServerRequestSelectedCharacterSkin_Implementation(int32 InSelectedSkin) {
}

void APandemicPlayerState::ServerRequestCosmeticsProfile_Implementation(const FCosmeticProfile& Profile) {
}

void APandemicPlayerState::Server_RequestUnBanPlayer_Implementation(const FPlayerID& Player) {
}

void APandemicPlayerState::Server_RequestRemoveOwner_Implementation(const FPlayerID& Player) {
}

void APandemicPlayerState::Server_RequestRemoveAdmin_Implementation(const FPlayerID& Player) {
}

void APandemicPlayerState::Server_RequestMutePlayer_Implementation(const FPlayerID& Player, bool bNewMuted) {
}

void APandemicPlayerState::Server_RequestKickPlayer_Implementation(const FPlayerID& Player, const FString& Reason) {
}

void APandemicPlayerState::Server_RequestBanPlayer_Implementation(const FPlayerID& Player, const FString& Reason, int32 Days) {
}

void APandemicPlayerState::Server_RequestAddOwner_Implementation(const FPlayerID& Player) {
}

void APandemicPlayerState::Server_RequestAddAdmin_Implementation(const FPlayerID& Player) {
}

void APandemicPlayerState::RequestSelectedSkinToneIndex_Implementation(uint8 InSelectedIndex) {
}

void APandemicPlayerState::RequestSelectedGenderIndex_Implementation(uint8 InSelectedIndex) {
}

void APandemicPlayerState::RequestAvailablePatches_Implementation() {
}

void APandemicPlayerState::RequestAvailableItems_Implementation(int32 Slots) {
}

void APandemicPlayerState::RequestAvailableCharacterSkins_Implementation() {
}



bool APandemicPlayerState::PassesCosmeticRequirements(const FCosmeticRequirements& Requirements) {
    return false;
}

void APandemicPlayerState::OnRep_TotalKills_Implementation() {
}

void APandemicPlayerState::OnRep_TotalDeaths_Implementation() {
}

void APandemicPlayerState::OnRep_TeamKills_Implementation() {
}

void APandemicPlayerState::OnRep_Team_Implementation() {
}

void APandemicPlayerState::OnRep_Status_Implementation() {
}

void APandemicPlayerState::OnRep_SelectedSkinToneIndex_Implementation() {
}

void APandemicPlayerState::OnRep_SelectedPatches_Implementation() {
}

void APandemicPlayerState::OnRep_SelectedGenderIndex_Implementation() {
}

void APandemicPlayerState::OnRep_SelectedFaction_Implementation() {
}

void APandemicPlayerState::OnRep_SelectedCharacterSkin_Implementation() {
}

void APandemicPlayerState::OnRep_PrivateCustomJournalList_Implementation() {
}

void APandemicPlayerState::OnRep_PlayerKills_Implementation() {
}

void APandemicPlayerState::OnRep_MissionInventory_Implementation() {
}

void APandemicPlayerState::OnRep_Level_Implementation() {
}

void APandemicPlayerState::OnRep_IsSupporter_Implementation() {
}

void APandemicPlayerState::OnRep_IsSpeaking_Implementation() {
}

void APandemicPlayerState::OnRep_IsServerMuted_Implementation() {
}

void APandemicPlayerState::OnRep_IsReady_Implementation() {
}

void APandemicPlayerState::OnRep_IsOwner_Implementation() {
}

void APandemicPlayerState::OnRep_IsDev_Implementation() {
}

void APandemicPlayerState::OnRep_IsAdmin_Implementation() {
}

void APandemicPlayerState::OnRep_CurrentLoadout_Implementation() {
}

void APandemicPlayerState::OnRep_AvailablePatches_Implementation() {
}

void APandemicPlayerState::OnRep_AvailableItems_Implementation() {
}

void APandemicPlayerState::OnRep_AvailableCharacterSkins_Implementation() {
}

bool APandemicPlayerState::IsReady() const {
    return false;
}

bool APandemicPlayerState::IsFullyLoaded() const {
    return false;
}

bool APandemicPlayerState::HasSecurityAccess(int32 SecurityLevel, EMissionItemType ItemType, FName ID, bool UseIfFound) {
    return false;
}

int32 APandemicPlayerState::GetTotalKills() const {
    return 0;
}

int32 APandemicPlayerState::GetTotalDeaths() const {
    return 0;
}

bool APandemicPlayerState::GetTeamDefinition(FTeamDefinition& TeamDefinition) const {
    return false;
}

int32 APandemicPlayerState::GetTeam() const {
    return 0;
}

int32 APandemicPlayerState::GetRandomValue(int32 Max) const {
    return 0;
}

int32 APandemicPlayerState::GetPlayerKills() const {
    return 0;
}

int32 APandemicPlayerState::GetPingMS() const {
    return 0;
}

int32 APandemicPlayerState::GetIsAlive() const {
    return 0;
}

int32 APandemicPlayerState::GetHeadshots() const {
    return 0;
}

FGameplayTag APandemicPlayerState::GetFactionTag() {
    return FGameplayTag{};
}

UPandemicFaction* APandemicPlayerState::GetFaction() {
    return NULL;
}

int32 APandemicPlayerState::GetEnemyKills() const {
    return 0;
}

bool APandemicPlayerState::GetDoesOwnDLC_Implementation(int32 DLCID) {
    return false;
}

FFPSLoadout APandemicPlayerState::GetCurrentLoadout() const {
    return FFPSLoadout{};
}

APlayerController* APandemicPlayerState::GetController() const {
    return NULL;
}

void APandemicPlayerState::FinishGrantMissionItem(TSoftObjectPtr<UMissionItem> Item) {
}

FCosmeticProfile APandemicPlayerState::CreateProfileFromCosmetics(FName ProfileName) const {
    return FCosmeticProfile{};
}

void APandemicPlayerState::ClientCheckDLCOwnership_Implementation() {
}

void APandemicPlayerState::ClientApplyOfflineScore_Implementation() {
}

void APandemicPlayerState::Client_AddAchievement_Implementation(const FString& AchievementName) {
}

void APandemicPlayerState::CheckDLCOwnership() {
}

void APandemicPlayerState::ChangeTeam(int32 NewTeam) {
}

bool APandemicPlayerState::CanPickupMissionItem(TSoftObjectPtr<UMissionItem> Item) {
    return false;
}

bool APandemicPlayerState::CanMutePlayer(const FPlayerID& Player) const {
    return false;
}

bool APandemicPlayerState::CanKickPlayers() const {
    return false;
}

bool APandemicPlayerState::CanKickPlayer(const FPlayerID& Player) const {
    return false;
}

bool APandemicPlayerState::CanEditOwners() const {
    return false;
}

bool APandemicPlayerState::CanEditMutes() const {
    return false;
}

bool APandemicPlayerState::CanEditBans() const {
    return false;
}

bool APandemicPlayerState::CanEditAdmins() const {
    return false;
}

bool APandemicPlayerState::CanBanPlayer(const FPlayerID& Player) const {
    return false;
}

int32 APandemicPlayerState::CalculateRandomValue(int32 Seed, int32 Max) const {
    return 0;
}

void APandemicPlayerState::AddScore(int32 Amount) {
}

void APandemicPlayerState::AddKill(bool IsHeadshot, bool IsPlayer, APawn* Killed, APlayerState* PlayerState, float ScoreModifier) {
}

void APandemicPlayerState::AddJournalEntryToUser_Implementation(UJournalDataEntry* JournalEntry) {
}

void APandemicPlayerState::AddJournalEntry(UJournalDataEntry* JournalEntry) {
}

void APandemicPlayerState::AddDeath() {
}

void APandemicPlayerState::AddCustomJournalEntry(UJournalDataEntry* JournalEntry) {
}

void APandemicPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APandemicPlayerState, Status);
    DOREPLIFETIME(APandemicPlayerState, Team);
    DOREPLIFETIME(APandemicPlayerState, TotalKills);
    DOREPLIFETIME(APandemicPlayerState, PlayerKills);
    DOREPLIFETIME(APandemicPlayerState, TeamKills);
    DOREPLIFETIME(APandemicPlayerState, TotalDeaths);
    DOREPLIFETIME(APandemicPlayerState, Headshots);
    DOREPLIFETIME(APandemicPlayerState, Level);
    DOREPLIFETIME(APandemicPlayerState, GlobalKills);
    DOREPLIFETIME(APandemicPlayerState, GlobalPlayerKills);
    DOREPLIFETIME(APandemicPlayerState, GlobalDeaths);
    DOREPLIFETIME(APandemicPlayerState, GlobalHeadshots);
    DOREPLIFETIME(APandemicPlayerState, GlobalScore);
    DOREPLIFETIME(APandemicPlayerState, bIsOwner);
    DOREPLIFETIME(APandemicPlayerState, bIsAdmin);
    DOREPLIFETIME(APandemicPlayerState, bIsDev);
    DOREPLIFETIME(APandemicPlayerState, bIsSupporter);
    DOREPLIFETIME(APandemicPlayerState, bIsSpeaking);
    DOREPLIFETIME(APandemicPlayerState, bIsServerMuted);
    DOREPLIFETIME(APandemicPlayerState, bRespawning);
    DOREPLIFETIME(APandemicPlayerState, RespawnTimeStamp);
    DOREPLIFETIME(APandemicPlayerState, MissionInventory);
    DOREPLIFETIME(APandemicPlayerState, PrivateCustomJournalList);
    DOREPLIFETIME(APandemicPlayerState, CachedDLCOwnership);
    DOREPLIFETIME(APandemicPlayerState, SelectedFaction);
    DOREPLIFETIME(APandemicPlayerState, RandomValue);
    DOREPLIFETIME(APandemicPlayerState, CurrentLoadout);
    DOREPLIFETIME(APandemicPlayerState, AvailableCharacterSkins);
    DOREPLIFETIME(APandemicPlayerState, AvailablePatches);
    DOREPLIFETIME(APandemicPlayerState, AvailableItems);
    DOREPLIFETIME(APandemicPlayerState, SelectedCharacterSkin);
    DOREPLIFETIME(APandemicPlayerState, SelectedPatches);
    DOREPLIFETIME(APandemicPlayerState, SelectedSkinToneIndex);
    DOREPLIFETIME(APandemicPlayerState, SelectedGenderIndex);
    DOREPLIFETIME(APandemicPlayerState, bIsReady);
    DOREPLIFETIME(APandemicPlayerState, bIsFullyLoaded);
}


