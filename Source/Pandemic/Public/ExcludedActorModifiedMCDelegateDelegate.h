#pragma once
#include "CoreMinimal.h"
#include "ExcludedActorModifiedMCDelegateDelegate.generated.h"

class AActor;
class UWeatherExclusionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FExcludedActorModifiedMCDelegate, UWeatherExclusionComponent*, Component, AActor*, ModifiedActor);

