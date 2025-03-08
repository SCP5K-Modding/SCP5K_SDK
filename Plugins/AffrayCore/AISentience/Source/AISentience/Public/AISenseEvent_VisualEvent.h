#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "AIVisualEvent.h"
#include "AISenseEvent_VisualEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class AISENTIENCE_API UAISenseEvent_VisualEvent : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIVisualEvent Event;
    
public:
    UAISenseEvent_VisualEvent();

};

