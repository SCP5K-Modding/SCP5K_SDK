#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "InteractMCDelegateDelegate.h"
#include "InterruptMCDelegateDelegate.h"
#include "InvestigationRemovedDelegateDelegate.h"
#include "InteractableComponent.generated.h"

class AActor;
class UInteractionComponent;
class UPrimitiveComponent;
class USceneComponent;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTERACTION_API UInteractableComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractMCDelegate InteractMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractMCDelegate InteractionStartedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterruptMCDelegate InterruptMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterruptMCDelegate InteractionFailedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInvestigationRemovedDelegate InvestigationRemovedDelegate;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WidgetOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanResumeInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ElapsedInteractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanBeFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterAsInvestigatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveInvestigationOnInteractionOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomInvestigationIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CustomInvestigationIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomInvestigationIconDiscoverableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvestigatableDiscovered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionComponent*> InteractionComponents;
    
public:
    UInteractableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsInvestigatable(bool IsInvestigatable);
    
    UFUNCTION(BlueprintCallable)
    void SetInvestigatableDiscovered(bool IsDiscovered);
    
    UFUNCTION(BlueprintCallable)
    void SetCanInteract(bool bNewCanInteract);
    
    UFUNCTION(BlueprintCallable)
    void SetCanBeFocused(bool bNewCanBeFocused);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interrupt(AActor* EventInstigator, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interact(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Interrupt(AActor* EventInstigator, float ElapsedTime);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_InteractionFailed(AActor* EventInstigator);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Interact(AActor* EventInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void Interrupt(AActor* EventInstigator, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void Interact(AActor* EventInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondsToInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionDotProduct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UInteractionComponent*> GetInteractionComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetInteractableStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInteractableState(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetInteractableName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFinalAttachLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedInteractionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanResumeInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetAttachLocation(FVector& Offset) const;
    
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
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelAllInteractions(AActor* EventInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

