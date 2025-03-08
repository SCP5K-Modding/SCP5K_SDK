#include "PandemicGameInstance.h"

UPandemicGameInstance::UPandemicGameInstance() {
    this->ServerName = TEXT("SCP: 5K Server");
    this->MaxPlayerCount = 4;
    this->bRestartServerEachGame = false;
    this->bUseSeamlessTravel = true;
    this->bAnyoneUseAdminCam = false;
    this->bHasPublisherAPIKey = false;
    this->bUseServerPassword = false;
    this->MaxGameBans = 6;
    this->MaxVACBans = 6;
    this->MinDaysSinceLastBan = 150;
    this->bDenyVACBan = false;
    this->bDenyGameBan = false;
    this->bDenyCommunityBan = false;
    this->bUseWhitelist = false;
    this->bFriendsOnly = false;
    this->bUseLAN = false;
    this->EmptyServerRestartTime = 15.00f;
    this->AFKTimer = 300.00f;
    this->bShouldAdvertise = true;
    this->bAdminsAlwaysJoin = true;
    this->bDevsAlwaysJoin = false;
    this->bTreatDevsAsAdmin = false;
    this->bHasSavedThisGame = false;
    this->bHasModifiedAdmins = false;
    this->bHasModifiedWhitelist = false;
    this->bHasModifiedConfig = false;
    this->bWasKickedFromServer = false;
    this->bReturnedToMainMenu = false;
    this->bIsJoiningServer = false;
    this->bLostConnectionToServer = false;
    this->SteamAppId = 872670;
    this->CurrentMapCollectionIndex = -1;
    this->bTeamDamageEnabled = false;
    this->TeamDamageReflection = 0.00f;
}

bool UPandemicGameInstance::WantsStandbyMap() const {
    return false;
}

bool UPandemicGameInstance::UseSeamlessTravel() const {
    return false;
}

void UPandemicGameInstance::UpdateSession() {
}

void UPandemicGameInstance::SetUseServerPassword(bool bNewUseServerPasword, bool bUpdateSession) {
}

void UPandemicGameInstance::SetUseLan(bool bNewUseLAN) {
}

void UPandemicGameInstance::SetServerPassword(const FString& NewPassword) {
}

void UPandemicGameInstance::SetServerName(const FString& NewServerName, bool bUpdateSession) {
}

void UPandemicGameInstance::SetPSOCacheUsageMask(int32 QualityLevel, int32 MapIndex) {
}

void UPandemicGameInstance::SetMaxPlayerCount(int32 NewMaxPlayers, bool bUpdateSession) {
}

void UPandemicGameInstance::SetMapCollection(FName CollectionName) {
}

void UPandemicGameInstance::SetIsFriendsOnly(bool bNewFriendsOnly, bool bUpdateSession) {
}

void UPandemicGameInstance::SavePlayerReport(FPlayerReport Report) {
}

void UPandemicGameInstance::SaveConfigs_Implementation(bool bForceSave) {
}

bool UPandemicGameInstance::RemovePlayerFromWhitelist(const FString& PlayerID) {
    return false;
}

bool UPandemicGameInstance::RemoveOwnerWithNetID(FUniqueNetIdRepl PlayerID) {
    return false;
}

bool UPandemicGameInstance::RemoveOwner(const FString& PlayerID) {
    return false;
}

bool UPandemicGameInstance::RemoveBan(const FString& PlayerID) {
    return false;
}

bool UPandemicGameInstance::RemoveAdminWithNetID(FUniqueNetIdRepl PlayerID) {
    return false;
}

bool UPandemicGameInstance::RemoveAdmin(const FString& PlayerID) {
    return false;
}

void UPandemicGameInstance::ReceiveNetworkFailure_Implementation(ENetworkFailure::Type FailureType, const FString& ErrorString, bool bIsServer) {
}

void UPandemicGameInstance::ParseMapRotation() {
}

void UPandemicGameInstance::MapCollectionsLoaded() {
}

void UPandemicGameInstance::LoadServerMapData() {
}

void UPandemicGameInstance::LoadServerConfig() {
}

void UPandemicGameInstance::LoadConfigs_Implementation() {
}

void UPandemicGameInstance::LoadBansSoft() {
}

void UPandemicGameInstance::LoadBans() {
}

bool UPandemicGameInstance::IsUsingMapCollection() const {
    return false;
}

bool UPandemicGameInstance::IsTeamDamageEnabled() const {
    return false;
}

bool UPandemicGameInstance::IsSelectedMapInAnyCollection(FName Map, int32& CollectionIndex, bool bLinearOnly) {
    return false;
}

bool UPandemicGameInstance::IsPlayerOwner(const FString& PlayerID) const {
    return false;
}

bool UPandemicGameInstance::IsPlayerOnWhitelist(const FString& PlayerID) const {
    return false;
}

bool UPandemicGameInstance::IsPlayerDev(const FString& PlayerID) const {
    return false;
}

bool UPandemicGameInstance::IsPlayerBanned(const FString& PlayerID) const {
    return false;
}

bool UPandemicGameInstance::IsPlayerAdmin(const FString& PlayerID) const {
    return false;
}

bool UPandemicGameInstance::IsMapInCollection(FName Map, int32 CollectionIndex) {
    return false;
}

bool UPandemicGameInstance::IsJoiningServer() const {
    return false;
}

bool UPandemicGameInstance::IsFriendsOnly() const {
    return false;
}

