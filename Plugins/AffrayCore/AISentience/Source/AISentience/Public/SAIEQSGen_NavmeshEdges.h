#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h"
#include "Templates/SubclassOf.h"
#include "SAIEQSGen_NavmeshEdges.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable, EditInlineNew)
class AISENTIENCE_API USAIEQSGen_NavmeshEdges : public UEnvQueryGenerator_SimpleGrid {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue PathToItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ScanRangeMultiplier;
    
    USAIEQSGen_NavmeshEdges();

};

