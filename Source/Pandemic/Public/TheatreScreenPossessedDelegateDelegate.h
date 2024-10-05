#pragma once
#include "CoreMinimal.h"
#include "TheatreScreenPossessedDelegateDelegate.generated.h"

class ATheatreAnomaly;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTheatreScreenPossessedDelegate, ATheatreAnomaly*, TheatreAnomaly);

