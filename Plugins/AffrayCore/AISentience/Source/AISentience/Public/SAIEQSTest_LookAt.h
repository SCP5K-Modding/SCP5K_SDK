#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "ESAILookAtTestMode.h"
#include "ESAITransientStimuliType.h"
#include "SAIEQSTest_LookAt.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIEQSTest_LookAt : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAILookAtTestMode TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESAITransientStimuliType> Types;
    
    USAIEQSTest_LookAt();

};

