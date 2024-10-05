#include "PandemicGameModeBase.h"
#include "PandemicGameStateBase.h"
#include "PandemicPlayerState.h"
#include "Templates/SubclassOf.h"

APandemicGameModeBase::APandemicGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = APandemicGameStateBase::StaticClass();
    this->PlayerStateClass = APandemicPlayerState::StaticClass();
    this->bUseRespawnWaves = false;
    this->RespawnWaveTime = 4;
    this->bTriggerRespawnWaveOnMajorObjective = true;
    this->DefaultRespawnTime = 10.00f;
    this->bAllowSinglePlayerRespawns = true;
    this->SinglePlayerRespawns = 4;
    this->GameModeName = TEXT("PandemicGameMode");
    this->bUseFactionCharacter = true;
    this->CurrentPlayers = 0;
    this->bAllowPlayerLoadout = false;
    this->bAllowPlayerChangeTeam = false;
    this->AISpawnScale = 1.00f;
    this->bRequirePlayerReady = true;
    this->bUseMapVote = true;
    this->DisplayableStats = 0;
    this->PandemicGameStateBase = NULL;
    this->bFailOnNoPlayers = true;
    this->bWaitForRestartOnEmpty = true;
    this->RestartTime = 15;
    this->StartGameTime = 3;
    this->MinPlayers = 1;
}

void APandemicGameModeBase::TryRemoveGlobalBan_Implementation(const FString& PlayerID) {
}

void APandemicGameModeBase::TryAddGlobalBan_Implementation(const FString& PlayerID, const FString& Reason, int32 Days) {
}

void APandemicGameModeBase::StartRespawnWave() {
}

void APandemicGameModeBase::StartRespawnPlayer(APlayerController* Player, float InRespawnTime) {
}

void APandemicGameModeBase::SpectatePlayer(APlayerController* Controller) {
}

bool APandemicGameModeBase::SpawnPlayerAtPlayerStart(APlayerController* Controller, TSubclassOf<APawn> Class) {
    return false;
}

bool APandemicGameModeBase::SpawnPlayer(APlayerController* Controller, TSubclassOf<APawn> Class, FTransform Transform) {
    return false;
}

bool APandemicGameModeBase::ShouldStartGame_Implementation() {
    return false;
}

bool APandemicGameModeBase::ShouldRestartGame_Implementation() {
    return false;
}

bool APandemicGameModeBase::ShouldEndGame_Implementation() {
    return false;
}

void APandemicGameModeBase::ServerTravel_Implementation(const FString& URL, bool bAbsolute, bool bShouldSkipGameNotify) {
}

bool APandemicGameModeBase::RemoveOwnerFromPlayerState(APlayerState* Player) {
    return false;
}

bool APandemicGameModeBase::RemoveOwner(const FString& PlayerNameOrID) {
    return false;
}

bool APandemicGameModeBase::RemoveBan(const FString& PlayerID) {
    return false;
}

bool APandemicGameModeBase::RemoveAdminFromPlayerState(APlayerState* Player) {
    return false;
}

bool APandemicGameModeBase::RemoveAdmin(const FString& PlayerNameOrID) {
    return false;
}

void APandemicGameModeBase::RegisterPlayerReport_Implementation(FPlayerReport Report) {
}

bool APandemicGameModeBase::ReceivePreLogin_Implementation(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) {
    return false;
}


void APandemicGameModeBase::PlayerDied_Implementation(APandemicPlayerState* Player, bool bIsDeath) {
}

void APandemicGameModeBase::PlayerAlive_Implementation(APandemicPlayerState* Player) {
}

bool APandemicGameModeBase::KickPlayerFromPlayerState(APlayerState* Player, const FString& Reason) {
    return false;
}

bool APandemicGameModeBase::KickPlayer(const FString& PlayerNameOrID, const FString& Reason) {
    return false;
}

bool APandemicGameModeBase::IsPlayerOwner(APlayerController* Player) const {
    return false;
}

bool APandemicGameModeBase::IsPlayerDev(APlayerController* Player, UDataTable* CreditsDataTable) const {
    return false;
}

bool APandemicGameModeBase::IsPlayerBanned(APlayerController* Player) const {
    return false;
}

bool APandemicGameModeBase::IsPlayerAdmin(APlayerController* Player) const {
    return false;
}

bool APandemicGameModeBase::IsAnyPlayerReady() const {
    return false;
}

bool APandemicGameModeBase::IsAnyPlayerAlive() const {
    return false;
}

float APandemicGameModeBase::GetPlayerSpawnMultiplier_Implementation() {
    return 0.0f;
}

TArray<APlayerController*> APandemicGameModeBase::GetPlayerList() const {
    return TArray<APlayerController*>();
}

bool APandemicGameModeBase::GetPlayerID(const FString& PlayerName, FString& ID, APlayerState*& Player) const {
    return false;
}

APlayerController* APandemicGameModeBase::GetPlayerControllerFromPlayerState(APlayerState* Player) const {
    return NULL;
}

bool APandemicGameModeBase::GetPlayerCanSeeSpawn(AAISpawnArea* Spawn, float Bias) const {
    return false;
}

bool APandemicGameModeBase::GetPlayerCanSeeCollision(UPrimitiveComponent* Component, FVector Offset, float Bias) const {
    return false;
}

bool APandemicGameModeBase::GetPlayerCanSee(FVector Location, float Bias) const {
    return false;
}

bool APandemicGameModeBase::GetPlayerByName(const FString& PlayerName, APlayerState*& Player) const {
    return false;
}

bool APandemicGameModeBase::GetPlayerByID(const FString& PlayerID, APlayerState*& Player) const {
    return false;
}

bool APandemicGameModeBase::GetPlayer(const FString& PlayerNameOrID, FString& ID, APlayerState*& Player) const {
    return false;
}

float APandemicGameModeBase::GetMinPlayerDistance(FVector Location) const {
    return 0.0f;
}

float APandemicGameModeBase::GetMaxPlayerDistance(FVector Location) const {
    return 0.0f;
}

float APandemicGameModeBase::GetAveragePlayerDistance(FVector Location) const {
    return 0.0f;
}

bool APandemicGameModeBase::CanAlwaysJoin_Implementation(FUniqueNetIdRepl NetID) {
    return false;
}

bool APandemicGameModeBase::AreAllPlayersReady() const {
    return false;
}

bool APandemicGameModeBase::AddOwnerFromPlayerState(APlayerState* Player) {
    return false;
}

bool APandemicGameModeBase::AddOwner(const FString& PlayerNameOrID) {
    return false;
}

bool APandemicGameModeBase::AddBanFromPlayerState(APlayerState* Player, const FString& Reason, int32 Days, APlayerState* Sender) {
    return false;
}

bool APandemicGameModeBase::AddBan(const FString& PlayerNameOrID, const FString& Reason, int32 Days, APlayerState* Sender) {
    return false;
}

bool APandemicGameModeBase::AddAdminFromPlayerState(APlayerState* Player) {
    return false;
}

bool APandemicGameModeBase::AddAdmin(const FString& PlayerNameOrID) {
    return false;
}


