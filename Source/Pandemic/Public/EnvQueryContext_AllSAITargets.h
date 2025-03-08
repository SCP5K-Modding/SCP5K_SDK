#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_AllSAITargets.generated.h"

class AActor;
class APawn;
class ASAIController;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class PANDEMIC_API UEnvQueryContext_AllSAITargets : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEnvQueryContext_AllSAITargets();

private:
    UFUNCTION(BlueprintCallable)
    void SelectBestTargets(const ASAIController* Controller, int32 DesiredAmount, TArray<AActor*>& OutTargetActors) const;
    
    UFUNCTION(BlueprintCallable)
    void ProvideTargetsSet(const UObject* QuerierObject, const APawn* QuerierPawn, TArray<AActor*>& OutTargetsSet) const;
    
    UFUNCTION(BlueprintCallable)
    int32 FindLowestFloatValueIndex(TArray<float>& FloatArray) const;
    
};

