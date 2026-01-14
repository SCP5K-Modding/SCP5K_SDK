#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "WaveScenarioWave.h"
#include "WaveSurvivalScreenWidget.generated.h"

class AActor;
class UMeshComponent;
class UTexture2D;

UINTERFACE(Blueprintable, MinimalAPI)
class UWaveSurvivalScreenWidget : public UInterface {
    GENERATED_BODY()
};

class IWaveSurvivalScreenWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOwningComponent(AActor* Caller, const UMeshComponent* OwningComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBackgroundImage(AActor* Caller, const UTexture2D* DesiredTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWaveEnded(AActor* Caller, const FWaveScenarioWave& CurrentWave, int32 WaveNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWaveBegun(AActor* Caller, const FWaveScenarioWave& CurrentWave, int32 WaveNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTotalChamberCreditsUpdated(AActor* Caller, int32 UpdatedCreditsCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNumRemainingEnemiesUpdated(AActor* Caller, int32 NumRemainingEnemies, int32 PrevNumRemainingEnemies);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNextWaveTimerStarted(AActor* Caller, float TimeUntilNextWave, float OriginalTimerDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChamberNumberUpdated(AActor* Caller, int32 ChamberNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChamberLeft(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChamberEnded(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChamberBegun(AActor* Caller, int32 TotalWavesCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChamberAccessed(AActor* Caller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChallengeCountUpdated(AActor* Caller, int32 ActiveChallengesCount, int32 CompletedChallengesCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutoEndWaveTimerStarted(AActor* Caller, float TimeUntilWaveEnd, float OriginalTimerDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutoEndChamberTimerStarted(AActor* Caller, float TimeUntilChamberEnd, float OriginalTimerDuration);
    
};

