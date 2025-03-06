#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SignificanceManager -ObjectName=SignificanceManager -FallbackName=SignificanceManager
#include "PandemicSignificanceManager.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
    UPandemicSignificanceManager();

};

