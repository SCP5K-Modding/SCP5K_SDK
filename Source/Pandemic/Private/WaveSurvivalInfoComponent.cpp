#include "WaveSurvivalInfoComponent.h"
#include "Net/UnrealNetwork.h"

UWaveSurvivalInfoComponent::UWaveSurvivalInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentChamberManager = NULL;
    this->CurrentEventBus = NULL;
    this->WaveRequirementSpawnGroupName = TEXT("WaveRequirementSpawnGroup");
    this->bHasRunChallengeCountUpdated = false;
    this->bHasRunChamberCreditsUpdated = false;
    this->TotalChamberCredits = -1;
}

void UWaveSurvivalInfoComponent::UnsubscribeFromAllDelegates() {
}

bool UWaveSurvivalInfoComponent::TryRetrieveTagFromFunctionName(const FName& InfoComponentFunctionName, FGameplayTag& OutStatusTag) {
    return false;
}

void UWaveSurvivalInfoComponent::SetTotalChamberCredits(int32 NewCreditsCount) {
}

void UWaveSurvivalInfoComponent::SetCurrentChallengeCounters(FChamberChallengeCounters& NewCounters) {
}

void UWaveSurvivalInfoComponent::SetCompletedChallengeCount(int32 NewCount) {
}

void UWaveSurvivalInfoComponent::SetActiveChallengeCount(int32 NewCount) {
}

ATestingChamberManager* UWaveSurvivalInfoComponent::RetrieveCurrentChamberManager_Implementation() const {
    return NULL;
}

TArray<ATestingChamberChallenge*> UWaveSurvivalInfoComponent::RetrieveCurrentChallenges_Implementation() const {
    return TArray<ATestingChamberChallenge*>();
}

void UWaveSurvivalInfoComponent::OnWaveStarted_Implementation(AWaveScenarioManager* ScenarioManager, int32 Wave) {
}

void UWaveSurvivalInfoComponent::OnWaveCompleted_Implementation(AWaveScenarioManager* ScenarioManager, int32 Wave) {
}

void UWaveSurvivalInfoComponent::OnRep_TotalChamberCredits() {
}

void UWaveSurvivalInfoComponent::OnRep_CurrentChallengeCounters() {
}

void UWaveSurvivalInfoComponent::OnReceiveNumRemainingEnemiesUpdated_Implementation(AWaveScenarioManager* ScenarioManager, int32 NumRemainingEnemies, int32 PrevNumRemainingEnemies) {
}

void UWaveSurvivalInfoComponent::OnNextWaveTimeDataUpdated_Implementation(AWaveScenarioManager* ScenarioManager, const FWaveTimerData& NextWaveTimeData) {
}

void UWaveSurvivalInfoComponent::OnInitialWaveStarted_Implementation(AWaveScenarioManager* Manager, int32 TotalWavesCount) {
}

void UWaveSurvivalInfoComponent::OnChamberIndexUpdated_Implementation(AWaveScenarioManager* Manager, int32 Index) {
}

void UWaveSurvivalInfoComponent::OnChamberExited_Implementation(AWaveScenarioManager* Manager) {
}

void UWaveSurvivalInfoComponent::OnChamberEntered_Implementation(AWaveScenarioManager* Manager) {
}

void UWaveSurvivalInfoComponent::OnChallengeSucceeded_Implementation(const UObject* Instigator, const UObject* Subject) {
}

void UWaveSurvivalInfoComponent::OnChallengeFailed_Implementation(const UObject* Instigator, const UObject* Subject) {
}

void UWaveSurvivalInfoComponent::OnChallengeAccepted_Implementation(const UObject* Instigator, const UObject* Subject) {
}

void UWaveSurvivalInfoComponent::OnAutoEndTimeDataUpdated_Implementation(AWaveScenarioManager* ScenarioManager, const FWaveTimerData& AutoEndTimeData) {
}

void UWaveSurvivalInfoComponent::OnAllWavesCompleted_Implementation(AWaveScenarioManager* ScenarioManager) {
}

int32 UWaveSurvivalInfoComponent::GetTotalChamberCredits() const {
    return 0;
}

FChamberChallengeCounters UWaveSurvivalInfoComponent::GetCurrentChallengeCounters() const {
    return FChamberChallengeCounters{};
}

void UWaveSurvivalInfoComponent::FillChallengeMaps() {
}

void UWaveSurvivalInfoComponent::BroadcastLateJoinClientDelegates() {
}

void UWaveSurvivalInfoComponent::AssignChamberManagerDelegates() {
}

void UWaveSurvivalInfoComponent::AssignChallengeEventBusDelegates() {
}

void UWaveSurvivalInfoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWaveSurvivalInfoComponent, CurrentChallengeCounters);
    DOREPLIFETIME(UWaveSurvivalInfoComponent, TotalChamberCredits);
}


