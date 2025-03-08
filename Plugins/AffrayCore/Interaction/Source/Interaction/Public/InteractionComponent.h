#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "InteractableDeregisteredMCDelegateDelegate.h"
#include "InteractableFocusedMCDelegateDelegate.h"
#include "InteractableRegisteredMCDelegateDelegate.h"
#include "InteractionFinishedMCDelegateDelegate.h"
#include "InteractionInterruptedMCDelegateDelegate.h"
#include "InteractionStartedMCDelegateDelegate.h"
#include "InteractionComponent.generated.h"

class AActor;
class UInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTERACTION_API UInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableRegisteredMCDelegate InteractableRegisteredMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableDeregisteredMCDelegate InteractableDeregisteredMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableFocusedMCDelegate InteractableFocusedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionStartedMCDelegate InteractionStartedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionFinishedMCDelegate InteractionFinishedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionInterruptedMCDelegate InteractionInterruptedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionInterruptedMCDelegate InteractionFailedMCDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDelayTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTimerHandle InteractionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTimerHandle InteractionTimer;
    
public:
    UInteractionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interrupt(AActor* EventInstigator, UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interact(UInteractableComponent* Interactable);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterInteractable(UInteractableComponent* Interactable);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BroadcastInteractionStarted(UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BroadcastInteractionInterrupted(UInteractableComponent* Interactable, AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BroadcastInteractionFinished(UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BroadcastInteractionFailed(UInteractableComponent* Interactable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractingWith(UInteractableComponent* Interactable) const;
    
    UFUNCTION(BlueprintCallable)
    void Interrupt(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Interact();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeUntilInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKnownInteractables(TArray<UInteractableComponent*>& OutKnownInteractables) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractableComponent* GetFocusedInteractable() const;
    
    UFUNCTION(BlueprintCallable)
    void DeregisterInteractable(UInteractableComponent* Interactable);
    
private:
    UFUNCTION(BlueprintCallable)
    void DeferredInteraction(UInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_BroadcastInteractionFinished(UInteractableComponent* Interactable);
    
};

