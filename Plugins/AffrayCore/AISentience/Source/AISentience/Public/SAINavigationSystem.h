#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "SAINavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class AISENTIENCE_API USAINavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    USAINavigationSystem();

};

