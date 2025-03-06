#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RandomScenarioManager.generated.h"

class UScenarioManagerComponent;

UCLASS(Blueprintable)
class RANDOMSCENARIOS_API ARandomScenarioManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScenarioManagerComponent* ScenarioManagerComponent;
    
public:
    ARandomScenarioManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SelectRandomScenario();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextScenario();
    
};

