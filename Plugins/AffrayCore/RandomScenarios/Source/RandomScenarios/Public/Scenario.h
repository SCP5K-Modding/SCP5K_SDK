#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Scenario.generated.h"

class UScenarioComponent;

UCLASS(Blueprintable)
class RANDOMSCENARIOS_API AScenario : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScenarioComponent* ScenarioComponent;
    
public:
    AScenario(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UScenarioComponent* GetScenarioComponent() const;
    
};

