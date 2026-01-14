#pragma once
#include "CoreMinimal.h"
#include "PlayerChallenge.h"
#include "TestingChamberChallenge.generated.h"

class ATestingChamberManager;
class UFlowTestingChamberChallengeAsset;
class UObject;

UCLASS(Blueprintable)
class PANDEMIC_API ATestingChamberChallenge : public APlayerChallenge {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlowTestingChamberChallengeAsset* FlowHostRunningChamberFlow;
    
public:
    ATestingChamberChallenge(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnWaveStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnWaveComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnFinalWaveComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnChamberStarted(const UObject* EvtInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnChamberExited();
    
    UFUNCTION(BlueprintCallable)
    void OnChamberEnter(const UObject* EvtInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnWaveStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnWaveComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFinalWaveComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnChamberStarted(const UObject* EvtInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnChamberExited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnChamberEnter(const UObject* EvtInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTokenReward(const ATestingChamberManager* TestingChamber) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamScoreReward(const ATestingChamberManager* TestingChamber) const;
    
};

