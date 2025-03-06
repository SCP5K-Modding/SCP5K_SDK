#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "CrowdFollowingNavQueryFilter.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UCrowdFollowingNavQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UCrowdFollowingNavQueryFilter();

};

