#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
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

