#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "SAIEQSGen_Target.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class AISENTIENCE_API USAIEQSGen_Target : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> QueryContext;
    
public:
    USAIEQSGen_Target();

};

