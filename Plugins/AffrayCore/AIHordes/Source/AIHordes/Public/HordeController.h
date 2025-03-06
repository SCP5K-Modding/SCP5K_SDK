#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "HordeController.generated.h"

class AActor;
class AHorde;
class APawn;

UCLASS(Blueprintable)
class AIHORDES_API AHordeController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomPathingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> CurrentTargets;
    
public:
    AHordeController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSeePawn(APawn* SeenPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHorde* GetHorde() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetCurrentTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAlert();
    
    UFUNCTION(BlueprintCallable)
    void CheckTargetVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginAlert(const TArray<APawn*>& Targets);
    
};

