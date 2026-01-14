#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameEventBus -ObjectName=GlobalGameEventDelegate__DelegateSignature -FallbackName=GlobalGameEventDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
#include "EInWaveState.h"
#include "EWaveManagerTimingState.h"
#include "GlobalGameEventDelegateDelegate.h"
#include "SpawnAreaSpawningCompletedDelegateDelegate.h"
#include "WaveScenarioAllWavesCompletedDelegateDelegate.h"
#include "WaveScenarioRemainingEnemiesUpdatedDelegateDelegate.h"
#include "WaveScenarioStartedDelegateDelegate.h"
#include "WaveScenarioTimerUpdatedDelegateDelegate.h"
#include "WaveScenarioWave.h"
#include "WaveScenarioWaveCompletedDelegateDelegate.h"
#include "WaveScenarioWaveStartedDelegateDelegate.h"
#include "WaveTimerData.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "WaveScenarioManager.generated.h"

class AAISpawnArea;
class APawn;
class UFMODEvent;
class UGameAction;
class UGameEventBusSubsystem;
class UObjective;

UCLASS(Blueprintable)
class PANDEMIC_API AWaveScenarioManager : public AInfo, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioWaveCompletedDelegate OnWaveCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioWaveStartedDelegate OnWaveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioAllWavesCompletedDelegate OnAllWavesCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioTimerUpdatedDelegate OnNextWaveTimeDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioTimerUpdatedDelegate OnAutoEndTimeDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioStartedDelegate OnInitialWaveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnAreaSpawningCompletedDelegate OnSpawnAreaSpawningCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioRemainingEnemiesUpdatedDelegate OnRemainingEnemiesUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaveSpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaveSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopingWaveSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopingWaveSpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DelayedWaveSpawnGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DelayedWaveSpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWave, meta=(AllowPrivateAccess=true))
    int32 CurrentWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NextWaveTimeData, meta=(AllowPrivateAccess=true))
    FWaveTimerData NextWaveTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AutoEndTimeData, meta=(AllowPrivateAccess=true))
    FWaveTimerData AutoEndTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentInWaveState, meta=(AllowPrivateAccess=true))
    EInWaveState CurrentInWaveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentTimingState, meta=(AllowPrivateAccess=true))
    EWaveManagerTimingState CurrentTimingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnArea*> DefaultSpawnAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWaveScenarioWave> Waves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumRemainingEnemies, meta=(AllowPrivateAccess=true))
    int32 NumRemainingEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* WaveStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* WaveEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AllWavesCompleteSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* WaveStartAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameAction* WaveEndAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameEventBusSubsystem* GameEventBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunWaveStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunWaveCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunNextWaveTimeUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunAutoEndTimeUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunInitialWaveStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunAllWavesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunRemainingEnemiesUpdated;
    
public:
    AWaveScenarioManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnsubscribeFunctionFromEventBus(const FGlobalGameEventDelegate EventDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryRetrieveWaveScenarioByIndex(int32 Index, FWaveScenarioWave& OutWave) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryRetrieveCurrentWaveScenario(FWaveScenarioWave& OutWave) const;
    
    UFUNCTION(BlueprintCallable)
    void SubscribeFunctionToEventBus(const FGameplayTagQuery& TagQuery, const FGlobalGameEventDelegate EventDelegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartWave(int32 Wave);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartNextWave();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnersEnabledForWave(int32 Wave, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawned(const TArray<APawn*>& Spawned, AAISpawnArea* Area, int32 NumFailed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NumRemainingEnemies(int32 PreviousNumRemainingEnemies);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NextWaveTimeData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWave(int32 PreviousWave);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentTimingState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentInWaveState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AutoEndTimeData();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveCompleted(UObjective* Objective, bool bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDied(APawn* Enemy, int32 EnemyCount);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnSpawned(const TArray<APawn*>& Spawned, AAISpawnArea* Area, int32 NumFailed);
    
    UFUNCTION(BlueprintCallable)
    void KillAllEnemies();
    
    UFUNCTION(BlueprintCallable)
    void InvokeEventOnGameEventBus(FGameplayTagContainer Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWaveSpawnGroupName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaveDelay() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalEnemiesForWave(int32 Wave) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalEnemies() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumWaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumRemainingActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWave() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FinishWave();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllEnemies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckWaveConditions(int32 Wave) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastLateJoinClientDelegates();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AllWavesCompleted();
    

    // Fix for true pure virtual functions not being implemented
};