bool UPandemicGameInstance::HasValidPublisherAPIKey() const {
    return false;
}

bool UPandemicGameInstance::HasValidAPIKey() const {
    return false;
}

bool UPandemicGameInstance::GetWasKickedFromServer() const {
    return false;
}

bool UPandemicGameInstance::GetUseWhitelist() const {
    return false;
}

bool UPandemicGameInstance::GetUseServerPassword() const {
    return false;
}

bool UPandemicGameInstance::GetUseLAN() const {
    return false;
}

float UPandemicGameInstance::GetTeamDamageReflection() const {
    return 0.0f;
}

int32 UPandemicGameInstance::GetSteamAppID() const {
    return 0;
}

FString UPandemicGameInstance::GetSteamAPIKey() const {
    return TEXT("");
}

bool UPandemicGameInstance::GetShouldAdvertise() const {
    return false;
}

FString UPandemicGameInstance::GetServerPassword() const {
    return TEXT("");
}

FString UPandemicGameInstance::GetServerName() const {
    return TEXT("");
}

bool UPandemicGameInstance::GetRestartServerEachGame() const {
    return false;
}

int32 UPandemicGameInstance::GetMaxVACBans() const {
    return 0;
}

int32 UPandemicGameInstance::GetMaxPlayerCount() const {
    return 0;
}

int32 UPandemicGameInstance::GetMaxGameBans() const {
    return 0;
}

FName UPandemicGameInstance::GetMapDataName(FPrimaryAssetId MapDataAssetID) {
    return NAME_None;
}

bool UPandemicGameInstance::GetLostConnectionToServer() const {
    return false;
}

TSet<FString> UPandemicGameInstance::GetLocalWhitelistIDs() const {
    return TSet<FString>();
}

TSet<FString> UPandemicGameInstance::GetLocalOwnerIDs() const {
    return TSet<FString>();
}

TMap<FString, FPlayerBan> UPandemicGameInstance::GetLocalBannedIDs() const {
    return TMap<FString, FPlayerBan>();
}

TSet<FString> UPandemicGameInstance::GetLocalAdminIDs() const {
    return TSet<FString>();
}

FText UPandemicGameInstance::GetLevelName() const {
    return FText::GetEmpty();
}

FText UPandemicGameInstance::GetLastServerConnectionFailureReason() const {
    return FText::GetEmpty();
}

FText UPandemicGameInstance::GetLastKickReason() const {
    return FText::GetEmpty();
}

FString UPandemicGameInstance::GetJoinedServerName() const {
    return TEXT("");
}

bool UPandemicGameInstance::GetHasSavedThisGame() const {
    return false;
}

bool UPandemicGameInstance::GetHasModifiedWhitelist() const {
    return false;
}

bool UPandemicGameInstance::GetHasModifiedConfig() const {
    return false;
}

bool UPandemicGameInstance::GetHasModifiedAdmins() const {
    return false;
}

void UPandemicGameInstance::GetGameState() {
}

FFPSGameplayConfig UPandemicGameInstance::GetGameplayConfig() const {
    return FFPSGameplayConfig{};
}

FString UPandemicGameInstance::GetEncryptedPassword() const {
    return TEXT("");
}

float UPandemicGameInstance::GetEmptyServerRestartTime() const {
    return 0.0f;
}

bool UPandemicGameInstance::GetDevsAlwaysJoin() const {
    return false;
}

bool UPandemicGameInstance::GetDenyVACBan() const {
    return false;
}

bool UPandemicGameInstance::GetDenyGameBan() const {
    return false;
}

TArray<TSoftObjectPtr<UMapData>> UPandemicGameInstance::GetCustomMapList() {
    return TArray<TSoftObjectPtr<UMapData>>();
}

FString UPandemicGameInstance::GetConfigFileName() const {
    return TEXT("");
}

FName UPandemicGameInstance::GetCollectionName(FPrimaryAssetId MapCollectionAssetID) {
    return NAME_None;
}

bool UPandemicGameInstance::GetAnyoneUseAdminCam() const {
    return false;
}

float UPandemicGameInstance::GetAFKTimer() const {
    return 0.0f;
}

bool UPandemicGameInstance::GetAdminsAlwaysJoin() const {
    return false;
}

TArray<FSimpleObjectiveData> UPandemicGameInstance::GetActiveObjectives() const {
    return TArray<FSimpleObjectiveData>();
}

void UPandemicGameInstance::ExitStandby_Implementation() {
}

void UPandemicGameInstance::EnterStandby_Implementation(bool bUseStandbyMap) {
}

FString UPandemicGameInstance::EncryptString(const FString& String) {
    return TEXT("");
}

void UPandemicGameInstance::CreateSession() {
}

void UPandemicGameInstance::ClearActiveObjectives() {
}

void UPandemicGameInstance::AddPlayerToWhitelist(const FString& PlayerID) {
}

void UPandemicGameInstance::AddOwnerWithNetID(FUniqueNetIdRepl PlayerID) {
}

void UPandemicGameInstance::AddOwner(const FString& PlayerID) {
}

void UPandemicGameInstance::AddBan(const FString& PlayerID, FPlayerBan Ban) {
}

void UPandemicGameInstance::AddAdminWithNetID(FUniqueNetIdRepl PlayerID) {
}

void UPandemicGameInstance::AddAdmin(const FString& PlayerID) {
}

void UPandemicGameInstance::AddActiveObjective(const FSimpleObjectiveData& Data) {
}


