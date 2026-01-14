#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "OnChallengeFailedDelegateDelegate.h"
#include "OnChallengeSucceededDelegateDelegate.h"
#include "PlayerChallenge.generated.h"

class UFlowComponent;
class UFlowPlayerChallengeAsset;
class UGameEventBusComponent;
class UPlayerChallengeMetadata;

UCLASS(Blueprintable, NotPlaceable)
class PANDEMIC_API APlayerChallenge : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPlayerChallengeMetadata> MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFlowComponent* FlowHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlowPlayerChallengeAsset* FlowHostRunningFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameEventBusComponent* EventBus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChallengeSucceededDelegate K2_OnChallengeSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChallengeFailedDelegate K2_OnChallengeFailed;
    
public:
    APlayerChallenge(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnChallengeSucceeded();
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeFailed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChallengeDeclined();
    
    UFUNCTION(BlueprintCallable)
    UFlowPlayerChallengeAsset* OnChallengeAccepted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnChallengeDeclined();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnChallengeAccepted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InvokeEventOnEventBusWithIDAndTypeTag(const FGameplayTagContainer& TagContainer) const;
    
};

