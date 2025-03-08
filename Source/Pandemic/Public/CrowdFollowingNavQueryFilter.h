#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "CrowdFollowingNavQueryFilter.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UCrowdFollowingNavQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UCrowdFollowingNavQueryFilter();

};

