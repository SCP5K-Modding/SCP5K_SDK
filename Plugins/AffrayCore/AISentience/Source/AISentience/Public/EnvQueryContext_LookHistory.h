#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EnvQueryContext_LookHistory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AISENTIENCE_API UEnvQueryContext_LookHistory : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEnvQueryContext_LookHistory();

};

