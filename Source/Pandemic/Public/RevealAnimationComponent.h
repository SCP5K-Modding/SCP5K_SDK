#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "OnRevealAnimationFinishedMCDelegateDelegate.h"
#include "OnRevealAnimationStartedMCDelegateDelegate.h"
#include "RevealAnimations.h"
#include "RevealAnimationComponent.generated.h"

class AAIController;
class AActor;
class UAnimInstance;
class UAnimMontage;
class URevealAnimationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API URevealAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevealAnimationStartedMCDelegate OnRevealAnimationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRevealAnimationFinishedMCDelegate OnRevealAnimationFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAIController> AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimInstance> AnimationInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRevealAnimations> RevealAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerWithDirectLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentIdleAnimation, meta=(AllowPrivateAccess=true))
    int32 CurrentIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideIdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoInitialize;
    
public:
    URevealAnimationComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTriggerableDistance(float InTriggerableDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetStartIdle(bool bInStartIdle);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideIdleAnimation(FGameplayTag InOverrideAnimationTag);
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_PlayIdleAnimation(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void RunBehaviorTree();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayRevealAnimation();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayIdleAnimationWithTag(FGameplayTag Tag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentIdleAnimation(int32 PreviousValue);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnActorPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayRevealAnimation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayIdleAnimation(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MontageHasSlot(UAnimMontage* Montage, FName SlotName);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeRevealAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URevealAnimationComponent* GetRevealAnimationComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIdleAnimation() const;
    
};

