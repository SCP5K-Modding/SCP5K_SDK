#pragma once
#include "CoreMinimal.h"
#include "LightHandleUpdatedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLightHandleUpdatedDelegate, AActor*, Subject, float, Intensity);

