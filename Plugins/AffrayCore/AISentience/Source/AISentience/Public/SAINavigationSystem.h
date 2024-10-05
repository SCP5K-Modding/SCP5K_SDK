#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "SAINavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class AISENTIENCE_API USAINavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    USAINavigationSystem();

};

