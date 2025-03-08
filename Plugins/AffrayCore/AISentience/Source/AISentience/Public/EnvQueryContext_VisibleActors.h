#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryContext_VisibleActors.generated.h"

class UAISense;

UCLASS(Blueprintable, EditInlineNew)
class AISENTIENCE_API UEnvQueryContext_VisibleActors : public UEnvQueryContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense> SenseClass;
    
public:
    UEnvQueryContext_VisibleActors();

};

