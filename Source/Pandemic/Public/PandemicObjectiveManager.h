#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayObjectives -ObjectName=ObjectiveManager -FallbackName=ObjectiveManager
#include "PandemicObjectiveManager.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API APandemicObjectiveManager : public AObjectiveManager {
    GENERATED_BODY()
public:
    APandemicObjectiveManager(const FObjectInitializer& ObjectInitializer);

};

