#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderBoolValue -FallbackName=AIDataProviderBoolValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProviderFloatValue -FallbackName=AIDataProviderFloatValue
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator_SimpleGrid -FallbackName=EnvQueryGenerator_SimpleGrid
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

