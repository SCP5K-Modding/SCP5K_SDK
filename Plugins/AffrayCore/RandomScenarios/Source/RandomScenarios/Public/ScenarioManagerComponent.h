#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ScenarioManagerComponent.generated.h"

class AScenario;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RANDOMSCENARIOS_API UScenarioManagerComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CurrentScenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfScenariosToSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AScenario*> Scenarios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectRandomScenario;
    
public:
    UScenarioManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCurrentScenarios(const TArray<int32>& NewScenarios);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentScenario(int32 Scenario);
    
    UFUNCTION(BlueprintCallable)
    void SelectRandomScenario();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextScenario();
    
};

