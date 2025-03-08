#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESAIInvestigationTestMode.h"
#include "ESAIInvestigationType.h"
#include "SAIEQSTest_Investigation.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIEQSTest_Investigation : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAIInvestigationTestMode TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESAIInvestigationType> Types;
    
    USAIEQSTest_Investigation();

};

