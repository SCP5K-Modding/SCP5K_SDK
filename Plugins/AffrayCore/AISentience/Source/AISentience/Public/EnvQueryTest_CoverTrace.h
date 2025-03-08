#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Trace.h"
#include "EnvQueryTest_CoverTrace.generated.h"

UCLASS(Blueprintable)
class AISENTIENCE_API UEnvQueryTest_CoverTrace : public UEnvQueryTest_Trace {
    GENERATED_BODY()
public:
    UEnvQueryTest_CoverTrace();
    virtual void RunTest(FEnvQueryInstance& QueryInstance) const override;

    virtual FText GetDescriptionTitle() const override;
    virtual FText GetDescriptionDetails() const override;

    virtual void PostLoad();
};

