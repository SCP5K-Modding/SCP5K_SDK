#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "PandemicSignificanceManager.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UPandemicSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
    UPandemicSignificanceManager();

};

