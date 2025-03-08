#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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

