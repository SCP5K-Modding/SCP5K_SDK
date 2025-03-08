#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "InvestigationSubsytem.generated.h"

class AActor;
class UReportableComponent;
class USceneComponent;

UCLASS(Blueprintable)
class INTERACTION_API UInvestigationSubsytem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USceneComponent>> Interactables;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USceneComponent>> Reportables;
    
public:
    UInvestigationSubsytem();

    UFUNCTION(BlueprintCallable)
    void UnregisterReportable(USceneComponent* Reportable);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterInteractable(USceneComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    static void SortComponentsByDistance(UPARAM(Ref) TArray<USceneComponent*>& Array, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void SortActorsByDistance(UPARAM(Ref) TArray<AActor*>& Array, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void RegisterReportable(USceneComponent* Reportable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInteractable(USceneComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    static UReportableComponent* GetReportable(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    TArray<USceneComponent*> GetNearbyReportables(FVector Location, float Radius, int32 Maximum);
    
    UFUNCTION(BlueprintCallable)
    TArray<USceneComponent*> GetNearbyInteractables(FVector Location, float Radius, int32 Maximum);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetClosestReportable(FVector Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    USceneComponent* GetClosestInteractable(FVector Location, float Radius);
    
};

