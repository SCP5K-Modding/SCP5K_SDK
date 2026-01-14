#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayObjectives -ObjectName=ObjectiveCompletedDelegate__DelegateSignature -FallbackName=ObjectiveCompletedDelegateDelegate
#include "ETestingChamberTimingState.h"
#include "ObjectiveCompletedDelegateDelegate.h"
#include "TestingChamberRequirements.h"
#include "WaveScenarioChamberEnteredDelegateDelegate.h"
#include "WaveScenarioChamberExitedDelegateDelegate.h"
#include "WaveScenarioChamberIndexUpdatedDelegateDelegate.h"
#include "WaveScenarioManager.h"
#include "TestingChamberManager.generated.h"

class AElectronicLift;
class ATeleporter;
class UFMODEvent;
class UObject;
class UObjective;
class UTestingChamberMetadata;

UCLASS(Blueprintable)
class PANDEMIC_API ATestingChamberManager : public AWaveScenarioManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTestingChamberMetadata> ChamberMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* EntranceTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATeleporter* ExitTeleporter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElectronicLift* ExitLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElectronicLift* EntranceLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowStartingObjectiveInUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartingObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ElevatorExitObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaitForElevatorObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveCompletedDelegate OnElevatorStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SurfaceFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransitionFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BelowFloor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioChamberEnteredDelegate OnChamberEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioChamberExitedDelegate OnChamberExited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveScenarioChamberIndexUpdatedDelegate OnChamberIndexUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ChamberEnteredSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyAllEnemiesAfterChamberExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyAllEnemiesAfterChamberExitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultPlayerSpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FName> WaveOverridePlayerSpawnTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentChamberTimingState, meta=(AllowPrivateAccess=true))
    ETestingChamberTimingState CurrentChamberTimingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ChamberIndex, meta=(AllowPrivateAccess=true))
    int32 ChamberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunChamberIndexUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunChamberEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRunChamberExited;
    
public:
    ATestingChamberManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartingObjectiveCompleted(UObjective* Objective, bool bSucceeded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentChamberTimingState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChamberIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnClockworkChamberEntered(const UObject* InInstigator, const UObject* Subject);
    
public:
    UFUNCTION(BlueprintCallable)
    void LiftReachedFloor(AElectronicLift* InLift, int32 Floor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTestingChamberRequirements GetTestingChamberRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSpawnTagForWave(int32 Wave);
    
    UFUNCTION(BlueprintCallable)
    void ElevatorEntered(UObjective* Objective, bool bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void ChamberEntered(int32 CurrentChamberIndex);
    
};

