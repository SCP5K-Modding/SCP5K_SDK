#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ERevealState.h"
#include "ERevealTriggerState.h"
#include "OnRevealAnimationFinishedMCDelegateDelegate.h"
#include "OnRevealAnimationStartedMCDelegateDelegate.h"
#include "OnRevealAnimationStateChangedMCDelegateDelegate.h"
#include "RevealAnimations.h"
#include "RevealConditions.h"
#include "RevealAnimationComponent.generated.h"

class AAIController;
class AActor;
class UAnimMontage;
class URevealAnimationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API URevealAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevealAnimationStateChangedMCDelegate OnRevealAnimationStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevealAnimationStartedMCDelegate OnRevealAnimationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevealAnimationFinishedMCDelegate OnRevealAnimationFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRevealAnimations> RevealAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevealConditions RevealCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartIdle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIController> AIController;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerWithDirectLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentIdleAnimation, meta=(AllowPrivateAccess=true))
    int32 CurrentIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCollisionDuringAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERevealState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERevealTriggerState TriggerState;
    
public:
    URevealAnimationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void WakeAI() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupRevealAnimationComponent();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_PlayIdleAnimation(int32 Index);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayRevealAnimation(const AActor* Instigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayIdleAnimationWithTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayIdleAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentIdleAnimation(int32 PreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnActorPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayRevealAnimation();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MontageHasSlot(UAnimMontage* Montage, FName SlotName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URevealAnimationComponent* GetRevealAnimationComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentIdleAnimationTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIdleAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableCollision();
    
};

