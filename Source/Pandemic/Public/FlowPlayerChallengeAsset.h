#pragma once
#include "CoreMinimal.h"
#include "FlowAsset.h"
#include "OnFlowChallengeFailedDelegateDelegate.h"
#include "OnFlowChallengeSucceededDelegateDelegate.h"
#include "FlowPlayerChallengeAsset.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UFlowPlayerChallengeAsset : public UFlowAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlowChallengeSucceededDelegate OnFlowChallengeSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlowChallengeFailedDelegate OnFlowChallengeFailed;
    
    UFlowPlayerChallengeAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ReportChallengeSucceeded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ReportChallengeFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_ReportChallengeSucceeded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_ReportChallengeFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_OnChallengeDeclined() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_OnChallengeAccepted() const;
    
};

