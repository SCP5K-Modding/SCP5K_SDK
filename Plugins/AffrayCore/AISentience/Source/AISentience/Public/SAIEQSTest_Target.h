#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ESAITargetTestMode.h"
#include "SAIEQSTest_Target.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API USAIEQSTest_Target : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESAITargetTestMode TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ETeamAttitude::Type>> MatchingAttitudes;
    
    USAIEQSTest_Target();

};

