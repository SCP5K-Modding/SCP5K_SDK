#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "PotentialObserversModifiedMCDelegateDelegate.h"
#include "SCP173Subsystem.generated.h"

class AActor;
class ASCP173InterestActor;
class USCP173ObserverComponent;

UCLASS(Blueprintable)
class PANDEMIC_API USCP173Subsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPotentialObserversModifiedMCDelegate PotentialObserversAddedMCDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPotentialObserversModifiedMCDelegate PotentialObserversRemovedMCDelegate;
    
    USCP173Subsystem();

    UFUNCTION(BlueprintCallable)
    void RemovePotentialObservers(const TArray<USCP173ObserverComponent*>& ObserversToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemovePotentialObserver(USCP173ObserverComponent* ObserverToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInterestActor(ASCP173InterestActor* InterestActorToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USCP173ObserverComponent*> GetPotentialObservers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetPotentialObserverActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCP173ObserverComponent* GetObserverClosestToLocation(FVector TargetLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateInterestActors(FName GroupName, bool bDeactivateAll);
    
    UFUNCTION(BlueprintCallable)
    void AddPotentialObservers(const TArray<USCP173ObserverComponent*>& NewObservers);
    
    UFUNCTION(BlueprintCallable)
    void AddPotentialObserver(USCP173ObserverComponent* NewObserver);
    
    UFUNCTION(BlueprintCallable)
    void AddInterestActor(ASCP173InterestActor* NewInterestActor);
    
    UFUNCTION(BlueprintCallable)
    void ActivateInterestActors(FName GroupName, bool bDeactivateOthers);
    
};

