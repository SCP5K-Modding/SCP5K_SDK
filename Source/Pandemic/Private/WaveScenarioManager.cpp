#include "WaveScenarioManager.h"

#include "GameplayTagContainer.h"
#include "GlobalGameEventDelegateDelegate.h"
#include "Net/UnrealNetwork.h"

AWaveScenarioManager::AWaveScenarioManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->WaveSpawnTag = TEXT("Wave");
    this->WaveSpawnGroup = TEXT("Wave");
    this->LoopingWaveSpawnGroup = TEXT("WaveLooping");
    this->LoopingWaveSpawnTag = TEXT("WaveLooping");
    this->DelayedWaveSpawnGroup = TEXT("WaveDelayed");
    this->DelayedWaveSpawnTag = TEXT("WaveDelayed");
    this->WaveDelay = 5.00f;
    this->CurrentWave = -1;
    this->CurrentInWaveState = EInWaveState::BeforeWaveSpawn;
    this->CurrentTimingState = EWaveManagerTimingState::BeforeFirstWave;
    this->NumRemainingEnemies = -1;
    this->WaveStartSound = NULL;
    this->WaveEndSound = NULL;
    this->AllWavesCompleteSound = NULL;
    this->WaveStartAction = NULL;
    this->WaveEndAction = NULL;
    this->GameEventBus = NULL;
    this->bHasRunWaveStarted = false;
    this->bHasRunWaveCompleted = false;
    this->bHasRunNextWaveTimeUpdated = false;
    this->bHasRunAutoEndTimeUpdated = false;
    this->bHasRunInitialWaveStarted = false;
    this->bHasRunAllWavesCompleted = false;
    this->bHasRunRemainingEnemiesUpdated = false;
}

void AWaveScenarioManager::UnsubscribeFunctionFromEventBus(const FGlobalGameEventDelegate EventDelegate) {
}

bool AWaveScenarioManager::TryRetrieveWaveScenarioByIndex(int32 Index, FWaveScenarioWave& OutWave) const {
    return false;
}

bool AWaveScenarioManager::TryRetrieveCurrentWaveScenario(FWaveScenarioWave& OutWave) const {
    return false;
}

void AWaveScenarioManager::SubscribeFunctionToEventBus(const FGameplayTagQuery& TagQuery, const FGlobalGameEventDelegate EventDelegate) {
}

void AWaveScenarioManager::StartWave(int32 Wave) {
}

void AWaveScenarioManager::StartNextWave() {
}

void AWaveScenarioManager::Start() {
}

void AWaveScenarioManager::SetSpawnersEnabledForWave(int32 Wave, bool bEnabled) {
}

void AWaveScenarioManager::OnSpawned(const TArray<APawn*>& Spawned, AAISpawnArea* Area, int32 NumFailed) {
}

void AWaveScenarioManager::OnRep_NumRemainingEnemies(int32 PreviousNumRemainingEnemies) {
}

void AWaveScenarioManager::OnRep_NextWaveTimeData() {
}

void AWaveScenarioManager::OnRep_CurrentWave(int32 PreviousWave) {
}

void AWaveScenarioManager::OnRep_CurrentTimingState() {
}

void AWaveScenarioManager::OnRep_CurrentInWaveState() {
}

void AWaveScenarioManager::OnRep_AutoEndTimeData() {
}

void AWaveScenarioManager::OnObjectiveCompleted(UObjective* Objective, bool bSucceeded) {
}

void AWaveScenarioManager::OnEnemyDied(APawn* Enemy, int32 EnemyCount) {
}

void AWaveScenarioManager::MulticastOnSpawned_Implementation(const TArray<APawn*>& Spawned, AAISpawnArea* Area, int32 NumFailed) {
}

void AWaveScenarioManager::KillAllEnemies() {
}

void AWaveScenarioManager::InvokeEventOnGameEventBus(FGameplayTagContainer Tag) {
}

FName AWaveScenarioManager::GetWaveSpawnGroupName() const {
    return NAME_None;
}

float AWaveScenarioManager::GetWaveDelay() const {
    return 0.0f;
}

int32 AWaveScenarioManager::GetTotalEnemiesForWave(int32 Wave) const {
    return 0;
}

int32 AWaveScenarioManager::GetTotalEnemies() const {
    return 0;
}

int32 AWaveScenarioManager::GetNumWaves() const {
    return 0;
}

int32 AWaveScenarioManager::GetNumRemainingActors() const {
    return 0;
}

int32 AWaveScenarioManager::GetCurrentWave() const {
    return 0;
}

void AWaveScenarioManager::FinishWave() {
}

void AWaveScenarioManager::DestroyAllEnemies() {
}

bool AWaveScenarioManager::CheckWaveConditions(int32 Wave) const {
    return false;
}

void AWaveScenarioManager::BroadcastLateJoinClientDelegates() {
}

void AWaveScenarioManager::AllWavesCompleted() {
}

void AWaveScenarioManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWaveScenarioManager, CurrentWave);
    DOREPLIFETIME(AWaveScenarioManager, NextWaveTimeData);
    DOREPLIFETIME(AWaveScenarioManager, AutoEndTimeData);
    DOREPLIFETIME(AWaveScenarioManager, CurrentInWaveState);
    DOREPLIFETIME(AWaveScenarioManager, CurrentTimingState);
    DOREPLIFETIME(AWaveScenarioManager, NumRemainingEnemies);
}


