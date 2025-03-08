#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "SCP3199NavigationQueryFilter.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API USCP3199NavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    USCP3199NavigationQueryFilter();

};

