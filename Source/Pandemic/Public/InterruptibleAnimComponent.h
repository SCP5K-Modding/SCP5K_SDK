#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InterruptibleAnimComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API UInterruptibleAnimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UInterruptibleAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnblockBehaviour();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayBlockingAnimation(UAnimMontage* AnimMontage);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayAnimationMontageOnAllClients(UAnimMontage* AnimMontage);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsBlockingBehaviourTree() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BlockBehaviour(float BlockTime);
    
};

