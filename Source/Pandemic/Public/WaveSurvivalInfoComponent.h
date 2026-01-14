#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AutoEndTimerStartedDelegateDelegate.h"
#include "ChamberChallengeCountUpdatedDelegateDelegate.h"
#include "ChamberChallengeCounters.h"
#include "ChamberEnteredDelegateDelegate.h"
#include "ChamberIndexUpdatedDelegateDelegate.h"
#include "ChamberStartedDelegateDelegate.h"
#include "ChamberUpdatedDelegateDelegate.h"
#include "GameplayTagContainer.h"
#include "NextWaveTimerStartedDelegateDelegate.h"
#include "RequirementSpawnGroupSpawnedDelegateDelegate.h"
#include "TotalChamberCreditsUpdatedDelegate.h"
#include "WaveCompletedDelegateDelegate.h"
#include "WaveNumRemainingEnemiesUpdatedDelegateDelegate.h"
#include "WaveStartedDelegateDelegate.h"
#include "WaveTimerData.h"
#include "WaveSurvivalInfoComponent.generated.h"

class ATestingChamberChallenge;
class ATestingChamberManager;
class AWaveScenarioManager;
class UGameEventBusSubsystem;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UWaveSurvivalInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberChallengeCountUpdatedDelegate OnChallengeCountUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveStartedDelegate OnWaveBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNextWaveTimerStartedDelegate OnNextWaveTimerStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoEndTimerStartedDelegate OnAutoEndWaveTimerStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoEndTimerStartedDelegate OnAutoEndChamberTimerStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveCompletedDelegate OnWaveEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequirementSpawnGroupSpawnedDelegate OnRequirementSpawnGroupSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberStartedDelegate OnChamberBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberUpdatedDelegate OnChamberEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberUpdatedDelegate OnChamberLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberEnteredDelegate OnChamberAccessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveNumRemainingEnemiesUpdatedDelegate OnNumRemainingEnemiesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChamberIndexUpdatedDelegate OnChamberNumberUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTotalChamberCreditsUpdated OnTotalChamberCreditsUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATestingChamberManager* CurrentChamberManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameEventBusSubsystem* CurrentEventBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName WaveRequirementSpawnGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SubscribedChallengeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTag> ChallengeFunctionNameToTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunChallengeCountUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunChamberCreditsUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentChallengeCounters, meta=(AllowPrivateAccess=true))
    FChamberChallengeCounters CurrentChallengeCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TotalChamberCredits, meta=(AllowPrivateAccess=true))
    int32 TotalChamberCredits;
    
public:
    UWaveSurvivalInfoComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromAllDelegates();
    
    UFUNCTION(BlueprintCallable)
    bool TryRetrieveTagFromFunctionName(const FName& InfoComponentFunctionName, FGameplayTag& OutStatusTag);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTotalChamberCredits(int32 NewCreditsCount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentChallengeCounters(FChamberChallengeCounters& NewCounters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCompletedChallengeCount(int32 NewCount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveChallengeCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ATestingChamberManager* RetrieveCurrentChamberManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<ATestingChamberChallenge*> RetrieveCurrentChallenges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWaveStarted(AWaveScenarioManager* ScenarioManager, int32 Wave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWaveCompleted(AWaveScenarioManager* ScenarioManager, int32 Wave);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TotalChamberCredits();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentChallengeCounters();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReceiveNumRemainingEnemiesUpdated(AWaveScenarioManager* ScenarioManager, int32 NumRemainingEnemies, int32 PrevNumRemainingEnemies);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNextWaveTimeDataUpdated(AWaveScenarioManager* ScenarioManager, const FWaveTimerData& NextWaveTimeData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialWaveStarted(AWaveScenarioManager* Manager, int32 TotalWavesCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChamberIndexUpdated(AWaveScenarioManager* Manager, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChamberExited(AWaveScenarioManager* Manager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChamberEntered(AWaveScenarioManager* Manager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChallengeSucceeded(const UObject* Instigator, const UObject* Subject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChallengeFailed(const UObject* Instigator, const UObject* Subject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChallengeAccepted(const UObject* Instigator, const UObject* Subject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutoEndTimeDataUpdated(AWaveScenarioManager* ScenarioManager, const FWaveTimerData& AutoEndTimeData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAllWavesCompleted(AWaveScenarioManager* ScenarioManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalChamberCredits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FChamberChallengeCounters GetCurrentChallengeCounters() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FillChallengeMaps();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BroadcastLateJoinClientDelegates();
    
private:
    UFUNCTION(BlueprintCallable)
    void AssignChamberManagerDelegates();
    
    UFUNCTION(BlueprintCallable)
    void AssignChallengeEventBusDelegates();
    
};

