#pragma once
#include "CoreMinimal.h"
#include "FlowPlayerChallengeAsset.h"
#include "FlowTestingChamberChallengeAsset.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UFlowTestingChamberChallengeAsset : public UFlowPlayerChallengeAsset {
    GENERATED_BODY()
public:
    UFlowTestingChamberChallengeAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_OnWaveStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_OnWaveComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_OnFinalWaveComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_OnChamberStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_OnChamberExited() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_OnChamberEnter() const;
    
};

