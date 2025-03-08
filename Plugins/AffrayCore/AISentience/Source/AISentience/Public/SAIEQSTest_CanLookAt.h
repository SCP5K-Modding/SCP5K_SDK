#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "SAIEQSTest_CanLookAt.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class AISENTIENCE_API USAIEQSTest_CanLookAt : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Querier;
    
    USAIEQSTest_CanLookAt();

};

