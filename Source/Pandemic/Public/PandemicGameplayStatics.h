#pragma once
#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "PandemicGameplayStatics.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicGameplayStatics : public UGameplayStatics {
    GENERATED_BODY()
public:
    UPandemicGameplayStatics();

    UFUNCTION(BlueprintCallable)
    static void SetUIScale(float UIScale);
    
    UFUNCTION(BlueprintCallable)
    static float GetUIScale();
    
};

