#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "AISense_Suppression.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class FPSCONTROLLER_API UAISense_Suppression : public UAISense {
    GENERATED_BODY()
public:
    UAISense_Suppression();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportSuppressionEvent(UObject* WorldContextObject, FVector SuppressionLocation, float Strength, AActor* Target, AActor* Instigator, float MaxRange, FName Tag);
    
};

