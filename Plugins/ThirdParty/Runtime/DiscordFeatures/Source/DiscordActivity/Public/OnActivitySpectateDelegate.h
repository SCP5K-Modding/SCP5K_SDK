#pragma once
#include "CoreMinimal.h"
#include "OnActivitySpectateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivitySpectate, const FString&, Secret);

