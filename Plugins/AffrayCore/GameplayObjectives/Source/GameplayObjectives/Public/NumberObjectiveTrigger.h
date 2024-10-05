#pragma once
#include "CoreMinimal.h"
#include "ObjectiveTrigger.h"
#include "NumberObjectiveTrigger.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API ANumberObjectiveTrigger : public AObjectiveTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    ANumberObjectiveTrigger(const FObjectInitializer& ObjectInitializer);

};

