#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISense -FallbackName=AISense
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
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

