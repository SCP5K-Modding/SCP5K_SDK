#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=RandomScenarios -ObjectName=ScenarioComponent -FallbackName=ScenarioComponent
#include "SeasonalScenarioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API USeasonalScenarioComponent : public UScenarioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SeasonalEventTag;
    
    USeasonalScenarioComponent(const FObjectInitializer& ObjectInitializer);

};

