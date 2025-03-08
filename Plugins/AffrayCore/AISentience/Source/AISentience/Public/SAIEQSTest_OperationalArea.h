#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "SAIEQSTest_OperationalArea.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIEQSTest_OperationalArea : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OperationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoComplexVolumeTest;
    
    USAIEQSTest_OperationalArea();

};

