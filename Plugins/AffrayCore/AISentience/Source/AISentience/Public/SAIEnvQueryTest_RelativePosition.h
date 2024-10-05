#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ERelativeType.h"
#include "Templates/SubclassOf.h"
#include "SAIEnvQueryTest_RelativePosition.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class AISENTIENCE_API USAIEnvQueryTest_RelativePosition : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERelativeType RelativeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> RelativeTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Querier;
    
    USAIEnvQueryTest_RelativePosition();

};

