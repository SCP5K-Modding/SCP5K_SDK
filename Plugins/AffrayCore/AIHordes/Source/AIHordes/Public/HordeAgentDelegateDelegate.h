#pragma once
#include "CoreMinimal.h"
#include "HordeAgentDelegateDelegate.generated.h"

class AHorde;
class AHordeAgent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHordeAgentDelegate, AHorde*, Horde, AHordeAgent*, Agent);

