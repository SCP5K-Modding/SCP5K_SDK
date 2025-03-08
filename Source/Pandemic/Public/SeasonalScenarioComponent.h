#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ScenarioComponent.h"
#include "SeasonalScenarioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PANDEMIC_API USeasonalScenarioComponent : public UScenarioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SeasonalEventTag;
    
    USeasonalScenarioComponent(const FObjectInitializer& ObjectInitializer);

};

