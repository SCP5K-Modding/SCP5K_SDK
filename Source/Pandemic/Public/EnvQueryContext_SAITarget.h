#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_SAITarget.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class PANDEMIC_API UEnvQueryContext_SAITarget : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEnvQueryContext_SAITarget();

private:
    UFUNCTION(BlueprintCallable)
    AActor* ProvideCurrentTarget(const UObject* QuerierObject) const;
    
};

