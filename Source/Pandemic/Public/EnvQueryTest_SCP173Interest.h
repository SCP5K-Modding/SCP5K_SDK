#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_SCP173Interest.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UEnvQueryTest_SCP173Interest : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistance;
    
public:
    UEnvQueryTest_SCP173Interest();

};

