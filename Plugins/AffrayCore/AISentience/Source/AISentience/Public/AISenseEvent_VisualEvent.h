#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISenseEvent -FallbackName=AISenseEvent
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

