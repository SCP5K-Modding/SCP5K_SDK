#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "AISense_VisualEvent.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class AISENTIENCE_API UAISense_VisualEvent : public UAISense {
    GENERATED_BODY()
public:
    UAISense_VisualEvent();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportVisualEvent(UObject* WorldContextObject, FVector VisualEventLocation, float Strength, AActor* Target, AActor* Instigator, float MaxRange, FName Tag);
    
};

