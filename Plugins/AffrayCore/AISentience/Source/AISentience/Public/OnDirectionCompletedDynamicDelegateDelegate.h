#pragma once
#include "CoreMinimal.h"
#include "ESAIDirectionResult.h"
#include "OnDirectionCompletedDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDirectionCompletedDynamicDelegate, AActor*, Instigator, ESAIDirectionResult, Result);

