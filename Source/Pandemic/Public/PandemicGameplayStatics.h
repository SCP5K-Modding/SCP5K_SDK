#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameplayStatics -FallbackName=GameplayStatics
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

