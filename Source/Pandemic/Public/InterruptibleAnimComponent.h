#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "InterruptibleAnimComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UInterruptibleAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UInterruptibleAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnblockBehaviour(bool bCancelLastMontage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayBlockingAnimation(UAnimMontage* AnimMontage);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayAnimationMontageOnAllClients(UAnimMontage* AnimMontage);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsBlockingBehaviourTree() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void CancelMontageOnAllClients(UAnimMontage* AnimMontage);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BlockBehaviour(float BlockTime);
    
};

