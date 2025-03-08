#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
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

