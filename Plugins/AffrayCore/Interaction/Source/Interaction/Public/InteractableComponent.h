#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "InteractMCDelegateDelegate.h"
#include "InterruptMCDelegateDelegate.h"
#include "InteractableComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTERACTION_API UInteractableComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractMCDelegate InteractMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterruptMCDelegate InterruptMCDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PositionWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteractableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> InteractableStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsToInteract;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDelay;
    
public:
    UInteractableComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interrupt(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interact(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Interrupt(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Interact(AActor* EventInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void Interrupt(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Interact(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondsToInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionDotProduct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetInteractableStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInteractableState(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetInteractableName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveState() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract(AActor* EventInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFocus(const AActor* EventInstigator, float Dot) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

