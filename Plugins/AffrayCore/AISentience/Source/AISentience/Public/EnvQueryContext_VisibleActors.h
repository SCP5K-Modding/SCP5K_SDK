#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
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

