#pragma once
#include "CoreMinimal.h"
#include "ObjectiveTrigger.h"
#include "ActivateObjectiveTrigger.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYOBJECTIVES_API AActivateObjectiveTrigger : public AObjectiveTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetOnActivation;
    
public:
    AActivateObjectiveTrigger(const FObjectInitializer& ObjectInitializer);

};

