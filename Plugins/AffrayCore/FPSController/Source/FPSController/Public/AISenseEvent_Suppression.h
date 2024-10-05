#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "AISuppressionEvent.h"
#include "AISenseEvent_Suppression.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FPSCONTROLLER_API UAISenseEvent_Suppression : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISuppressionEvent Event;
    
public:
    UAISenseEvent_Suppression();

};

