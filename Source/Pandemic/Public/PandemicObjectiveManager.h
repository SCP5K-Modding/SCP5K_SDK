#pragma once
#include "CoreMinimal.h"
#include "ObjectiveManager.h"
#include "PandemicObjectiveManager.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API APandemicObjectiveManager : public AObjectiveManager {
    GENERATED_BODY()
public:
    APandemicObjectiveManager(const FObjectInitializer& ObjectInitializer);

};

