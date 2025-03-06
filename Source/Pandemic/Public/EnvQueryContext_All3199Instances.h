#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EnvQueryContext_All3199Instances.generated.h"

class AActor;
class APawn;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class PANDEMIC_API UEnvQueryContext_All3199Instances : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEnvQueryContext_All3199Instances();

private:
    UFUNCTION(BlueprintCallable)
    void Provide3199AllyActors(const UObject* QuerierObject, const APawn* QuerierPawn, TArray<AActor*>& OutAllyActors) const;
    
};

