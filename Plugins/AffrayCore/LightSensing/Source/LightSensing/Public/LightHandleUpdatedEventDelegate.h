#pragma once
#include "CoreMinimal.h"
#include "LightHandleUpdatedEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLightHandleUpdatedEvent, AActor*, Subject, float, Intensity);

